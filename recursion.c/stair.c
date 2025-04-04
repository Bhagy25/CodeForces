// #include<stdio.h>
// int stair(int n) {
//     if(n==1 || n==2) {
//         return n;
//     }
//     return stair(n-1)+stair(n-2);
// }
// int main () {
//     printf("%d\n",stair(5));
//     return 0;
// } 
#include<stdio.h>
int stair(int n) {
    if(n==1 || n==2) {
        return n;
    }
    else if(n==3) {
        return n+1;
    }
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main () {
    printf("%d\n",stair(4));
    return 0;
}