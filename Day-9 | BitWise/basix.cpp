#include <bits/stdc++.h>

using namespace std;

typedef unsigned int qbyte;

// cus i'm lazy
void disp(qbyte a, qbyte b, qbyte res, string opr)
{
    cout << a << opr << b << " = " << res << "\n\n";
}

int main(void)
{

    qbyte a, b, res;

    a = 3;
    b = 7;

    // bitwise AND. [Both bits should be set.]
    res = a & b;
    disp(a, b, res, " & ");

    // bitwise OR. [Either of the bits should be set]
    res = a | b;
    disp(a, b, res, " | ");

    // bitwise XOR [Only one of the bits should be set / Both the bits should be different]
    res = a ^ b;
    disp(a, b, res, " ^ ");

    // Imp XOR Property. A ^ A ^ A = A | 0 ^ A = A
    res = a ^ a ^ a;
    disp(a,a, res, " ^ ");
    
    return 0;
}