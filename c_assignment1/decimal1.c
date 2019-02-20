#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  scanf("%d",&n);
  char s[n];
   scanf("%s",s);
  int a[n],b=0,sum=0;
  for(int i=0;i<n;i++)
   {
     a[i]=s[i]-48;
    }
   for(int i=n-1;i>=0;i--)
    {
       sum=sum+pow(2,b)*a[i];
        b++;
     }
   printf("decimal value %d\n",sum);
 int p=8,c[8];
  while(sum!=0)
  {
     c[--p]=sum%2;
     sum=sum/2;
      
  }
   for(int j=p-1;j>=0;j--)
    c[j]=0;
  printf("binary value ");
  for(int j=0;j<8;j++)
  printf("%d",c[j]);
}
   