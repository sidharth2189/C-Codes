/* Program to print Armstrong Numebrs between two specified non negative numbers a and b */
/* Link to what is an Armstrong Number: https://pages.mtu.edu/~shene/COURSES/cs201/NOTES/chap04/arms.html */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, a_new, anew[200], count, countA = 0;
    printf("-------Program to print armstrong numbers between a range of numbers------\n\n");
    printf("Please enter lower limit : \n");
    scanf("%d", &a);
    if (a < 0){
        printf("Please enter non negative lower limit : \n");
        scanf("%d", &a);
    }
    printf("Please enter upper limit : \n");
	scanf("%d", &b);
    
	// Lower limit "a" entered by user should be less in value than upper limit "b"
	if (a > b){
        printf("Lower limit is : %d\n",a);
        printf("Upper limit has lesser value than lower limit \n");
        printf("Please re-enter upper limit : \n");
        scanf("%d", &b);
    }
    
	// All single digit numbers are obviously armstrong numbers
	if (b <10){
        printf("All numbers between and including %d and %d are armstrong numebrs\n", a, b);
		exit(0);
    }
    	
	// lower limit around 10
	if (a >= 10)
	{
	    printf("The armstrong number(s) between and including %d and %d is/are :\n", a, b);
	}
	if (a < 10){
	   printf("All numbers between and including 0 and 9 are armstrong numbers\n");
	   printf("The remaining armstrong number(s) between and including 10 and %d is/are :\n", b);
	   a = 10;
	}
	
	
	// For rest of the cases
	while (a <= b)
	{	
		a_new = 0;
		countA = 0;
		d = 0;
		c = a;
		while (c!=0)
		{
			c = c/10;
			countA++;  									 // Check number of digits in the lower limit "a"
		}
		count = countA;
		while(countA >= 0)
		{
			countA--;
			anew[countA] = (a/(pow(10,(countA)))) - d;    // obtain the digit in the number starting from the left
			a_new = a_new + (pow(anew[countA],count));  // Raise the number to the power equivalent to number of digits in the number
			d = (d + anew[countA]) * 10;               // make way for finding the next digit in next loop
		}
		if(a == a_new)
		{
            printf("%d  ",a);						// Print the numbers every loop, that satisfy armstrong criteria	
		}
		a++;											// increase "a" till it reaches "b"
	}
}