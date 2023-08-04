#include <iostream>


int continuestatement(int cont)
{
	for (int i{ 0 }; i <= cont; ++i)
	{
		if (i == 5)
		{
			continue;// jumps to the next itteration in the loop rather than terminating the loop or function
		}

		std::cout << i;
		std::cout << '\n';



	}
	return 0;
}

int breakwhile(int breakcont)
{
	while (breakcont < 10)
	{
		if (breakcont == 5)
		{
			continue;
		}
		std::cout << '\n';

		std::cout << breakcont;
		breakcont++;
	}

	return 0;
}

int main()

{
	continuestatement(11);
	breakwhile(0);



	std::cout << '\n';




}
