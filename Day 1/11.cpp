# include<iostream>

using namespace std;

// class RkClass{
//     public: // access specifier
//         void coolSaying(){
//             cout<< "prechin to the choir" << endl;
//         }
// };

// int main(){
//     // there can be multiple functions
//     // object basically tells what class you are working with

//     RkClass rksObject;
//     rksObject.coolSaying();  
    
//     return 0;
// }

// practice

class jio{
    public:
        int calJio(int x, int y){
            int sum = x + y;
            return 0;   // need to check
        }
};

int main(){
    jio jioObeject;
    jioObeject.calJio(5,5);
    return 0;
}