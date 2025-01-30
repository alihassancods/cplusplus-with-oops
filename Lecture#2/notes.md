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

There is also a way easier than the if-else ladder which is switch statement. This is **NOT RECOMMENDED**
The switch statement has the syntax

```cpp
switch(grade){ // this () contains the variable on the basis of which decision is made

case 'A': // if grade is A means this case matches
    // this will contain the code to be executed on the completion of case acc to the grade
    cout << "The case is A" << endl;
    points = 4.0;
    // when the case matches, the execution starts and reaches till the last case in which points are 3.0
    // it means it will execute every single statement in cases
    // to stop this bs to happen we use break to stop this execution
    break;
case 'B': 
    cout << "The case is B" << endl;
    points = 3.0;
default:
    cout << "If no other case runs" << endl;
}
```

## Iterations

### While Loop
```cpp
int i-0; // initialization

while(i<10) // condition : end point : while the condition is true keep running the body
{
    cout << i << endl; //body which executes if the condition is true.
    // while executing the body forget about the condition because its just gone at the moment
    i += 2; // this is the step which executes to skip/step some specific values
}
```
The execution process of the while loop is as 
- 1st the variable is initialized like int i=0; and this is just for one time only
- 2nd the condition is checked and keeps checking until its false
-   If condition is true then the body executes and when it happens its better to forget about condition and focus on body

### For Loop
```cpp
    // initialization ; // end point/condition ; step
for ( int i=0; i<5; i++)
{
    cout << i << endl; // body
}

```
The sequence of execution for this for loop will be like
- 1st the initialization starts which is just one time
- 2nd the body executes
- 3rd the step is executed, which changes the value of i
- 4th the condition is checked on basis of which the body is executed and the steps keep executing

