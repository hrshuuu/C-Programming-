#include<stdio.h>

int main()
{int n,a;
printf("Enter an odd number : ");
scanf("%d",&n);
a=n/2+1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
        if(i==a || j==a) printf("* ");
        else printf("  ");
         }
         printf("\n");
    }
    return 0;
}