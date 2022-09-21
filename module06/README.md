# Casts conversion

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