#include <stdio.h>
void main()
{
   int *a,i,j,tmp,n;
 	printf(" Bubble Sort of an array using pointer :\n"); 
		   
   printf(" Enter Array Size : ");
   scanf("%d",&n);
   
   printf(" Enter number of elements in the array\n");
   for(i=0;i<n;i++)
      {
	  printf(" element -> %d : ",i+1);
	  scanf("%d",a+i);
	  
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++)
      {
	  printf("  %d \n",*(a+i));
	  }         
printf("\n");
}
