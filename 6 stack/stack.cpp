#include<bits/stdc++.h>
using namespace std;

void explainstack(){
    stack<int>st;
    st.push(1);// {1}
    st.push(2);// {2,1}
    st.push(3);// {3,2,1}
    st.push(4);// {4,3,2,1}
    st.emplace(5);// {5,4,3,2,1}

    cout << st.top() << endl;// prints 5

    st.pop();// pop out or delete 5

    cout << st.top() << endl;// print 4

    cout << st.size() << endl;// print the size 4

    cout << st.empty() << endl;// the stack is not empty that's why it will return false and print as a zero

    stack<int> st_1,st_2;

    st_1.push(10);// {10}
    st_1.push(20);// {20,10}

    st_2.push(110);// {110}
    st_2.push(210);// {210,110}

    cout << st_1.top() << endl;// print 20
    cout << st_2.top() << endl;// print 210

    //swap the two stack values
    st_1.swap(st_2);

    cout << st_1.top() << endl;// print 210
    cout << st_2.top() << endl;// print 20
}

int main(){

    explainstack();

    return 0;
}

//in stack there is only three operation push , pop and top
// all the operation takes time to complete constant time means Big O(1)
// stack follow LIFO principle means Last in Fast Out(LIFO)