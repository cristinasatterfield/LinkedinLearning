//Hello World
/* By Cristina Satterfield */
#include <iostream>
using namespace std;
int main()
{
  // variable for a person's name
  string name;
  cout << "Please enter your name: " << endl;
  /*
  cin stands for console input
  >> is the input operator
  name is the variable in which we are getting data
  */
  cin >> name;
  /*
  cout stands for console output
  << is the output operator
  the output operator is used between different datatypes when outputting them to the console
  endl stands for end line; it will add a new line to the console
  */
  cout << "Hello, " << name << endl;
}