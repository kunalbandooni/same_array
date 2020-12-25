/*

Tell if two arrays are havig smilar elements or not.

Input
  5
  1 2 3 2 5
  5 3 1 2 2

Output
  YES
  
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int j=1,k=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        j=j^a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        k=k^b[i];
    }
    if(k==j)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
