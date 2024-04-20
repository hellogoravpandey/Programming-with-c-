#include <iostream>
#include <vector>


struct vertex
{
    float x,y,z;  // 24 bytes
};
int main(int argc, char const *argv[])
{
      std::vector<vertex> vertices;
      vertices.push_back({1,2,3});  // time complexity o(n)
      vertices.push_back({4,5,6});
      vertices.push_back({7,8,9});
    //   std::cout << vertices << std::endl; // including this will output nos of errors
      std::cout << &vertices[0]<<std::endl;

    return 0;
}
