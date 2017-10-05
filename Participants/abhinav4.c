#include<stdio.h>





int main()

{

	int mat[100][100],i,j,n,temp;

	

	printf("enter order of the matrix");

	scanf("%d",&n);

	n--;



	printf("enter the matrix elements\n");

	for(i=0;i<=n;i++)

		for(j=0;j<=n;j++)

			scanf("%d",&mat[i][j]);



	for(i=0;i<=n;i++)

	{

		temp=mat[i][n-i];

		mat[i][n-i]=mat[i][i];

		mat[i][i]=temp;

	}

	

	printf("the new matrix is\n");



	for(i=0;i<=n;i++)

	{

		for(j=0;j<=n;j++)

			printf("%d ",mat[i][j]);



		printf("\n");

	}

	return 0;

}
