
// linspace.h
#ifndef LINSPACE_H // include guard
#define LINSPACE_H

#include <vector>
#include <iostream>
#include <assert.h> 

using namespace std;

vector<double> linspace(double start, double ed, int num);

void test_linspace(double start, double ed, int num, const vector<double> &pts);

#endif /* LINSPACE_H */