#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
float a, b, c, d, x1, x2;
void korni1()
{
	x1 = -b / 2 * a;
	printf("\nx = %0.2g", x1);
}
void korni1_2()
{
	x1 = (-b + sqrt(d)) / 2 * a;
	x2 = (-b - sqrt(d)) / 2 * a;
	printf("\nx1 = %0.2g", x1);
	printf("\nx2 = %0.2g", x2);
}
void diskriminant()
{
	d = (b * b) - 4 * a * c;
	printf("\n������������ = %0.2g", d);
}
int main()
{
	setlocale(LC_ALL, "Rus");
	printf("������� a ");
	scanf_s("%g", &a);
	printf("\n������� b ");
	scanf_s("%g", &b);
	printf("\n������� c ");
	scanf_s("%g", &c);
	_getch();
	return 0;
}