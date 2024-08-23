#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int x=0,y=0;
pthread_t pthid1,pthid2;
void *pth1_main(void *arg);
void *pth2_main(void *arg);

int main()
{
  if (pthread_create(&pthid1,NULL,pth1_main,(void*)0)!=0)
  {
    printf("pthread_create pthid1 failed. \n");
    return -1;
  }
  if (pthread_create(&pthid2,NULL,pth2_main,(void*)0)!=0)
  {
    printf("pthread_create pthid2 failed. \n");
    return -1;
  }
  
  printf("thread 1\n");
  pthread_join(pthid1,NULL);
  printf("thread 2\n");
  pthread_join(pthid2,NULL);
  printf("waiting\n");
  return 0;
}
void *pth1_main(void *arg)
{
  for(x=0;x<100;x++)
  {
    printf("x=%d\n",x);
    sleep(1);
  }
  pthread_exit(NULL);
}
void *pth2_main(void *arg)
{
  for(y=0;y<100;y++)
  {
    printf("y=%d\n",y);
    sleep(1);
  }
  pthread_exit(NULL);
}
