# include<iostream>

using namespace std;

int main(){

    int age = 178;

    if (age>60){
        cout <<"You are old have some rest"<<endl;
        if(age>100){
            cout << "Too long man!" << endl;
        }
    }
    else{
        cout << "you are young get a job man" << endl;
    }
    return 0;
}

// if (age < 10){
//     cout << "B" << endl;
// }
// else if (age <= 18){
//     cout << "T" << endl;
// }
// else{
//     cout << "OP" << endl;
// }
// }