//#define EXERC1

#include <cstdlib>
#include <iostream>

using namespace std;
            
#if defined(EXERC1)
// QUEST�O 1: Critique o c�digo abaixo e aponte seus problemas com rela��o:
//          a) � flexibilidade da implementa��o: altera��es em pequenos trechos 
//             do c�digo n�o deveriam exigir recodifica��o de outras partes
//          b) � legibilidade do c�digo: lendo o c�digo � f�cil entrender os 
//             objetos e processos que ele representa. Qual � seu objetivo?
class Casa {
      float orc;
      int a; //a) Não há uso desse atributo, nem geters nem seters
public:
      Casa( float o ):orc(o){ cout << "Casa criada..." << endl; }
      void setOrc( float o ) { orc = o; } 
      float getOrc( void ) { return orc; } //a) Não á necessidade do void, pois é uma função sem parametros 
};

//b) O codigo Cria a classe Casa, com o atributo orçamento, possui um construtor e geters e seters para o orçamento

#else
// QUESTAO 2: Corrija os problemas identificado na quest�o 1.
class Casa {
      float orc;
public:
      Casa( float o): orc(o){ cout << "Casa criada..." << endl;}
      void setOrc(float o) { orc = o; }
      float getOrc() { return orc; }
};
// ...e aqui se necess�rio.
#endif

// QUESTAO 3: Explique o c�digo abaixo e cada uma das linhas de texto que 
// formam sua sa�da.
int main(int argc, char *argv[]){

      Casa c1(7), *c2 = &c1, &c3 = c1;  //Nessa linha é criado um obj c1 de casa, um ponteiro e uma referencia para c1

      cout << "C1: " << c1.getOrc() << endl; //Nessa linha é imprimida o orçamento da casa
      c1.setOrc(3); //Nessa linha se define o orçamento da casa
      cout << "C2: " << c2->getOrc() << ", "; //Nessa linha é imprimido o orçamento da casa atraves do ponteiro
      cout << "C3: " << c3.getOrc() << endl; //Nessa linha é imprimido o orçamento da casa atraves da referencia
      cout << "C2: " << c2 << ", C3: " << &c3 << endl; //Nessa linha á a impressão do endereço que c2 e c3 apontam

      system("read -p \"Pressione enter para sair\" saindo");
      return EXIT_SUCCESS;

}
// QUESTAO 4: Quantas vezes o construtor da classe foi invocado? Por que?
//O contrutor só foi invocado uma vez, no obj C1, apos isso ele só foi referenciado e apontado

