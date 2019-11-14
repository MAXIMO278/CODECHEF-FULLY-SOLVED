#include <bits/stdc++.h>

#define iFor(a,b) for(int i=a;i<b;i++)
#define testcase()  int t;scanf("%d",&t);while(t--)
#define m1 100000


using namespace std;

vector< vector < int>> arr(m1);

void seive()
{
	for(int i=1;i<m1;i++)
	{
	        for(int j=i;j<m1;j+=i)
	        {
                arr[j].push_back(i) ;
	        }
	}
}

vector<int> factor(int n)
{
    vector<int> arr ;
    iFor(1 , sqrt(n) + 1)
    {
        if(!(n%i))
        {
            if(n/i == i)
                arr.push_back(i) ;
            else
            {
                arr.push_back(n/i) ;
                arr.push_back(i) ;
            }
        }
    }
    return arr ;
}

int main()
{
    seive() ;
    testcase()
    {
        int n ;
        scanf("%d" , &n) ;
        int arr1[n] ;
        int *arindex ;
        arindex = (int*) calloc((int)pow(10 , 6) , sizeof(int)) ;
        int maxcount = 0 ;
        iFor(0 , n)
        {
            scanf("%d" , &arr1[i]) ;
            if(i)
            {
                maxcount = max(maxcount , arindex[arr1[i]] ) ;
            }
            vector< int> arr2 ;
            if(arr1[i] < m1)
                arr2 = arr[arr1[i]] ;
            else
            {
                arr2 = factor(arr1[i]) ;
            }
            for(int j = 0 ; j < arr2.size() ; j++)
            {
                arindex[arr2[j]]++ ;
            }
        }
        printf("%d\n" , maxcount) ;
    }
    return 0;
}
