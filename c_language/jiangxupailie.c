#include<stdio.h>
#define N 5
int main(){
    int arr[N], temp, i;
    int *pmax,*p;
    printf("Please input %d integers:",N);
    for (p = arr;p<arr+N;p++)
        scanf("%d",p);
    for (i = 0;i<N-1;i++)
        pmax = arr + i;
        for (p = pmax+1;p<arr+N;p++)
            if (*pmax<*p)
                pmax = p;
            if (pmax != arr + i)
            {
                temp = *pmax;
                *pmax = *(arr+i);
                *(arr + i) = temp;
            }
    printf("The sorted numbers is:");
    for (p = arr ;p<arr + N;p++)
        printf("%d  ",*p);
    return 0 ;
}