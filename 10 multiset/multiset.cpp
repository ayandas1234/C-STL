#include<bits/stdc++.h>
using namespace std;

// https://iq.opengenus.org/remove-elements-from-multiset-in-cpp-stl/

void explainmultiset(){
    //multiset also stores element as sorted order but it stores also duplicates

    multiset<int> ms;

    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // find function return the element address that's why olny a single 1 erased

    // if we want to delete particulary selected element which is more than one elemment then the syntax will be
    // ms.erase(ms.find(1) , ms.find(1) + 2);
}

int main(){
    explainmultiset();
    return 0;
}

// rest of the function are all same as set