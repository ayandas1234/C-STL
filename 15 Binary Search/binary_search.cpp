#include<bits/stdc++.h>
using namespace std;

//https://www.digitalocean.com/community/tutorials/find-array-length-in-c-plus-plus

void explain_binary_search(){
    int a[] = {1 , 4 , 5 , 8 , 9};
    int n = sizeof(a)/sizeof(a[0]);

    bool res = binary_search(a , a+n , 3);
    //the binary_search function if find the searched element then it returns true othwewise false
    //the first a point to the beginning of the array a , and a+n point to the the ending of the array
    //3 is the element we want to search inthe array

    bool res1 = binary_search(a , a+n , 4);

    cout << res << "  " << res1 << endl;
}

void explain_lower_boud(){
    int a[] = {1 , 4 , 5 , 9 , 9};
    int n = sizeof(a)/sizeof(a[0]);


    int ind = lower_bound(a,a+n,4)-a; // index 1
    //lower bound works same as binary searc,,,lower_bound(a,a+n,4) -->> this functio checks out where 4 occurs at array then returns an iterator pointing to the position of 4........we substitute a then we will get the element 4 address

    int ind1 = lower_bound(a,a+n,7)-a; // idex 4
    //if lower bound can't find the element 7 then it immediately point to the next greater element after 7

    int ind2 = lower_bound(a,a+n,10)-a; // index 6 ,,cause at idex 5 the array end so index 6 is after the array
    //if lower bound fount the element in the array also iit didn't find imediate graeter element in array the it will point out at the end of the array


    //for vector the syntax will be
    // int ind3 = lower_bound(a.begin(), a.end(),a)-a,begin();

    cout << ind << " " << ind1 << " " << ind2 << endl;
}

void explain_upper_bound(){
    int a[] = {1 , 4 , 5 , 9 , 9};
    int n = sizeof(a)/sizeof(a[0]);

    int ind = upper_bound(a,a+n,4)-a; // index 2
    // upper bound also same as binnary search, in the upper bound the iterator don't point the 4 instead it will point out the next greater element than 4, so the iterator will point out at element 5
    
    int ind1 = upper_bound(a,a+n,7)-a; // idex 4
    // here also the iterator will point out the next greater elemnt than 7 and point out the iterator at element 9 

    int ind2 = upper_bound(a,a+n,10)-a; // index 6
    // here upper bound try to find the next greater element than 10 but in the array there is no greater elemnt than 10 so the ietrator will point out after the array

    //for vector the syntax will be
    // int ind3 = upper_bound(a.begin(), a.end(),a)-a,begin();

    cout << ind << " " << ind1 << " " << ind2 << endl;
}

// upper bound and lower bound time complexity is same --> log(n), which is similar to binary search

void solve_question(){
    // Q.Find the first occurence of a x in a sorted array.if it does not exists, print -1;

    int A[] = {1 , 4 , 4 , 4 , 4 , 9 , 9 , 10 , 11};
    int n = sizeof(A)/sizeof(A[0]);
    int x;
    cin >> x;

    int ind = lower_bound(A,A+n,x)-A;

    if(ind != n && A[ind] == x) cout << ind <<endl;
    else cout << -1 <<endl;

    // x=4 , index will be 1
    // x=2 , index will be -1
    // x=12 , index will be -1

    // (ind != n) -->> thi is the edge case of lower bound cause in soe cases we see that the element don't exist in the array so the lower bound function try to find the next greater element and for that case the next greater elemnt doesn't exist in the array then the iterator will point out at the end of the array means after the array for that case the range is out of bound for that reason this edge csae is needed
}

void solve_question1(){
    // Q.Find the last occurence of a x in a sorted array.if it does not exists, print -1;
    int A[] = {1 , 4 , 4 , 4 , 4 , 9 , 9 , 10 , 11};
    int n = sizeof(A)/sizeof(A[0]);
    int x;
    cin >> x;

    int ind = upper_bound(A,A+n,x)-A;
    ind--;

    if(ind >= 0 && A[ind] == x) cout << ind <<endl;
    else cout << -1 <<endl;
    // x=4 , index will be 1
    // x=2 , index will be -1
    // x=0 , index will be -1

    //in upper bound we know that if the element found in the array then it will not point to that element instead it will point out iit's greater element so that's why we did ind--, means it will then point out the actual elemet what we wat to find

    //(ind >= 0) -->> this fuctionn is the edge case of the upper bound suppose the iterator point out at 0 index , when it will do ind-- then it will go out of array then the copiler throw runtime error that's why when that kind of case occur it will go the else part
}

void solve_question2(){
    // Q.Find the largest numberer smaller than x in a sorted array.if it does not exists, print -1;
    int A[] = {1 , 4 , 4 , 4 , 4 , 9 , 9 , 10 , 11};
    int n = sizeof(A)/sizeof(A[0]);
    int x;
    cin >> x;

    int ind = lower_bound(A,A+n,x)-A;
    ind--;

    if(ind >= 0) cout << A[ind] <<endl;
    else cout << -1 <<endl;
    // x=4 , element will be print 1
    // x=2 , element will be print 1
    // x=1 , element will be print -1


    //in this question it says Find the largest numberer smaller than x in a sorted array, then it's clear that if we can find out our required element from the sorted array then the element before that will be largest numberer but smaller than x.

    //suppose we have to find 4 we can easily find 4 through lower bound and then to go to the before element we have to decrease the iteratot that's why we did ind--;

    //one edge case also should be notted that if the iterator points to the index 0 and if we do ind-- then iit will go out of the arraythen compiler show us error that's why we put the condition (ind >= 0) thiis if innd value go lower than 0 then it prints -1;
    
}

void solve_question3(){
    // Q.Find the smallest numbere greater than x in a sorted array.if it does not exists, print -1;
    int A[] = {1 , 4 , 4 , 4 , 4 , 9 , 9 , 10 , 11};
    int n = sizeof(A)/sizeof(A[0]);
    int x;
    cin >> x;

    int ind = upper_bound(A,A+n,x)-A;

    if(ind < n) cout << A[ind] <<endl;
    else cout << -1 <<endl;
    // x=4 , element will be print 9
    // x=2 , element will be print 4
    // x=1 , element will be print 4

    //we know in upper bound the iterator poits to the next greater element, here exactly same thing happen , first we try try to find x element is reside in array or not if it exist then the iterator point to the next greater element , if not the iterator still point to the next greater element

    //(ind < n) -->> is the edge case of this problem cause suppose the x element is 11 then upper bound will try to find the next greater elemnt ad iterator points out of the array which will cause an error that's why index should be in range otherwise print -1;
}

int main(){
    // explain_binary_search();
    // explain_lower_boud();
    // explain_upper_bound();

    solve_question();
    solve_question1();
    solve_question2();
    solve_question3();
    return 0;
}