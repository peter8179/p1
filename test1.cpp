#include <stdio.h>

struct s1 {
  unsigned char v1 : 4;
  unsigned char v2 : 4;
};

int main(int argc, char* argv[])
{
  s1 so1;
  scanf("%d%d", &(so1.v1), &(so1.v2));
  
  return 0;
}
