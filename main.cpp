#include <iostream>

using namespace std;

int main()
{
    double suhu,miuSuhu1,miuSuhu2;
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

    asdasdsad
    cout<<label2<<"("<<miuSuhu2<<")";

    return 0;
}
