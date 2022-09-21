# Exceptions

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

Exception handling in C++ consist of three keywords: try, throw and catch:

- The try statement allows you to define a block of code to be tested for errors while it is being executed.

- The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

- The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

The try and catch keywords come in pairs:

	try
	{
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
	/* handle exception */
	}

## Constants attributes

When attributes are constants, you need to initialize them in the copy constructor and not in the operator = .