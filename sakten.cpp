#include <bits/stdc++.h>
#define iFor(a,b) for(int i=a;i<b;i++)
#define testcase()  int t; scanf("%d" , &t) ; while(t--)

using namespace std;

int main()
{
    testcase()
    {
        int n , m , q ;
        scanf("%d%d%d" , &n , &m , &q) ;
        vector< int> row(n) ;
        vector< int> col(m) ;
        while(q--)
        {
            int x , y ;
            scanf("%d%d" , &x , &y) ;
            row[x - 1]++ ;
            col[y - 1]++ ;
        }
        int odd = 0 , even = 0 ;
        iFor(0 , m)
        {
            if(col[i] & 1)
                odd++;  
            else
                even++ ;
        }
        long count = 0 ;
        iFor(0 , n)
        {
            if(row[i] & 1)
                count += (m  - odd) ;
            else
                count += odd ;
        }
        cout << count << endl ;
    }
    return 0;
}
