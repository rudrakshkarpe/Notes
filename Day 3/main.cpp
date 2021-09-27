# include<iostream>
# include<math.h>

using namespace std;

int area_circle(float r);
int area_triangle(float a, float b, float c);

int main()
{
    float a,b,c,r;
    cout<<"Enter the three sides of traingle respectively : ";
    cin>>a>>b>>c;
    cout<<"Enter the Radius of the circle : ";
    cin>>r;
    cout<<"Area of Triangle is : "<<area_triangle(a,b,c)<<endl;
    cout<<"Area of Cirlce is : "<<area_circle(r);

    return 0;
}

int area_circle(float r){
    int area = 3.14*r*r;
    return area;
}
 
int area_triangle(float a,float b,float c){
        
    float s = (a + b + c) / 2;
    float areat = sqrt(s * (s - a) * (s - b) * (s - c));
    return areat;
    
}


