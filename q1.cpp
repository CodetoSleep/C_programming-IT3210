#include <stdio.h>
#include<math.h>
int factorial(int n){
    int p=1;
    if(n==0) return 1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

int main(){
    printf("Enter n: ");
    int n; scanf("%d", &n);
    int m;  
    printf("F1(n) = %d\n", factorial(n));
    printf("F2(n) = %d\n", n*(n+1)/2);
    printf("Enter m: ");scanf("%d", &m);
    double a=n,b=m;

    printf("Result: %.lf", pow(a,b));
}