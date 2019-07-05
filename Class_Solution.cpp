/* C++ program to demonstrate following:  
 * A. Class with 2 constructors (1 default, 1 parameterized) and destructor
 * B. Create two objects, one with new operator and other without new operator
 * C. Create an integer variable 'x', in the class whose default value is 10
 * D. Create mechanism in class which displays, gets and sets value of 'x'
 */
  
#include <iostream> 

class Solution
{
	private:
	
	// Member
	int x;
	
	public:
	// Default Constructor
	Solution(): x(10) 
    { 
        std::cout << "Default Constructor called" << std::endl;
    }
	
	// Parameterized Constructor
	Solution(int input) 
    { 
        std::cout << "Parametrized Constructor called" << std::endl; 
        x = input; 
    }
	// Function to display value of member
	void display_value()
	{
		std::cout<< "Value of 'x' is: "<< x << std::endl;
	}
	
	// Function to get value of member
	int get_value()
	{
		return x;
	}
	
	// Function to set value of member
	void set_value(int input)
	{
		x = input;
	}
	
	// Destructor
	~Solution() 
    { 
        std::cout << "Destructor called" << std::endl;  
    }
    
};

int main()
{
	int index = 0;
	int sample;
	
	// Create object
	Solution obj1;
	
	// Create object using new operator
	Solution *obj2 = new Solution;
	obj2->display_value();
	
	// Create object by calling parameterized constructors
	Solution obj3(10);
	obj3.display_value();
	
	// Set value of 'x'
	obj1.set_value(14);
	
	// Get value of 'x'
	sample = obj1.get_value();
	std::cout << "Assigned value of 'x' is " << sample << std::endl;
	
	// Scope of an object
	if (index < 2)
	{
		Solution obj4;
	}
	
	// delete reference to object obj2
	delete obj2;
	
	return 0;
}