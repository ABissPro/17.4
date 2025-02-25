#include <iostream>

void swapp(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	
	swapp(&a, &b);
	std::cout << a << " " << b;
}