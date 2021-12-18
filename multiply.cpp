#include <stdio.h>

int main()
{
int r,c,r1,c1,i,j,k,sum=0;
int f[10][10], s[10][10], ml[10][10];
printf("Enter number of rows of first matrix : ");
scanf("%d",&r);
printf("Enter number of columns of first matrix : ");
scanf("%d",&c);
printf("Enter elements of first matrix :\n");
for (i = 0; i < r; i++)
for (j = 0; j < c; j++)
scanf("%d", &f[i][j]);
printf("Enter number of rows of second matrix : ");
scanf("%d",&r1);
printf("Enter number of columns of second matrix : ");
scanf("%d",&c1);
if (c != r1)
printf("The multiplication isn't possible.\n");
else
{
printf("Enter elements of second matrix :\n");
for (i = 0; i < r1; i++)
for (j = 0; j < c1; j++)
scanf("%d", &s[i][j]);
for (i = 0; i < r; i++)
{
for (j = 0; j < c1; j++)
{
for (k = 0; k < r1; k++)
{
sum = sum + f[i][k]*s[k][j];
}
ml[i][j] = sum;
sum = 0;
}
}
printf("Product of the matrices:\n");
for (i = 0; i < r; i++) {
for (j = 0; j < c1; j++)
printf("%d\t", ml[i][j]);
printf("\n");
}
}
return 0;
}
