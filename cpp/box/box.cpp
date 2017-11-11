/*
 * Challenge from Facebook
 *
 * Find the output of the program
 */
#include <stdio>

using namespace std;

struct MyBox
{
    int Length, Breadth, Height;
}

void Dimension(MyBox M)
{
    cout << M.Length << "x" << M.Breadth << "x";
    cout << M.Height << endl;
}

int main()
{
    MyBox B1 = {10, 15, 5}, B2, B3;
    ++B1.Height;
    Dimension(B1);
    B3 = B1;
    ++B3.Breadth;
    Dimension(B3);
    B2 = B3;
    B2.Height += 5;
    B2.Length--;
    Dimension(B2);
    return 0;
}
