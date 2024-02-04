#include<iostream>
using namespace std;
int main(){
    int n1=0,n5=0,n10=0,n20=0,n50=0,n100=0,n500=0;
    int amount;
    cout<<"enter the amount:";
    cin>>amount;
    switch(1){
        case 1:
            n500=amount/500;
            amount-=n500*500;
        case  2:
             n100=amount/100;
             amount-=n100*100;
        case 3:
            n50=amount/50;
            amount-=n50*50;
        case 4:
            n20=amount/20;
            amount-=n20*20;
        case 5:
            n10=amount/10;
            amount-=n10*10;
        case 6:
            n5=amount/5;
            amount-=n5*5;
        case 7:
            n1=amount/1;
            amount-=n1*1;
    

    }
    cout<<"minimum number of notes are:"<<n1+n5+n10+n20+n50+n100+n500;


}