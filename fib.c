#include<stdio.h>
int main()
{
	int f,s,sum,i,n,temp;
	scanf("%d%d%d",&n,&f,&s);
	printf("%d",s);
	for(i=1;i<=n-1;i++)
	{
		sum=f+s;
                        printf("\t%d",sum);
                        temp=s;
		s=sum;
		f=temp;
	}
	return 0;
}

