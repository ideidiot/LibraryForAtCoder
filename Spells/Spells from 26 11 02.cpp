//spells
#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define per(i,a,n) for(int i=(n)-1;i>=(a);i--)
#define pp pop_back
#define pb push_back
#define fi first
#define se second
#define uniquesort(v){\
    sort((v).begin(),(v).end());\
    (v).erase(unique((v).begin(),(v).end()),(v).end());\
}
#define upsort(v) sort(v.begin(),v.end())
#define downsort(v) sort(v.rbegin(),v.rend())
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pss = pair<string, string>;
using psi = pair<string, int>;
using psl = pair<string, ll>;

int dx4[4] = {-1,  0,  1,  0};
int dy4[4] = { 0,  1,  0, -1};
int dx8[8] = {-1, -1,  0,  1,  1,  1,  0, -1};
int dy8[8] = { 0,  1,  1,  1,  0, -1, -1, -1};