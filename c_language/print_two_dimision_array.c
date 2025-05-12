#include<stdio.h>
int main(){
    int a[3][4] = {2,3,4,6 ,2,6 ,2 ,13,  13,10, 34, 35};
    int *p;
    for (p = a[0];p < a[0]+12;p++)
        {
            if ((p-a[0])%4 == 0)
                printf("\n");
            printf("%5d   ",*p);
        }
    return 0;
}