#include <bits/stdc++.h>
using namespace std; 



int main()
{
    vector<int> num1 ={7,3,2,4,9,12,56};
    vector<int> num2 ={3,4,1,9,56,7,9,12};
    vector<int> num3 ={12,4,7,9,2,23,25,41,30,40,28,42,30,44,48,43,50};
cout<<"Normal array :";
   
    cout<<endl;
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    sort(num3.begin(),num3.end());
    
     for (auto &n : num1)
    {
        /* code */
        cout<<n<<" ";
    }
    cout<<endl<<endl;
     for (auto &n : num2)
    {
        /* code */
        cout<<n<<" ";
    }
     for (auto &n : num3)
    {
        /* code */
        cout<<n<<" ";
    }
    cout<<endl<<endl;
     for (int i=0;i<num3.size()-6;i++)
    {
       cout<<i<<"="<<num3[i+6]-num3[i]<<endl;
    }
    // sort(num.begin(),num.end()) ;
    // cout<<"Acending array :";
    // for (auto &n : num)
    // {
    //     /* code */
    //     cout<<n<<" ";
    // }
    // cout<<endl;
    // sort(num.begin(),num.end(),greater<int> ()) ;
    // cout<<"decending array :";
    // for (auto &n : num)
    // {
    //     /* code */
    //     cout<<n<<" ";
    // }
 
return 0;
}