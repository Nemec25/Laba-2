#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, x1, x2;
	printf("Vvedite a ");
	scanf("%g", &a);
	printf("\nVvedite b ");
	scanf("%g", &b);
	printf("\nVvedite c ");
	scanf("%g", &c);
	diskriminant(a, b, c);
	return 0;
}