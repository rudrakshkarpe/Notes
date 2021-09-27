#include <iostream>
#include <string>

using namespace std;

class Rkclass
{                           // constructors are pretty much like functions that gets called automatically
    public:
        Rkclass(string z){  // constructors never have return type
                            // constructor name is always same as classname
                            // constructor gets called automatically as soon as you create the object
            setName(z);

        }

    public:
        void setName(string x)
        {
            name = x;
        }
        // method and function are basically same things
        string getName()
        {
            return name;
        }

    private:
        string name;
};

int main()
{
    Rkclass bo("Lucky RK!\n");
    cout << bo.getName();

    Rkclass bo2 ("Let's do it!");
    cout<< bo2.getName();
    return 0;
}