#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"

void Forca::chuta(std::map<char, bool>& chutou, std::array<char, 5>& chutes_errados, 
    const std::string& palavra_secreta, int& numero_chutes_errados)
{
    std::cout << "Seu chute: ";
        char chute;
        std::cin >> chute;

        chutou[chute] = true;

        if(letra_existe(chute, palavra_secreta)) {
            std::cout << "Você acertou! Seu chute está na palavra." << std::endl;
        }
        else {
            std::cout << "Você errou! Seu chute não está na palavra." << std::endl;
            chutes_errados[numero_chutes_errados] = chute;
            numero_chutes_errados++;
        }
        std::cout << std::endl;
}
