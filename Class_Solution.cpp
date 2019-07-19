/* C++ program to demonstrate following:  
 * A. Class with 2 constructors (1 default, 1 parameterized) and destructor
 * B. Create two objects, one with new operator and other without new operator
 * C. Create an integer variable 'x', in the class whose default value is 10
 * D. Create mechanism in class which displays, gets and sets value of 'x'
 * E. Copy one solution object into another.
 * F. Add a data member to Solution class char *str and create the default array with size 50 and pass a default string as “hi this is my first cpp program ”
 * G. Write set and get function to change that string similar to the function which you have written it for int x;
 */
  
#include <iostream> 

class Solution
{
	private:
	
	// Member
	int x;
	std::string str;
	
	public:
	// Default Constructor
	Solution(): x(10), str("Hi, This is my first cpp program") 
    { 
        std::cout << "Default Constructor called" << std::endl;
    }
	
	// Parameterized Constructor
	Solution(int input, std::string c) 
    { 
        std::cout << "Parametrized Constructor called" << std::endl; 
        x = input;
		str = c;
    }
	// Function to display value of member
	void display_value()
	{
		std::cout<< "Value of 'x' is: "<< x << std::endl;
		std::cout<< "String is : "<< str << std::endl;
	}
	
	// Function to get value of int member
	int get_int_value()
	{
		return x;
	}
	
	// Function to set value of int member
	void set_int_value(int input)
	{
		x = input;
	}
	
	// Function to get value of char member
	std::string get_char_value()
	{
		return str;
	}
	
	// Function to set value of char member
	void set_char_value(std::string input)
	{
		str = input;
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
	
	// Create object
	Solution obj1;
	
	// Create object using new operator
	Solution *obj2 = new Solution;
	obj2->display_value();
	
	// Create object by calling parameterized constructors
	Solution obj3(10, "Strings changed");
	obj3.display_value();
	
	// Set value of 'x' and 'str'
	obj1.set_int_value(14);
	obj1.set_char_value("New String");
	
	// Get value of 'x'
	std::cout << "Assigned value of 'x' is " << obj1.get_int_value() << std::endl;
	std::cout << "Assigned value of 'str' is " << obj1.get_char_value() << std::endl;
	
	// Scope of an object
	if (index < 2)
	{
		Solution obj4;
	}
	
	// Delete reference to object obj2
	delete obj2;
	
	// Copy one solution object to another
	Solution obj5 = obj1;
	
	return 0;
}