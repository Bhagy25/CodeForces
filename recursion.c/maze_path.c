// #include<stdio.h>
// int maze(int cr,int cc,int er,int ec) {
//         int rightways=0;
//         int downways=0;
//         if(cr==er && cc==ec) {
//             return 1;
//         }  
//         if(cr==er) {
//             rightways+=maze(cr,cc+1,er,ec);
//         }  
//         if(cc==ec) {
//             downways+=maze(cr+1,cc,er,ec);
//         }     
//         if(cr<er && cc<ec) {
//             rightways+=maze(cr,cc+1,er,ec);
//             downways+=maze(cr+1,cc,er,ec);
//         }
//         return downways+rightways; 
// }
// int main () {
//     printf("%d\n",maze(1,1,2,2));
//     return 0;
// }
#include<stdio.h>
int maze(int n,int m) {
        int rightways=0;
        int downways=0;
        if(n==1 && m==1) {
            return 1;
        }
        if(n==1) {
            rightways+=maze(n,m-1);
        }
        if(m==1) {
            downways+=maze(n-1,m);
        }
        if(n>1 && m>1) {
           rightways+=maze(n,m-1);
           downways+=maze(n-1,m);
        }
        return downways+rightways; 
}
int main () {
    printf("%d\n",maze(3,3));
    return 0;
}