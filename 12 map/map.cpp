#include<bits/stdc++.h>
using namespace std;

void explainmap(){
    // map stores unique keys in a sorted order, and the sorted happend based on also key the value can be duplicates

    //map have two properties key and value , both key and value data type can be same or can be differet

    // map < key , value > mpp;
    map <int,int> mpp;

    map <int,pair<int,int>> mpp_1;

    map <pair<int,int>,int> mpp_2;

    mpp[1] = 2; //it stores internally in the map at key 1 it store the value 2

    mpp.emplace(3,1); //it stores internally in the map at key 3 it store the value 1

    mpp.insert({2,4}); //it stores internally in the map at key 2 it store the value 4

    mpp_2[{2,3}] = 10; //it stores internally in the map at key {2,3} it store the value 10, together 2 and 3 is key cause we declare pair as a key

    for(auto it : mpp){
        cout << it.first << "  " << it.second << endl;
    }

    cout << mpp[1] << endl; // it print the value stored at key 1
    cout << mpp[5] << endl; // it print the null value cause at key 5 there is nothing stored

    auto it = mpp.find(3); // it find the address of key in the map 
    //cout << *(it).second; // here if we want to access the iterator we give star and if we want to access the value we give .second

    auto it1 = mpp.find(5); // if any element is not present in the mmap then it point to the the end of the map means after the map -->> mpp.end()

    auto it_1 =  mpp.lower_bound(2);

    auto it_2 =  mpp.lower_bound(3);

    //erase size swap empty are same as previous 
}

int main(){
    explainmap();
    return 0;
}