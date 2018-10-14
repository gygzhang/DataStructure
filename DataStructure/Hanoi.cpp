#include"Hanoi.h"

void move(char from, int n, char to) {
	static int times=1;
	printf("%d. move %d from %c to %c \n",times,n, from, to);
	times++;
}
void solve(int n, char x, char y, char z) {
	if (n == 1) move(x,1, z);

	else {
		solve(n-1, x, z, y);
		move(x, n, z);
		solve(n - 1, y, x, z);
	}
}