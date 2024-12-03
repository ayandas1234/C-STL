#include<bits/stdc++.h>
using namespace std;

void explainset(){
    //set stores everything as unique and stored as sorted order

    set<int>st;

    //functionality of insert in vector can be used also , that only increases efficiency

    st.insert(1);
    st.insert(2);
    st.emplace(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(9);

    auto it = st.find(3);// if 3 exist then find function, fetch the address of the 3 and put it into an iterator

    auto it_1 = st.find(6);// if 6 doesn't exist then find function return st.end(), means at the end of the container

    cout<<*(it)<<" "<<'it'<<endl;

    // cout<<*(it_1)<<" "<<'it_1'<<endl;

    if (it_1 != st.end())
        cout << "Element found at position : "
             << distance(st.begin(), it_1) << endl;
    else
        cout << "Element not present in set";


    // we can directly mention the value to be erased in the erased function or we can give the address to the element which we want to be erased
    st.erase(5); // erase 5 takes logarithm time

    auto it_2 = st.find(2);
    st.erase(it_2); // it takes contan time

    int cnt = st.count(1); // we are working on set so there will be no duplicate so either it gives count as 1 or 0

    auto it1 = st.find(6);
    auto it2 = st.find(9);
    st.erase(it1,it2); // st.erase(start,end); if we want to delete ore than one element then we can give the staring and ending address of the element and the starting element will be included in the deletion but ending element will be excluded from deletion

    set <int>::iterator it3 = st.begin();
    for(int i = 0; i < st.size(); i++){
        cout<< *(it3) << " ";
        it3++;
    }
    
    // auto it = st.lower_bound(2);
    // auto it = st.lower_bound(3);

}
int main(){
    explainset();
    return 0;
}

//begin() , end() , rbegin() , rend() , size() , empty() and swap() are all same as vectors