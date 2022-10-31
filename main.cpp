#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int ans=0;
    int n;
    cin >> n; cin.ignore();
    int min;
    int max;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v; cin.ignore();
        if(i==0){
            min=v;
            max=v;
        }
        if(min>v){
            min=v;
        }
        if(max<v){
            if(ans>(min-max)){
            ans=min-max;
            if(ans>0){
            ans=0;
            }
            }
        max=v;
        min=v;
        }
    }
    if(ans>(min-max)){
            ans=min-max;
            if(ans>0){
            ans=0;
      }
    }
    

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << ans << endl;
}
