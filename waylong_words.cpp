#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        int a = str.size();
        int count = 0;
        if (a <= 10)
        {
            cout << str << endl;
        }
        else if (a > 10)
        {
            for (int i = 1; i <= a; i++)
            {
                if (i == 1)
                {
                    cout << str[i - 1];
                }
                if (i > 1 || i < a)
                {
                    count++;
                    if (count == (a - 2))
                    {
                        cout << count;
                    }
                }
                if (i == a)
                {
                    cout << str[i - 1];
                }
            }
        }
        cout << endl;
    }
    return 0;
}


//in C language || easy logic given below
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[101];
//     scanf("%s",str);
//     int n=strlen(str);
//     if(n>10){
//         printf("%c",str[0]);
//         printf("%d",n-2);
//         printf("%c\n",str[n-1]);
//     }
//     else {
//         printf("%s\n",str);
//     }
//     return 0;
// }