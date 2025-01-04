#include<iostream>
using namespace std;

int add(int n1, int n2, int n3, int n4);

int main(){
int a=3,b=5,c=7,d=8;
int sum = add(a,b,c,d);
cout << "The sum is " << sum << endl;

}
int add(int n1, int n2, int n3, int n4){
    return n1+n2+n3+n4;
}