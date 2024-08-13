#include <iostream>

using namespace std;

class Integer {
private:
  int num; // instance variable, every class instance have their own variables

public:
  Integer() { num = 0; }
  void set(int i) { num = i; }

  int get() const { return num; }
};

int main() {
  Integer obj1, obj2;

  obj1.set(4);
  obj2.set(48);

  cout << "val of obj1 : " << obj1.get() << "     val of obj2 : " << obj2.get()
       << endl;
  return 0;
}