# include <iostream>
using namespace std ;

bool sorted(int arr[], int n){

    if(n == 1){
        return true ;
    }

    if(arr[0]<=arr[1] && sorted(arr+1,n-1)){
        return true ;
    }
}
int main(){

    int arr[] = {1,2,3,4,8,6} ;
    cout << sorted(arr , 6) <<endl  ;

    return 0 ;

}