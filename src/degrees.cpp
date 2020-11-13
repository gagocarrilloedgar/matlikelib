#include "include/degrees.h"

double rad2deg(double num)
{
    return num*180/pi;
}


void test_rad2deg()
{
    double a = pi;
    double a_result = 180.0;

    double result = rad2deg(a);

    assert(result - a_result < epsilon);
}


double deg2rad(double num)
{
    return num*pi/180.0;
}

void test_deg2rad()
{
    double a = 0.0;
    double a_result = 0.0;

    double result = deg2rad(a);

    assert(result == a_result);

    double a_2 = 90.0;
    double a2_result = pi/2;
    double result2 = deg2rad(a_2);
    assert(result2-a2_result < epsilon);
}
