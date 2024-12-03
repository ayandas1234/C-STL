#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    pair <int , int> p = {1 , 3};

    cout << p.first << " " << p.second;
    cout << "\n";
}

void nestedpair(){
    pair <int , pair <int , int>> p = {1 , {3 , 4}};

    cout << p.first << " " << p.second.first << " " <<p.second.second ;
    cout << endl;
}

void arraypair(){
    pair <int , int> arr[] = {{1,2} , {3,4} , {5,6}};

    cout <<arr[1].second <<endl;

    cout <<arr[0].second <<endl;
}

int main(){

    explainpair();

    nestedpair();

    arraypair();

    return 0;
}