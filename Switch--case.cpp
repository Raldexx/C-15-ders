#include <iostream>

using namespace std;

int main (){
/*
int gün;
cout<<"Sayiya gore gun programina hosgeldiniz  !-!\n";
cout<<"bir gun sayisi giriniz:";

cin>>gün;

if (gün>7)
    cout<<"7'ye kadar giriniz";


switch (gün){
    case 1: cout<< "Pazartesi\n";break;
    case 2: cout<< "Sali\n";break;
    case 3: cout<< "Carsamba\n";break;
    case 4: cout<< "Persembe\n";break;
    case 5: cout<< "Cuma\n";break;
    case 6: cout<< "Cumartesi\n";break;
    case 7: cout<< "Pazar\n";break;
    default: cout<<"7'e kadar giriniz";

}
*/

int x=9, y=12, result;

/*result= (x==7)? 19: (y==12)? 10: -7;*/

switch(x){
    case 7: result;19;break;
    default:switch (y){
            case 12:result:10;break;
           default: result=-7;
    }


}
cout<<result<<"\n";
return 0;

}