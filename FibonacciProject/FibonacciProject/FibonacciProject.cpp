
#include <iostream>
int fibonacci(int); //function prototype


int main()
{
	for (int i = 0; i <=10; i++)
	{
		std::cout << "fibonacci of (" << i << ") = "
			<< fibonacci(i) << "\n";
	}
}

//function definition
int fibonacci(int num)
{
	if ((num == 1) || (num == 0)) {
		return num;
	}
	else
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
	return 0;
}
