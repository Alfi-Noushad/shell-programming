#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int pid1=-1,pid2=-1,pid3=-1;
	
	printf("my process id is %d and the root id is %d\n",getpid(),getppid());
	pid1=fork();
	
	
	if(pid1==0)
	{
	printf("process 1 id is %d and the root id is %d\n",getpid(),getppid());
	pid2=fork();
	}
	
	
	if(pid2==0)
	{
	printf("process 2 id is %d and the root id is %d\n",getpid(),getppid());
	pid3=fork();
	}
	
	
	if(pid3==0)
	{
	printf("process 3 id is %d and the root id is %d\n",getpid(),getppid());
	
	}
	else{
	wait(NULL);
	printf("process id is %d eith parent id %d completed successfully\n",getpid(),getppid());
	}
	
	return 0;
}
