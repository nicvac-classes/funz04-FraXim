#include <iostream>
using namespace std;

int somma(int a,int b){
    int so;
    so=a+b;
    return so;
}

int sottrazione(int a, int b){
    int s;
    s=a-b;
    return s;
}

int moltiplicazione(int a, int b){
    int m;
    m=a*b;
    return m;
}

double divisione(double a, double b){
    double d;
    d=a/b;
    return d;
}

int elevamentoPotenza(int esponente, int base){
    int eP,i;
    eP=base;
    for(i=1; i<= esponente; i++){
        eP= eP*base;
    }
    return eP;
}

int inputPositivo(){
    int in;
    do{
        cout<<"Inserisci un numero positivo"<<endl;
        cin>>in;
        if(in>0){
        }
        else{
            cout<<"Il numero da te inserito è minore di zero"<<endl;
        }
    }while(in<0);
    return in;
}

int main(){
    int a, b, d, so, sot, m, eP;
    a= inputPositivo();
    b= inputPositivo();
    d= divisione(a,b);
    so= somma(a,b);
    sot= sottrazione(a,b);
    m= moltiplicazione(a,b);
    eP= elevamentoPotenza(a,b);
    cout<<"sottrazione= "<<sot<<", somma= "<<so<<", divisione= "<<d<<", elevamento potenza= "<<eP<<", moltiplicazione= "<<m"<<endl; 
}
