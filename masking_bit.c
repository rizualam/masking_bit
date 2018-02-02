#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc<=2)
	{
		printf("please enter the argument");
		return 0;
	}
		
	if(argc==3)
	{
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	a=a&(~(1<<b));
	printf("%d\n",a);
        }
 return 0;	
}
