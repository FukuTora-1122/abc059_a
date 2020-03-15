#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2,s3,x;
    cin >> s1 >> s2 >> s3;
    x += toupper(s1[0]);
    x += toupper(s2[0]);
    x += toupper(s3[0]);
    
    cout << x << endl;
    
    return 0;
}
