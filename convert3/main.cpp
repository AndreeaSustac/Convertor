#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
bool complete=0;

//1
long double lungime()
{
    char um[10][15]={"m", "cm", "km", "mm", "mi", "nmi", "Yd", "ft", "in" };
    char unitm[10][20]={"Metri", "Centimetri", "Kilometri", "Milimetri", "Mile", "Mila maritima", "Yarzi",
            "Picioare (feets)", "Inches" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Lungime"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Metru"<<endl;
    cout<<"                    2. Centimetru"<<endl;
    cout<<"                    3. Kilometru"<<endl;
    cout<<"                    4. Milimetru"<<endl;
    cout<<"                    5. Mile"<<endl;
    cout<<"                    6. Mila maritima"<<endl;
    cout<<"                    7. Yarzi"<<endl;
    cout<<"                    8. Picioare (feets)"<<endl;
    cout<<"                    9. Inches"<<endl<<endl;
    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a;
    //cout<<" "<<um[x-1];

    //transform din unitatea data in metru
    switch(x)
    {
    case 1:
        break;
    case 2:
        a=a/100;
        break;
    case 3:
        a=a*1000;
        break;
    case 4:
        a=a/1000;
        break;
    case 5:
        a=a*1609.34;
        break;
    case 6:
        a=a*1852;
        break;
    case 7:
        a=a*0.9144002494;
        break;
    case 8:
        a=a*0.3048;
        break;
    case 9:
        a=a*0.0254;
        break;
    }


    switch(y)
    {
    case 1:
        break;
    case 2:
        a=a*100;
        break;
    case 3:
        a=a/1000;
        break;
    case 4:
        a=a*1000;
        break;
    case 5:
        a=a/1609.34;
        break;
    case 6:
        a=a/1852;
        break;
    case 7:
        a=a/0.9144002494;
        break;
    case 8:
        a=a/0.3048;
        break;
    case 9:
        a=a/0.0254;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}

//2
long double arie()
{
    char um[11][50]={"m^2", "cm^2", "km^2", "mm^2", "ha", "a", "ac", "Yd^2", "ft^2", "in^2" };
    char unitm[11][50]={"Metri patrati", "Centimetri patrati", "Kilometri patrati", "Milimetri patrati", "Hectare",
            "Ari", "Acri", "Yarzi patrati", "Picioare patrate", "Inches patrati" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Arie"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Metru patrat"<<endl;
    cout<<"                    2. Centimetru patrat"<<endl;
    cout<<"                    3. Kilometru patrat"<<endl;
    cout<<"                    4. Milimetru patrat"<<endl;
    cout<<"                    5. Hectare"<<endl;
    cout<<"                    6. Ari"<<endl;
    cout<<"                    7. Acri"<<endl;
    cout<<"                    8. Yarzi patrati"<<endl;
    cout<<"                    9. Picioare patrate"<<endl;
    cout<<"                    10. Inches patrati"<<endl<<endl;
    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in metru patrat
    switch(x)
    {
    case 1:
        break;
    case 2:
        a=a/10000;
        break;
    case 3:
        a=a/0.000001;
        break;
    case 4:
        a=a/1000000;
        break;
    case 5:
        a=a/0.0001;
        break;
    case 6:
        a=a/0.01;
        break;
    case 7:
        a=a/0.0002471052;
        break;
    case 8:
        a=a/1.1959905612;
        break;
    case 9:
        a=a/10.7639150512;
        break;
    case 10:
        a=a/1550.0031000062;
        break;
    }


    switch(y)
    {
    case 1:
        break;
    case 2:
        a=a*10000;
        break;
    case 3:
        a=a*0.000001;
        break;
    case 4:
        a=a*1000000;
        break;
    case 5:
        a=a*0.0001;
        break;
    case 6:
        a=a*0.01;
        break;
    case 7:
        a=a*0.0002471052;
        break;
    case 8:
        a=a*1.1959905612;
        break;
    case 9:
        a=a*10.7639150512;
        break;
    case 10:
        a=a*1550.0031000062;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}

//3
long double volum()
{
    char um[11][50]={"m^3", "cm^3", "ml", "Yd^3", "ft^3", "in^3", "l", "gal (imp)", "bbl (imp)" };
    char unitm[11][50]={"Metri cubi", "Centimetri cubi", "Mililitri", "Yarzi cubi", "Picioare cubi", "Inches cubi",
            "Litri", "Galoane (imperial)", "Barili (imperial)" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Volum"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Metru cub"<<endl;
    cout<<"                    2. Centimetru cub"<<endl;
    cout<<"                    3. Mililitru"<<endl;
    cout<<"                    4. Yarzi cubi"<<endl;
    cout<<"                    5. Picioare cubi"<<endl;
    cout<<"                    6. Inches cubi"<<endl;
    cout<<"                    7. Litri"<<endl;
    cout<<"                    8. Galon (imperial)"<<endl;
    cout<<"                    9. Barili (imperial)"<<endl<<endl;
    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in metru cub
    switch(x)
    {
    case 1:
        break;
    case 2:
        a=a/1000000;
        break;
    case 3:
        a=a/1000000;
        break;
    case 4:
        a=a/1.3079418227477242;
        break;
    case 5:
        a=a/35.31073446327684;
        break;
    case 6:
        a=a/61023.74409473229;
        break;
    case 7:
        a=a/1000;
        break;
    case 8:
        a=a/219.9692482991;
        break;
    case 9:
        a=a/6.1102658577;
        break;
    }


    switch(y)
    {
    case 1:
        break;
    case 2:
        a=a*1000000;
        break;
    case 3:
        a=a*1000000;
        break;
    case 4:
        a=a*1.3079418227477242;
        break;
    case 5:
        a=a*35.31073446327684;
        break;
    case 6:
        a=a*61023.74409473229;
        break;
    case 7:
        a=a*1000;
        break;
    case 8:
        a=a*219.9692482991;
        break;
    case 9:
        a=a*6.1102658577;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}

//4
long double timp()
{
    char um[15][50]={"as", "fs", "ps", "ns", "microsecunda", "ms", "cs", "ds", "s", "min", "h", "zile", "saptamani" };
    char unitm[20][50]={"Attosecunde", "Femtosecunde", "Picosecunde", "Nanosecunde", "Microsecunde", "Milisecunde",
                "Centisecunde", "Decisecunde", "Secunde", "Minute", "Ore", "Zile", "Saptamani" };
    system("cls");
    cout<<endl<<endl<<"           Conversia unitatilor de masura de Timp"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Attosecunda"<<endl;
    cout<<"                    2. Femtosecunda"<<endl;
    cout<<"                    3. Picosecunda"<<endl;
    cout<<"                    4. Nanosecunda"<<endl;
    cout<<"                    5. Microsecunda"<<endl;
    cout<<"                    6. Milisecundă"<<endl;
    cout<<"                    7. Centisecunda"<<endl;
    cout<<"                    8. Decisecunda"<<endl;
    cout<<"                    9. Secunda"<<endl;
    cout<<"                    10. Minut"<<endl;
    cout<<"                    11. Ora"<<endl;
    cout<<"                    12. Zi"<<endl;
    cout<<"                    13. Saptamana"<<endl<<endl;
    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in minut
    switch(x)
    {
    case 1:
        a=a/6;
        break;
    case 2:
        a=a/6;
        break;
    case 3:
        a=a/6;
        break;
    case 4:
        a=a/60000000000;
        break;
    case 5:
        a=a/60000000;
        break;
    case 6:
        a=a/60000;
        break;
    case 7:
        a=a/6000;
        break;
    case 8:
        a=a/600;
        break;
    case 9:
        a=a/60;
        break;
    case 10:
        break;
    case 11:
        a=a*60;
        break;
    case 12:
        a=a*1440;
        break;
    case 13:
        a=a*10080;
        break;
    }


    switch(y)
    {
    case 1:
        a=a*6;
        break;
    case 2:
        a=a*6;
        break;
    case 3:
        a=a*6;
        break;
    case 4:
        a=a*60000000000;
        break;
    case 5:
        a=a*60000000;
        break;
    case 6:
        a=a*60000;
        break;
    case 7:
        a=a*6000;
        break;
    case 8:
        a=a*600;
        break;
    case 9:
        a=a*60;
        break;
    case 10:
        break;
    case 11:
        a=a/60;
        break;
    case 12:
        a=a/1440;
        break;
    case 13:
        a=a/10080;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a;
    if(x==1)
        if(y==2)
            cout<<" * 10^-3";
        else if(y==3)
                cout<<" * 10^-6";
            else if(y!=1)
                    cout<<" * 10^-19";

    if(x==2)
        if(y==1)
            cout<<" * 10^3";
        else if(y==3)
                cout<<" * 10^-3";
            else if(y!=2)
                    cout<<" * 10^-16";

    if(x==3)
        if(y==1)
            cout<<" * 10^6";
        else if(y==2)
                cout<<" * 10^3";
            else if(y!=1)
                    cout<<" * 10^-13";
    if(y==1 && (x!=1 && x!=2 && x!=3))
        cout<<" * 10^19";
    if(y==2 && (x!=1 && x!=2 && x!=3))
        cout<<" * 10^16";
    if(y==3 && (x!=1 && x!=2 && x!=3))
        cout<<" * 10^13";

    cout<<" "<<um[y-1];
}



// 5
long double viteza()
{
    char um[20][50]={"cm/min", "cm/s", "ft/h", "ft/min", "ft/s", "in/s", "km/h", "km/min", "km/s", "m/h", "m/min", "m/s", "mi/s", "mi/min", "nmi/h", "yd/h", "yd/min", "yd/s" };
    char unitm[20][50]={"Centimetru / Minut", "Centimetru / Secuda", "Picioare / Ora", "Picioare / Minut",
                "Picioare / Secunda", "Inches / Secunda", "Kilometru / Ora", "Kilometru / Minut", "Kilometru / Secunda",
                 "Metru / Ora", "Metru / Minut", "Metru / Secunda", "Mila / Secunda", "Mila / Minut", "Mila marina / Ora",
                "Yarzi / Ora", "Yarzi / Minut", "Yarzi / Secuda" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Viteza"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Centimetru / Minut"<<endl;
    cout<<"                    2. Centimetru / Secuda"<<endl;
    cout<<"                    3. Picioare / Ora"<<endl;
    cout<<"                    4. Picioare / Minut"<<endl;
    cout<<"                    5. Picioare / Secunda"<<endl;
    cout<<"                    6. Inches / Secunda"<<endl;
    cout<<"                    7. Kilometru / Ora"<<endl;
    cout<<"                    8. Kilometru / Minut"<<endl;
    cout<<"                    9. Kilometru / Secunda"<<endl;
    cout<<"                    10. Metru / Ora"<<endl;
    cout<<"                    11. Metru / Minut"<<endl;
    cout<<"                    12. Metru / Secunda"<<endl;
    cout<<"                    13. Mila / Secunda"<<endl;
    cout<<"                    14. Mila / Minut"<<endl;
    cout<<"                    15. Mila marina / Ora"<<endl;
    cout<<"                    16. Yarzi / Ora"<<endl;
    cout<<"                    17. Yarzi / Minut"<<endl;
    cout<<"                    18. Yarzi / Secuda"<<endl<<endl;

    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in m/s
    switch(x)
    {
    case 1:
        a=a*0.0001666667;
        break;
    case 2:
        a=a*0.01;
        break;
    case 3:
        a=a*0.000084667;
        break;
    case 4:
        a=a*0.00508;
        break;
    case 5:
        a=a*0.3048;
        break;
    case 6:
        a=a*0.0254;
        break;
    case 7:
        a=a*0.27777778;
        break;
    case 8:
        a=a*16.666667;
        break;
    case 9:
        a=a*1000;
        break;
    case 10:
        a=a*0.000277778;
        break;
    case 11:
        a=a*0.016666667;
        break;
    case 12:
        break;
    case 13:
        a=a*1609.344;
        break;
    case 14:
        a=a*26.8224;
        break;
    case 15:
        a=a*0.5144;
        break;
    case 16:
        a=a*0.000254;
        break;
    case 17:
        a=a*0.015240004;
        break;
    case 18:
        a=a*0.9144002494;
        break;
    }


    switch(y)
    {
    case 1:
        a=a*5999.9988;
        break;
    case 2:
        a=a*100;
        break;
    case 3:
        a=a*11810.977;
        break;
    case 4:
        a=a*196.8504;
        break;
    case 5:
        a=a*3.28084;
        break;
    case 6:
        a=a*39.370079;
        break;
    case 7:
        a=a*3.5999999;
        break;
    case 8:
        a=a*0.059999999;
        break;
    case 9:
        a=a*0.001;
        break;
    case 10:
        a=a*3599.997;
        break;
    case 11:
        a=a*59.999999;
        break;
    case 12:
        break;
    case 13:
        a=a*0.00062137119;
        break;
    case 14:
        a=a*0.03728;
        break;
    case 15:
        a=a*1.944012441679;
        break;
    case 16:
        a=a*3937.007874;
        break;
    case 17:
        a=a*65.61678;
        break;
    case 18:
        a=a*1.093613;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}

//6
long double temperatura()
{
    char unitm[11][50]={"Grade Celsius", "Grade Kelvin", "Grade Rankine", "Grade Fahrenheit"};

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Tmperatura"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Grade Celsius"<<endl;
    cout<<"                    2. Grade Kelvin"<<endl;
    cout<<"                    3. Grade Rankine"<<endl;
    cout<<"                    4. Grade Fahrenheit"<<endl<<endl;
    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a;

    //transform din unitatea data in grade celsius
    switch(x)
    {
    case 1:
        break;
    case 2:
        a=a-273.15;
        break;
    case 3:
        a=(a-491.67)/1.8;
        break;
    case 4:
        a=(a-32)/1.8;
        break;
    }


    switch(y)
    {
    case 1:
        break;
    case 2:
        a=a+273.15;
        break;
    case 3:
        a=a*1.8+491.67;
        break;
    case 4:
        a=a*1.8+32;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a;
}

//7
long double masa()
{

    char um[11][15]={"g", "kg", "lb", "mg", "oz (Av)", "oz (Troy)", "slug", "t"};
    char unitm[11][50]={"Grame", "Kilograme", "Funte (pound)", "Miligrame", "Uncii (Avoirdupois)", "Uncii (Troy)",
                "Slug", "Tone"};

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Masa"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Grame"<<endl;
    cout<<"                    2. Kilograme"<<endl;
    cout<<"                    3. Funte (pound)"<<endl;
    cout<<"                    4. Miligrame"<<endl;
    cout<<"                    5. Uncii (Avoirdupois)"<<endl;
    cout<<"                    6. Uncii (Troy)"<<endl;
    cout<<"                    7. Slug"<<endl;
    cout<<"                    8. Tone"<<endl<<endl;
    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in kilograme
    switch(x)
    {
    case 1:
        a=a*0.001;
        break;
    case 2:
        break;
    case 3:
        a=a*0.453592;
        break;
    case 4:
        a=a*0.000001;
        break;
    case 5:
        a=a*0.0283495;
        break;
    case 6:
        a=a*0.0311035;
        break;
    case 7:
        a=a*14.593903;
        break;
    case 8:
        a=a*1000;
        break;
    }


    switch(y)
    {
    case 1:
        a=a*1000;
        break;
    case 2:
        break;
    case 3:
        a=a*2.2046244201837775;
        break;
    case 4:
        a=a*1000000;
        break;
    case 5:
        a=a*35.27399072294044;
        break;
    case 6:
        a=a*32.15072258749016;
        break;
    case 7:
        a=a*0.06852176556196105;
        break;
    case 8:
        a=a*0.001;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}



// 8
long double energie()
{
    char um[15][50]={"Btu", "cal", "erg", "ft*lbf", "in*lbf", "J", "kcal", "kJ", "kW*h", "quad BTU", "tcc", "th", "W*h", "W*s" };
    char unitm[20][50]={"British Thermal Unit", "Calorii", "Erg", "Picioare * Livre-forta", "Inches * Livre-forta", "Jouli",
                "Kilocalorii", "Kilojouli", "Kilowatt * Ora", "Quad BTU", "Tona de combustibil conventional",
                "Thermie", "Watt * Ora","Watt * Secunda" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Energie"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. British Thermal Unit"<<endl;
    cout<<"                    2. Calorie"<<endl;
    cout<<"                    3. Erg"<<endl;
    cout<<"                    4. Picioare * Livre-forta"<<endl;
    cout<<"                    5. Inches * Livre-forta"<<endl;
    cout<<"                    6. Jouli"<<endl;
    cout<<"                    7. Kilocalorie"<<endl;
    cout<<"                    8. Kilojouli"<<endl;
    cout<<"                    9. Kilowatt * Ora"<<endl;
    cout<<"                    10. Quad BTU"<<endl;
    cout<<"                    11. Tona de combustibil conventional"<<endl;
    cout<<"                    12. Thermie"<<endl;
    cout<<"                    13. Watt * Ora"<<endl;
    cout<<"                    14. Watt * Secunda"<<endl<<endl;

    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in Jouli
    switch(x)
    {
    case 1:
        a=a*1055.06;
        break;
    case 2:
        a=a*4.1868;
        break;
    case 3:
        a=a/10000000;
        break;
    case 4:
        a=a*1.356;
        break;
    case 5:
        a=a*0.113;
        break;
    case 6:
        break;
    case 7:
        a=a*4186.8;
        break;
    case 8:
        a=a*1000;
        break;
    case 9:
        a=a*3600000;
        break;
    case 10:
        a=a*1055.06;
        break;
    case 11:
        a=a*2.93076;
        break;
    case 12:
        a=a*4186800;
        break;
    case 13:
        a=a*3600;
        break;
    case 14:
        break;
    }


    switch(y)
    {
    case 1:
        a=a*0.000948;
        break;
    case 2:
        a=a*0.2388;
        break;
    case 3:
        a=a*10000000;
        break;
    case 4:
        a=a*0.737;
        break;
    case 5:
        a=a*8.8507;
        break;
    case 6:
        break;
    case 7:
        a=a*0.0002388;
        break;
    case 8:
        a=a*0.001;
        break;
    case 9:
        a=a*0.0000002778;
        break;
    case 10:
        a=a*9.478;
        break;
    case 11:
        a=a*3.412;
        break;
    case 12:
        a=a*0.00000023884;
        break;
    case 13:
        a=a*0.0002778;
        break;
    case 14:
        break;
    }
    if(x==10 && y==10)
        a=a/10000;
    if(x==11 && y==11)
        a=a/10;
    if(x==10 && y==11)
        a=a*10000;
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
    if(x==11 && y==10)
        cout<<" * 10^-9";
    if(x==10 && y!=10 && y!=11)
        cout<<" * 10^15";
    if(y==10 && x!=10 && x!=11)
        cout<<" * 10^-19";
    if(x==11 && y!=11 && y!=10)
        cout<<" * 10^10";
    if(y==11 && x!=11 && x!=10)
        cout<<" * 10^-11";
}

//9
long double presiune()
{
    char um[20][50]={"at", "atm", "bar", "inH2O", "inHg", "kp/cm^2", "kPa", "lbf/ft^2", "lbf/in^2", "mbar", "mH2O", "mmH2O", "mmHg", "MPa", "N/mm^2", "Pa", "torr" };
    char unitm[20][50]={"Atmosfera tehnica", "Atmosfera standard", "Bar", "Tol coloana de apa",
                "Tol coloana de mercur", "Kilopond / Centimetru patrat", "Kilopascal", "Funt-forta (pounds force) / Picioare patrate",
                 "Funt-forta (pounds force) / Inches patrati", "Millibar", "Metri coloana de apa",
                  "Milimetri coloana de apa","Milimetri coloana de mercur", "Megapascal", "Newton / Milimetru patrat", "Pascal", "Torr" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Presiune"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Atmosfera tehnica"<<endl;
    cout<<"                    2. Atmosfera standard"<<endl;
    cout<<"                    3. Bar"<<endl;
    cout<<"                    4. Tol coloana de apa"<<endl;
    cout<<"                    5. Tol coloana de mercur"<<endl;
    cout<<"                    6. Kilopond / Centimetru patrat"<<endl;
    cout<<"                    7. Kilopascal"<<endl;
    cout<<"                    8. Funt-forta (pounds force) / Picioare patrate"<<endl;
    cout<<"                    9. Funt-forta (pounds force) / Inches patrati"<<endl;
    cout<<"                    10. Millibar"<<endl;
    cout<<"                    11. Metri coloana de apa"<<endl;
    cout<<"                    12. Milimetri coloana de apa"<<endl;
    cout<<"                    13. Milimetri coloana de mercur"<<endl;
    cout<<"                    14. Megapascal"<<endl;
    cout<<"                    15. Newton / Milimetru patrat"<<endl;
    cout<<"                    16. Pascal"<<endl;
    cout<<"                    17. Torr"<<endl<<endl;

    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in Pascal
    switch(x)
    {
    case 1:
        a=a*98066.5;
        break;
    case 2:
        a=a*101325.2738;
        break;
    case 3:
        a=a*98000;
        break;
    case 4:
        a=a*248.84;
        break;
    case 5:
        a=a*3386.388;
        break;
    case 6:
        a=a*98000;
        break;
    case 7:
        a=a*1000;
        break;
    case 8:
        a=a*47.88;
        break;
    case 9:
        a=a*6894.7573;
        break;
    case 10:
        a=a*98;
        break;
    case 11:
        a=a*9800;
        break;
    case 12:
        a=a*9.8;
        break;
    case 13:
        a=a*133.32237;
        break;
    case 14:
        a=a*1000000;
        break;
    case 15:
        a=a*1000000;
        break;
    case 16:
        break;
    case 17:
        a=a*133.32237;
        break;
    }


    switch(y)
    {
    case 1:
        a=a/98066.5;
        break;
    case 2:
        a=a/101325.2738;
        break;
    case 3:
        a=a/98000;
        break;
    case 4:
        a=a/248.84;
        break;
    case 5:
        a=a/3386.388;
        break;
    case 6:
        a=a/98000;
        break;
    case 7:
        a=a/1000;
        break;
    case 8:
        a=a/47.88;
        break;
    case 9:
        a=a/6894.7573;
        break;
    case 10:
        a=a/98;
        break;
    case 11:
        a=a/9800;
        break;
    case 12:
        a=a/9.8;
        break;
    case 13:
        a=a/133.32237;
        break;
    case 14:
        a=a/1000000;
        break;
    case 15:
        a=a/1000000;
        break;
    case 16:
        break;
    case 17:
        a=a/133.32237;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}


// 10
long double densitate()
{
    char um[20][50]={"g/cm^3", "g/l", "g/m^3", "g/mm^3", "kg/cm^3", "kg/l", "kg/m^3", "ib/ft^3", "ib/in^3", "ib/gal", "mg/cm^3", "mg/l", "mg/m^3", "oz/gal", "oz/ft^3", "oz/in^3", "t/m^3" };
    char unitm[20][50]={"Gram / Centimetru cub", "Gram / Litru", "Gram / Metru cub", "Gram / Milimetru cub",
                "Kilogram / Centimetru cub", "Kilogram / Litru", "Kilogram / Metru cub", "Funte (pound) / Piciare  cubi",
                 "Funte (pound) / Inches cubi", "Funte (pound) / Galon (imp)", "Miligram / Centimetru cub",
                  "Miligram / Litru", "Miligram / Metru cub", "Uncii / Galon (imp)", "Uncii / Piciare  cubi",
                   "Uncii / Inches cubi", "Tone / Metru cub" };

    system("cls");

    cout<<endl<<endl<<"           Conversia unitatilor de masura de Densitate"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;

    cout<<"                    1. Gram / Centimetru cub"<<endl;
    cout<<"                    2. Gram / Litru"<<endl;
    cout<<"                    3. Gram / Metru cub"<<endl;
    cout<<"                    4. Gram / Milimetru cub"<<endl;
    cout<<"                    5. Kilogram / Centimetru cub"<<endl;
    cout<<"                    6. Kilogram / Litru"<<endl;
    cout<<"                    7. Kilogram / Metru cub"<<endl;
    cout<<"                    8. Funte (pound) / Piciare  cubi"<<endl;
    cout<<"                    9. Funte (pound) / Inches cubi"<<endl;
    cout<<"                    10. Funte (pound) / Galon (imp)"<<endl;
    cout<<"                    11. Miligram / Centimetru cub"<<endl;
    cout<<"                    12. Miligram / Litru"<<endl;
    cout<<"                    13. Miligram / Metru cub"<<endl;
    cout<<"                    14. Uncii / Galon (imp)"<<endl;
    cout<<"                    15. Uncii / Piciare  cubi"<<endl;
    cout<<"                    16. Uncii / Inches cubi"<<endl;
    cout<<"                    17. Tone / Metru cub"<<endl<<endl;

    cout<<"      Convertire : " ;

    int x,y;
    cin>>x; cin>>y;
    cout<<endl<<"      "<<unitm[x-1]<<" => "<<unitm[y-1]<<endl<<endl;
    cout<<"      Valoarea in "<<unitm[x-1]<<" : ";

    long double a;
    cin>>a; //cout<<" "<<um[x-1];

    //transform din unitatea data in Kilogram / Metru cub
    switch(x)
    {
    case 1:
        a=a*1000;
        break;
    case 2:
        a=a;
        break;
    case 3:
        a=a*0.001;
        break;
    case 4:
        a=a*1000000;
        break;
    case 5:
        a=a*1000000;
        break;
    case 6:
        a=a*1000;
        break;
    case 7:
        break;
    case 8:
        a=a*16.018;
        break;
    case 9:
        a=a*27679.89858;
        break;
    case 10:
        a=a*119.8264273;
        break;
    case 11:
        a=a;
        break;
    case 12:
        a=a*0.001;
        break;
    case 13:
        a=a*0.000001;
        break;
    case 14:
        a=a*7.489;
        break;
    case 15:
        a=a*1.001153961;
        break;
    case 16:
        a=a*1729.994044;
        break;
    case 17:
        a=a*1000;
        break;
    }


    switch(y)
    {
    case 1:
        a=a*0.001;
        break;
    case 2:
        a=a;
        break;
    case 3:
        a=a*1000;
        break;
    case 4:
        a=a*0.000001;
        break;
    case 5:
        a=a*0.000001;
        break;
    case 6:
        a=a*0.001;
        break;
    case 7:
        break;
    case 8:
        a=a*0.06243;
        break;
    case 9:
        a=a*0.0000361273;
        break;
    case 10:
        a=a*0.0083454;
        break;
    case 11:
        a=a;
        break;
    case 12:
        a=a*1000;
        break;
    case 13:
        a=a*1000000;
        break;
    case 14:
        a=a*0.1335265;
        break;
    case 15:
        a=a*0.999;
        break;
    case 16:
        a=a*0.000578;
        break;
    case 17:
        a=a*0.001;
        break;
    }
    cout<<endl<<"      Valoarea in "<<unitm[y-1]<<" : ";
    cout<<a<<" "<<um[y-1];
}


int main()
{
    START :
    system("color 30");

    cout<<endl;
    cout<<"     _____   _____   _   _   _   _   _____   _____   _____   _____   _____"<<endl;
    cout<<"    |  ___| |  _  | | \\ | | | | | | |  ___| |  _  | |_   _| |  _  | |  _  |"<<endl;
    cout<<"    | |     | | | | |  \\| | | | | | | |__   | |_| |   | |   | | | | | |_| |"<<endl;
    cout<<"    | |     | | | | | . ` | | | | | |  __|  |    /    | |   | | | | |    /"<<endl;
    cout<<"    | |___  | |_| | | |\\  | \\ \\_/ / | |___  | |\\ \\    | |   | |_| | | |\\ \\ "<<endl;
    cout<<"    |_____| |_____| |_| \\_|  \\___/  |_____| |_| \\_|   |_|   |_____| |_| \\_|"<<endl;
    cout<<endl;


    cout<<"        Tipuri de conversie:"<<endl;
    cout<<endl;

    cout<<"        1. Lungime"<<endl;
    cout<<"        2. Arie"<<endl;
    cout<<"        3. Volum"<<endl;
    cout<<"        4. Timp"<<endl;
    cout<<"        5. Viteza"<<endl;
    cout<<"        6. Temperatura"<<endl;
    cout<<"        7. Masa"<<endl;
    cout<<"        8. Energie"<<endl;
    cout<<"        9. Presiune"<<endl;
    cout<<"        10.Densitate"<<endl;
    cout<<"        11.Consum combustibil"<<endl;


    cout<<endl<<"        Alege tipul de conversie : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        lungime();
        break;
    case 2:
        arie();
        break;
    case 3:
        volum();
        break;
    case 4:
        timp();
        break;
    case 5:
        viteza();
        break;
    case 6:
        temperatura();
        break;
    case 7:
        masa();
        break;
    case 8:
        energie();
        break;
    case 9:
        presiune();
        break;
    case 10:
        densitate();
        break;
    case 11:
        //consum_combustibil();
        break;
    }

    cout<<endl<<endl<<endl<<"      Apasa [1] pentru revenire la meniul principal ";
    cin>>x;
    if(x)
    {
        system("cls");
        goto START;
    }
}
