#pragma once

#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

#include <chrono>

template<class state_type>
void resize(const state_type &in, state_type &out)
{
    out.resize(in.size());
}

struct container_algebra
{
    template<class S1, class S2, class S3, class Op>
    static void for_each3(S1 &s1, S2 &s2, S3 &s3, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n]);}
    }

    template<class S1, class S2, class S3, class S4, class Op>
    static void for_each4(S1 &s1, S2 &s2, S3 &s3, S4 &s4, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n], s4[n]);}
    }

    template<class S1, class S2, class S3, class S4, class S5, class Op>
    static void for_each5(S1 &s1, S2 &s2, S3 &s3, S4 &s4, S5 &s5, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n], s4[n], s5[n]);}
    }

    template<class S1, class S2, class S3, class S4, class S5, class S6, class Op>
    static void for_each6(S1 &s1, S2 &s2, S3 &s3, S4 &s4, S5 &s5, S6 &s6, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n], s4[n], s5[n], s6[n]);}
    }

    template<class S1, class S2, class S3, class S4, class S5, class S6, class S7, class Op>
    static void for_each7(S1 &s1, S2 &s2, S3 &s3, S4 &s4, S5 &s5, S6 &s6, S7 &s7, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n], s4[n], s5[n], s6[n], s7[n]);}
    }

    template<class S1, class S2, class S3, class S4, class S5, class S6, class S7, class S8, class Op>
    static void for_each8(S1 &s1, S2 &s2, S3 &s3, S4 &s4, S5 &s5, S6 &s6, S7 &s7, S8 &s8, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n], s4[n], s5[n], s6[n], s7[n], s8[n]);}
    }

    template<class S1, class S2, class S3, class S4, class S5, class S6, class S7, class S8, class S9, class Op>
    static void for_each9(S1 &s1, S2 &s2, S3 &s3, S4 &s4, S5 &s5, S6 &s6, S7 &s7, S8 &s8, S9 &s9, Op op)
    {
        const size_t dim = s1.size();
        for(size_t n = 0; n < dim; ++n)
        {op(s1[n], s2[n], s3[n], s4[n], s5[n], s6[n], s7[n], s8[n], s9[n]);}
    }
};

