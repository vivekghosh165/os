#include<stdio.h> 
#include<sys/types.h>
 #include<unistd.h>
int fork_func()
{
fork();
printf("The fork system is used \n");
pid_t parent_id, child_id;
parent_id=getppid( );
printf("THE PARENT ID IS %d\n",parent_id ); 
child_id=getpid();
printf("THE CHILD ID IS %d\n",child_id);
}

int pid_func()
{
	pid_t parent_id,child_id;
	parent_id = getppid();
	printf("the parent id is %d\n",parent_id);
	child_id = getpid();
	printf("the child id is %d\n",child_id);
}

int main()
{
fork_func();
pid_func();
}
