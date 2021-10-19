#include <iostream>
#include <header.hpp>

using namespace std;

Cls::Cls() {
  std::cout << "Cls ctor" << std::endl;
}

Cls::~Cls() {
  cout << "Cls dtor" << endl;
}

double Cls::SayHello() {
  unordered_map<string, double> mymap = {
    { "kenny", 5.4 },
    { "james", 6.1 },
    { "chris", 5.9 } 
  };
  
  cout << mymap["kenny"] << endl;
  return mymap["kenny"];
}


