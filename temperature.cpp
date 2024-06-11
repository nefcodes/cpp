// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    double temp;
    char unit;
    
    std::cout << "** this is a temperature program **\n";
    std::cout <<"select your unit F or C: \n";
    std::cin >> unit;
    
    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in celcus: ";
        std::cin >> temp;
        
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in kelvin: ";
        std::cin >> temp;
        
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else {
        std::cout << "please enter a valid value. \n";
    }
    
    std::cout << "**********";
    
    return 0;
}
