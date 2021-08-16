# include<iostream>

using namespace std;

int main(){

    int a; // declaring a varible
    int b;
    int sum;

    cout << "Enter a Number\n";
    cin >>a; 
    // >> ---> stream extraction operator
    cout << "Enter another Number\n";
    cin>>b;
    sum = a +b;
    cout<<"Sum of the both the Numbers is: "<< sum <<endl;
    
    return 0;
}