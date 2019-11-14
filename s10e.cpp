#include<bits/stdc++.h>
#define iFor(a,b) for(int i=a;i<b;i++)
#define testcase()  int t;scanf("%d",&t);while(t--)

using namespace std;


int main()
{
    testcase()
    {
        int n , x ;
        scanf("%d" , &n) ;
        vector<int> arr ;
        iFor(0 , 5) arr.push_back(10000) ;
        int count = 0 ;
        iFor(0 , n)
        {
            scanf("%d" , &x) ;
            if(x < (*min_element(arr.end() - 5 , arr.end())))
            {
                count++ ;
            }   
            arr.push_back(x) ;
        }
        printf("%d\n" , count) ;
    }
    return 0;
}
