# include<iostream>

using namespace std;
                // global variable
int tuna = 69; // it can be accessed globally

int main(){

    int tuna= 20; // local variable; can be accessed in the declared function only
    cout<<:: tuna<<endl; 
    // :: is the unary scope resolution operator
    // usually comes handy in the variables with different datatypes
    // :: is used to call the global varible 
    return 0;
}
