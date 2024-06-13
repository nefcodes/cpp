#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <double> temperatures {99.6, 55.4, 27.1};
    double avg_temp {};
    double run_total {};
    
    
    for (auto t: temperatures) {
        run_total = run_total + t;
    }
    
    if (temperatures.size() != 0 ) {
        avg_temp = run_total / temperatures.size();
    }
    
    cout << "Average temperaturs is: " << avg_temp;
    return 0;
}
