#include <stdio.h>
void main()
{
	int rows,col,pos;
	printf("Enter number of rows :\n");
    scanf("%d",&rows);
   
   printf("Enter number of columns :\n",pos);
   scanf("%d",&col);
	int a[rows][col],b[rows][col],c[rows][col],i,j;
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<rows;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<rows;i++)
		for(j=0;j<col;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<rows;i++)
		for(j=0;j<col;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("Addition of Matrix :\n");
	for(i=0;i<rows;i++)
        {
		for(j=0;j<col;j++)
			printf("%d\t",c[i][j]);
		printf("\n");
	}
}