#include<bits/stdc++.h>
using namespace std;

void algorithms(){
    int a[] = {5,8,4,2,7,9,3,1,4,20};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "before sorting the array -->>"<< endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a,a+n);
    //sort(starting iterator , last iterator); // this sytax is used for sorting the array giving the beginning address of array (a) and end address of array (a+n) means after the array;

    cout << "after sorting the array -->>"<< endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    vector<int>v;
    v.emplace_back(3);
    v.emplace_back(5);
    v.emplace_back(1);
    v.emplace_back(9);
    v.emplace_back(1);
    v.emplace_back(6);

    vector <int>::iterator it= v.begin();
    vector <int>::iterator it1= v.begin();

    cout << "before sorting the vector -->>"<< endl;
    for(int i = 0; i < v.size(); i++){
        cout<<*(it) <<" ";
        it++;
    }
    cout<<endl;

    sort(v.begin(),v.end());//vector sorting 

    cout << "after sorting the vector -->>"<< endl;
    for(int i = 0; i < v.size(); i++){
        cout<<*(it1) <<" ";
        it1++;
    }
    cout<<endl;

    int arr[] = {5,8,4,2,7,9,3,1,4,20};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    cout << "before sorting the array -->>"<< endl;
    for(int i = 0; i < n1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr+2,arr+4);//insidethe arrat only selected place will be sorted not the whole array

    cout << "after sorting the array -->>"<< endl;
    for(int i = 0; i < n1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //sorting array in decending order
    sort( arr , arr+n , greater<int>() );

    cout << "sorting the array in decreasing order -->>"<< endl;
    for(int i = 0; i < n1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool comperator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //if p1.second == p2.second are both same
    if(p1.first > p2.first) return true;
    return false;
}

void mywaysorting(){
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    int n = sizeof(a)/sizeof(a[0]);

    //sort it according to second element
    //if second element is same , then sort it according to first element but in decreasing

    sort(a,a+n,comperator);
}

void explain_builtin_popcount(){
    //__builtin_popcount()  is a built-in function of GCC compiler. This function is used to count //the number of set bits in an unsigned integer. In other words, it counts the number of 1’s in the binary form of a positive integer.
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt <<endl;

    long long num1 = 16794741126572;
    int cnt1 = __builtin_popcount(num1);
    cout << cnt1 <<endl;

    int arr[] = {5,8,4,2,7,9,3,1,4,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxi = *max_element(arr,arr+n);
    cout << maxi << endl;
    //max_element(start of the array , end of the array) -->> this syntax points out the address of the maximmum element in the array , if we put star (*) before max_element funtion then it will print the elemment

    int min = *min_element(arr,arr+n);
    cout << min << endl;
    //min_element(start of the array , end of the array) -->> this syntax points out the address of the minimmum element in the array , if we put star (*) before min_element funtion then it will print the elemment

    string s = "123";
    sort(s.begin(),s.end());
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));
    //next_permutation(start,end) -->> this syntax will print all the permutation of the 123, suppose if the string is 231 then the permutaion would be 231,312,321 only these three that's why before permutaion if we sort the string then all the permutatiion will be printed
}

int main(){

    algorithms();

    explain_builtin_popcount();
    return 0;
}