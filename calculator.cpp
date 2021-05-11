//  main.cpp
//  hesap makinesi
//  Created by B201200355-Namık Kemal ARSU  on 3.12.2020
#include <iostream>
#include <cmath>
#include<cstdlib>
#include<stdlib.h>

using namespace std;

void HesapMak(){

    int  sayi , s1, s2, taban, us, sonuc, secim ;

    int Secim;
do
{
    cout<<"Hesaplama Yapmak İçin 1', Çıkış Yapmak İçin 0'a basın."<<endl;
    cout<<"secim: ";
    while (!(cin >> secim)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Lütfen belirtilen aralıklardaki değerleri giriniz"<<endl;
            cout << "işleminizi seçiniz: ";
        }
    
                                            if (secim == 1){

                          cout << "  ===Hesap Makinesi Seçim Menüsü===\n";
                          cout << "  ************************************\n";
                          cout << "  1.==> Toplama\n";
                          cout << "  2.==> Çıkarma\n";
                          cout << "  3.==> Çarpma\n";
                          cout << "  4.==> Bölme\n";
                          cout << "  5.==> Mod Alma\n";
                          cout << "  6.==> Üs Alma\n";
                          cout << "  7.==> Karekök Alma\n";
                          cout << "  ====================================\n";
                          cout << "  8.==> ÇIKIŞ\n";
                          cout << "  ************************************\n";
                          cout << "  Lütfen Seçiminizi Giriniz: ";
                               cin >> secim;
                          cout << endl;
    switch (secim)
    {
        case 1 :
            cout << " +Toplama İşlemi+\n ";
            cout << "\n";
            cout << " Birinci Sayıyı Giriniz:\n " ;
             cin >> s1;
            cout << " İkinci Sayıyı Giriniz:\n ";
             cin >> s2;
            sonuc = s1 + s2;
            cout << "\n" ;
            cout << " Sonuç= "  << sonuc << endl ;
           break;
            
        case 2:
            cout << " -Çıkarma İşlemi-\n ";
            cout << "\n";
            cout << " Birinci Sayıyı Giriniz: ";
             cin >> s1;
            cout << " İkinci Sayıyı Giriniz: ";
             cin >> s2;
            sonuc = s1 - s2;
            cout << "\n" ;
            cout << " Sonuç= " << sonuc << endl;
            cout << "\n" ;
            break;
      
        case 3:
            cout << " *Çarpma İşlemi*\n " ;
            cout << "\n";
            cout << " Birinci Sayıyı Giriniz: ";
             cin >> s1;
            cout << " İkinci Sayıyı Giriniz: ";
             cin >> s2;
            sonuc = s1 * s2;
            cout << "\n" ;
            cout << " Sonuç= " << sonuc << endl;
            cout << "\n" ;
            break;

        case 4:
            cout << " /Bölme İşlemi/\n";
            cout << "\n";
            cout << " Birinci Sayıyı Giriniz: ";
             cin >> s1;
            cout << " İkinci Sayıyı Giriniz: ";
             cin >> s2;
            sonuc = s1 / s2;
            cout << "\n" ;
            cout << " Sonuç= " << sonuc << endl;
            cout << "\n" ;
            break;

        case 5:
            cout << " %Mod Alma İşlemi%\n ";
            cout << "\n";
            cout << " Birinci Sayıyı Giriniz: ";
             cin >> s1;
            cout << " İkinci Sayıyı Giriniz: ";
             cin >> s2;
            sonuc = s1 % s2;
            cout << "\n" ;
            cout << " Sonuç= " << sonuc << endl;
            cout << "\n" ;
            break;
    
            
        case 6:
            cout << " &Üs Alma Islemi&\n ";
            cout << "\n";
            cout << " Taban Sayısını Giriniz: ";
             cin >> taban;
            cout << " Üs Sayısını Giriniz: ";
             cin >> us;
            cout << "\n" ;
            cout << " Sonuç : " <<pow(taban,us) << endl;
            cout << "\n" ;
            break;
            
        case 7:
            double sayi;
            cout << " √Karekök Alma İşlemi√\n ";
            cout << "\n";
            cout << " Karekökünü Almak İstediğiniz Sayıyı Giriniz: ";
             cin >> sayi;
            cout << "\n" ;
            cout << "Girilen sayının karekökü : "<< sqrt(sayi) << endl;
            cout << "\n" ;
            break;
            
        case 8:
            cout << "Program Sonlanmıştır...\n" << endl;
            break;

        default: cout << Secim << "Menüde böyle bir seçenek yok. Lütfen yeniden seçim yapınız.\n" << endl;
    }
    }
    else{
     
    }
    
}while (secim != 0);

}

int main()
{
    HesapMak();
    return 0;
}










