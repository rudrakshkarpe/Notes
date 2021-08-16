# include<iostream>
# include<string>

using namespace std;
// bad programmin practice to use puclic variables from the classes

// class Rkclass{
//     public:
//         string name;

// };

// int main(){

//     Rkclass obj;
//     obj.name = "Rudraksh Karpe";
//     cout << obj.name;    
//     return 0;
// }

// In order to access the private varibles we can create 
// pubic functions in the class
// the good programming practice.....

class Rkclass
{
    public:
        void setName(string x){
            name = x; 
        }
        // method and function are basically same things
        string getName(){
            return name;
        }
    private:
        string name;
};

int main()
{
    Rkclass obj; 
    obj.setName("Rudraksh Karpe");
    cout << obj.getName();   
    return 0;

}



