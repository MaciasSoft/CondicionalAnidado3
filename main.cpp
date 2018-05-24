#include <iostream>

using namespace std;

int main()
{
    string respSi,respNo;
    string respuesta1,respuesta2,respuesta3;
    respSi="SI";
    respNo="NO";
    cout <<"JUEGO DE PREGUNTAS RESPONDA SI/NO "<<endl<<endl;
    cout << "1. Colon descubrio America?/Resp. ";
    cin >>respuesta1;

    if (respuesta1=="NO" || respuesta1=="no")
    {
        cout<<"la respuesta es Incorrecta....Fin del Juego"<<endl;

    }
    else
    {
         if (respuesta1=="SI" || respuesta1=="si")
        {
            cout<<"la respuesta es correcta....Sig."<<endl;
            cout << "2. La Independencia de Mexico fue el anio 1810?/Resp. ";
            cin >>respuesta2;
            if(respuesta2=="NO" || respuesta2=="no")
            {
              cout<<"la respuesta es Incorrecta....Fin del Juego"<<endl;
            }
            else
            {
                if(respuesta2=="SI" || respuesta2=="si")
                {
                    cout<<"la respuesta es correcta....Sig."<<endl;
                    cout << "3. The Doors fue un grupo de rock Americano?/Resp. ";
                    cin >>respuesta3;
                    if(respuesta3=="NO" || respuesta3=="no")
                    {
                        cout<<"la respuesta es Incorrecta....Fin del Juego"<<endl;
                    }
                    else
                    {
                        if(respuesta3=="SI" || respuesta3=="si")
                        {
                            cout<<"la respuesta es correcta....Felicidades partida Exitosa"<<endl;
                        }
                        else
                        {
                            cout<<"Valor Incorrecto solo son validas el SI/NO, vuelva a intentarlo"<<endl;
                        }
                    }
                }
            }

        }
    }

    return 0;
}
