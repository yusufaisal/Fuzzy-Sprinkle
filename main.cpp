#include <iostream>

using namespace std;

int main()
{
    double suhu,miuSuhu1,miuSuhu2,kelembapan,miuLembab1, miuLembab2;
    string label1,label2; //label1 turun label2 naik
    cout<<"Masukkan Suhu: ";
    cin>>suhu;
    if ((suhu <= 0) || ((suhu >= 3) && (suhu <= 12)) || ((suhu >= 15) && (suhu <= 24)) || ((suhu >= 27) && (suhu <= 36)) || (suhu >= 39)){
        miuSuhu1 = 1;
    }
    else if ((suhu > 0 && suhu < 3)){
        miuSuhu1 = -((suhu-3)/(3-0));
        label1 = "Dingin";
        miuSuhu2 = ((suhu-0)/3-0);
        label2 = "Sejuk";
    }
    else if ((suhu > 12 && suhu < 15)){
        miuSuhu1 = -((suhu-15)/(15-12));
        label1 = "Sejuk";
        miuSuhu2 = ((suhu-12)/(15-12));
        label2 = "Normal";
    }
    else if ((suhu > 24 && suhu < 27)){
        miuSuhu1 = -((suhu-27)/(27-24));
        label1 = "Normal";
        miuSuhu2 = ((suhu-24)/(27-24));
        label2 = "Hangat";
    }
    else if ((suhu > 36) && (suhu < 39)){
        miuSuhu1 = -((suhu-39)/(39-36));
        label1 = "Hangat";
        miuSuhu2 = ((suhu-36)/(39-36));
        label2 = "Panas";
    }

    cout<<label1<<"("<<miuSuhu1<<")"<<endl;
    cout<<label2<<"("<<miuSuhu2<<")"<<endl;
    cout<<"Masukan kelembapan : ";
    cin>>kelembapan;
    if((kelembapan<=10) || (kelembapan>=20 && kelembapan <=40) || (kelembapan >=50)){
       miuLembab1 = 1;
       miuLembab2 = 0;
    }
    else if (kelembapan >10 && kelembapan <20){
        miuLembab1 = -((kelembapan-20)/(20-10));
        label1 = "Kering";
        miuLembab2 = (kelembapan-10)/(20-10);
        label2 = "Lembab";
    }
    else if (kelembapan >20 && kelembapan <40){
        miuLembab1 = -((kelembapan-50)/(50-40));
        label1 = "Lembap";
        miuLembab2 = (kelembapan-40)/(50-40);
        label2 = "Basah";
    }
    cout<<label1<<"("<<miuLembab1<<")"<<endl;
    cout<<label2<<"("<<miuLembab2<<")";

    return 0;
}
