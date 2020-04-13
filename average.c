#include<stdio.h>
int main()
{
  float arr[50],avg,sum=0;
  int m,i;
  printf("Input how many  numbers to be averaged\t");
  scanf("%d",&m);
  printf("Enter the values \t");
  for(i=0;i<m;i++){
    scanf("%f",&arr[i]);
}
for(i=0;i<m;i++)
{
  sum+=arr[i];
}
avg=sum/m;
printf("\n The average of %d numbers is= %f\n",m,avg);
}
