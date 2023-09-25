#include<iostream>
using namespace std;

int main(){

    //    1. PRINT THIS PATTERN
    //        4 4 4 4 4 4
    //       4 4 4 4 4 4
    //       4 4 4 4 4 4  
    //       4 4 4 4 4 4
    //       4 4 4 4 4 4 

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=6;j++){
    //         cout<<4<<" ";
    //     }
    //     cout<<endl;
    // } 


    // 2. 1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25

    // for(int i=1;i<=6;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<j*j<<" ";
    //     }
    //     cout<<endl;
    // }


    // 3.
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=6;j++){
    //         cout<<j*j*j<<" ";
    //     }
    //     cout<<endl;
    // }


// 4. 
// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

for(int i=1;i<=5;i++){
    for(int j=1;j<=6;j++){
        char ch ='F'+(j-1);
        cout<<ch ;
    }
    cout<<endl;
}


}