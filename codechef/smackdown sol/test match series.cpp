#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define endl "\n"
#define M 1e9 + 7
#define pi 3.141592653589793238
#define INF 1e17
#define MOD 998244353



//compare two no 
bool cmp(ll a, ll b)
{
    return a > b;
}

//gcd of two no
ll gcd(ll a, ll b) // TC = O(log n)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

//lcm of two no

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
// fibonacci of nth no . 
ll fib(ll n)
{
    double phi = (1 + sqrt(5)) / 2;
    return (ll)round(pow(phi, n) / sqrt(5));
}

// all factors of a number
vector<ll> factors(ll n) 
{    
    vector<ll> v;

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                v.push_back(i);
            }

            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    return v;
}


//find power
// ll power(ll N, ll pow, ll mod)
// {
//     if (N == 0 || N == 1)
//         return fmod(N, mod);

//     if (pow == 0)
//         return 1;

//     if (mod == 1)
//         return 0;

//     ll ans = 1;
//     while (pow)
//     {
//         if (fmod(pow, 2))
//         {
//             ans = fmod((ans * N), mod);
//         }

//         N = fmod((N * N), mod);
//         pow /= 2;
//     }
//     return ans;
// }




// all prime numbers till n
vector<ll> sieve(ll n) 
{
    vector<ll> v;

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (ll p = 2; p <= n; p++)
    {
        if (prime[p])
            v.push_back(p);
    }

    sort(v.begin(), v.end());
    return v;
}


 // all prime factors of a number
set<ll> prime(ll n)
{
    set<ll> s;
    while (n % 2 == 0)
    {
        s.insert(2);
        n = n / 2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            s.insert(i);
            n = n / i;
        }
    }

    if (n > 2)
        s.insert(n);

    return s;
}

//convert dec to binary and return as a  binary string
string decToBinary(int n)
{
    string s="";int i = 0;
    while (n > 0) 
    {
        s =to_string(n % 2)+s;n = n / 2;i++;
    }
        return s;
}

//string passes as binary and return as a int
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for(int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')dec_value += base;base = base * 2;
    }
    return dec_value;
}

//check whether the no is prime or not.
bool isPrime(int n)
{
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0||n%3==0)return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0)
        return false;
    }
    return true;
}

//check whether the no is power of two or not.
bool isPowerOfTwo(int n)
{
    if(n==0)return false;
    return (ceil(log2(n)) == floor(log2(n)));
}



ll mod =10;
ll power(ll a , ll pow , ll mod)
{
   ll res = 1 ;
    while(pow)
    {
        if(pow % 2 == 0)
        {
            a = (a * a) % mod;
            pow/=2;
        }
        else{
            res = (res * a) % mod;
            pow --;
        }

    }
    return (res % mod);
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    int arr[5];
    while (t--)
    {
        // int r1 , r2, r3, r4, r5 ;
        // cin>>r1 >>r2 >>r3 >>r4>>r5;
        // //r=0 ->draw ,, r= 1-> india , r=2 -> england ;
        for(int i =0 ; i< 5 ; i++)
        {
            cin>>arr[i];
        }
        int ind =0 , eng= 0, draw =0;
        for(int i = 0 ; i< 5 ; i++)
        {
            if(arr[i] == 1)
            {
                ind++;
            }
            else if( arr[i] == 2)
            {
                eng++;
            }
            else if(arr[i] == 0){
                draw++;
            }
            else{
                break;
            }
            
        }
        if(ind > eng)
        {
            cout<< "INDIA" <<endl;
        }
        else if(eng > ind )
        {
            cout<<"ENGLAND"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
        
    }
     
     return 0;
}