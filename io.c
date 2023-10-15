#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
	
    printf("Enter character: ");
    //a = getch();
    //a = getche();
    a = getchar();
    
    printf("\nYou have pressed: %c",a);
    //putch(a);
    //putchar(a); //Output of putch and putchar is same
    getch();
}