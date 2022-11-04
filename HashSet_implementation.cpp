#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
        // creation of set
        unordered_set<int>set;
        
        // insertion of set 
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(3);
    set.insert(6);
    set.insert(5);
    //
    // size of set
    cout<<"size of set are :"<<set.size()<<endl;

 // delete single element in set 
 if(set.erase(6)){
     cout<<"deleting successefuuly...."<<endl;
 }
//   set.erase(6);

  cout<<"size of set are :"<<set.size()<<endl;
    // seraching of set 
    if(set.find(6) == set.end()){
            cout<< "searching element not found" << endl << endl ;
    }
        else{
            cout << "searching element are found "<< endl ;
    }
    
    // iterator 
    
    unordered_set<int> :: iterator itr;
    
    for(itr=set.begin(); itr!=set.end(); itr++){
        cout<< (*itr)<<endl;
    }
        
          // check element present are not 
    if(set.count(3)){
       cout<<"count present yes"<<endl;
    }

// clear set
  set.clear();
cout<<"set are empty"<<endl;
    
    for(itr=set.begin(); itr!=set.end(); itr++){
        cout<< (*itr)<<endl;
    }
    return 0;
}
