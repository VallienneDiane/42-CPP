# Templates

Function templates are special functions that can operate with generic types. 
This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.

The format for declaring function templates with type parameters is:

template <class identifier> function_declaration;
template <typename identifier> function_declaration;

T is a very common template parameter name.

	template<typename T>