#include<bits/stdc++.h>
using namespace std;

void explainpriorityqueue(){
    //in prioriity queue the largest value reside into top of the priority queue, for nummber the largest number would be in top , for charcter the largest character would
    // iside the priority queue the data don't store in linear fashion , instead it maintain a tree structure

    priority_queue <int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2} 
    // this priority queue is also known as  "Max Heap" where greater value will be at top

    cout << pq.top() <<endl; //prints 10

    pq.pop(); //{8,5,2}

    cout << pq.top() <<endl; //prints 8

    //size swap empty functions same as others


    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq_1;

    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10} 
    // this priority queue is also known as  "Min Heap" where smaller value will be at top

    cout << pq.top() <<endl; //prints 2
}

int main(){
    
    explainpriorityqueue();

    return 0;
}

// push & pop time complexity is log(n)
// top time complexity is Big O(1)