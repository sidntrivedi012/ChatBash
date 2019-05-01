#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include<arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	int fd = 0;
	char buff[1024];
	
	if(argc<3)
	{
		printf("Less no of arguments !!");
		return 0;
	}
}