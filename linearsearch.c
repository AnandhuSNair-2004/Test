#include<stdio.h>
int main()
{
int n,i,key,found=0;
printf("Enter the limit :");
scanf("%d",&n);

int arr[n];

printf("enter %d element:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("enter the search element:");
scanf("%d",&key);
for(i=0;i<=n;i++){
if(arr[i]==key)
{
printf("the element %d found at position %d ",key,i+1);
found=1;
break;
}
}
if(found==0)
{
printf("the element %d not found in the array ",key);
}
return 0;
}


