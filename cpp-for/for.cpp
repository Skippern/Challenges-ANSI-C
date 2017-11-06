/*
 * Challenge from Facebook
 *
 * What is the output of this program?
 *
 * [A] 543
 * [B] 54
 * [C] 5
 * [D] NULL
 */
#include <iostream>
using namespace std;
int main() {
    int n;
    for (n=5;n>0;n--) {
        cout<<n;
        if (n==3)
            break;
    }
    return 0;
}
