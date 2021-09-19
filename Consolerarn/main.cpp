#define real double 

#define Imax 10000 

#include <stdio.h> 

#include <math.h> 

int main()

{

    int i;  

    real x, y, yn, yn1, S, mzr;

    for (x = 1; x <= 1.55; x += 0.05)

    {

        yn = 0;

        yn1 = yn;

        for (i = 1; i < Imax; i++)

        {

            S = (powf(-1, i) * powf(x - 1, i)) / i;

            yn += S;

            if (yn == yn1)

            {

                break;

            }

            yn1 += S;

        }

        y = powf(yn1, 2) + 1;

        mzr = powf(S, 2);

        printf_s("\n x= %g", x);

        printf_s(", y= %f", y);

        printf_s(", Number of iteration %d", i);

        printf_s(", m_zero= %e", mzr);

    }

    return 0;

}
 


     
    
     
 