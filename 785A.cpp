#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int face =0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
           face = face+4;
        }
        else if(s=="Cube"){
            face = face+6;
        }
        else if(s=="Octahedron"){
            face = face+8;
        }
        else if(s=="Dodecahedron"){
            face = face+12;
        }
        else if(s=="Icosahedron"){
            face = face +20;
        }
    }
    cout<<face<<endl;
return 0;
}
