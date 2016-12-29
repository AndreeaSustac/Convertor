#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
bool complete=0;

long double lungime()
{
    //char um[10][15]={"m", "cm", "km", "mm", "mi", "nmi", "Yd", "ft", "in" };
    char unitm[10][20]={"Metri", "Centimetri", "Kilometri", "Milimetri", "Mile", "Mila maritima", "Yarzi", "Picioare (feets)", "Inches" };
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
    cout<<a;
}

long double arie()
{
    char unitm[11][50]={"Metri patrati", "Centimetri patrati", "Kilometri patrati", "Milimetri patrati", "Hectare", "Ari", "Acri", "Yarzi patrati", "Picioare patrate", "Inches patrati" };
    system("cls");
    cout<<endl<<endl<<"           Conversia unitatilor de masura de Lungime"<<endl<<endl<<endl;
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
    cin>>a;

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
    cout<<a;
}

long double volum()
{
    char unitm[11][50]={"Metri cubi", "Centimetri cubi", "Mililitri", "Yarzi cubi", "Picioare cubi", "Inches cubi", "Litri", "Galoane (imperial)", "Barili (imperial)" };
    system("cls");
    cout<<endl<<endl<<"           Conversia unitatilor de masura de Lungime"<<endl<<endl<<endl;
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
    cin>>a;

    //transform din unitatea data in metru patrat
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
    cout<<a;
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


    cout<<"Tipuri de conversie:"<<endl;
    cout<<endl;
    cout<<"1. Lungime"<<endl;
    cout<<"2. Arie"<<endl;
    cout<<"3. Volum"<<endl;
    cout<<"4. Timp"<<endl;
    cout<<"5. Viteza"<<endl;
    cout<<"6. Temperatura"<<endl;
    cout<<"7. Masa"<<endl;
    cout<<"8. Energie"<<endl;
    cout<<"9. Presiune"<<endl;
    cout<<"10.Densitate"<<endl;
    cout<<"11.Consum combustibil"<<endl;


    cout<<endl<<"Alege tipul de conversie : ";
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
        //timp();
        break;
    case 5:
        //viteza();
        break;
    case 6:
        //temperatura();
        break;
    case 7:
        //masa();
        break;
    case 8:
        //energie();
        break;
    case 9:
        //presiune();
        break;
    case 10:
        //densitate();
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
