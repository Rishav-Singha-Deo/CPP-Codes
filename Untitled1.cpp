#include<time.h>
#include<stdio.h>
int main(){
int num;
time_t sec;
sec=time(NULL);
printf("Enter the Range under which you want Random number:\n");
scanf("%d",&num);
if(num>0)
{
for(;;)
{
sec=sec%3600;
if(num>=sec)
{
printf("%ld\n",sec);
break;
}
sec=sec%num;
}
}
else
{
printf("Please Enter Positive Value!\n");
}
return 0;
}
