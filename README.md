# ODE-Solver


## Solvers
There are three solvers:
1. Item Classic Runge-Kutta 4th order (src/runge_kutta4.hpp)
2. Item Dormand-Prince with fixed step size (src/rkdp.hpp)
3. Item Dormand-Prince with adaptive step size (src/rkdp-adaptive.hpp)

test1.cpp, test2.cpp and test3.cpp tests each of the solvers mentioned above. The code solves a simple Van der Pol oscillator.



## Credits
The structure of the solvers follow the information provided by the following publication:
"Solving Ordinary Differential Equations on GPUs", Karsten Ahnert, Denis Demidov and Mario Mulansky
http://www.mariomulansky.de/data/uploads/ncwg.pdf
