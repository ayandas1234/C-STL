#include<bits/stdc++.h>
using namespace std;

void explainlist(){
    list<int> ls;

    ls.push_back(2); // {2} 
    ls.emplace_back(4);// {2,4}

    ls.push_front(5);// {5,2,4} -->> push_front place 5 at the beginiig of list

    ls.emplace_front(10);// {10,5,2,4} -->> push_front place 5 at the beginiig of list

    //using for-each loop
    for(auto it : ls){
        cout << it << " "; 
    }

    cout<<"\n";

    //using auto
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *(it) << " "; 
    }

    cout<<"\n";

    //using normal for loop
    list<int>::iterator it = ls.begin();

    for(int i = 0; i < ls.size(); i++){
        cout << *(it) << " printing element address-->> " << 'it' << endl;
        it++;
    }

    // define iterator inside a loop
    for(list <int>::iterator it = ls.begin(); it != ls.end(); it++){ 
        cout <<*(it) << " "; 
    }

}

int main(){

    explainlist();
    return 0;
}

// rest function same as vector
// begin , end , rbegin , rend , clear , insert , size , swap