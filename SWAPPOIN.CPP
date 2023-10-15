// swap two number using pointer
#include<stdio.h>
#include<conio.h>
void swap(int* ,int*);
int main()
{
  int a=5,b=10;
  clrscr();
  swap(&a,&b);
  printf("After Swappig: a=%d b=%d",a,b);
  getch();
  return 0;

}
void swap(int *x,int *y)
{
  int t;
  t=*x;
  *x=*y;
  *y=t;
}