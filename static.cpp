#include <iostream>
#include <math.h>
using namespace std;

int main() 
{

  int num1, num2, i, num, digit, sum, count;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  // swap if num1 > num2
  if (num1 > num2) 
  {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }
  
  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
 
  // print Armstrong numbers from num1 to num2
  for(i = num1; i <= num2; i++)
  {

    // count gives the number of digits in i
    count = 0;
         
    // store value of i in num
    num = i;

    // count the number of digits in num and i
    while(num > 0) 
	{
      count++;
      num /= 10;
    }
 
    // initialize sum to 0
    sum = 0;

    // store i in num again    
    num = i;
        
    // get sum of power of all digits of i
    while(num > 0) 										//153       15			1
	{
      digit = num % 10;									//3			5			1
      sum = sum + pow(digit, count);					//3*3*3		27 + 5*5*5	152 + 1*1*1
      num /= 10;										//15		1			0
    }

    // if sum is equal to i, then it is Armstrong
    if(sum == i) 
	{
      cout << i << ", ";
    }
  }

  return 0;
}