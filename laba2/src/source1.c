void korni1(float a, float b)
{
	float x1;
	x1 = -b / 2 * a;
	printf("\nx = %0.2g", x1);
}
void korni1_2(float a, float b, float d)
{
	float x1, x2;
	x1 = (-b + sqrt(d)) / 2 * a;
	x2 = (-b - sqrt(d)) / 2 * a;
	printf("\nx1 = %0.2g", x1);
	printf("\nx2 = %0.2g", x2);
}
void diskriminant(float a, float b, float c)
{
	float d;
	if (a == 0 || b == 0) printf("Ne kvadratnoe uravnenie");
	else
	{
		d = (b * b) - 4 * a * c;
		printf("\nDiskriminant = %0.2g", d);
		if (d == 0) korni1(a, b);
		if (d > 0) korni1_2(a, b, d);
		if (d < 0) printf("\nKorney net");
	}
}