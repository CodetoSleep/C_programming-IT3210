#include <stdio.h>
#include <math.h>
int fun(int n){
    if(n==2) return 1;
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int foo(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=i;
        if(sum >n) return i-1;
    }
}
int main(){
    int a,b;
    printf("Enter fun: ");scanf("%d", &a);
    printf("fun(%d) = %d\n",a,fun(a));
    printf("Enter foo: ");scanf("%d", &b);
    printf("foo(%d) = %d\n",b,foo(b));

}