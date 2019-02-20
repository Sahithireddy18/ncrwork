#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	 int c=0,i,j;
	 
 	 char *s[5]= {"we will teach you how to " ,"Move a mountain " ,"Level a building " ,"Erase the past ","Make a million " };
 	int r = sizeof(s) / sizeof(char *);
 	 for(i=0;i<r;i++)
  	{
		for(j=0; *(*(s + i) + j) != '\0'; j++)
		
  		if(*(*(s + i) + j) =='e')
			c++;
  	}
 	 printf("%d",c);
return 0;
}
  

