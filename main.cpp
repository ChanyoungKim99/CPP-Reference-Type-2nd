#include <iostream>

//main95�� �Լ�

//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y; 
//	*y = temp;
//}


// Reference Type�� ����ϸ� �ذ� ���� �����ϰ� �ȴ�.

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