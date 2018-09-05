
double parse(const char* string)
{
	double number = 0.0;		// Will hold the number that will be parsed
	long power = 10;			// WIll be used to divide the number after the fractional part say the number after point is 1 to add it to the number after point we divide 1 / 10
	bool point = false;			// Indicated whether the number has a fractional part or not!
	bool negative = false;

	for (int i = 0; i < strlen(string); ++i)
	{

		if (string[i] == '-')

			negative = true;

		if (string[i] == '.')
		{
			point = true;
			number /= 10;
		}

		if (point && string[i] >= '0' && string[i] <= '9')
		{
			number += (string[i] - '0') / (double) power;
			power *= 10;
		}
		else if (string[i] >= '0' && string[i] <= '9')
		{
			number += string[i] - '0';
			number *= 10;
		}
	}

	if (!point)
	{
		number /= 10;
	}

	if (negative)

		return -number;
	else

		return number;

