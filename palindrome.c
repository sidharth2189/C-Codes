/* Program to identify if a number is a palindrome */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit, digit_count = 0, rev_num = 0;
    printf("-------Program to identify if a number is a palindrome------\n\n");
    printf("Please enter a non negative integer : ");
    scanf("%d", &num);
    while (num < 0){
        printf("Please enter non negative integer only : \n");
        scanf("%d", &num);
    }
    
	// All single digit non negative integers are palindromes
	if (num < 10){
        printf("Yes, %d is a palindrome\n",num);
		return 0;
    }
	
	// For rest of the cases check if reversed number is same as entered number
	temp = num;
	while (temp!=0)
	{
		temp = temp/10;
		digit_count++;  	       					                  // Check number of digits in the entered number
	}
	temp = num;

	while(digit_count > 0)
	{
		digit = temp%10;                                             // obtain the rightmost digit in the number
		rev_num = ( rev_num + ( digit * pow(10, digit_count-1) ));   // multiply digit to decimal value of corresponding position from left in the originally entered number
		digit_count--;
		temp = temp/10;												 // shed the right most digit
	}
	if(rev_num == num)
	{
        printf("%d is a palindrome\n",num);				            // Print the number	
	}
	else {
		printf("%d is not a palindrome\n",num);
	}
}