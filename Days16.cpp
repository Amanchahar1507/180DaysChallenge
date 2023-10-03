#include<iostream>
using namespace std;

// 1. BINARY TO DECIMAL

// int main(){
//     int n;
//     cin>>n;
//     int ans = 0,mul=1;
    // while(n){
    //     int rem = n%10;
    //     n = n/10;
    //     ans += rem*mul;
    //     mul = mul*2; 
    // }

    // for(int j=n;j>0;j=j/10){
    //     int rem = j%10;
    //     ans += rem*mul;
    //     mul = mul*2;
    // }
    // cout<<ans<<" ";
//}


// 2. DECIMAL INTO BINARY.

// int main(){
//     int n;
//     cin>>n;
//     int ans =0,mul =1;
//     while(n>0){
//         int rem = n%2;
//         n = n/2;
//         ans += rem*mul;
//         mul = mul*10;
//     }
//     cout<<ans<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans =0,mul=1;
//     for(int j=n;j>0;j=j/2){
//         int rem = j%2;
//         ans += rem*mul;
//         mul = mul*10;

//     }
//     cout<<ans<<" ";
// }


// 3. DECIMAL TO OCTAL

// int main(){
//     int n;
//     cin>>n;
//     int ans =0,mul =1;
//     while(n){
//         int rem = n%8;
//         n = n/8;
//         ans += rem*mul;
//         mul = mul*10;
//     }
//     cout<<ans<<" ";
// }

// 4. OCTAL INTO DECIMAL

// int main(){
//     int n;
//     cin>>n;
//     int ans=0,mul=1;
//     while(n){
//         int rem = n%10;
//         n = n/10;
//         ans+=rem*mul;
//         mul = mul*8;
//     }
//     cout<<ans<<" ";
// }

// 5. BINARY TO OCTAL

// int main(){
//     int n;
//     cin>>n;
//     int ans =0,mul=1;

//     while(n){
//         int rem = n%10;
//         n = n/10;
//         ans+= rem*mul;
//         mul = mul*2;
//     }
//     int res =0,mu=1;
//     while(ans){
//         int re = ans%8;
//         ans = ans/8;
//         res += re*mu;
//         mu = mu*10;
//     }
//     cout<<res<<" ";
// }

// 6. OCTAL INTO BINARY;
int main(){
    int n;
    cin>>n;
    int ans =0,mul =1;
    while(n>0){
        int rem = n%10;
        n = n/10;
        ans+= rem*mul;
        mul = mul*8;
    }
    int res=0,re=1;
    while(ans){
        int r = ans%2;
        ans = ans/2;
        res += re*r;
        re = re*10;
    }
    cout<<res<<" ";
}