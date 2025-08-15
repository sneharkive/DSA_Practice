/*Maps are containers in STL that stores the elements as key-value pairs.
Each element has a unique key value and the elements are stored order based on their key value.
Keys cannot be changed, once they are added to the map, they can only be inserted or deleted, but the values can be altered.
The elements inside the map can be accessed using iterators.
Multiple Key can be pointed to a single value but one key cannot have multiple value.*/
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1] = "Sneha"; //here 1 is key and "Sneha" is value
    m[9] = "Hange";
    m[2] = "Roy";
    m[7] = "Jini";
    m.insert( {5,"Bread"} ); //another way to insert
    for(auto i : m) cout<<i.first<<"  "<<i.second<<endl; //Print in sorted order //Although for unorder map it can be random
    cout<<"Finding 2 : "<<m.count(2)<<endl; //check 2 is present or not
    m.erase(2);
    cout<<"Finding 2 : "<<m.count(2)<<endl;
    cout<<"After Erase : "<<endl;
    for(auto i : m) cout<<i.first<<"  "<<i.second<<endl;
    cout<<endl<<endl;
    auto it = m.find(5);
    for(auto i = it; i != m.end(); i++)cout<<(*i).first<<"  "<<(*i).second<<endl;
}
