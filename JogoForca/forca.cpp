#include <iostream>
#include <string>
#include <map>
#include <array>
#include <locale>
#include "nao_acertou.hpp"
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "chuta.hpp"
#include "adiciona_palavra.hpp"

using namespace std;

static string palavra_secreta;
static map<char, bool> chutou;
static array<char, 5> chutes_errados;
static int numero_chutes_errados = 0;

int main()
{    
    setlocale(LC_ALL, "Portuguese");

    imprime_cabecalho();

    palavra_secreta = Forca::sorteia_palavra();

    while(Forca::nao_acertou(palavra_secreta, chutou) && numero_chutes_errados < 5) {
        using namespace Forca;

        Forca::imprime_erros(chutes_errados);

        imprime_palavra(palavra_secreta, chutou);

        chuta(chutou, chutes_errados, palavra_secreta, numero_chutes_errados);
    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if(Forca::nao_acertou(palavra_secreta, chutou)) {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else {
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;

        cout << "Você deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            Forca::adiciona_palavra();
        }        
    }

    cin.get();
}