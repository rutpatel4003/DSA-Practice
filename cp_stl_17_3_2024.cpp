#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.second << " " << p.second.first;
    pair<int, int> arr[] = {{1,2}, {2,5}, {3,6}};
    cout << arr[1].second;
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1,2);
    vector<int> v(5, 100);
    vector<int> copy(v);
    vector<int>::iterator it = v.begin();
    cout << *(it) << endl;
    it++; 
    cout << v.back() << endl;

    //for printing entire vector
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }
    //for printing vector without mentioning its datatype
    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) << endl;
    }
    for (auto it:v){
        cout << it << " " << endl;
    }

    v.erase(v.begin()+1); // give address
    v.erase(v.begin()+1, v.begin()+3);
    vector<int> v(2,100); // v = {100, 100}
    v.insert(v.begin(), 300); // v = {300, 100, 100}
    cout << v.size() << endl;
    v.pop_back();
    v.swap(copy); // v1 = {10, 20}, v2 = {30, 45} --> v1 = {30, 45}, v2 = {10,20}
    cout << v.empty();
}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();
}


void explainStack(){
    stack<int> st;
    st.push(10);
    st.pop();
    cout << st.size();
    cout << st.empty();
    stack<int>st1, st2;
    st1.swap(st2);
    cout << st.top();
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5;
    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();
}

void explainPQ(){
    //Max Heap
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); // {5,2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    cout << pq.top(); //prints 10

    pq.pop(); // {} 


//Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //{2, 5, 8, 10}
    cout << pq.top(); //prints 2
    }


void explanationSet(){
    //will stored in sorted fashion
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(4); // {1, 2, 4}
    st.insert(3); //{1, 2, 3, 4}
    auto it = st.find(3);
    st.erase(5);
    //if we dont have an element in the set, then st.find() will point to the end 
    int cnt = st.count(1);
    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

//multiset<int> is same as set, but also stores duplicate values
//unordered_set<int>, lower bound and upper bound function do not work, does not store in particular order to have a better complexity than set in most cases, except when collision happens
void explainMap(){
    map<int, int> mpp;
    //map<int, pair<int, int>> mpp;
    //map can have duplicate values but unique keys, and unique keys are stored in sorted order

    mpp[1] = 2;
    mpp.insert({2, 4});
    for (auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp[1];
    auto it = mpp.find(3);
}
//multimap<> can store multiple keys, duplicate keys are allowed, rest same as map, mpp[key] is not allowed
//unordered_map<> has same difference as set and unordered_set 

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second) return true;
}
int main(){
    sort(a, a+4); //a = first iterator, used for any container like vectors or arrays
    sort(a, a+n, greater<int>); //to sort in descending order
    pair<int, int> arr[] = {{1, 2}, {2,1}, {4,1}};
    sort(a, a+n, comp);
}