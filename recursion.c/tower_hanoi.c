//no. of steps = 2^n-1
#include<stdio.h>
void hanoi(int n,char s,char h,char d) {
    if(n==0) return ;
    hanoi(n-1,s,d,h);
    printf("%c -> %c \n",s,d);
    hanoi(n-1,h,s,d);
    return;
}
int main () {
    hanoi(2,'A','B','C');
    return 0;
}