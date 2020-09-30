//Favorite Food
//By Cristina Satterfield
#include <iostream>
using namespace std;
int main()
{
  string name;
  string favoriteFood;

  cout << "Please enter your name: " << endl;
  cin >> name;
  cout << "Hello, " << name << ". Nice to see you!\nWhat is your favorite food?\n";
  cin >> favoriteFood;
  cout << "Wow! " << favoriteFood << " is also one of my favorite foods!\n";
  return 0;
}