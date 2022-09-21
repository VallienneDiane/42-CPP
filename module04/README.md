# Polymorphism

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

An abstract class is a class that contains at least one abstract method. An abstract method is a method that is declared (= 0), but not implemented in the code.
These type of classes are designed only to treat like a base class (to be inherited by other classes). 
It is a designed technique for program development which allows making a base upon which other classes may be built.