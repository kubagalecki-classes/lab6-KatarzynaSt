#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>
#include <string>
#include <type_traits>
#include <vector>

using namespace std;
int main()
{
    string l;
    cin >> l;

    auto it  = adjacent_find(l.begin(), l.end());
    auto it1 = adjacent_find(l.begin(), l.end());

    if (it == l.begin()) {
        it1 = l.begin() + 1;
        if (it1 = it) {
            return 0;
        }
        else {
            return 1;
        }
    }
}