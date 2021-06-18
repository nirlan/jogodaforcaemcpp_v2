#pragma once
#include <map>
#include <array>

namespace Forca
{
	void chuta(std::map<char, bool>& chutou, std::array<char, 5>& chutes_errados, 
		const std::string& palavra_secreta, int& numero_chutes_errados);
}