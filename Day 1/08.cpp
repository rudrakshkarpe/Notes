# include<iostream>

using namespace std;

void printSomething(); // function prototyping

// computer program to works from the top-->bottom
// need to create a new function above before main function
// to skip it you can use function prototyping 
// void/int are return types of the function
int main(){

    printSomething(); // calling a function
    return 0;
}

// void is used when nothing is exprected to
// be returned from the function

void printSomething()
{
    cout << "I am a text working all fine" << endl;
}