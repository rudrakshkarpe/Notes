//  # include<iostream>
//  # include <cstdlib>
//  # include <ctime>
//  using namespace std;
 
//  int main(){
//      srand(time(0));

//      for(int x =1;x<10;x++) {
//         cout<<1+(rand()%6)<<endl;
//      }
//      return 0;
//  }
 // random number generator
 // srand() function
 // 1 + (ramd()%6)

// cout<< rand();
// for (int x = 1;x<25;x++){
//      cout<<rand()<<endl;
// }

// rand()%6 ---> it'll give the raminders upto 6 only
// 1(rant()%6) ----> to avoid getting the zero
// but! 
// upto here it'll give the same upto
// It's following a certain algorithm

// srand() ------> seed a random number function
// is developed to tackle this and to make change in the agorithm
// include <ctime>
// srand(time(0)); -----> this value is chaging every single from the 1970s so every time we'll be getting a different value 

// thus we generate a truely random number generator

# include<iostream>
# include<cstdlib>
# include<ctime>

using namespace std;

int main(){
    srand(time(0));
    for(int i=1;i<10;i++){
        cout << 1+(rand()%6) <<endl;
    }
    return 0;
}
// that's how we buid the random number generator