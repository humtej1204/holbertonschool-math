#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
/**
 * main - Function that prints Julia's Set
 *
 * Return: End Program
 */
int main(void)
{
	int A, B, i, s, gd, gm;
	double a, b, x, y, t, n = 200, r1, r2;

	srand(24);
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, NULL);
	while (1)
	{
		r1 = (4.0 * rand() / RAND_MAX) - 2.0;
		r2 = (2.0 * rand() / RAND_MAX) - 1.0;
		s = 0;
		printf("Julia Set for %lf %lf\n", r1, r2);

		for (B = 0; B <= 4 * n; B++)
		{
			b = 2 - (B / n);
			for (A = 0; A <= 4 * n; A++)
			{
				a = -2 + (A / n);
				x = a;
				y = b;
				for (i = 1; i <= 1000; i++)
				{
					t = x;
					x = ((x * x) - (y * y)) + r1;
					y = (2 * t * y) + r2;
					if (((x * x) + (y * y)) > 4)
						break;
				}
				if (i == 1001)
					/* printf("."); */
					putpixel(A, B, 1);
					s = s + 1;
				/**
				 * else
				 * printf(" ");
				 */
			}
			/** printf("\n"); */
		}
		if (s > 10)
		{
			while (!GetAsyncKeyState(VK_RETURN))
			{
				delay(10);
			}
		}
		/** system("CLS"); */
	}
	getch();
	closegraph();
	return (0);
}
