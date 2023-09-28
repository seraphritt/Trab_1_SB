#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

//version: gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
using namespace std;

bool tabeladesimbolos(){

}

void writeFile(){
    int numero;
    string nome;
    ofstream outFile; //
    outFile.open("sa�da.txt", ios::out); // abre o arquivo para escrita
    if (! outFile)
    {
        cout << "Arquivo saida.txt nao pode ser aberto" << endl;
        abort();
    }
    cout << "Entre com o numero e nome do funcion�rio\n" << "Fim de arquivo (Ctrl-Z) termina a entrada de dados\n\n? ";
    while(cin >> numero >> nome)
    {
        outFile << numero << " " << nome << "\n";
        cout << "?";
    }
    outFile.close(); // se o programador omitir a chamada ao m�todo close
}

vector<string> readFile(string file_name){
    vector<string> conteudo;
    vector<string> rotulo;
    vector<string> operacao;
    vector<string> operandos;
    // comentarios ser�o ignorados
    string token;
    ifstream inFile; // inFile � o arquivo de leitura dos dados
    inFile.open(file_name, ios::in); // abre o arquivo para leitura
    if (! inFile)
    {
        cout << "Arquivo codigo.asm nao pode ser aberto" << endl;
        abort();
    }
    while(inFile >> token)
    if(token[token.length() - 1] == ":"){
        // procurar rotulo na tabela de rotulos
            // se achar o rotulo, devolva erro, s�mbolo redefinido (sem�ntico)
        // se n�o, adicionar o rotulo na tabela de r�tulos e o contador posi��o (contador de mem�ria)
    }
    inFile.close();
    return conteudo;
}
int main()
{
    vector<string> ret = readFile("codigo.asm");
    for (string i : ret) {
        cout << i << endl;
    }
    return 0;
}
