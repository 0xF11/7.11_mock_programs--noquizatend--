#include <iostream>



int breakorreturn()
{

	while (true)
	{

		char BorR;

		std::cin >> BorR;
		if (BorR == 'b')
		{
			break; // Terminates whatever it is nested inside (in this case a while loop)
		}
		if (BorR == 'r') // Terminates entire function its nested in (in this case breakorreturn()
		{
			return 1;
		}
	}

	std::cout << "You broke the loop... Asshole!";
	return 0;
}


int main()
{


	auto returnvalue{breakorreturn()};
	std::cout << " Return or break has been entered " << returnvalue << "\n";

	return 0;


}
