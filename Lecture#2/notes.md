## Type Casting
The type casting uses **(datatype)** syntax which is called before the variable.
`cout << (int) c << endl; // c is character type variable`
```cpp
#include<iostream>
using namespace std;
int main(){
    char c = 'A';
    int n = 65;
    cout << (char) n << endl; // prints A
    cout << (int) c << endl; // prints 65
}
```

## Taking Input in Console
To take input in console we use the **cin** keyword and the user gives the input to be stored in variables through console. Now in usual/common teaching methodologies, we are using cin for basically entering everything and testing the program which is really bad practice. Instead of that we should be writing test cases to test the different cases on the code we wrote.
```cpp
int inputNumber;
cin >> inputNumber;
```

## Basic Pillars of Programming
- Data Storage
- Iterations
- Decisions


## Decisions
We take decisions based on some conditions and for this we use if-else conditions. 
```cpp
if ( condition ) // in that condition a boolean value can also be written
{
    // code to execute if condition becomes true
}
.......
else // -> block starts next which will execute if above condition is false 
    if (condition){
        // code if above is true
    }
else{
    // code to execute if nothing becomes true in the whole above code till now
}
```