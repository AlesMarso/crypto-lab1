#pragma once

#include "cesar.h"

namespace crypto
{
	class CesarEng : public Cesar
	{
	public:
		CesarEng();
		CesarEng(int);
		CesarEng(const std::string&);
		CesarEng(int, const std::string&);
		~CesarEng();
		
		char encode_letter(char) override;
		char decode_letter(char) override;

	private:
		bool is_small_letter(char);
		bool is_big_letter(char);

	private:
		const char ENG_FIRST_SMALL_LETTER = 'a';
		const char ENG_LAST_SMALL_LETTER = 'z';

		const char ENG_FIRST_BIG_LETTER = 'A';
		const char ENG_LAST_BIG_LETTER = 'Z';
	};
}

