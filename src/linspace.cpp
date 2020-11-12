#include "include/linspace.h"

vector<double> linspace(double start, double ed, int num) {
    // catch rarely, throw often
    if (num < 2) {
        throw new exception();
    }
    int partitions = num - 1;
    vector<double> pts;
    // length of each segment    
    double length = (ed - start) / partitions; 
    // first, not to change
    pts.push_back(start);
    for (int i = 1; i < num - 1; i ++) {
        pts.push_back(start + i * length);
    }
    // last, not to change
    pts.push_back(ed);
    return pts;
}
void test_linspace(double start, double ed, int num, const vector<double> &pts) {
    // test output vector size
    assert(num == pts.size());
    
    // test first element    
    assert(start == pts[0]);

    // test last element
    assert(ed == pts[num - 1]);
    
}

