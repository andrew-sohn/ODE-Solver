#define disp(x) std::cout<<(x)<<std::endl;

#include <cmath>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>

#include "rkdp-adaptive.hpp"

#include <chrono>


typedef std::vector<double> state_type;
typedef rkdp_adaptive<state_type> rk4_type;

struct vanderpol
{
    vanderpol(){}
    void operator() (const state_type &x, state_type &dxdt, double t)
    {
        dxdt[0] = x[1]; // dx = y
        dxdt[1] = sin(pow(t,0.2)) * (1-pow(x[0],2))*x[1]-x[0]; // dy = sin(t^0.2) * (1-x^2)*y -x
    }
};

int test3()
{
    auto start = std::chrono::high_resolution_clock::now();

    const double tf = 150;
    double t = 0;
    double dt = 0.001; // step size to begin with
    const double atol = 1e-12;
    const double rtol = 1e-12;
    rk4_type stepper;
    vanderpol system;
    state_type x(2, 1);
    x[0] = 0;
    x[1] = 0.01;
    for (; t<=tf; )
    {
        stepper.do_step(system, x, t, tf, dt, atol, rtol);
    }

    disp("\nDormand-Prince Adaptive");
    std::cout << "At t = " << tf << std::endl;
    std::cout << std::scientific;
    std::cout.precision(12);
    std::cout << "x = " << x[0] << std::endl;
    std::cout << "y = " << x[1] << std::endl;
    std::cout << std::defaultfloat;

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Execution time(ms) : " << duration.count() * 0.001 << std::endl;

    return 0;
}