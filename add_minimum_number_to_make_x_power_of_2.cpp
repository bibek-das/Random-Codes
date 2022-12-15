#include<bits/stdc++.h>
using namespace std;

bool is_powerof_two(long long x) {
    if (x == 0) return false;
    return (ceil(log2(x)) == floor(log2(x)));
}

long long add_x(long long x) {
    if (is_powerof_two(x)) return 0;
    // minimum number to add in x to make x power of 2
    return (1 << (__lg(x) + 1)) - x;
}

int main() {
    long long x;
    cin >> x;
    cout << add_x(x) << endl;
}
