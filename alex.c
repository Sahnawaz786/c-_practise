// C code to illustrate Methods returning 
// a value using return statement 
  
#include <stdio.h> 
  
// non-void return type 
// function to calculate sum 
int SUM(int a, int b) 
{ 
    int s1 = a + b; 
  
    // method using the return 
    // statement to return a value 
    return s1; 
} 
  
// Driver method 
int main() 
{ 
    int num1 = 10; 
    int num2 = 10; 
    int sum_of = SUM(num1, num2); 
    printf("The sum is %d", sum_of); 
    return 0; 
} 