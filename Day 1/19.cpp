# include<iostream>

using namespace std;

int main(){

//     int age;
//     int ageTotal = 0;
//     int numberOfPeopleEntered = 0;

//     cout <<"Enter first persons age or -1 to quite\n";
//     cin >> age;

//     while(age != -1){
//         ageTotal = ageTotal + age;
//         numberOfPeopleEntered++;
//         cout << "Enter next persons age or -1 to quite"<<endl;
//         cin >> age;
//     }
//     cout<<"Number of people entered: "<< numberOfPeopleEntered<<endl;
//     cout<<"Average age: "<< ageTotal/numberOfPeopleEntered<<endl;
//     return 0;
// }
// // central control loop in c++ 
// much more dynamic programming practice

// # include<iostream>

// using namespace std;

// int main(){

    int age;
    int numberofpeople = 0;
    int agetotal = 0;
    cout << "Enter the age of the first person or -1 to quite" << endl;
    cin >> age;

    while(age != -1){
        agetotal = agetotal + age;
        numberofpeople++;
        cout << "Enter next persons age or -1 to quite" << endl;
        cin >> age;
    }
    cout << "The number of participants "<<numberofpeople<<endl;
    cout << "Average age "<<agetotal/numberofpeople<<endl;


    return 0;
}