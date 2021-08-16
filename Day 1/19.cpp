# include<iostream>

using namespace std;

int main(){

    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout <<"Enter first persons age or -1 to quite\n";
    cin >> age;

    while(age != -1){
        ageTotal = ageTotal + age;
        numberOfPeopleEntered++;
        cout << "Enter next persons age or -1 to quite"<<endl;
        cin >> age;
    }
    cout<<"Number of people entered: "<< numberOfPeopleEntered<<endl;
    cout<<"Average age: "<< ageTotal/numberOfPeopleEntered<<endl;
    return 0;
}
// central control loop in c++ 
// much more dynamic programming practice
