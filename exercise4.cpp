#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int QtdePrimos(int n) {
    int i,isPrime, count = 0;
    int j;

    for(i=2; i<=n; i++)
    {
        isPrime = 1; 
        //tem que ver se i é divisivel por algum numero entre 2 e floor sqrt(i)
        for(j=2; j<=floor(sqrt(i)); j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
           count+=1;
        }
    }
    return count;
}

int main() {
   int n;  
   while (scanf("%d", &n)>0) {
      printf("%d\n", QtdePrimos(n));
   }
}
