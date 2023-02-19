#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

//instanciando a funcao
double divide(double n1, double n2);

int main()
{

    double n1, n2;
    cin >> n1 >> n2;
    vector <int> num(5);

    // try onde o codifo verificado/inserido
    try {

    //num.at(5) = 10;
    //cout << num[5] << endl;

    cout << divide(n1,n2);
    }
    // catch onde o codigo e tratado/lido
    catch(const char *execao) {

    cout << "ERRO: "  << execao << endl; //e.what() retorna o erro
    }
    return 0;
}

//funçao que recebe valor de n1 e n2
double divide(double n1, double n2){
    if(n2 == 0){ // se tiver 0 na divisao gera erro

        throw "Erro de divisao por ZERO"; // throw retorna para catch, dentro de (execao) uma mensagem
    }
    if(n1 >= 10){

        throw "N1 tem que ser menor que 10";
    }

    return n1/n2;
    }


