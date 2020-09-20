
#include <iostream>
int fibonacci(int); //function prototype


int main()
{
    std::cout << "Hello World!\n";
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
