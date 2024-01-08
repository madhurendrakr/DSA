#include <bits/stdc++.h>
using namespace std; 

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{
      int a=6 ,b=9;
      cout<<min(9,6)<<endl;
      cout<<min(6,9)<<endl;

      
      int arr[10]={12,14,4,2,88,9,34,7,3,111};
    

      cout<<" max e.lement: "<<*max_element(arr,arr+10)<<endl ;
      cout<<" min e.lement: "<<*min_element(arr,arr+10)<<endl;









    // // int a=5;
    // // int b=12;
    // int c=90,d=888;
    // // cout<<"min value: "<<min(a,b)<<endl;
    // // cout<<"min value: "<<min(11,6)<<endl;

    // cout<<endl<<" using comparator function: "<<max(12,44,cmp)<<endl;
    // cout<<endl<<" using comparator function: "<<max(c,d,cmp)<<endl;
  
return 0;
}