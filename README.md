## Module 00 : class, access specifiers (private, protected), encapsulation (setters & getters)

### Object Oriented Programming - OOP

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
    }

	The public getSalary() method returns the value of the private salary attribute.

	// Getter
    int getSalary() {
      return _salary;
    }

## Module 01 : static & dynamic allocation, new & delete, stack or heap, reference

### Memory Allocation - Pointers & References

### Difference between Static and Dynamic allocation

There are two ways via which memories can be allocated for storing data. 

	- Compile time allocation or static allocation of memory: 
	
	where the memory for named variables is allocated by the compiler. 
	Exact size and storage must be known at compile time and for array declaration, the size has to be constant.

	- Runtime allocation or dynamic allocation of memory: 
	
	where the memory is allocated at runtime and the allocation of memory space is done dynamically within the program run. 
	In this case, the exact space or number of the item does not have to be known by the compiler in advance. 
	Pointers play a major role in this case.

### Stack or Heap

Memory in your C++ program is divided into two parts:

	STACK: All variables declared inside any function takes up memory from the stack.

	HEAP: It is the unused memory of the program and can be used to dynamically allocate the memory at runtime.

### New & delete

To allocate space dynamically, use the unary operator new, followed by the type being allocated.
For de-allocating dynamic memory, we use the delete operator.

### Reference

A reference, like a pointer, stores the address of an object that is located elsewhere in memory. 
Unlike a pointer, a reference after it is initialized cannot be made to refer to a different object or set to null.

When a variable is declared as a reference, it becomes an alternative name for an existing variable. 
A variable can be declared as a reference by putting ‘&’ in the declaration.

References applications :

- Modify the passed parameters in a function: If a function receives a reference to a variable, it can modify the value of the variable.

- Avoiding a copy of large structures: Imagine a function that has to receive a large object. 
If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. We can use references to avoid this.

- In For Each Loop to modify all objects: We can use references in for each loop to modify all elements.

- For Each Loop to avoid the copy of objects: We can use references in each loop to avoid a copy of individual objects when objects are large.  


References are less powerful than pointers
1) Once a reference is created, it cannot be later made to reference another object; it cannot be reset. This is often done with pointers. 
2) References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing. 
3) A reference must be initialized when declared. There is no such restriction with pointers.
Due to the above limitations, references in C++ cannot be used for implementing data structures like Linked List, Tree, etc (except in Java)
 
References are safer and easier to use: 
1) Safer: Since references must be initialized, wild references like wild pointers are unlikely to exist.
2) Easier to use: References don’t need a dereferencing operator to access the value. 
They can be used like normal variables. ‘&’ operator is needed only at the time of declaration. 
Also, members of an object reference can be accessed with dot operator (‘.’), unlike pointers where arrow operator (->) is needed to access members.


Example:

	int main()
	{
		int x = 10;

		// ref is a reference to x.
		int& ref = x;

		// Value of x is now changed to 20
		ref = 20;
		cout << "x = " << x << '\n';

		// Value of x is now changed to 30
		x = 30;
		cout << "ref = " << ref << '\n';

		return 0;
	}

	output : x = 20  ref = 30

## Module 02 : canonical form, constructors, destructor, fixed point number

### Canonical Form (Forme canonique)

The orthodox canonical class form specifies four required functions that should be implemented for complex, user-defined data types. 

These are the default constructor, the copy constructor, the copy assignment operator, and the destructor.

### Default Constructor
The purpose of a constructor is to properly create new objects. A default constructor is one that can be called with no arguments. 

### Copy constructor
The purpose of a copy constructor is to create new objects from existing objects. The copy constructor will declare at least one parameter that is a reference type to which the copy constructor belongs.

### Copy Assignment Operator
The purpose of a copy assignment operator is to initialize an existing object to the values supplied by another existing object.

### Destructor
The purpose of the destructor is to properly tear down objects when they are no longer needed and release any resources reserved for the object’s use during its lifetime.


## Fixed Point Number (Nombre à virgule fixe)

Refers to a method of representing fractional numbers by storing a fixed number of digits of their fractional part.
A fixed-point representation of a fractional number is essentially an integer that is to be implicitly multiplied by a fixed scaling factor. 

Example :

	15.5 in binary is : 1111.1

	15.5f * (1 << 8)     // It means that you want to shift the comma 8 bits to the right.

	Result is an int 3968.

	3968 in binary is 111110000000 (binary 15.5 + 8bits : 1111.1 + 0000000)

	So you can store the integer 3968, and when you need the float, do the division (3968.0f / (1 << 8)) = 15.5


