#include<stdio.h>



int main()

{

        int j,i,n,min,key,flag=0;

        printf("enter the value of n");

        scanf("%d",&n);

        int ar[n];

        printf("enter elements of the array");

        for(i=0;i<=n-1;i++)

                scanf("%d",&ar[i]);



	for(j=0;j<n-1;j++)        

	{

               	min=ar[j];

               	for(i=j+1;i<=n-1;i++)

                      	if(min>ar[i])

                      	{

			       	min=ar[i];

                                ar[i]=ar[j];

                                ar[j]=min;

                        }

                

	}

	printf("the sorted array is \n");

       	for(i=0;i<n;i++)

		printf("%d\n",ar[i]);

}