struct default_operations
{
    template<class Fac1 = double, class Fac2 = Fac1>
    struct scale_sum2
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        scale_sum2(Fac1 alpha1, Fac2 alpha2)
            : alpha1(alpha1), alpha2(alpha2) {}
        template<class T0, class T1, class T2>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2) const
        {
            t0 = alpha1 * t1 + alpha2 * t2;
        }
    };

    template<class Fac1 = double, class Fac2 = Fac1, class Fac3 = Fac2>
    struct scale_sum3
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        const Fac3 alpha3;
        scale_sum3(Fac1 alpha1, Fac2 alpha2, Fac3 alpha3)
            : alpha1(alpha1), alpha2(alpha2), alpha3(alpha3) {}
        template<class T0, class T1, class T2, class T3>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2, const T3 &t3) const
        {
            t0 = alpha1 * t1 + alpha2 * t2 + alpha3 * t3;
        }
    };

    template<class Fac1 = double, class Fac2 = Fac1, class Fac3 = Fac2, class Fac4 = Fac3>
    struct scale_sum4
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        const Fac3 alpha3;
        const Fac4 alpha4;
        scale_sum4(Fac1 alpha1, Fac2 alpha2, Fac3 alpha3, Fac4 alpha4)
            : alpha1(alpha1), alpha2(alpha2), alpha3(alpha3), alpha4(alpha4) {}
        template<class T0, class T1, class T2, class T3, class T4>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2, const T3 &t3, const T4 &t4) const
        {
            t0 = alpha1 * t1 + alpha2 * t2 + alpha3 * t3 + alpha4 * t4;
        }
    };

    template<class Fac1 = double, class Fac2 = Fac1, class Fac3 = Fac2, class Fac4 = Fac3, class Fac5 = Fac4>
    struct scale_sum5
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        const Fac3 alpha3;
        const Fac4 alpha4;
        const Fac5 alpha5;
        scale_sum5(Fac1 alpha1, Fac2 alpha2, Fac3 alpha3, Fac4 alpha4, Fac5 alpha5)
            : alpha1(alpha1), alpha2(alpha2), alpha3(alpha3), alpha4(alpha4), alpha5(alpha5) {}
        template<class T0, class T1, class T2, class T3, class T4, class T5>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2, const T3 &t3, const T4 &t4, const T5 &t5) const
        {
            t0 = alpha1 * t1 + alpha2 * t2 + alpha3 * t3 + alpha4 * t4 + alpha5 * t5;
        }
    };

    template<class Fac1 = double, class Fac2 = Fac1, class Fac3 = Fac2, class Fac4 = Fac3, class Fac5 = Fac4, class Fac6 = Fac5>
    struct scale_sum6
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        const Fac3 alpha3;
        const Fac4 alpha4;
        const Fac5 alpha5;
        const Fac6 alpha6;
        scale_sum6(Fac1 alpha1, Fac2 alpha2, Fac3 alpha3, Fac4 alpha4, Fac5 alpha5, Fac6 alpha6)
            : alpha1(alpha1), alpha2(alpha2), alpha3(alpha3), alpha4(alpha4), alpha5(alpha5), alpha6(alpha6) {}
        template<class T0, class T1, class T2, class T3, class T4, class T5, class T6>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2, const T3 &t3, const T4 &t4, const T5 &t5, const T6 &t6) const
        {
            t0 = alpha1*t1 + alpha2*t2 + alpha3*t3 + alpha4*t4 + alpha5*t5 + alpha6*t6;
        }
    };

    template<class Fac1 = double, class Fac2 = Fac1, class Fac3 = Fac2, class Fac4 = Fac3, class Fac5 = Fac4, class Fac6 = Fac5, class Fac7 = Fac6>
    struct scale_sum7
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        const Fac3 alpha3;
        const Fac4 alpha4;
        const Fac5 alpha5;
        const Fac6 alpha6;
        const Fac7 alpha7;
        scale_sum7(Fac1 alpha1, Fac2 alpha2, Fac3 alpha3, Fac4 alpha4, Fac5 alpha5, Fac6 alpha6, Fac7 alpha7)
            : alpha1(alpha1), alpha2(alpha2), alpha3(alpha3), alpha4(alpha4), alpha5(alpha5), alpha6(alpha6), alpha7(alpha7) {}
        template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2, const T3 &t3, const T4 &t4, const T5 &t5, const T6 &t6, const T7 &t7) const
        {
            t0 = alpha1*t1 + alpha2*t2 + alpha3*t3 + alpha4*t4 + alpha5*t5 + alpha6*t6 + alpha7*t7;
        }
    };

    template<class Fac1 = double, class Fac2 = Fac1, class Fac3 = Fac2, class Fac4 = Fac3, class Fac5 = Fac4, class Fac6 = Fac5, class Fac7 = Fac6, class Fac8 = Fac7>
    struct scale_sum8
    {
        typedef void result_type;
        const Fac1 alpha1;
        const Fac2 alpha2;
        const Fac3 alpha3;
        const Fac4 alpha4;
        const Fac5 alpha5;
        const Fac6 alpha6;
        const Fac7 alpha7;
        const Fac8 alpha8;
        scale_sum8(Fac1 alpha1, Fac2 alpha2, Fac3 alpha3, Fac4 alpha4, Fac5 alpha5, Fac6 alpha6, Fac7 alpha7, Fac8 alpha8)
            : alpha1(alpha1), alpha2(alpha2), alpha3(alpha3), alpha4(alpha4), alpha5(alpha5), alpha6(alpha6), alpha7(alpha7), alpha8(alpha8) {}
        template<class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8>
        void operator() (T0 &t0, const T1 &t1, const T2 &t2, const T3 &t3, const T4 &t4, const T5 &t5, const T6 &t6, const T7 &t7, const T8 &t8) const
        {
            t0 = alpha1*t1 + alpha2*t2 + alpha3*t3 + alpha4*t4 + alpha5*t5 + alpha6*t6 + alpha7*t7 + alpha8*t8;
        }
    };

};


template<class state_type, 
    class value_type = double,
    class time_type = value_type,
    class algebra = container_algebra,
    class operations = default_operations>
