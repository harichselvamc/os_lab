SHARED MEMORY SENDING
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define SHMKEY 75
#define K 1024
int main()
{
int shmid;
char *addr1;
printf("\n\t\tSENDING---USING SHARED MEMORY\n");
printf("\t\t`````````````````````````````````");
shmid=shmget(SHMKEY,128*K,IPC_CREAT|0777);
addr1=shmat(shmid,0,0);
printf("\n the address is:0x%x\n",addr1);
printf("\n enter the message to send:");
scanf("%s",addr1);
return(0);
}
SHARED MEMORY RECEIVING
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define SHMKEY 75
#define K 1024
int main()
{
int shmid;
char *addr1;
printf("\n\t\treceiving--USING SHARED MEMORY\n");
printf("\t\t`````````````````````````````````");
shmid=shmget(SHMKEY,128*K,IPC_CREAT|0777);
addr1=shmat(shmid,0,0);
printf("\n the address is:0x%x\n",addr1);
printf("\n the received message is:%s\n",addr1);
return(0);
}