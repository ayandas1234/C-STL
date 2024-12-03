#include<bits/stdc++.h>
using namespace std;

void explaindeque(){
    deque<int>dq;

    dq.push_back(2); // {2} 
    dq.emplace_back(4);// {2,4}

    dq.push_front(5);// {5,2,4} -->> push_front place 5 at the beginiig of deque

    dq.emplace_front(10);// {10,5,2,4} -->> push_front place 5 at the beginiig of deque

    dq.pop_back();// {10,5,2} -->> it will pop out 4 from the back or top of the deque
    dq.pop_front();/// {5,2} -->> it will pop out 5 from the front the deque

    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *(it) << " "; 
    }

    cout <<endl;

    cout << dq.back() << endl;

    cout << dq.front() << endl;
}

int main(){

    explaindeque();
    return 0;
}

// rest function same as vector
// begin , end , rbegin , rend , clear , insert , size , swap