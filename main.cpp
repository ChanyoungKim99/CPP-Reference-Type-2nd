#include <iostream>

//main95의 함수

//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y; 
//	*y = temp;
//}


// Reference Type을 사용하면 밑과 같이 간단하게 된다.

void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x{ 10 }, y{ 20 };

	Swap(x, y);
}