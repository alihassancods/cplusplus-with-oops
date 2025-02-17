#include<iostream>
using namespace std;
int main(){
    int a[5] = {100,200,300,400,500};
    int *pointer = &a[0];

    for ( int i=0;i<=5;i++){
        cout << "The address of og a[0] is " << pointer << " And the value is " << *pointer << " After adding " << i << endl;        
        pointer = pointer + i;
    }


}