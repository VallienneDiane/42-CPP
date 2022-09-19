## Canonical Form

To support the four basic usage contexts the OCCF(orthodox canonical class form) specifies four required functions that should be implemented for complex, user-defined data types. 

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

Useful link for an explanation of Fixed point numbers : https://www.youtube.com/watch?v=ZMsrZvBmQnU