#define disp(x) std::cout<<(x)<<std::endl;

#include <cmath>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include "runge_kutta4.hpp"

#include <chrono>


typedef std::vector<double> state_type;
typedef runge_kutta4<state_type> rk4_type;

struct vanderpol
{
    vanderpol(){}
    void operator() (const state_type &x, state_type &dxdt, double t)
    {
        dxdt[0] = x[1];
        dxdt[1] = sin(pow(t,0.2)) * (1-pow(x[0],2))*x[1]-x[0];
    }
};

int test1()
{
    auto start = std::chrono::high_resolution_clock::now();

    const double tf = 150;
    const double dt = 0.001;
    const int steps = tf/dt;
    rk4_type stepper;
    vanderpol system;
    state_type x(2, 1);
    x[0] = 0;
    x[1] = 0.01;
    for (size_t n = 0; n < steps; ++n)
    {
        stepper.do_step(system, x, n*dt, dt);
    }
    disp("\nRunge-Kutta 4th order");
    std::cout << "At t = " << tf << std::endl;
    std::cout << std::scientific;
    std::cout.precision(8);
    std::cout << "x = " << x[0] << std::endl;
    std::cout << "y = " << x[1] << std::endl;
    std::cout << std::defaultfloat;

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Execution time(ms) : " << duration.count() * 0.001 << std::endl;

    return 0;
}