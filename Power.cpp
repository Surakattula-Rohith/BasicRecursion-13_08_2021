# include <iostream>
using namespace std ;

int Power(int n,int p){

    if(p == 0){
        return 1 ;
    }
     
    return n*Power(n,p-1) ;
}

int main(){

    int a,b ;
    cin >> a >> b  ;
    cout << Power(a,b) << endl ;

    return 0 ;
}