#include"Hanoi.h"

void move(char from, int n, char to) {
	printf("move %d from %c to %c \n",n, from, to);
}
void solve(int n, char x, char y, char z) {
	if (n == 1) move(x,1, z);

	else {
		solve(n-1, x, z, y);
		move(x, n, z);
		solve(n - 1, y, x, z);
	}
}