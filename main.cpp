#include <iostream>

using namespace std;

int main() {
	long a, b;
	scanf("%d %d", &a, &b);
	printf("a + b = %d", a + b);
	printf("a + b = %d", a - b);
	printf("a * b = %d", a * b);
	printf("a / b = %d", a / b);
	printf("a ^ b = %d", a > b ? a : b);
	printf("a v b = %d", a < b ? a : b);
	printf("avg(a,b) = %d", (a + b) / 2);
	printf("a mod b = %d", a % b);
	return 0;
}
