#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	int s;
	s=open("wc.txt",O_RDONLY);
	if(s<0){
		printf("Unable to create\n");
		perror("error message:");
	}
	else{
		printf("Successfully created. S value:%d\n",s);
	}
	getchar();
}

