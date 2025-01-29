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