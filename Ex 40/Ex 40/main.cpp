//
//  main.cpp
//  Ex 40
//
//  Created by Gustavo Henrique Furtado Junqueira on 03/06/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include<iostream>
using namespace std;
int main(){
    
    string nome, sexo;
    //modalidade, idade, contador de homens e contador de mulheres
    int modalidade, idade, cont_h=0, cont_m=0;
    //somatÛrio das idades de homens e mulheres
    int soma_id_h=0, soma_id_m=0;
    //contador de homens com idade entre 25 e 30 e de mulheres que fazem basquete
    int cont_id_h=0, cont_id_bask=0;
    
    for(int cont=0;cont<3;cont++){
        cout<<"\t\t CADASTRO DE ATLETAS";
        cout<<"\n\t Cadastrando o atleta: "<<cont+1;
        cout<<"\nDigite o nome do atleta:\n ";
        cin>>nome;
        cout<<"\nDigite modalidade esportiva sendo: 1 Voley, 2 Basquete, 3 Futsal.\n ";
        cin>>modalidade;
        cout<<"\nDigite o sexo do atleta sendo: M masculino e F feminino:\n ";
        cin>>sexo;
        cout<<"\nDigite a idade:\n ";
        cin>>idade;
        system("cls");
        
        if(sexo == "M" || sexo == "m"){//se for do sexo masculino
            cont_h++;
            soma_id_h+=idade;
            if (idade>=25 && idade<=30){//se tiver entre 25  e 30 anos
                cont_id_h ++;
            }
        }
        else{//se n„o for do sexo masculino
            cont_m++;
            soma_id_m+=idade;
            if (modalidade == 2){//se praticar basquete
                cont_id_bask++;
            }
        }
    }
    cout<<"\n\tA media de idade do homens eh: \n ";
    cout<<(float)soma_id_h/cont_h;
    cout<<"\n\tA media de idade da mulheres eh:\n ";
    cout<<(float)soma_id_m/cont_m;
    cout<<"\n\tO percentual de mulheres que praticam basquete em relacao ao numero de mulheres eh:\n";
    cout<<(float)100*cont_id_bask/soma_id_m;
    cout<<"\n\tO numero de homens com idade entre 25 e 30 anos eh: \n";
    cout<<cont_id_h;
    
    system("pause");
    return(0);
}
