
#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int main()
{
    int g = 3, t = 5;
    int e = sum(g, t);
    cout << "g + t = " << e << endl;
}
