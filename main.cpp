//
//  main.cpp
//  assigment2.cpp
//
//  Created by Anthony Trejo on 3/23/23.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    // insert code here...
    double resistance1 = 0;
    double resistance2 = 0;
    std::cout << "Welcome to the Resistor Calculation Program!!!\n";
    std::cout << "Please enter your two reasistances\n";
    std::cin >> resistance1 >> resistance2;
    std::cout << "Thank you! You've entered " << resistance1 << " ohms and " << resistance2 << " ohms. Calculating...\n";
    std::cout << "Done.\n";
    int series = resistance1 + resistance2;
    double para = 1/((1/resistance1)+(1/resistance2));
    std::cout << "If your resistors are placed in series, they'll total " << series << " ohms. ";
    std::cout << "If they are placed in parallel, they'll total " << para << " ohms.";
    return 0;
}
