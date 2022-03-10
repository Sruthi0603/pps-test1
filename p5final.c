#include <stdio.h>
void input(int *x,int *y,int *z)
{
  printf("enter three numbers:");
  scanf("%d%d%d",x,y,z);
}

int cmp(int x,int y,int z,int *largest)
{
  if (x>y&&x>z)
  {
    *largest= x;
  }
  else if(y>x&&y>z)
  {
    *largest= y;
  }
  else
  {
    *largest= z;
  }
  }
  
  void output(int x,int y,int z,int largest)
  {
    printf("the greatest number of %d, %d, %d is %d",x,y,z,largest);
  }
  int main()
  {
    int a,b,c,w;
    input(&a,&b,&c);
    cmp(a,b,c,&w);
    output(a,b,c,w);
    return 0;
    } 