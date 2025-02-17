## Pointers - 1
The variables are stored in chunks of 4 bit in memory
```cpp
int x;
x = 25;
```
The addresses of the memory are starting from 1000,then 1004,then 1008 then 1012 ..... so on

To access the value, we can access it by using its name or by using its address
Like when we deliver a parcel then if we know the address of the person's home, we can find it and deliver it
But if we also know the name of the person, then we can also deliver the parcel
### Getting address of variable
If we want to know the address of any variable stored in the memory we use **&(ampersand)** operator;
The ampersand operator is called "Address of" operator
```cpp
cout << x << endl;  // value stored inside X
cout << &x << endl; // value of address of X
```
if we can cout the address then we can also save the addressin another variable so
`address = &x;`
But this will give error as we don't know that what is the datatype of the variable naming address like we stored the value 25 in int datatype
Thats where we say the datatype to store address is "Pointer"
As name suggests it points, but question arises : "Where is it pointing?"
The address will be of variable of certain datatype like int double,char,float e.t.c
So pointer storing the address of the integer datatype will become integer pointer
`int pointer x;`
To avoid difficulty writing the whole pointer word we use asterisk *
`int *address;`
This is now called the Integer Pointer which has name address
- This must must must contain a address
- This must must must contain address of datatype integer

If we want to access the value from the address then we use the * operator
***p** is the follow the pointer which follows the address to get the value

```cpp
#include <iostream>
using namespace std;

int main()
{
    int array[3] = {1, 2, 3}; // declares array

    int p;                // declares integer pointer
    p = &array[0];         // assigns address
    cout << p << endl;     // print address
    cout << p + 1 << endl; // print address

    cout << p << endl; // accesses value and print value
```
If we move the address to the next one,then we can get next value available on that address
To move address we need to move 4 bytes, but if we do +4 it will not be valid because on other systems the chunks can be of different sizes like 2,4,8 e.t.c
So language provided us the basic facility to move address by doing +1 which will increase 4 bytes because it was integer pointer
The type of pointer it is, the number of bytes it will increase
```cpp
    cout << (p + 1) << endl; // print value on address next to it
    cout <<(p + 2) << endl; // print value on address two steps next to it
    // starting address of an array is equal to the address of the array
    cout << &array << endl;    // this will give the starting address
    cout << &array[0] << endl; // this will also give the starting address

}
```

### Null Pointer
The Null pointer is the one pointer which points to nothing, like the address 0. 
But when we reach the address zero the OS blocks our program not giving us access towards that memory location because it was being used by the OS to do some other stuff.

```cpp
int *nullPtr = NULL;
int x = 45;
int *normalPtr = &x;
cout << *normalPtr << endl;
cout << *nullPtr << endl; // this will give error, segmentation fault
```
`*p` means following the pointer, its like going towards a reference. When we go on a reference its existence vanishes as we are standing on that reference so its termed as **de-referencing** and as pointer is deferenced so its called **Pointer Dereferencing**. When we derefence a null pointer its called **NULL Pointer Dereferencing** and it causes and leads to the error.

We set it null in start and after that we assign it some address after some time when we need it. The error happens when we access the value on the null pointer.