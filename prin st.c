#include<stdio.h>
void main()
{ 
     int m,h;
     printf("enter minutes");
     scanf("%d",&m);
     h=m/60;
     m=m%60;
	 printf("%d hours %d minutes",h,m);
	      
}
