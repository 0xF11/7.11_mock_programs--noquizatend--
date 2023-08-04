#include <iostream>



int main() 
{
	

	int adding{};
	std::cout << "Hello! Add numbers to add together! Or type ""0"" To exit!\n";
	for (int x{}; x <= 100; ++x)
		{
		int number{};
			std::cin >> number;
			std::cout << "Enter another number!: ";

			if (number == 0)
			{
				break;
			}


			adding += number;
			std::cout << adding;


			std::cout << '\n';

		}

	std::cout << "The total sum of your numbers before the program ended was: " << adding << std::endl;
	std::cout << "To reuse this application please reopen it! ";
	std::cout << "You may close this program by clicking the x OR typing x! \n";


	while (true)
	{
		char x;
		std::cin >> x;
		if (x == 'x')
		{
			return 0;
		}

	}

}
