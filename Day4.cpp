#include<iostream>
using namespace std;

int main(){

    // 1.ENTER THE GREATER NUMBER

//    int a,b;
//    cout<<"enter two numbers:";
//    cin>>a;
//    cin>>b;

//    if(a>b){
//     cout<<a;
//    }
//    else{
//     cout<<b;
//    }

    // 2. PRINT PERSONG IS ELDER OR TENEGER

    // int age;
    // cin>>age;

    // if(age>=18){
    //     cout<<"adult";
    // }
    // else{
    //     cout<<"teneger";
    // }


    // 3.print months

    // int month;
    // cin>>month;

    // if(month==1){
    //     cout<<"january";
    // } 
    // else if(month==2){
    //     cout<<"februry";
    // }
    // else if(month==3){
    //     cout<<"march";
    // }
    // else if(month==4){
    //     cout<<"april";
    // }
    // else if(month==5){
    //     cout<<"may";
    // }
    // else if(month==6){
    //     cout<<"june";
    // }
    // else if(month==7){
    //     cout<<"july";
    // }
    // else if(month==8){
    //     cout<<"august";
    // }
    // else if(month==9){
    //     cout<<"september";
    // }
    // else if(month==10){
    //     cout<<"october";
    // }
    // else if(month==11){
    //     cout<<"november";
    // }
    // else if(month==12){
    //     cout<<"december";
    // }
    // else{
    //     cout<<"enter 1 to 12 month";
    // }

    // 4. discount on ticket by age.

    // int n;
    // cin>>n;

    // if(n<=11 || n>=66){
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }


    // FOR LOOP 
    // 1. print india will win world cup 20 times

    // for(int i=0;i<=20;i++){
    //     cout<<"india will win world cup:"<< i<<endl;
    // }

    // 2. ODD NUMBER

    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     if(i%2!=0){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         continue;
    //     }
    // }

    // 3. DIVISIBLE BY 4

    int n; 
    cin>>n;

    for(int i=0;i<n;i++){
        if(i%4==0){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
}