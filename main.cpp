#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int data[50];
int elemen, ketemu,x,inp;
cout<<"Program untuk mencari data dari array, dan menampilkan nomor elemennya:"<<endl;

cout<<" Masukkan Banyak Inputan : "; cin>>inp;
cout<<"\n";
for(elemen=0; elemen<=inp; elemen++)
    {
    cout<<" Nilai Ke- "<<elemen<<" : ";
    cin>>data[elemen];
    }

cout<<"\n";
cout<<endl<<endl;
cout << "Data yang dicari : ";
cin >>x;
ketemu = 0;


for(elemen=0; elemen<= 50; elemen++)
{
if (data[elemen] == x)
{ ketemu =
!
ketemu;
break;
}
}
if (ketemu == 0) cout << "Data tidak ditemukan" ;
else cout << "Data ada di elemen :"  << elemen;

return 0;
}
