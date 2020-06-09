#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Select your choice"<<endl<<"1.Open an Account"<<endl<<"2.Balance Enquiry"<<endl<<"3.Deposit"<<endl<<"4.Withdrawal"<<endl<<"5.Close an Acccount"<<endl;
    cout<<"6.Show all accounts"<<endl<<"7.Quit"<<endl;
    switch(c){
      case 1:{
          void Open Acc();
      }
      case 2:{
          void Balance enq();
       }
       case 3:{
          void Deposite();
       }
       case 4:{
            void Withdrawal();
        }
        case 5:{
            void Close acc();
         }
         case 6:{
            void show();
         }
         case 7:{
            void Quit();
         }
     }
