#include <iostream>
#include <vector>
#include "include/linspace.h"
#include "include/degrees.h"
#include "include/rotations.h"

using namespace std;

int main()
{
    cout << "Hello " << endl;

    // Linspace
    vector<double> test = linspace(1.0, 3.0, 10);
    test_linspace(1.0, 3.0, 10, test);

    // Test degrees like functions
    test_deg2rad();
    test_rad2deg();

    // Arrays
    double** m = rotx(30.0);
    printf("%f \n",m[2][2]);
    return 0;
}