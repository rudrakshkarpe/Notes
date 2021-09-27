# include<iostream>

using namespace std;

class Rudraksh{
    public:
    int market(int x){
        int money;
        cin>>money;
        cout<<money + x;
        return 0;
    }

};


int main(){
    Rudraksh obj;
    obj.market(1);
    return 0;
}