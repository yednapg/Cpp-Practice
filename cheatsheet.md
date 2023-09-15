C++ Syntax Cheatsheet

### Variables and Data Types:

```cpp
int age = 25;            // Integer variable
double salary = 50000.0; // Double-precision floating-point variable
char grade = 'A';        // Character variable
string name = "John";    // String variable
bool isStudent = true;   // Boolean variable
```

### Input and Output:

```cpp
#include <bits/stdc++.h>

cout << "Hello, World!" << endl; // Output to the console
int num;
cin >> num; // Input from the console
```

### Conditional Statements:

#### If-Else:

```cpp
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

#### Switch-Case:

```cpp
switch (variable) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Code for other values
}
```

### Loops:

#### For Loop:

```cpp
for (int i = 0; i < 5; i++) {
    // Code to repeat a specific number of times
}
```

#### While Loop:

```cpp
while (condition) {
    // Code to repeat as long as the condition is true
}
```

#### Do-While Loop:

```cpp
do {
    // Code to repeat at least once, then while the condition is true
} while (condition);
```

### Functions:

```cpp
returnType functionName(parameters) {
    // Function body
    return value; // optional
}
```

### Arrays:

```cpp
int numbers[5] = {1, 2, 3, 4, 5}; // Integer array with 5 elements
```

### Pointers:

```cpp
int* ptr = &variable; // Pointer declaration and initialization
*ptr = 10; // Dereferencing and assignment
```

### Classes and Objects:

```cpp
class MyClass {
public:
    int data;
    void myFunction() {
        // Code for class method
    }
};

MyClass obj; // Object creation
obj.data = 42; // Accessing class member variable
obj.myFunction(); // Calling a class method
```

### Exception Handling:

```cpp
try {
    // Code that might throw an exception
} catch (ExceptionType& e) {
    // Code to handle the exception
}
```
# End
