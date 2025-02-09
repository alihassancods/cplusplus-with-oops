## Arrays
When variables are declared then the space in the RAM is allocated like 4 chunks to the int variable. Two Values cannot be stored inside the chunk so we need to store the other value in another place.
But what if we want to store the related data and access it using a single method or name rather than creating 1000 variables and remembering each variable's name.
We use arrays. 
Array is a collection of the homogeneous values stored in contiguous locations.
Continguous means these are side by side to each other in the locations.
Like if 'A' is in x01 then 'B' will be in x02 and 'C' will be in x03.
```cpp
int arr[5] = {1,2,3,4,5};
// datatype name[size] = {members};
//            indexes = 0,1,2,3,4

for (int i=0; i<5; i++){
    cout << a[i] << endl;
}
```
Its just more common to use just < sign with the size of array.
The for loop is used more with accessing the elements in array, otherwise any kind of loop can be used in this loop.
The difference between List and Array is that the List in Python was just a hetrogeneous collection of the data.

## 2 Dimensional Arrays
The 2 dimensional arrays have the multiple rows and we can also say it has columns as well.
```cpp
int a[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
// datatype a[rows][columns] = {elements};
for (int i=0; i<3; i++){
   for (int j=0; j<3; j++){
    cout << a[i][j] << endl;
    }
}

```
The two dimensional arrays or any array size is defined in square brackets which is constant number. 
The variables inside the square brackets would be like invalid, because the creator of c++ made this like this.

## Character Arrays

The group of characters is called the string. So the array of characters will be called the arrays.

```cpp
char a[] = "Hello";
cout << a << endl;
for (int i=0; i<6; i++){
    cout << a[i] << endl;
}
```
The cout statement is intelligent enough so that it can easily check for the null character and print the string itself.
The string ends with \0 which is NULL Character and this isn't displayed anywhere but plays the role in the string ending.
The Hello will be H,e,l,l,o,\0
We have a shortcut to avoid writing the char a[] which is a new datatype **string**
The string is same as the char a[] and we can use the manipulation on it too.

```cpp
string a = "Hello";
cout << a.length() << endl;
cout << a.empty() << endl; // this checks that if the string is empty or not?
```

## Struct in C++
When we use the arrays, we must have to store the homogeneous data but for storing the heterogeneous data we use the structures. The **struct** keyword is used when defining a structure. We define the structure of data we want to store inside it and then use it as datatype to define variables.

```cpp
struct structName{
    int basicInteger;
    string varString;
    float varFloat;
};
structName oneStruct;
structName billionStructs[];

oneStruct.basicInteger = 45;
oneStruct.varString = "test string";
oneStruct.varFloat = 4.5;
```

We use structs to store the heterogeneous data.