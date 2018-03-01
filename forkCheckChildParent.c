#include<stdio.h>
#include<sys/types.h>

int main() 
{
  int id=fork();
  printf("pid = %d",id);

  return 0;
}
