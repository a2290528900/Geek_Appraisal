#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double x = 0.001, y=1, temp;
	double i = 1; 
	printf("  x        y\n");
	printf("%lf  %lf\n", x, y);
	for (i = 1; ; i++)
	{
		temp = y;
		y *= 0.999;
		x += 0.001;
		printf("%lf  %lf\n", x, y);
		if (temp - y < 0.000001)
			break;
	}
	return 0;
}

