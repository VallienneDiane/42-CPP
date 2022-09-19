# Memory Allocation - Pointers & References

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

sources :

https://www.geeksforgeeks.org/references-in-c/

https://www.w3schools.in/cplusplus/dynamic-memory-allocation

