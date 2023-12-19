#include<iostream>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int main(){
/* 
deque <int> d;
d.push_front(11);
d.push_front(13);
d.push_back(10);
d.push_back(9);
for(int i:d)
cout<<i<<" ";
cout<<endl;
cout<<d.size()<<" ";
d.pop_back();
d.pop_front();
cout<<d.size()<<" ";
for(int i:d)
cout<<i<<" ";
cout<<endl;
d.push_front(13);
d.push_back(10);
d.erase(d.begin(),d.end());
cout<<endl;
for(int i:d)
cout<<i<<" "; */

//LIST
/* 
list<int> l;
l.push_front(5);
l.push_back(3);
for(int i:l)
cout<<i<<" ";
l.push_back(1);
l.pop_back();
l.pop_front();
l.push_front(7);
l.remove(7);
for(int i:l)
cout<<i<<" ";
 */

//STACK
/*
stack <string> s;
s.push("rnw");
s.push("al");
s.push("Ba");
cout<<s.top();
s.pop();
cout<<s.top();
s.pop();
cout<<s.top();
s.push("al");
cout<<s.size(); */

//QUEUE
/* 
queue <char> q;
q.push('q');
q.push('w');
q.push('e');
cout<<q.front()<<" ";
q.empty();
q.pop();
cout<<q.front();
 */

//Priority Queue
/* 
priority_queue<int> p;
p.push(11);
p.push(12);
p.push(10);
p.push(15);
p.push(1);
p.push(110);
int n=p.size();
for(int i=0;i<n;i++){
cout<<p.top()<<" ";
p.pop();

}
cout<<endl;
//Non decreasing order arranged priority queue
priority_queue<int,vector<int>,greater<int>> p1;
p1.push(11);
p1.push(12);
p1.push(10);
p1.push(15);
p1.push(1);
p1.push(110);
n=p1.size();
for(int i=0;i<n;i++){
cout<<p1.top()<<" ";
p1.pop();

}
//Copying one type of thing into another(here priority queue p is copied to p2)
priority_queue<int> p2(p);
cout<<endl;
p2.push(11);
p2.push(12);
p2.push(10);
p2.push(15);
p2.push(1);
p2.push(110);
n=p2.size();
for(int i=0;i<n;i++){
cout<<p2.top()<<" ";
p2.pop();
}
 */

//MAP
/* 
map<int,string> m;
m[1]="asdf";
m[2]="qwer";
m[4]="prin";
m[8]="poiuiuyt";

// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
// }
m[1]="fdsa";
for(auto i:m){
    cout<<i.first<<" "<<i.second<<" ";
}
cout<<m.count(8)<<endl;
cout<<m.erase(8)<<endl;

auto it =m.find(1);
for(auto i = it;i!=m.end();i++)
cout<<(*i).first<<" ";

 */
//SET
/* 
set<int>s;
s.insert(23);
s.insert(2);
s.insert(232);
s.insert(22);
s.insert(202);
for(int i:s)
cout<<i<<endl;
//Range cannot be given to erase function
//Only one item can be deleted at once
s.erase(s.find(232));
cout<<endl;
for(int i:s)
cout<<i<<endl;
 */
}