// //n-1
// // #include<stdio.h>
// // void greeting(int n) {
// //     if(n==0) {
// //         return ;
// //     }
// //     printf("%d\n",n);
// //     greeting(n-1);
// // }
// // int main () {
// //     greeting(5);
// //     return 0;
// // }

// //1-n
// #include<stdio.h>
// void greeting(int n) {
//     if(n==0) {
//         return ;
//     }
//     greeting(n-1);
//     printf("%d\n",n);
// }
// int main () {
//     greeting(5);
//     return 0;
// }
#include<stdio.h>
void pr(int n) {
    if(n==0) {
        return;
    }
    printf("%d\n",n);
    pr(n-1);
    printf("%d\n",n);
    
}
int main () {
    pr(5);
    return 0;
}