class rkdp_adaptive
{
    public:
    template<typename System>
    void do_step(System &system, state_type &x, time_type &t, time_type tf, time_type &dt, value_type atol = 1e-6, value_type rtol = 1e-3)
    {
        adjust_size(x);

        if ((t+dt) > tf)
        {
            dt = tf-t; // prevent t going beyond tf on the last iteration
        }

        const value_type one = 1;
        const time_type c[] = {dt/5, dt*3/10, dt*4/5, dt*8/9, dt, dt};
        const time_type b4[] = {dt*35/384,0,dt*500/1113,dt*125/192,-dt*2187/6784,dt*11/84,0};
        const time_type b5[] = {dt*5179/57600,0,dt*7571/16695,dt*393/640,-dt*92097/339200,dt*187/2100,dt*1/40};
        typedef typename operations::template scale_sum2<value_type, time_type> scale_sum2;
        typedef typename operations::template scale_sum3<value_type, time_type, time_type> scale_sum3;
        typedef typename operations::template scale_sum4<value_type, time_type, time_type,time_type> scale_sum4;
        typedef typename operations::template scale_sum5<value_type, time_type, time_type,time_type, time_type> scale_sum5;
        typedef typename operations::template scale_sum6<value_type, time_type, time_type,time_type, time_type, time_type> scale_sum6;
        typedef typename operations::template scale_sum7<value_type, time_type, time_type,time_type, time_type, time_type, time_type> scale_sum7;
        typedef typename operations::template scale_sum8<value_type, time_type, time_type,time_type, time_type, time_type, time_type, time_type> scale_sum8;
        system(x, k1, t);
        algebra::for_each3(x_tmp, x, k1, scale_sum2(one, dt/5));
        system(x_tmp, k2, t + c[0]);
        algebra::for_each4(x_tmp, x, k1, k2, scale_sum3(one, dt*3/40, dt*9/40));
        system(x_tmp, k3, t + c[1]);
        algebra::for_each5(x_tmp, x, k1, k2, k3, scale_sum4(one, dt*44/45, -dt*56/15, dt*32/9));
        system(x_tmp, k4, t + c[2]);
        algebra::for_each6(x_tmp, x, k1, k2, k3, k4, scale_sum5(one, dt*19372/6561, -dt*25360/2187, dt*64448/6561, -dt*212/729));
        system(x_tmp, k5, t + c[3]);
        algebra::for_each7(x_tmp, x, k1, k2, k3, k4, k5, scale_sum6(one, dt*9017/3168, -dt*355/33, dt*46732/5247, dt*49/176, -dt*5103/18656));
        system(x_tmp, k6, t + c[4]);
        algebra::for_each8(x_tmp, x, k1, k2, k3, k4, k5, k6, scale_sum7(one, dt*35/384, 0, dt*500/1113, dt*125/192, -dt*2187/6784, dt*11/84));
        system(x_tmp, k7, t + c[5]);
        //algebra::for_each9(x, x, k1, k2, k3, k4, k5, k6, k7, scale_sum8(one, b4[0],b4[1],b4[2],b4[3],b4[4],b4[5],b4[6]) );

        //error eval
        algebra::for_each9(x4, x, k1, k2, k3, k4, k5, k6, k7, scale_sum8(one, b4[0],b4[1],b4[2],b4[3],b4[4],b4[5],b4[6]) );
        algebra::for_each9(x5, x, k1, k2, k3, k4, k5, k6, k7, scale_sum8(one, b5[0],b5[1],b5[2],b5[3],b5[4],b5[5],b5[6]) );

        const int x_size = int(x.size());
        value_type err = 0;
        value_type errArray[x_size];
        value_type tol;
        /*
        value_type fac = pow(0.25,0.2);

        for (int i = 0; i < x_size; i++)
        {
            tol = atol + max(x4[i], prev_x[i])*rtol;
            err += pow(((x4[i]-x5[i])/tol),2);
        }
        err = pow(err/x_size, 0.5);
        if (err <= 1)
        {
            // error below tolerance
            x = prev_x = x5;
            t += dt;
        }
        else if (err < 1e-2)
        {
            // adjust step size
            dt = 5*dt;
        }
        else
        {
            // adjust step size
            dt = fac*dt*pow((1/err),0.2);
        }
        */
        value_type fac = pow(0.25,0.2);
        for (int i = 0; i < x_size; i++)
        {
            if (t==0) prev_x[i] = x5[i];
            //tol = atol + min(x5[i], prev_x[i])*rtol;
            tol = min(atol, abs(min(x5[i], prev_x[i]))*rtol);

            // std::cout << "tol: " << tol << std::endl;
            errArray[i] = pow((x4[i]-x5[i])/tol ,2);
            // std::cout << "x4[i]-x5[i] : " << x4[i]-x5[i] << std::endl;
            // std::cout << "(x4[i]-x5[i])/tol : " << (x4[i]-x5[i])/tol << std::endl;
        }

        err = *(std::max_element(errArray, errArray+x_size));
        err = pow(err, 0.5);

        // std::cout << "dt : " << dt << std::endl;
        // std::cout << "t : " << t << std::endl;
        // std::cout << "err : " << err << "\n" << std::endl;
        
        if (err < 0.2)
        {
            // adjust step size, stll move on cuz error below tolerance
            x = prev_x = x5;
            t += dt;
            dt = 3*dt;
        }
        else if (err <= 1)
        {
            // error below tolerance
            x = prev_x = x5;
            t += dt;
        }
        else
        {
            // adjust step size
            dt = fac*dt/pow(err,0.2);
        }

        if (t == tf) 
        {
            t+=1; // to meet end condition
        }
    }
    private:
    state_type x_tmp, k1, k2, k3, k4, k5, k6, k7;
    state_type x4;
    state_type x5;
    state_type prev_x; // previous result
    void adjust_size(const state_type &x)
    {
        resize(x, x_tmp);
        resize(x, k1); resize(x, k2);
        resize(x, k3); resize(x, k4);
        resize(x, k5); resize(x, k6);
        resize(x, k7); resize(x, x4);
        resize(x, x5); resize(x, prev_x);
    }
    value_type max(value_type a, value_type b)
    {
        if (a>=b) return a;
        else return b;
    }
    value_type min(value_type a, value_type b)
    {
        if (a>=b) return b;
        else return a;
    }
    value_type abs(value_type a)
    {
        return pow(pow(a,2), 0.5);
    }
};