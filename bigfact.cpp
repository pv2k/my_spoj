#include<iostream>
using namespace std;
int multiply(int x, int res[], int siz);
void factorial(int n)
{
    int res[503];
    res[0] = 1;
    int siz = 1;
    for (int x=2; x<=n; x++)
    {
        siz = multiply(x, res, siz);
    }
    for (int i=siz-1; i>=0; i--)
        cout << res[i];
    cout << endl;
}
int multiply(int x, int res[], int siz)
{
    int tmp = 0;
    for (int i=0; i<siz; i++)
    {
        int prod = res[i] * x + tmp;
        res[i] = prod % 10;  
        tmp  = prod/10;    
    }
    while(tmp)
    {
        res[siz] = tmp%10;
        tmp = tmp/10;
        siz++;
    }
    return siz;
}
int main()
{
    int t,i,j,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        factorial(n);
    }
    return 0;
}