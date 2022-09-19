# INHERITANCE

### Keyword " : public ", Access specifier protected

In C++, it is possible to inherit attributes and methods from one class to another. 

We group the "inheritance concept" into two categories:

	derived class (child) - the class that inherits from another class

	base class (parent) - the class being inherited from

The specifier protected is similar to private, but it can also be accessed in the inherited class.
A class can inherited from several classes.

	class MyChild: public MyClass {
		protected:
			int _nb;
	};

	class MyChild: public MyClass, public: otherClass {
		protected:
			int _nb;
	};

### Virtual Inheritance

The diamond problem: 

Virtual inheritance is a C++ technique that ensures that only one copy of a base class’s member variables are inherited by second-level derivatives. 
Without virtual inheritance, if two classes B and C inherit from class A, and class D inherits from both B and C, then D will contain two copies of A’s member variables: one via B, and one via C. 
These will be accessible independently, using scope resolution.

Instead, if classes B and C inherit virtually from class A, then objects of class D will contain only one set of the member variables from class A.

![Diamond Inheritance](https://www.sandordargo.com/assets/img/diamon-inheritance.png)