# include<iostream>

using namespace std;
// default values in the function
// we can provide the default values for the function while protoyping the function
// when no value will be provided the as an input the default values will be used
int volume(int l=1, int w=1, int h=1);

int main(){
    cout<< volume(5,6); // single value will be considered for the first parameter and respectively...
    return 0;
}

int volume(int l, int w, int h){
    return l*w*h;
}