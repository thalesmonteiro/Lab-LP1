#include <iostream>
#include "Hospital.h"

void Hospital::testaMedicos() {
    Cirurgiao     *cirurgiao;
    Oftamologista *oftamologista;
    Otorrino      *otorrino;
    Ginecologista *ginecologista;
    
    string nome,
           area;
           
    double altura,
           peso;
    
    int op;
    
    cout << "1 - Cirurgiao \n2 - Oftamologista \n3 - Otorrino \n4 - Ginecologista" << endl;
    cout << endl << "Digite a opção: ";
    cin >> op;
    cin.ignore();
    
    cout << endl << "Digite o Nome..: ";
    getline(cin, nome);
    
    cout << "Digite a Altura: ";
    cin >> altura;
    cin.ignore();
    
    cout << "Digite o Peso..: ";
    cin >> peso;
    cin.ignore();
    
    switch(op) {
        case 1:
            cout << "Digite a Área de espcificação Cirúrgica: ";
            getline(cin, area);
            cirurgiao = new Cirurgiao(nome, altura, peso, area);
            cout << endl << cirurgiao->toString() << endl << endl;
            cirurgiao->realizaOperacao();
            break;

        case 2:
            cout << "Digite a Área de espcificação na Oftamologia: ";
            getline(cin, area);
            oftamologista = new Oftamologista(nome, altura, peso, area);
            cout << endl << oftamologista->toString() << endl << endl;
            oftamologista->realizaOperacao();
            break;
            
        case 3:
            cout << "Digite a Área de espcificação na Otorrino: ";
            getline(cin, area);
            otorrino = new Otorrino(nome, altura, peso, area);
            cout << endl << otorrino->toString() << endl << endl;
            otorrino->realizaOperacao();
            break;
            
        case 4:
            cout << "Digite a Área de espcificação na Ginecologia: ";
            getline(cin, area);
            ginecologista = new Ginecologista(nome, altura, peso, area);
            cout << endl << ginecologista->toString() << endl << endl;
            ginecologista->realizaOperacao();
            break;
            
        default:
            cout << "Opção inválida." << endl;
            return;
    }
    
    cout << endl << endl;
}
