#include<stdio.h>
#include<conio.h>
int main()
{   int i,j,m,n,a[50][50];
    printf("enter number of row\n");
    scanf("%d",&m);
    printf("enter number of columns\n");
    scanf("%",&n);
    printf("enter elements");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {   printf("%d\t",a[i][j]);
        }


        printf("\n");
    }
    printf("transpose is");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");

    }
    getch();
    return 0;
}
