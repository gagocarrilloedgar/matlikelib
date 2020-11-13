#include "include/rotations.h"

double **rotx(double angle)
{
    double **m = 0;
    m = new double *[3];

    for (int h = 0; h < 3; h++)
    {
        m[h] = new double[3];

        for (int w = 0; w < 3; w++)
        {
            // fill in some initial values
            // (filling in zeros would be more logic, but this is just for the example)
            m[h][w] = 0;
        }
    }

    double a11 = 1.0;
    double a22 = cos(angle);
    double a23 = -sin(angle);

    m[0][0] = a11;
    m[1][1] = a22;
    m[2][2] = a22;
    m[1][2] = a23;
    m[2][1] = -a23;

    return m;
}

void test_rotx();
