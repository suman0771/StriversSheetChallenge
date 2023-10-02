// // #include<stdio.h>
// // int fun(int n){
// //     if(n==0)
// //         return 1;
// //     else
// //         return n*fun(n-1);
// // }
// // int main(){
// //     int n=5,x;
// //     x=fun(n);
// //     printf("%d",x);
// // }

// #include<stdio.h>
// int main(){
//     static int n=7;
//     int x;
//     x=n%2;
//     n=n/2;
//     if(n>0){
//         main();
//     }
//     printf("%d",x);
// }

#include <stdio.h>
int main()
{
    int x;
    void q(int *z)
    {
        (*z) = (*z) + x;
        printf("%d", z);
    }
    void p(int *y)
    {
        int x;
        x = (*y) + 2;
        q(x);
        printf("%d", x);
    }
    x = 5;
    p(&x);
    q(&x);
    printf("%d", x);
}
