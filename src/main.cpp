#include <iostream>
#include <vector>
#include "include/linspace.h"
#include "include/degrees.h"
using namespace std;

int main()
{
    cout << "Hello " << endl;

    // Linspace
    vector<double> test = linspace(1.0, 3.0, 10);
    test_linspace(1.0,3.0, 10, test);

    // Test degrees like functions
    test_deg2rad();
    test_rad2deg();
    
    return 0;  
}