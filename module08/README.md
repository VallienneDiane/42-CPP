# Standard Template Library (STL)

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
