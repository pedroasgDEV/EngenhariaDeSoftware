#include <cstdlib>
#include <iostream>

using namespace std;
            
// QUEST�O 1: O c�digo desse exerc�cio � id�ntico ao do exerc�cio anterior. 
//          Por�m o operador "<<" foi sobrecarregado para permitir que 
//          programador implemente de maneira mais f�cil a sa�da do programa.
//          Desta maneira, o codigo a seguir pode ser utilizado para imprimir
//          na tela um objeto "Casa": Casa c1; cout << c1; 
//
//          a) Explique porque o m�todo que sobrecarrega o operador "<<" precisou
//          ser declarado como amigo ("friend") da classe Casa? 
//          b) Explique o funcionamento do novo operador "<<".
class Casa {
    float orc;
public:
    // Casa( float o ):orc(o){ printf("Casa criada..."); }
    Casa( float o ):orc(o){ cout << "Casa criada..." << endl; }
    void setOrc( float o ) { orc = o; }
    float getOrc( void ) { return orc; }
    friend ostream& operator<<( ostream& s, Casa& c) {  s << c.orc; return s; }
};

//a) Ele precisa ser sobreecarregado pq não é um metodo da classe e sim de outra, a iostream
//b) Quando o operador for usado para imprimir um obj da classe ira imprimeir o orçamento da casa

// QUEST�O 2: Explique o c�digo abaixo e cada uma das linhas de texto que 
// formam sua sa�da.
int main(int argc, char *argv[])
{
    Casa c1(7), &c2 = c1; //Nessa linha o obj da classe é instanciado e referenciado pela c2

    cout << "C1: " << c1.getOrc() << ", C2: " << c2.getOrc() << endl; //Nessa linha é imprimido o orçamento da c1, duas vezes
    c2.setOrc(3); //Nessa linha o orçamento é mudado pela referencia
    cout << "C1: " << c1 << ", C2: " << c2 << endl; //Nessa linha é imprimido o novo orçamento atravez da sobrecarga

    system("read -p \"Pressione enter para sair\" saindo");
    return EXIT_SUCCESS;
}

