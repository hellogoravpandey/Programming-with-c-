#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T > 
T maximum (T a , T b){
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;

    return (a>b)? a:b ;
    
}

 int main(int argc, char const *argv[])
 {
    
    int a{10};
    float b{9};
     auto new_var =maximum <long long int>(a,b);   // as b is double a is implicitly ---to float value 
    cout << maximum <int>(a,b)<<endl;   // as b is double b implicitly to int value  
 

    return 0;
 }
 