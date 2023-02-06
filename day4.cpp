#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
int S,T,count =0;
cin>>S>>T;
for(int a=0; a<=S; a++){
    for(int b=0; b<=S-a; b++){
        for(int c=0; c<=S-a-b; c++){
            if(a+b+c <=S && a*b*c<=T ){
                count++;

            }
        }
    }
}
cout<<count<<endl;
    return 0;
}