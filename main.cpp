#include <iostream>

using namespace std;

int main()
{
    double suhu,miuSuhu1,miuSuhu2,kelembapan,miuLembab1,miuLembab2 = 0;
    string label1suhu,label2suhu,label1lembab,label2lembab = " "; //label1 turun label2lembab naik
    cout<<"Masukkan Suhu: ";
    cin>>suhu;
    if (suhu <= 0){
        miuSuhu1 = 1;
        label1suhu = "Dingin";
        miuSuhu2 = 0;
    }
    else if ((suhu >= 3) && (suhu <= 12)){
        miuSuhu1 = 1;
        label1suhu = "Sejuk";
        miuSuhu2 = 0;
    }
    else if ((suhu >= 15) && (suhu <= 24)){
        miuSuhu1 = 1;
        label1suhu = "Normal";
        miuSuhu2 = 0;
    }
    else if ((suhu >= 27) && (suhu <= 36)){
        miuSuhu1 = 1;
        label1suhu = "Hangat";
        miuSuhu2 = 0;
    }
    else if (suhu >= 39){
        miuSuhu1 = 1;
        label1suhu = "Panas";
        miuSuhu2 = 0;
    }
    else if ((suhu > 0 && suhu < 3)){
        miuSuhu1 = -((suhu-3)/(3-0));
        label1suhu = "Dingin";
        miuSuhu2 = ((suhu-0)/3-0);
        label2suhu = "Sejuk";
    }
    else if ((suhu > 12 && suhu < 15)){
        miuSuhu1 = -((suhu-15)/(15-12));
        label1suhu = "Sejuk";
        miuSuhu2 = ((suhu-12)/(15-12));
        label2suhu = "Normal";
    }
    else if ((suhu > 24 && suhu < 27)){
        miuSuhu1 = -((suhu-27)/(27-24));
        label1suhu = "Normal";
        miuSuhu2 = ((suhu-24)/(27-24));
        label2suhu = "Hangat";
    }
    else if ((suhu > 36) && (suhu < 39)){
        miuSuhu1 = -((suhu-39)/(39-36));
        label1suhu = "Hangat";
        miuSuhu2 = ((suhu-36)/(39-36));
        label2suhu = "Panas";
    }

    //Menghitung kelembaban
    cout<<"Masukan Kelembapan: ";
    cin>>kelembapan;
    if (kelembapan<=10){
        miuLembab1 = 1;
        label1lembab = "Kering";
        miuLembab2 = 0;
    }
    else if ((kelembapan>=20) && (kelembapan <=40)){
        miuLembab1 = 1;
        label1lembab = "Lembab";
        miuLembab2 = 0;
    }
    else if (kelembapan >=50){
        miuLembab1 = 1;
        label1lembab = "Basah";
        miuLembab2 = 0;
    }
    else if ((kelembapan > 10) && (kelembapan <20)){
        miuLembab1 = -((kelembapan-20)/(20-10));
        label1lembab = "Kering";
        miuLembab2 = (kelembapan-10)/(20-10);
        label2lembab = "Lembab";
    }
    else if ((kelembapan >20) && (kelembapan <40)){
        miuLembab1 = -((kelembapan-50)/(50-40));
        label1lembab = "Lembap";
        miuLembab2 = (kelembapan-40)/(50-40);
        label2lembab = "Basah";
    }


    if ((miuLembab2 == 0) && (miuSuhu2 == 0)){
        cout<<label1suhu<<"("<<miuSuhu1<<")"<<endl;
        cout<<label1lembab<<"("<<miuLembab1<<")"<<endl;
    }
    else if (miuSuhu2 == 0){
        cout<<label1suhu<<"("<<miuSuhu1<<")"<<endl;
        cout<<label1lembab<<"("<<miuLembab1<<")"<<endl;
        cout<<label2lembab<<"("<<miuLembab2<<")";
    }
    else if (miuLembab2 == 0){
        cout<<label1suhu<<"("<<miuSuhu1<<")"<<endl;
        cout<<label2suhu<<"("<<miuSuhu2<<")"<<endl;
        cout<<label1lembab<<"("<<miuLembab1<<")"<<endl;
    }
    else{
        cout<<label1suhu<<"("<<miuSuhu1<<")"<<endl;
        cout<<label2suhu<<"("<<miuSuhu2<<")"<<endl;
        cout<<label1lembab<<"("<<miuLembab1<<")"<<endl;
        cout<<label2lembab<<"("<<miuLembab2<<")";
    }

    return 0;
}
