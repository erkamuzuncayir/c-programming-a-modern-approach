//
// Created by erkam on 3/15/25.
//

#define N = 10                  // Blank line
#define INC(x) x+1              // Blank line
#define SUB (x,y) x-y           // Blank line
#define SQR(x) ((x)*(x))        // Blank line
#define CUBE(x) (SQR(x)*(x))    // Blank line
#define M1(x,y) x##y            // Blank line
#define M2(x, y) #x #y          // Blank line

int main(void)
{
    int a[N], i, j, k, m;       // Syntax error
#ifdef N                        // Blank line
    i = j;
#else                           // Blank line
    j = i;                      // Blank line
#endif                          // Blank line
    i = 10 * j+1;
    i = (x,y) x-y(j, k);        // Syntax error
    i = ((((j)*(j)))*(((j)*(j))));
    i = (((j)*(j))*(j));
    i = jk;                     // Undefined variable
#undef SQR                      // Blank line
    i = SQR(j);
#define SQR                     // Blank line
    i = j;
    return 0;
}