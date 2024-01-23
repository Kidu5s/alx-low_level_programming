#include <stdio.h>

int main(void)
{
	struct point {
		int x;
		int y;
	};
	struct point my_point = {3, 7};
	struct point *p = &my_point;

	my_point->y = 98;

	printf("%d\n", my_point.y);
	return (0);
}
