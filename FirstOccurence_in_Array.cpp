# include <iostream> 
using namespace std ;

int first(int arr[], int n , int i , int key ){

   
    if(arr[i] == key){
        return i ;
    }
     if(i == n ){
        return -1 ;
    }
    return first(arr,n,i+1, key) ;
}

int main(){

    int arr[] = {4,0,1,2,5,2,7} ;
    cout << first(arr,7,0,2)<<endl ;

    return 0 ;
}