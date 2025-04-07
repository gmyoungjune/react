#include <iostream>
using namespace std;
#include <list>
#include <string>
int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    list<char> l;
    list<char> ::iterator it;
    for(int i=0;i<n;i++){
        l.push_back(s[i]);
    }
    it =l.end();
    for(int i=0;i<m;i++){
        char a;
        cin>>a;
        if(a=='L'){
            if(it==l.begin())
                continue;
            it--;
            
        }
        else if(a=='R'){
            if(it==l.end())
                continue;
            it++;
        }
        else if(a=='D'){
            if(it==l.end())
                continue;
                it = l.erase(it);
        }
        else if(a=='P'){
            char b;
            cin>>b;
            l.insert(it,b);
        }

    }
    for(it=l.begin();it!=l.end();it++){
        cout<<*it;
    }
    return 0;
}
