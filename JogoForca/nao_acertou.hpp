#pragma once
#include <string>
#include <map>

namespace Forca
{
	bool nao_acertou(const std::string& palavra_secreta, const std::map<char, bool>& chutou);
}