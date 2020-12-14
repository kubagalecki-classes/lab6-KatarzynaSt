#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <numeric>
#include <vector>
using namespace std;

vector< char > foo(list< Human >& people)
{
    vector< char > ret_v;

    std::for_each(people.rbegin(), people.rend(), [](Human& i){
        i.birthday();}

    std::transform(people.rbegin(), people.rend(), ret_v.begin(), [](Human& it)
     if (it->isMonster() == true)
     {
        return 'n';
     }
     else {
        return 'y'; }

    return {ret_v};
}