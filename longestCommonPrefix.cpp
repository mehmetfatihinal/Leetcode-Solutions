#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    int max = s1.size();
    if (s2.size()>max) max = s2.size();
    else if (s3.size()>max) max = s3.size();
    for(int i=0;i<max;i++){
        if(s1[i]==s2[i] && s1[i]==s3[i] && s2[i]==s3[i]){
            cout<<s1[i];
        }
        else {
            cout<<"";
        }
    }

    return 0;
}