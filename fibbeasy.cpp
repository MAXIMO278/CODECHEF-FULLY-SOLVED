#include <iostream>
#include <queue>
#include <cstdio>
#include <set>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <malloc.h>
#include <list>
#include <sstream>
#include <cstring>
#include <math.h>
#include <stack>
#include <map>
#define gc getchar_unlocked
#define pc putchar_unlocked
#define ll long long int
#define ull unsigned ll
#define M 1000000007
#define m1 2000000 
#define iFor(a,b) for(int i=a;i<b;i++)
#define lFor(a,b) for(ll i=a;i<b;i++)
#define testcase()  int t;scanf("%d",&t);while(t--)

using namespace std;

ull pow(int a, int b)
{
    ull ans = 1;
    for(int i=1;i<=b;i++)
    {
        ans *= a;
    }
    return ans;
}

int arr[60] = {0, 1, 1, 2, 3, 5, 8,3,1,4,5,9,4,3,7,0,7,7,4,1,5,6,1, 7,8,5,3,8,1,9,0,9,9,8,7,5,2,7,9, 6, 5,1,6,7,3,0,3,3,6,9,5,4,9,3,2,5,7,2,9,1};

int main()
{
    testcase()
    {
        ull n;
        scanf("%llu",&n);
        for(int i=0;i<60;i++)
        {
            if(n >= pow(2,i) && n < pow(2,i+1))
            {
                cout << arr[(ull)(pow(2,i)-1)%60] << endl;
                break;
            }
        }
    }
    return 0;
}
