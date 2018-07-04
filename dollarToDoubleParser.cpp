/*

        Date : July 4, 2018
        Time : 09:30 pm
        Coded By : Muneeb Mughal

*/

#include <iostream>
#include <string>

double parseDollars(std::string);

int main()
{

    std::string amount;

    std::cout << "Enter the amount in dollars : ";
    std::getline(std::cin, amount);

    printf("You entered %.4f dollars", parseDollars(amount));




    return 0;
}

double parseDollars(std::string data)
{

    double number = 0.0;
    bool afterPoint = false;                // Indicates that the number also has a fractional part
    std::string pointValueString = "";      // Stores the fractional part of number
    double pointValue = 0.0;                // Stores the parsed fractional part of number;
    int length = 1;                         // Length of fractional part. This is used to divide the number by 10 ** length times so that it is convertedi

    for(int i = 0; i < data.length(); ++i)
    {

        if (afterPoint)
        {
            pointValueString += data.at(i);
            continue;
        }

        if(data.at(i) == '$' || data.at(i) == ',' || data.at(i) == ' ' || data.at(i) == '-')

            continue;

        else if (data.at(i) == '.')

            afterPoint = true;

        else
        {
            number += data.at(i) - '0';
            number *= 10;
        }

    }

    for(int i = 0; i < pointValueString.length(); ++i)
    {
        pointValue += pointValueString.at(i) - '0';
        pointValue *= 10;
    }

    pointValue /= 10;

    for(int i = 0; i < pointValueString.length(); ++i)

        length *= 10;


    number /= 10;

    number += pointValue / length;

    return number;

}
