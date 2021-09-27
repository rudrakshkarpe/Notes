# include<iostream>

using namespace std;

void printNumber(int x){
    cout<<"An integer "<<x<<endl;
}
void printNumber(float x)
{
    cout << "A float " << x << endl;
}
int main(){

    int a = 54;
    float b = 32.54765;

    printNumber(a);
    printNumber(b);

    return 0;
}
// you can create multiple functiom with similar names for different datatypes
