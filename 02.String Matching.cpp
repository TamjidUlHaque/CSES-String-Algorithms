#include<bits/stdc++.h>
using namespace std ;

/*
    Intuition :- Ei question ta pattern matching algorithm er upore
    base kore bananu hoise . Naive pattern matching algorithm er time
    complexity holo O(n*m) . Karon naive algorithm e jodi kuno ekta
    position e mismatch hoy tahole duita string er iterator ke e back
    tracking korte hoy .

    Ei problem theke bachar jonne duita algorithm ache .
    i) KMP (Knuth-Morris-Pratt) algorithm , ii) Robin-Carp algorithm

    Robin-Carp er shomossa holo ei algorithm e jokhon kuno ekta string
    er character gula ke hash korte hoy tokhon je value gula use kora
    hoy oi value gular summation onek beshi boro hoye jay jar karone
    calculation kora difficult hoye pore . Ar mod kore hashcode matching
    korle spurious hit houwar possibility thake .

    KMP pattern matching algorithm e emon kuno problem nei , ei algorithm
    er maddhome O(n) time complexity teh total number of pattern match
    calculate kora jay .

    Ei algorithm e ekta longest_prefix_suffix table ba PI-Table toiri kora
    hoy jei table er upore base kore amra decision nei kuno ekta position
    e mismatch korle amra pattern er kun ongsho theke abar matching shuru
    korbo . Ar ei jinish tar karone amader ke source string er moddhe kuno
    shomoy backtrack korte hoy na .
*/

vector<int> buildLps(string &pattern){

    int m = (int)(pattern.size()) ; vector<int> lps(m,0) ;
    int prefix = 0 , suffix = 1 ;
    while(suffix<m){
        if(pattern[prefix]==pattern[suffix]){
            lps[suffix] = prefix+1 ;
            prefix++ ; suffix++ ;
        }else{
            if(prefix==0){
                lps[suffix] = 0 ; suffix++ ;
            }else{
                prefix = lps[prefix-1] ;
            }
        }
    }
    return lps ;

}

int KMP_ALGORITHM(string &source, string &pattern){
    int n = (int)(source.size()) ;
    int m = (int)(pattern.size()) ;
    vector<int> longest_prefix_suffix = buildLps(pattern) ;
    int idx = 0 ; int cnt = 0 ;
    for(int i = 0 ; i < n ; ){
        if(source[i]==pattern[idx]){
            idx++ ; i++ ;
            if(idx==m){
                cnt++ ; idx = longest_prefix_suffix[idx-1] ;
            }
        }else{
            if(idx != 0){
                idx = longest_prefix_suffix[idx-1] ;
            }else{
                idx = 0 ; i++ ;
            }
        }
    }
    return cnt ;
}

int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ;

    string source , pattern ; cin >> source >> pattern ;

    int noOfOccurance = KMP_ALGORITHM(source,pattern) ;

    cout << noOfOccurance << endl ;
}
