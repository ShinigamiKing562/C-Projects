#include <stdio.h>

int main(void) {
	int a, b, d, c ;
	printf("Enter the first value :\n");
	scanf("%d", &a);
	printf("Enter the second value :\n");
	scanf("%d", &b);
	printf("Enter the third value :\n");
	scanf("%d", &d);
	c = a + b + d;
	printf("%d + %d + %d = %d\n", a ,b ,d, c);
	return 0;
}
