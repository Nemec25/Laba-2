#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
float a, b, c, d, x1, x2;
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