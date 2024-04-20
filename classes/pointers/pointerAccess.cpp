#include <iostream>
using namespace std;
 // namespace std;

const double pi=3.14;
class Cylinder{
    // class parameters
          double radius{};
          double height{};

    public :
        
            long double volume (){
                return pi*radius*radius*height;
            }
        
};
int main(int argc, char const *argv[])
{
    // instance of the cylinder class 
    Cylinder cylinder1 ;
    cout << cylinder1.volume();
    
    
// stack pointer 
    Cylinder* ptrcylinder1=&cylinder1;

    cout <<ptrcylinder1->volume()<< endl;


    //heap memory allocation 
    Cylinder* c1=new Cylinder;
    //access the member methods
    cout << c1->volume()<<endl;



// free the memory 
delete c1;


return 0;
}


