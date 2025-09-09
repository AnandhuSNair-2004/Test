#include<stdio.h>
int main()
{
int n,i,key,low,high,mid,found=0;
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

low=0;
high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(arr[mid]==key)
  {
  printf("element %d found at position %d ",key,mid+1);
  found=1;
  break;}
  else if(arr[mid],key){
  low=mid+1;
  }
  else
  {
  high=mid-1;
  }
  }
  if(found==0)
  {
  printf("element %d not found",key);
  }
  return 0;
  }
