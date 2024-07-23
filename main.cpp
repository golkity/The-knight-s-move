#include <iostream>
#include <vector>

using namespace std;

inline bool isValid( int i, int j ){
    return i >= 0 && i < 8 && j >= 0 && j < 8;
}


int main()
{
   int n =8,m=8,ki,kj;
   vector<vector<char>> t( n, vector<char>( m, '.' ) );
   vector<int> di = {2,2,1,1,-1,-1,-2,-2};
   vector<int> dj = {-1,1,-2,2,-2,2,-1,1};
    cin>>ki>>kj;
    if(!isValid(--ki,--kj))
        return 1;
    t[ki][kj] = 'K';
    for( int d = 0; d < n; ++d ){
        int ni = ki + di[d],  nj = kj + dj[d];
        if( isValid( ni, nj ) )
            t[ni][nj] = '*';
    }

    for( int i = 0; i < n; ++i ){
        for( int j = 0; j < m; ++j )
            cout << t[i][j] << ' ';
        cout <<endl;
    }
    cout<<endl;

    return 0;
}

