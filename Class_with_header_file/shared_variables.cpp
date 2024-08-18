// ---------------------- SHARED VARIABLES IN CLASSES --------------------

#include <iostream>
using namespace std;

class Integer {
private:
  int num;
  static int shared; // declared static variable

public:
  Integer() { num = 0; }
  void set(int i) { num = i; }
  int get() const { return num; }
  int getShared() const { return shared; }
  void bump() { shared++; }
};

// initialized all static variable to 0; OUTSIDE OF CLASS
int Integer::shared = 0;

int main() {
  Integer obj1, obj2;

  cout << "The Shared Var in obj1 is: " << obj1.getShared() << ", " << "The Shared Var in obj2 is: "<< 
  obj2.getShared() << endl;

  return 0;
}
