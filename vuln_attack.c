#include <stdio.h>

int main(int argc,  char* argv[])
{
	char* functionaddress[30];
   	char buffer[]="foofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofoofood";
	printf("%s",buffer);
	*functionaddress=argv[1];
	printf("%s",*functionaddress);
	return 0;
}
