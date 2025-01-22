#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
struct dirent*dptr;
int main(int age,char*argv[])
{
	char buff[256];
	DIR*dirp;
	printf("\nEnter directory name : ");
	scanf("%s",buff);
	if((dirp=opendir(buff))==NULL)
	{
		printf("ERROR");
		exit(1);
	}
	while(dptr=readdir(dirp))
	{
		printf("%s\n",dptr->d_name);
	}
	closedir(dirp);
	printf("show the present working directory: \n");
	execlp("/bin/pwd","pwd",NULL);
	
}
