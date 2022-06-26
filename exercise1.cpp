#include <stdio.h>
#include <stdlib.h>
long long int CalculaSoma(int n) {
	long int numero = 0;
	for(int i = 1; i<= n; ++i){
		numero += i;
	}
	return numero;
}

int main() {
	int n;
	while (scanf("%d", &n)>0) {
		printf("%lld\n", CalculaSoma(n));
	}
}
