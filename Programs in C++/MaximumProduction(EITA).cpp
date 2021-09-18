// passed
/* Problem statement: 
1st line contains an integer T, the number of test cases.
2nd line contains a single line of input four integers d, x, y, z.
the chef can do the work as x amount of work for each day in a week,
or y amount of work for first d days and then z amount of work for remaining days.
we need to find the maximum amount of work that could be done.
*/
#include<iostream>
using namespace std;
int main(){
    int T;
    cout<<"Enter the number of test cases: ";
    cin>>T;
    for(int i = 0; i<T; i++){
        int d, x, y, z, a, b;
        cout<<endl<<"Enter the values of d, x, y, z: ";
        cin>>d>>x>>y>>z;
        if(d<7  && z<x && y>x){
            a = x * 7;
            b = (y * d)+((7-d)*z);
            cout<<max(a,b)<<endl;
        } 
        else{
            cout<<"Error"<<endl;
        }   
    }
return 0;
}