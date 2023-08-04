#include <iostream>


int continuestatement(int cont)
{
	for (int i{ 0 }; i <= cont; ++i)
	{
		if (i % 2 == 0)
		{
			continue;// jumps to the next itteration in the loop rather than terminating the loop or function
		}
		
		std::cout << i;
		std::cout << '\n';
	}
	return 0;
}


int main()

{
	continuestatement(11);
}
