#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define KEY 1234

int main(){
	int msgid;
	msgid=msgget(KEY,IPC_CREAT);
	if(msgid>=0){
		printf("MsgQ created successfully: %d\n",msgid);
	}
}
