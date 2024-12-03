#include<bits/stdc++.h>
using namespace std;

void explainvector(){
    
    vector <int> v;
    v.push_back(10);
    v.emplace_back(30);
    v.emplace_back(40);

    cout << v[0]  << "\n";

    cout << v[1]  << "\n";

    cout << v.at(2)  << "\n";
}

void vectorpair(){

    vector < pair <int , int> > vec;

    vec.push_back({1,2});
    vec.emplace_back(3,5);

    cout << vec[0].first  << "\n";

    cout << vec[1].second  << "\n";

    cout << vec.at(1).first << "\n";
}

int main(){
    explainvector();
    vectorpair();
    return 0;
}