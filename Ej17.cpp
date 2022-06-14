#include <iostream>
using namespace std;
int main() {
    int dia,diatmax=0,contdneb=0,contdll=0,contdsinll=0,cantVueltas=5,x;
    float primertemp,tmax,pritmin,tmin,ampter,mmlluvia,visikm;
    bool tempmax=0,tempmin=0;


    for(x=1;x<=cantVueltas;x++){

    cout<<"Ingrese numero de dia: ";
    cin>> dia;
    cout<<endl;
//----------------------------------------------------------------// TEMP MAX, AMP TERMICA
    cout<<"Ingrese temperatura del día: ";
    cin>> tmax;
    cout<<endl;
    if(tempmax==0){
        primertemp=tmax;
        pritmin=tmax;
        diatmax=dia;
        tempmax=1;
        }
    else if(tmax>primertemp){
        diatmax=dia;
       primertemp=tmax;
        }
    else if (tmax<pritmin){
        pritmin=tmax;
    }
    ampter= primertemp-pritmin;
//----------------------------------------------------------------// DIAS DE LLUVIA O SIN LLUVIA
    cout<<"Ingrese milimetros de lluvia en el dia: ";
    cin>> mmlluvia;
    cout<<endl;
    if(mmlluvia>0){
    contdll=contdll+1;
    }
    else if(mmlluvia==0){
    contdsinll=contdsinll+1;
    }

//----------------------------------------------------------------// DIAS CON NEBLINA
    cout<<"Ingrese visibilidad en Km del dia: ";
    cin>> visikm;
    cout<<endl;
    if(visikm<2){
        contdneb=contdneb+1;
    }
//----------------------------------------------------------------//
    cout<< "--------------------------------------"<< endl;


    }
    cout<<endl<<"El dia con la temperatura maxima fue el: "<< diatmax<< " con "<< primertemp<< " grados de maxima."<<endl;
    cout<<endl<<"La amplitud termica de todo el perdiodo es de: "<< ampter<<" grados de amplitud termica."<<endl;
    cout<<endl<<"La cantidad de dias con neblina fue de: " <<contdneb<<"."<< endl;

//----------------------------------------------------------------//CLIMA DE LOS DIAS


    if( contdll>contdsinll && contdll/cantVueltas>=1){ //pongo 1 porque 1/3 de 3 d�as que ejecuta el FOR, es 1
        cout<<endl<< "Los dias fueron lluviosos y humedos"<<endl;
    }
    else if(contdll==0){
        cout<<endl<< "Los dias fueron secos"<<endl;
    }
	return 0;
}
