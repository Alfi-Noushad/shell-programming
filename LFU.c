#include<stdio.h>
int main()
{
	int total_frame,total_pages,hit=0;
	int pages[25],frame[10],arr[25],time[25];
	int m,n,page,flag,k,min_time,temp;
	printf("Enter total no. of pages : \t");
	scanf("%d",&total_pages);
	printf("Enter total no. of frames : \t");
	scanf("%d",&total_frame);
	for(m=0;m<total_frame;m++)
	{
	 	frame[m]=-1;
	}
	for(m=0;m<25;m++)
	{
	 	arr[m]=0;
	}	
	printf("Enter value of reference string\n");
	for(m=0;m<total_pages;m++)
	{
	 	printf("Enter value no.[%d]: \t",m+1);
	 	scanf("%d",&pages[m]);
	}
	printf("\n");
	for(m=0;m<total_pages;m++)
	{
	 	arr[pages[m]]++;
	 	time[pages[m]]=m;
	 	flag=1;
	 	k=frame[0];
	 	for(n=0;n<total_frame;n++)
	 	{
	 	 	if(frame[n]==-1||frame[n]==pages[m])
	 	 	{
	 	 	 	if(frame[n]!=-1)
	 	 	 	{
	 	 	 	 	hit++;
	 	 	 	}
	 	 	 	flag=0;
	 	 	 	frame[n]=pages[m];
	 	 	 	break;
	 	 	}
	 	 	if(arr[k]>arr[frame[n]])
	 	 		k=frame[n];
 	 		
	 	
	 	
	}
	if(flag)
	{
	 	min_time=25;
	 	for(n=0;n<total_frame;n++)
	 	{
	 	 	if(arr[frame[n]]==arr[k]&&time[frame[n]]<min_time)
	 	 	{
	 	 	 	temp=n;
	 	 	 	min_time=time[frame[n]];
	 	 	}
	 	}
	 	arr[frame[temp]]=0;
	 	frame[temp]=pages[m];
	}
	for(n=0;n<total_frame;n++)
	{
	 	printf("%d\t",frame[n]);
	}
	printf("\n");
	
}
printf("page hit :\t %d \n",hit);
return 0;
}
