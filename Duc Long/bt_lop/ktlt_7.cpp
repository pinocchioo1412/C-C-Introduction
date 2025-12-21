#include<cstdio>
// void print1(int tab[], int N) {
//     int i;
//     for (i=0; i<N; i++)
//         printf("%d ",tab[i]);
//
// }
// void print2(int tab[],int N) {
//     int * ptr;
//     for (ptr=tab; ptr<tab+N; ptr++)
//         printf("%d ", *ptr);
//
// }
// void print3(int *tab,int N) {
//     int * ptr;
//     for (ptr=tab; ptr<tab+N; ptr++)
//         printf("%d ", *ptr);
//
// }
// void print4(int *tab,int N) {
//     int i;
//     for (i=0; i<N; i++, tab++)
//         printf("%d ", *tab);
// }
//
// int main() {
//     int a[5]={1,2,3,4,5};
//     print1(a,5);
//     print2(a,5);
//     print3(a,5);
//     print4(a,5);
// }

void print_vector(int *x, int n) {
    for (int i = 0; i < n; i++, x++) {
        printf("%i ", *x);
    }
}

void swap_vectors(int *a, int *b, int n) {
    int *t;
    t=a;
    a=b;
    b=t;
    print_vector(a,3);
    print_vector(b,3);
}

int main() {
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    swap_vectors(a,b,3);
    print_vector(a,3);
    print_vector(b,3);
}
