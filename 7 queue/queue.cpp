#include<bits/stdc++.h>
using namespace std;

void explainqueue(){
    queue<int>q;

    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(3);//{1,2,3}

    q.back() += 5;

    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;
}

int main(){

    explainqueue();
    return 0;
}

//size , swap , empty same as stack