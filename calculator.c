#include <stdio.h>
int sub(int i, int j) {
 return (i - j);
}
int main() {
	int a, b;
	scanf(" %d %d",&a,&b);
	printf("%d",sub(a,b));
	return 0;
}
