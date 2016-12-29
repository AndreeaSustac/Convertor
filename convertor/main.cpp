#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


float lungime()
{
    int char[11]=
    system("cls");
    cout<<endl<<endl<<"           Conversia unitatilor de masura de Lungime"<<endl<<endl<<endl;
    cout<<"                 Unitate de masura:"<<endl<<endl;
    cout<<"                    1. Metru"<<endl;
    cout<<"                    2. Centimetru"<<endl;
    cout<<"                    3. Kilometru"<<endl;

    //transform din unitatea data in metru
    switch (x)

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


    cout<<endl<<"Alege tipul de conversie:";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        lungime();
        break;
    case 2:
        //arie();
        break;
    case 3:
        //volum();
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

    int ok=0;
    if(ok)
    {
        system("cls");
        goto START;
    }
}
