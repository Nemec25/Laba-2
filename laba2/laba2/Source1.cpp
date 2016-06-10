void korni1(int a, int b, int c)
{
	float x1;
	x1 = -b / 2 * a;
	printf("\nx = %0.2g", x1);
}
void korni1_2(int a, int b, int c)
{
	float x1, x2;
	x1 = (-b + sqrt(d)) / 2 * a;
	x2 = (-b - sqrt(d)) / 2 * a;
	printf("\nx1 = %0.2g", x1);
	printf("\nx2 = %0.2g", x2);
}
void diskriminant(int a, int b, int c)
{
	float d;
	if (a == 0 || b == 0) printf("Ne kvadratnoe uravnenie");
	else
	{
		d = (b * b) - 4 * a * c;
		printf("\nDiskriminant = %0.2g", d);
		if (d == 0) korni1();
		if (d > 0) korni1_2();
		if (d < 0) printf("\nKorney net");
	}
}