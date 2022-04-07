#include <stdio.h>

int main (void)
{
  char* name;
  int old;
  printf("Enter your name : ");
  fgets(name, sizeof(name), stdin);

  printf("Enter your age : ");
  scanf("%d", &old);
 
  printf("Hi! my name is %s i am %d years old.\n",name,old);
  return 0;
}
