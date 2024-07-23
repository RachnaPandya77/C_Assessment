#include<stdio.h>

//function declaration
void mul(int [3][3],int [3][3]);
int main()
{
    int a[3][3],b[3][3],i,j;

    printf("\nEnter first matrix");
    for(i=0;i<3;i++)
        for(j=0;j<3;J++)
            scanf("%d",&a[i][j]);

    printf("\nEnter second matrix");
    for(i=0;i<3;i++)
        for(j=0;j<3;J++)
            scanf("%d",&b[i][j]);

    mul(a,b);        //function calling
    return 0;
}

void mul(int a[3][3],int b[3][3])
{
    int c[3][3],i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k=3;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("\nresult is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}
    


    return 0;
