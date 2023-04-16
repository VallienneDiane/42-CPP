# Object Oriented Programming - OOP

Procedural programming is about writing procedures or functions that perform operations on the data.
Object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

A class is a template for objects, and an object is an instance of a class.
When the individual objects are created, they inherit all the variables and functions from the class.

Example :

	class Fruit {						// the class
		public:							// access specifier
			string color;   			// attribute
			int number;
			void printFruit(void); 		//method defined inside class
	};

	int main(void)
	{
		Fruit Banana;

		Banana.printFruit();
		return (0);
	}

### Access specifiers

public - members are accessible from outside the class

private - members cannot be accessed (or viewed) from outside the class

protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

### Encapsulation - Setter & Getter

The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

Example :

	// Private attribute in the class
		int _salary;

	The public setSalary() method takes a parameter (s) and assigns it to the salary attribute (salary = s).

	// Setter
    void setSalary(int s) {
      _salary = s;

	The public getSalary() method returns the value of the private salary attribute.

	// Getter
    int getSalary() {
      return _salary;
    }


main source : https://www.w3schools.com/cpp/cpp_oop.asp