#pragma once

#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

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
class rkdp
{
    public:
    template<typename System>
    void do_step(System &system, state_type &x, time_type t, time_type dt)
    {
        adjust_size(x);
        const value_type one = 1;
        const time_type c[] = {dt/5, dt*3/10, dt*4/5, dt*8/9, dt, dt};
        const time_type b4[] = {dt*35/384,0,dt*500/1113,dt*125/192,-dt*2187/6784,dt*11/84,0};
        // const time_type a[][] = 
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
        algebra::for_each9(x, x, k1, k2, k3, k4, k5, k6, k7, scale_sum8(one, b4[0],b4[1],b4[2],b4[3],b4[4],b4[5],b4[6]) );
    }
    private:
    state_type x_tmp, k1, k2, k3, k4, k5, k6, k7;
    void adjust_size(const state_type &x)
    {
        resize(x, x_tmp);
        resize(x, k1); resize(x, k2);
        resize(x, k3); resize(x, k4);
        resize(x, k5); resize(x, k6);
        resize(x, k7);
    }
};