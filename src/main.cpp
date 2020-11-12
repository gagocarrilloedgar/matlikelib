#include <iostream>
#include <vector>
#include "include/linspace.h"
using namespace std;

int main()
{
    cout << "Hello " << endl;

    // Linspace
    vector<double> test = linspace(1.0, 3.0, 10);
    test_linspace(1.0,3.0, 10, test);

    
    return 0;  
}