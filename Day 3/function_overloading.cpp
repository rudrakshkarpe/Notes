#include <iostream>
#include <cmath>
using namespace std;

class Test
{
public:
    float r, area;
    float a, b, c;
    float s = (float)(a + b + c) / 2;

    void input()
    {
        cout << "Enter radius of a circle:";
        cin >> r;
        cout << "Enter the three sides of the triangle\n";
        cin >> a >> b >> c;
    }

    void findArea()
    {
        area = 3.14 * r * r;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void display()
    {
        cout << "Area of circle is:" << area << endl;
        cout << "Area of Trangle=" << area;
    }
};

int main()
{

    Test obj;

    obj.input();
    obj.findArea();
    obj.display();

    return 0;
}


# include<iostream>

using namespace std;

int main(){

   /// this won't work brother, we gotta work man
   //////// here she needs you!

   /// nobody is gonna do that for her 
   // you'll have to do it
   // man 
   // are you ready!
   // develop enough skills to fulfll her dreams paint the walls with the hardwork of yours 
   // make her proud make everyone proud 
   // don't stop until sweat comes out 
   // moscitoes will bite you
   // there will high temprature 
   // your body will be sweating but you gotta work man because there's someone who'sacrificing for if you can't do this 
   // then what do you even want to do  

    return 0;
}