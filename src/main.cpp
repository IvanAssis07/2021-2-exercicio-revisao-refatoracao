#include <iostream>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York", 35690000);
    cliente1.print();    

    Cliente cliente2("Norman Osborn", "Hartlford", 22061955);
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady", 24051953);
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", 22111967);
    cliente4.print();

    Cliente cliente5("Steve Rogers", "Lower East Side", 13061981);
    cliente5.print();


    Especialista e01("Peter Parker", 46, 27061975, 3000.0, "Fotografia");
    Especialista e02("Tony Stark", 56, 4041965, 1000,"Consertos de equipamentos eletronicos");
    Especialista e03("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01("Nick Fury", 72, 21121948, 10000);


    Venda v01(cliente1, e01, "Fotos do Homem Aranha", 100);
    Venda v02(cliente4, e02, "Troca da tela do telefone", 100);
    Venda v03(cliente2, e01, "Fotos do novo planador", 150);
    Venda v04(cliente1, e02, "Recarga de cartucho", 10);
    Venda v05(cliente4, e03, "Reconstrucao de Predio", 10000);
    Venda v06(cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda v07(cliente1, e03, "Reforma do Clarim Diario", 5000);
    Venda v08(cliente3, e02, "Formatacao do PC", 80);


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    v02.print();
    v03.print();
    v04.print();
    v05.print();
    v06.print();
    v06.print();
    v07.print();
    v08.print();


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    e02.print();
    e03.print();


    g01.calculaBonificacaoGerente(v01.getNumVendas());
    g01.print();

    return 0;
}
