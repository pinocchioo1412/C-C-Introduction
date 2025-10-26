#include <stdio.h>
int main(){
    int n;
    int fibo[n];
    printf(" Nhap vao so n: \n");
    scanf (" %i ", &n);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i=2; i < n; i++)
        fibo[i] = fibo [i-1] + fibo[i-2];
    printf(" day fibonachi la \n");
    for (int i=0; i<n; i++)
        printf("F[%i]= %i", &i, &fibo[i]);
    return 0;
}