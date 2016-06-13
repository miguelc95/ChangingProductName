//
//  main.cpp
//  ChangingProductName
//
//  Created by Miguel Cuellar on 1/18/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    int iDes;
    string nombre;
    cin>>iDes;
    cin>>nombre;
    char letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char cUno,cDos;
    for (int i=0; i<iDes; i++) {
        cin>>cUno;
        cin>>cDos;
        for (int ix=0; ix<26; ix++) {
            if (letras[ix]==cUno) {
                letras[ix]=cDos;
            }
           else if (letras[ix]==cDos) {
                letras[ix]=cUno;
            }
        }
    }
    for (int p=0; p<nombre.length(); p++) {
        nombre[p]=letras[nombre[p]-'a'];
    }
    cout<<nombre<<endl;
    return 0;
}


/*

*/