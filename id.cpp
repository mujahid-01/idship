#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     char a;

     for(int i=1;i<=n;i++){
          cin>>a;
     if(a=='c' || a=='C'){
        cout<<"Cruiser"<<endl;
     }

      else if(a=='b' || a=='B'){
        cout<<"BattleShip"<<endl;
      }

      else if(a=='d' || a=='D'){
        cout<<"Destroyer"<<endl;
      }

      else if(a=='f' || a=='F'){
        cout<<"Frigate"<<endl;
      }}

}

