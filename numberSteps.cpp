#include<iostream>

using namespace std;

int main(){
int t;
cin>> t;
while (t--){
    int x,y, flag=0;
    cin>> x >> y;
    if (x!=y && x-y!=2)
        flag=1;
    if (x%2==0 && y%2==0 && !flag)
        cout << x + y << endl;
    else if (x%2!=0 && y%2!=0 && !flag)
        cout<< (x + y)-1 << endl;
    else if (flag)
        cout << "No Number"<<endl;
}
return 0;
}
