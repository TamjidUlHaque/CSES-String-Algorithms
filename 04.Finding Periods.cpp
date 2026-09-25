#include<bits/stdc++.h>
using namespace std ;
#define len(x) ((int)(x).size())

/*
    Intuition :- Ekhane ei question ta solve korar jonne Z algorithm use
    kora hoise jekhane string er pattern match check korar jonne ekta z
    array toiri kora hoy . Oi array er index er value gula nirdesh kore ,

    0 theke n-i+1 porjonto string e traverse korle ar i theke n porjonto
    string e traverse korle koto gula character match hobe . Orthat,

    z[i] = number of characters that matches with the prefix of string
    s starting from index i .

    Ekhane Z array ta build korar jonne ekta optimized approach use kora
    hoise jekhane O(n) time complexity te amra Z array ta build korte
    parsi . Jekhane naive approach e korte gele T.C. hoto O(n^2) .

    Building the Z array :- Amra duita pointer nibo , ekta left arekta
    right pointer . Left pointer ta nirdesh korbe thik kun index theke
    amra already amader value ta calculate korechi . Right ptr nirdesh
    korbe kun point porjonto amader comparison sesh hoyeche . Protibar
    kuno ekta index er value calculate korar shomoy amra check korbo je
    amader current index ta ki rptr theke chuto ba shoman ki na . Chuto
    ba shoman hole previously calculated value er sahajje current value
    ta O(1) e calculate korar try korbo .

*/

vector<int> Build_Z_Array(string &s){
    int n = int(s.size()) ; vector<int> arr(n,0) ;
    int lptr = 0 , rptr = 0 ; arr[0] = n ;
    for(int i = 1 ; i < n ; i++){
        if(i>rptr){
            lptr = rptr = i ;
            while(rptr<n and s[rptr]==s[rptr-lptr]) rptr++ ;
            arr[i] = rptr-lptr ; rptr-- ;
        }else{
            if( arr[i-lptr] < rptr-i+1 ){
                arr[i] = arr[i-lptr] ;
            }else{
                lptr = i ;
                while(rptr<n and s[rptr]==s[rptr-lptr]) rptr++ ;
                arr[i] = rptr-lptr ; rptr-- ;
            }
        }
    }
    return arr ;
}


int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ;

    string source ; cin >> source ; int n = len(source) ;

    vector<int> Z_array = Build_Z_Array(source) ;

    for(int i = 1 ; i < n ; i++){
        if( (Z_array[i]+i) == n )
            cout << i << ' ' ;
    }

    cout << n << '\n' ;

    return 0 ;
}
