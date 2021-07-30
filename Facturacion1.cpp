#include <conio.h>
#include <iostream>
	using namespace std;
 
int main (){
	
  char articulo1[10],articulo2[10],articulo3[10],articulo4[10],articulo5[10],articulo6[10],articulo7[10],articulo8[10],articulo9[10],articulo10[10];
  char precio1[10],precio2[10],precio3[10],precio4[10],precio5[10],precio6[10],precio7[10],precio8[10],precio9[10],precio10[10];
  float iva, desc,desc1,total,subtotal;
   cout<<"Ingrese el articulo1:";cin>>articulo1;
   cout<<"Ingrese el precio1:",cin>>precio1;
   cout<<"Ingrese el articulo2:";cin>>articulo2;
   cout<<"Ingrese el precio2:",cin>>precio2;
   cout<<"Ingrese el articulo3:";cin>>articulo3;
   cout<<"Ingrese el precio3:",cin>>precio3;
   cout<<"Ingrese el articulo4:";cin>>articulo4;
   cout<<"Ingrese el precio4:",cin>>precio4;
   cout<<"Ingrese el articulo5:";cin>>articulo5;
   cout<<"Ingrese el precio5:",cin>>precio5;
   cout<<"Ingrese el articulo6:";cin>>articulo6;
   cout<<"Ingrese el precio6:",cin>>precio6;
   cout<<"Ingrese el articulo7:";cin>>articulo7;
   cout<<"Ingrese el precio7:",cin>>precio7;
   cout<<"Ingrese el articulo8:";cin>>articulo8;
   cout<<"Ingrese el precio8:",cin>>precio8;
   cout<<"Ingrese el articulo9:";cin>>articulo9;
   cout<<"Ingrese el precio9:",cin>>precio9;
   cout<<"Ingrese el articulo10:";cin>>articulo10;
   cout<<"Ingrese el precio10:",cin>>precio10;
iva=precio1[10]+precio2[10]+precio3[10]+precio4[10]+precio5[10]+precio6[10]+precio7[10]+precio8[10]+precio9[10]+precio10[10]*0.12/100;
subtotal=precio1[10]+precio2[10]+precio3[10]+precio4[10]+precio5[10]+precio6[10]+precio7[10]+precio8[10]+precio9[10]+precio10[10];
total=subtotal+iva;
 if (total >=90)
{
	desc=total-0.10;
	desc1=total-desc;
	
}

 
system("cls");
 

cout <<" 1."<<articulo1<<"             "<<precio1<<"$"<<endl;
cout <<" 2."<<articulo2<<"             "<<precio2<<"$"<<endl;
cout <<" 3."<<articulo3<<"             "<<precio3<<"$"<<endl;
cout <<" 4."<<articulo4<<"             "<<precio4<<"$"<<endl;
cout <<" 5."<<articulo5<<"             "<<precio5<<"$"<<endl;
cout <<" 6."<<articulo6<<"             "<<precio6<<"$"<<endl;
cout <<" 7."<<articulo7<<"             "<<precio7<<"$"<<endl;
cout <<" 8."<<articulo8<<"             "<<precio8<<"$"<<endl;
cout <<" 9."<<articulo9<<"             "<<precio9<<"$"<<endl;
cout <<"10."<<articulo10<<"             "<<precio10<<"$"<<endl;


cout <<" "            "SBTOTAL:"<<subtotal<<endl;
cout <<" "            "IVA 12%:"<<iva<<endl;
cout <<" "      "DESCUENTO 10%:"<<desc1<<endl;
cout <<" "              "TOTAL:"<<total<<endl;


 


system("pause");
}