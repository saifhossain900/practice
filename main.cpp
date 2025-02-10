#include <iostream>
#include <memory>

using namespace std;

struct custom
{
    int p;
    custom(int q)
    : p(q)
    {

    }
    custom() = default;

};

int main()
{
    int* p = new int(25);
    float* q = new float(75.25);
    custom* var1 = new custom;
    custom* var = new custom(25);
    cout << *p << " " << *q << " " << var -> p;

    return 0;
}
