#include<stdio.h>
int main()
{
	double a, b;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	if (a < 0 || b < 0)
	{
		printf("Error");
	}
	else
	{
		printf("Area = %lf x %lf = %lf", a, b, a * b);
	}
	return 0;
}