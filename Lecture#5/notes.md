# Pointers - 2

## Structs with Pointers

When we defined a struct and a pointer to store its address then its obviously more efficient to carry the address instead of carrying and processing the whole struct.
So we made the pointer by doing this
`Student *student_pointer = &student1;`
To assign value to the struct in its attributes we will access the value of pointer and we will assign the value
For that we do like 
`(*student_pointer).name = "Ali hassan"`
We have used the brackets because the dot operator has more preference than * so we use the brackets.
If we write just student_pointer.name then it will not work because the pointer itself is just address and no attributes, so we first access the pointer to get struct and then deal with attributes.
So for our ease, use the -> sign to access and assign the attributes of struct which works similiar to the syntax written above.
`student_pointer -> name = "Ali hassan"`

If we want to create new instance of the student datatype, the we will use the **new** keyword. This new keyword will allocate the memory and will return its address. We can store this address in the pointer. This will have the address but will have no name. 
`student_pointer = new student`
The new keyword takes the datatype next to it to allocate a chunk to it.

After allocating the chunk we should also deallocate it because its a best practice. We use the **delete** keyword to deallocate it.
The delete keyword deallocates the memory, takes the pointer and the value becomes the garbage value for the other programs;
`delete student_pointer;`

