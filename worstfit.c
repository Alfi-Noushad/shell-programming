#include<stdio.h>
#define max 25
void main()
{
 	int frag[max],b[max],f[max],i,j,nb,nf,temp,highest=0;
 	static int bf[max],ff[max];
 	printf("\n Memory management scheme-  Worst Fit.....");
 	printf("\nenter the no.of blocks:");
 	scanf("%d",&nb);
 	printf("\nEnter the no. of files:");
 	scanf("%d",&nf);
 	printf("\n Enter the size of the blocks:\n");
 	for(i=1;i<=nb;i++)
 	{
 	 	printf("block %d : ",i);
 	 	scanf("%d",&b[i]);
 	}
 	printf("enter the size of the files:-\n");
 	for(i=1;i<=nf;i++)
 	{
 	 	printf("file %d : ",i);
 	 	scanf("%d",&f[i]);
 	}
 	for(i=1;i<=nf;i++)
 	{
 	 	for(j=1;j<=nb;j++)
 	 	{
 	 	 	if(bf[j]!=1)
 	 	 	{
 	 	 	 	temp=b[j]-f[i];
 	 	 	 	if(temp>=0)
 	 	 	 	{
 	 	 	 	 	if(highest<temp)
 	 	 	 	 	{
 	 	 	 	 	 	ff[i]=j;
 	 	 	 	 		highest=temp;
 	 	 	 	 	}
 	 	 	 	 	
 	 	 	 	}
 	 	 	}
 	 	}
 	 	frag[i]=highest;
 	 	bf[ff[i]]=1;
 	 	highest=0;
 	}
 	printf("\nFile_No: \tFile_size: \tBlock_no: \tBlock_size: \tfragment");
 	for(i=1;i<=nf;i++)
 	{
 	 	if(ff[i]!=0)
 	 	{
 	 	 	printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
 	 	}
 	 	else
 	 	{
 	 	 	printf("\n%d\t\t%d\t\tNot Allocated",i,f[i]);
 	 	 	
 	 	}
 	}
 	 	printf("\n");
 	 	
 	
}
