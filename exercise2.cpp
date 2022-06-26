#include <stdio.h>
#include <stdlib.h>

long long int CalculaSoma(long int n) {
	return (n+1)*n/2;
}

int main() {
	int n;
	while (scanf("%d", &n)>0) {
		printf("%lld\n", CalculaSoma(n));
	}
}
