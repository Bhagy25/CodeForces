// #include<stdio.h>
// int power(int a,int b) {
//     if(b==0) {
//         return 1;
//     }
//     return a*power(a,b-1);
// }
// int main () {
//     printf("%d\n",power(2,6));
//     return 0;
// }
// logarithmic approach
#include<stdio.h>
#include<math.h>
int logpower(int a,int b) {
    if (b==0) {
        return 1;
    }
    int x=pow(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}

int main () {
    printf("%d\n",logpower(3,3));
    return 0;
}
