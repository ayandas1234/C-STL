#include<bits/stdc++.h>
using namespace std;

void explaiiniterator(){
    vector <int> v;
    v.push_back(10);
    v.emplace_back(30);
    v.emplace_back(15);
    v.emplace_back(7);
    v.emplace_back(100);

    vector <int>::iterator it = v.begin();

    cout << *(it) << " "; //print values
    it++;

    cout << *(it) << " "; //print values
    it = it + 2;

    cout << *(it) << " "; //print values

    cout << 'it' << " "; //print address

    cout << "\n";

    vector <int>::iterator it_1 = v.begin();

    for(int i = 0; i < v.size(); i++){
        cout << *(it_1) << " printing element address-->> " << 'it_1' << endl;
        it_1++;
    }

    vector <int>::iterator it_2 = v.end();

    for(int i = 0; i < v.size(); i++){
        it_2--;
        cout << *(it_2) << " printing element address-->> " << 'it_2' << endl;
    }
}

void reverseiterator(){
    vector <int> v;
    v.push_back(9);
    v.emplace_back(75);
    v.emplace_back(55);
    v.emplace_back(48);
    v.emplace_back(99);

    vector <int>::reverse_iterator it = v.rend();

    for(int i = 0; i < v.size(); i++){
        it--;
        cout << *(it) << " printing element address-->> " << 'it' << endl;
    }

    vector <int>::reverse_iterator it_1 = v.rbegin();

    for(int i = 0; i < v.size(); i++){
        cout << *(it_1) << " printing element address-->> " << 'it_1' << endl;
        it_1++;
    }
}

void iterator_with_loop(){
    vector <int> v;
    v.push_back(9);
    v.emplace_back(75);
    v.emplace_back(55);
    v.emplace_back(48);
    v.emplace_back(99);

    cout << v.front() << endl;
    cout << v.back() << endl;

    // define iterator inside a loop
    for(vector <int>::iterator it = v.begin(); it != v.end(); it++){ 
        cout <<*(it) << " "; 
    }

    cout<<"\n";

    //using auto
    for(auto it = v.begin(); it != v.end(); it++){
        cout <<*(it) << " "; 
    }

    cout<<"\n";

    //using for-each loop
    for(auto it : v){
        cout << it << " "; 
    }

    cout<<"\n";
}

void explaierase(){
    vector<int>v;
    v.push_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.push_back(40);

    cout << "before deletion" << endl;
    for(auto it : v){
        cout << it << " "; 
    }

    //10 20 30 40
    v.erase(v.begin()+1);
    // this become 10 30 40

    cout << endl;
    cout << "after deletion" << endl;
    for(auto it : v){
        cout << it << " "; 
    }
    cout << endl;

    vector<int>v1;
    v1.push_back(100);
    v1.emplace_back(200);
    v1.emplace_back(300);
    v1.push_back(400);
    v1.push_back(500);

    cout << "before deletion" << endl;
    for(auto it : v1){
        cout << it << " "; 
    }

    //100 200 300 400 500
    v1.erase(v1.begin()+1, v1.begin()+4);
    // this become 100 500

    cout << endl;
    cout << "after deletion" << endl;
    for(auto it : v1){
        cout << it << " "; 
    }
}

void explainisert(){
    vector<int>v(2,100); //{100,100} -->> it will create two iinstances of 100 in vector

    v.insert(v.begin(),300); //{300,100,100} -->> it will add 300 at beginning of the vector

    v.insert(v.begin()+1,5); //{300,5,100,100} -->> it will add 5 sfter 300 in the vector

    v.insert(v.begin()+1,2,50); //(300,50,50,5,100,100) it will add two 50 after the 300 in the vector

    vector <int> copy (2,50); //{50,50} -->> it will create two iinstances of 50 in vector

    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,50,50,5,100,100} -->> it will copy one vecyor data into another
    //v.begin() is the starting from there all the elements will be placed from another vector

    cout << v.size(); // it will give the size of the vector

    v.pop_back(); // it will delete the top element of the vector or simply the last elemennt will be deleted

    vector<int>v1;
    v1.emplace_back(10);
    v1.emplace_back(20);

    vector<int>v2;
    v2.emplace_back(30);
    v2.emplace_back(40);


    v1.swap(v2); // v1 vector will swap values with v2 vector

    v1.clear(); //erase the entire vector

    cout << v.empty(); //checking v vector is empty or not
}

int main(){

    // explaiiniterator();

    // reverseiterator();

    // iterator_with_loop();

    // explaierase();

    explainisert();

    return 0;
}