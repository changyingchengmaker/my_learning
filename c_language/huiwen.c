#include<stdio.h>
#include<string.h>
int main(){
    char a[80], *p1,*p2;
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; // Remove the trailing newline character
    int n = strlen(a);
    p1 = a;
    p2 = a + n -1;
    while (p1<p2)
        if(*p1 == *p2)
            {p1++;
            p2--;}
        else break;
    if (p1<p2) printf("no\n");
    else printf("yes\n");
    return 0;

}