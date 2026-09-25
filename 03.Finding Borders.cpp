#include<bits/stdc++.h>
using namespace std ;
#define len(x) ((int)(x).size())

/*
    Intuition :- Amader kache jante chaise je given string er moddhe
    koto gula border ache , jekhane border holo kuno ekta string er prefix
    that is also a suffix_len and oi border shompurno string ta hote parbe na.

    Amra jani kuno ekta string er prefix holo prothom element theke shuru
    kore continuously jototuko newa jay ar suffix_len holo sesh element theke
    shuru kore with interuption jototuko newa jay . Ekhon amader ke je
    border khujte bola hoise tar moddhe shobcheye longest border ta holo
    lps er last element karon . Oi khan projonto shobcheye boro suffix_len that
    is equal to prefix gothon houwar shujog paise . Ekhon oi element ta ke
    nilam , ekhon shobcheye boro ta shudhu print korle hobe na , aro chuto
    size er jeigula ache which is also a suffix_len same as prefix oi gula o
    answer er moddhe include korte hobe . Ei jonne suffix ta niye oi suffix
    er jonne shobcheye boro suffix ta eivabe ektar por ekta shobgula suffix
    collect kora hoise .
*/

vector<int> buildLps(string &s){
    int n = len(s) ;
    vector<int> temporary(n,0) ;
    int ptr = 0 ;
    for(int i = 1 ; i < n ;){
        if(s[i]==s[ptr]){
            temporary[i] = ptr+1 ;
            ptr++ ; i++ ;
        }else{
            if(ptr==0){
                i++ ;
            }else{
                ptr = temporary[ptr-1] ;
            }
        }
    }
    return temporary ;
}

int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ;

    string source ; cin >> source ;

    vector<int> pi_table = buildLps(source) ;

    vector<int> borders ; int suffix_len = pi_table.back() ;

    while(suffix_len > 0){
        borders.push_back(suffix_len) ;
        suffix_len = pi_table[suffix_len-1] ;
    }

    reverse(borders.begin(),borders.end()) ;

    for(auto border:borders){
        cout << border << ' ' ;
    }

    return 0 ;
}
