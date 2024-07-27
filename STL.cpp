#include <bits/stdc++.h>//Header for 

using namespace std;
 
void explainPair(){

    pair<int, int> p ={1,3};

    cout<<p.first<<" "<<p.second<<endl;;
    pair<int, pair<int,int>> z = {1,{2,3}};

    cout<<z.first<<" "<<z.first<<" "<<z.second.first<<" "<<z.second.second<<endl;
    pair<pair<int,int>,pair<int,int>> x ={{1,2},{3,4}};
    cout<<x.first.first<<" "<<x.first.second<<" "<<x.second.first<<" "<<x.second.second<<endl;

    pair<int,int> arr[] ={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
}

void eplainVector(){
    vector<int> v;
    //v is the vector which store int type of value 
    v.push_back(1);
    v.emplace_back(2);
    //both will push the value in vector but it is considerd that emplace back it fast 
    vector<int>::iterator p = v.begin();
    while (p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }
    vector<int>v1(5,100);
    //{100,100,100,100,100};
    vector<int> v2(5);
    //{0,0,0,0,0}
    //Vector using pair 
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    //now in emplace back it automaticaly understand that the 1,2 are the part of pair 
    vector<pair <int,int>>::iterator it = vec.begin();
    while(it!=vec.end()){
        cout<<"("<<it->first<<","<<it->second<<")";
        it++;
    }
        cout<<"\n";
    //we can also use for and for each loop using 
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<"("<<it->first<<","<<it->second<<")";
    }
      cout<<"\n";
    for(auto it:vec){
        cout<<"("<<it.first<<","<<it.second<<")";

    }
    //{10,20,12,23,40}
    v.erase(v.begin()+1);//specific element at position 1 that is 20
    //{10,20,30,40,50,60}
    v.erase(v.begin()+2,v.begin()+4);
    //[start, end) end is not included
    vector<int>v3 (2,100);//{100,100}
    v3.insert(v3.begin(),300);//{300,100,100}
    v3.insert(v3.begin()+1,3,30);//{300,30,30,30,100,100}
    vector<int> v4(v3);
    //copy the vector 
    vector<int>copy(2,50);//{50,50}
    v3.insert(v3.begin(),copy.begin(),copy.end());//{50,50,300,30,30,30,100,100}
    v3.pop_back();//{50,300,30,30,30,100,100}
    v3.swap(v1);
    v2.clear();//clear entire vector
    cout<<v2.empty();
    //vector is considered as single linked list 
}

void eplainList(){
    //list is considerd as double lined list 
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(6);
    ls.emplace_front(9);
    //rest function are same a vector
    //begin, end, rbegin,rend,inset,size,swap
    
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}

    //rest function same as vector 
    //begin,end,rbegin,rend,clear,inser,size,swap
}

void eplainStack(){
    stack<int> st;
    st.push(1);//LIFO
    st.push(2);
    st.push(3);
    st.emplace(2);//{2,1}
    cout<<st.top()<<endl;
    st.pop();//remove the element which is last inserted 
    cout<<st.size();//return size of stack
    cout<<st.empty();//true else false
    stack<int>st1,st2;
    st1.swap(st2);//swap
}
 
 void explainQueue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back()+=5;//make the last the number 9

    q.pop();//popo the front 
    cout<<q.front();

 }

void explain_PQ(){
    priority_queue<int>pq;
    pq.push(4);//{4}
    pq.push(2);//{4,2}
    pq.push(8);//{8,4,2}
    pq.emplace(5);//{8,5,4,2}
    cout<<pq.top();//{8}

    priority_queue<int,vector<int>, greater<int>>pq;
    pq.push(5);

}

void explainSet(){//sorted order and unique
    set<int>st;
    st.insert(2);//{2}
    st.emplace(3);//{2,3}
    st.insert(4);//{2,3,4}
    st.insert(6);//{2,3,4,6}
    st.insert(5);//{2,3,4,5,6}

    auto it = st.find(2);

    int cnt = st.count(2);//if there return 1 else 0 
    st.erase(2);



}






int main(){
    //explainPair();
    //eplainVector();
 

    return 0;
}

