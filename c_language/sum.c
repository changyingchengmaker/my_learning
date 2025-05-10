#include<stdio.h>
int sum(int k);
int main()
{
    int result = sum(5);
    printf("The sum of 1 to 5 is %d\n",result);
    return 0;
}
int sum(int k)
{
    if (k>0) return k + sum(k-1);
    else return 0;
}