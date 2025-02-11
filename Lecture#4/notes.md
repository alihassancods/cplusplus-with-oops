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