![Fixed-Point representation](https://thedatabus.io/static/fixed-point-b50cf1e085815f50aba9957d93f351f7.png)

Useful links for :

-> convert int/float to binary : https://www.rapidtables.com/convert/number/decimal-to-binary.html

-> an explanation of Fixed point numbers : https://www.youtube.com/watch?v=ZMsrZvBmQnU

## Module 03 : inheritance, virtual inheritance

### Inheritance

### Keyword " : public ", Access specifier protected

In C++, it is possible to inherit attributes and methods from one class to another. 
In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.

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

## Module 04 : polymorphism, virtual function & destructor, deep & shallow copy, abstract class, interface
### Polymorphism

Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Inheritance lets us inherit attributes and methods from another class.
Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

### Virtual function

A virtual function is a special form of member function that is declared within a base class and redefined by a derived class. 
If a class includes a virtual function and if it gets inherited, the virtual class redefines a virtual function to go with its own need.

Rules for Virtual Functions :

- Virtual functions cannot be static.
- A virtual function can be a friend function of another class.
- Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
- The prototype of virtual functions should be the same in the base as well as derived class.
- They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived - class to override (or re-define the virtual function), in that case, the base class version of the function is used.
- A class may have virtual destructor but it cannot have a virtual constructor.

### Virtual destructor

A virtual destructor is used to free up the memory space allocated by the derived class object or instance while deleting instances of the derived class using a base class pointer object. A base or parent class destructor use the virtual keyword that ensures both base class and the derived class destructor will be called at run time, but it called the derived class first and then base class to release the space occupied by both destructors.

### Deep copy && Shallow copy

- Creating a copy of object by copying data of all member variables as it is, it is called shallow copy. The compiler will do shallow copy by default.

	The shallow copy has been created when you want to copy all variables of one object to another object.
	Both the original and new objects, will be referencing the same memory address within the shallow copy. 
	This means both original, and replica objects will be recognized and fetched with the same memory address. 
	When a user tries to make changes in one object, it will automatically reflect the change in another object 
	as well due to the same memory address. 

- Creating an object by copying data of another object along with the values of memory resources resides outside the object but handled by that object, it is called deep copy.

	It is recommended to use the deep copy instead of the shallow copy while using the dynamically allocated variables. 
	The deep copy can be obtained by copying all the data of an object, variable values, memory allocation, and resources, to the new one while both the real and replica object has a completely different memory address. 
	It can be used for an object having variables that are allocated dynamically.

![Plan Deep & Shallow copy](https://1.bp.blogspot.com/-xfri3_hTDK0/YG3cd-31OLI/AAAAAAAAAnI/lBESSoB8tjo0yDG9mDuXSUKx03ztnER3wCNcBGAsYHQ/w640-h360/Deep-copy-and-shallow-copy-in-c%252B%252B-learning-mania.jpg)

### Abstract class

An abstract class is a class that contains at least one abstract method. An abstract method (pure virtual function) is a method that is declared (= 0), but not implemented in the code.
These type of classes are designed only to treat like a base class (to be inherited by other classes). 
It is a designed technique for program development which allows making a base upon which other classes may be built.

### Interface

An interface describes the behavior or capabilities of a C++ class without committing to a particular implementation of that class.
The C++ interfaces are implemented using abstract classes. Only pure methods and can't have attributes.

## Module 05 : exceptions, constant attribute

### Exceptions

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

Exception handling in C++ consist of three keywords: try, throw and catch:

- The try statement allows you to define a block of code to be tested for errors while it is being executed.

- The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

- The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

The try and catch keywords come in pairs:

	try
	{
	/* do some stuff */
	}
	catch (std::exception & e)
	{
	/* handle exception */
	}

## Constants attributes

When attributes are constants, you need to initialize them in the copy constructor and not in the operator = .

## Module 06 : cast conversion (static, reinterpreted, dynamic cast)

### Casts conversion
A cast is a special operator that forces one data type to be converted into another. As an operator, a cast is unary and has the same precedence as any other unary operator.

The most general cast supported by most of the C++ compilers is as follows −

(type) expression 

## Static cast

The static_cast is used for the normal/ordinary type conversion. 
This is also the cast responsible for implicit type coercion and can also be called explicitly. 
You should use it in cases like converting float to int, char to int, etc. 
This can cast related type classes.
If the types are not same it will generate some error.

## Reinterpreted cast

Reinterpret_cast is a type of casting operator used in C++. 
 
It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.
Reinterpret casts are only available in C++ and are the least safe form of cast, allowing the reinterpretation of the underlying bits of a value into another type. 

## Dynamic cast


Dynamic cast : can only be used with pointers and references to classes  	
            : takes place at execution and not at compilation like other cast
            : one method in the class has to be virtual			

## Module 07 : function templates

### Templates

Function templates are special functions that can operate with generic types. 
This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.

The format for declaring function templates with type parameters is:

template <class identifier> function_declaration;
template <typename identifier> function_declaration;

T is a very common template parameter name.

	template<typename T>


## Module 08 : Standard Template Library (algorithms, containers, functions, iterators)

### Standard Template Library (STL)

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. 
It is a library of container classes, algorithms, and iterators. 
It is a generalized library and so, its components are parameterized. 

## STL has 4 components:

	Algorithms
	Containers
	Functions
	Iterators

### Algorithms

The header algorithm defines a collection of functions specially designed to be used on a range of elements. 
They act on containers and provide means for various operations for the contents of the containers.
	Sorting
	Searching
	Important STL Algorithms
	Useful Array algorithms
	Partition Operations
	valarray class

### Containers

Containers or container classes store objects and data. 
There are in total seven standards “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

* Sequence Containers: implement data structures that can be accessed in a sequential manner.
		vector
		list
		deque
		arrays
		forward_list( Introduced in C++11)

* Container Adaptors: provide a different interface for sequential containers.
		queue
		priority_queue
		stack

* Associative Containers: implement sorted data structures that can be quickly searched (O(log n) complexity).
		set
		multiset
		map
		multimap

* Unordered Associative Containers: implement unordered data structures that can be quickly searched (Introduced in C++11)
		unordered_set 
		unordered_multiset
		unordered_map
		unordered_multimap

### Functions

The STL includes classes that overload the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passed.

### Iterators

As the name suggests, iterators are used for working upon a sequence of values. They are the major feature that allows generality in STL.


## std::vector

https://cplusplus.com/reference/vector/vector/

Vectors are sequence containers representing arrays that can change in size.
Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays. 
But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.


source : https://www.geeksforgeeks.org/the-c-standard-template-library-stl/

## Module 09 : containers (vector, map, pair, deque, stack etc)

Use containers only once for all exercises.