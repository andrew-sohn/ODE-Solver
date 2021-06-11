# ODE-Solver


## Solvers
There are three solvers:
1. Classical Runge-Kutta 4th order    ([src/runge_kutta4.hpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/runge_kutta4.hpp))
2. Dormand-Prince with fixed step size    ([src/rkdp.hpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/rkdp.hpp))
3. Dormand-Prince with adaptive step size    ([src/rkdp-adaptive.hpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/rkdp-adaptive.hpp))

[test1.cpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/test1.cpp), [test2.cpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/test2.cpp) and [test3.cpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/test3.cpp) tests each of the solvers mentioned above. The code solves a simple Van der Pol oscillator.


## Misc
Three header files listed above are solvers and they can be set up like shown in [test1.cpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/test1.cpp), [test2.cpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/test2.cpp) and [test3.cpp](https://github.com/andrew-sohn/ODE-Solver/blob/main/src/test3.cpp) files.
These codes does not require any external libraries.


## Credits
The structure of the solvers follow the information provided by the following publication:

*"Solving Ordinary Differential Equations on GPUs", Karsten Ahnert, Denis Demidov and Mario Mulansky*
http://www.mariomulansky.de/data/uploads/ncwg.pdf
https://www.researchgate.net/publication/303728047_Solving_ordinary_differential_equations_on_GPUs
