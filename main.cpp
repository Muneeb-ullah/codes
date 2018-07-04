#include <iostream>
#include <string>

std::string toDollars(double);

int main()
{

    double number = 0.0;

    std::cout << "Enter a number : ";
    std::cin >> number;

    std::cout << "You entered " << toDollars(number) << " dollars";

    return 0;
}

std::string toDollars(double number)
{

    std::string originalNumber = std::to_string(number) ;
    bool insertComma = false;
    int counter = 1;


    for(int i = originalNumber.length() - 1; i >= 0; --i)
    {
        if (originalNumber.at(i) == '.')
        {
            insertComma = true;
            continue;
        }

        if (insertComma)
        {
            if (counter % 3 == 0 && i)

                originalNumber.insert(i, ",");

            ++counter;
        }
    }

    originalNumber.insert(0,"$");

    return originalNumber;
}
