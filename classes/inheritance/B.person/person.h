#include <iostream>
#include <string>

class Person
{

  // friend std::ostream& operator<< (std::ostream& out , const Person& person);

  // constructor
public:
  Person() = default;
  Person(std::string &first_name_param, std::string &last_name_param)
  {
    first_name = first_name_param;
    last_name = last_name_param;
  }

  // getters
public:
  std::string get_first_name()
  {
    return first_name;
  }
  std::string get_last_name()
  {

    return last_name;
  }

protected:
  std::string first_name{"Mysterious"};
  std::string last_name{"Person"};
};
