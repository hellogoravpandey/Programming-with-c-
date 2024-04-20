#include <iostream>
using namespace std;

template <typename T>
void print ( T n ){

    static_assert(is_integral<T>::value, " integrl value ");
    cout << " n ==="<< n << endl;
}
int main(int argc, char const *argv[])
{
    /* code */

    print(6);
    print (8.666 );
    return 0;
}
