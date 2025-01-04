# Lesson#1 : C++ Basics

## Basic Code Structure

```cpp
#include<iostream>
using namespace std;
int main(){
    cout << "Hello World" << endl;
    return 0;
}
```

Now in C plus plus the code starts executing from the main() function, 
Inside the round brackets **()** the parameters are being inputted into the function
Using the **void** datatype for the main function is accepted by compiler but its not recommended and is a bad practice.
Now **cout** and **endl** are not built-in functions, and are defined in a library called iostream.
We use `#include<iostream>` to import that library.
Now we can use these functions but we will use **std::** before every time we call a function, to avoid this complexity we just write line to use namespace std `using namespace std;` Writing this makes our work a lot easier and it enables us to don't repeat the same std stuff again and again.
At the end it returns zero because as main function has datatype int so it has to return some integer. This return 0 has some effects which are not discussed here in this course.

## DataTypes

In C++ to declare variables we use the syntax
```cpp
// datatype variable_name;
int variable;
```
In memory there are several chunks of 4 bits. When we declare integer then one chunk is allocated to the variable. If we want to store the value greater than the specific limit, which could be stored inside the 4bits then we have to get more memory allocated for this.

For getting 2 chunks allocated we use **long** and this will get us the 8 bits in memory.
```cpp
long variable; 
```

If we want to store the decimal values then we use **float** and it helps us store them.
```cpp
float variable; 
```
Now if we still have low space and we want to store more and more precise value exceeding the limit of float then, we can use **double**
```cpp
double variable; 
```
Double helps us store more precise value than float, basically its a more precise float.

## Functions

Function is like a machine which takes some input and gives back some output.
In technical terms the function is reusable piece of code which is used and written for a specific task.
Function combines the declaration and the definition : 
Declaration tells that what type of function it is, what input it takes and what output it produces.
Definition tells us that How the function works.

The syntax of function is :
```cpp
/*
datatype function_name ( parameters ){
    // piece of code
    return data_to_return_according_to_datatype;
}
*/

#include<iostream>
using namespace std;

int add (int n1, int n2);

int main(){
    int a=5,b=5;
    sum = add(a,b);
    cout << sum << endl;
    return 0;
}
int add ( int n1, int n2){
    return n1+n2;
}
```

When the code is being converted by compiler from source code to machine code then its called compile time.
But when we take the machine code and run the machine code, its called runtime.
When the compiler starts translating the source code into machine code, then it performs it line by line. It is a general best practice to define prototype of function above the main function and write definition of function below the main function.
Function prototype is when we write simple declaration of the function without definition.