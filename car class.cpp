#include <iostream>

using namespace std;

struct Car {
  string name;
  int year;
  string color;
  double weight;

  void setName(string n) {
    name = n;
  }

  string getName() {
    return name;
  }

  void setYear(int y) {
    year = y;
  }

  int getYear() {
    return year;
  }

  void setColor(string c) {
    color = c;
  }

  string getColor() {
    return color;
  }

  void setWeight(double w) {
    weight = w;
  }

  double getWeight() {
    return weight;
  }
};

int main() {
  string answer;
  Car c1, c2;

  cout << "Before starting please input the charactaristics for each car" << endl;

  cout << "First car:" << endl;
  cout << "Name: ";
  cin >> c1.name;
  cout << "Year: ";
  cin >> c1.year;
  cout << "Color: ";
  cin >> c1.color;
  cout << "Weight: ";
  cin >> c1.weight;

  cout << "Second car:" << endl;
  cout << "Name: ";
  cin >> c2.name;
  cout << "Year: ";
  cin >> c2.year;
  cout << "Color: ";
  cin >> c2.color;
  cout << "Weight: ";
  cin >> c2.weight;

  cout << "Would you like to check the characteristics of the first car? (yes/no): ";
  cin >> answer;

  if (answer == "yes" || answer == "Yes") {
    cout << "Car 1:" << endl;
    cout << "  Name: " << c1.getName() << endl;
    cout << "  Year: " << c1.getYear() << endl;
    cout << "  Color: " << c1.getColor() << endl;
    cout << "  Weight: " << c1.getWeight() << endl;
  } else {
    cout << "Hmm..." << endl;
  }

  cout << "Would you like to view the next car? (yes/no): ";
  cin >> answer;

  if (answer == "yes" || answer == "Yes") {
    cout << "Car 2:" << endl;
    cout << "  Name: " << c2.getName() << endl;
    cout << "  Year: " << c2.getYear() << endl;
    cout << "  Color: " << c2.getColor() << endl;
    cout << "  Weight: " << c2.getWeight() << endl;
  } else {
    cout << "Have a lovely day!" << endl;
  }

  cout << "Thank you for using our program!" << endl;

  return 0;
}
