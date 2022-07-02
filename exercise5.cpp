#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ContaMisteriosa(int n) {
	double result = 0;
	bool isEven = false;
	int dezn = pow(10,n);
	for (int k=1; k<= dezn; k++){
		result += pow(-1, k+1)/(2*k-1);
		if (k%2==0 || k==1){
			isEven = true;
		}
		else{
			isEven = false;
		}
	}
	if (isEven){
		result *=4;
	}
	else {
		result*=-4;
	}
	return result;
}

int main() {
	int n;  
	while (scanf("%d", &n)>0) {
		printf("%.8f\n", ContaMisteriosa(n));
	}
}
