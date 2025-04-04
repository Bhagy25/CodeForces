#include<stdio.h>
void pr(int n) {
    if(n==0) {
        return;
    }
    printf("%d\n",n);
    pr(n-1);
    
}
int main () {
    pr(5);
    return 0;
}