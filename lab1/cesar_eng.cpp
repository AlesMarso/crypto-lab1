#include "cesar_eng.h"

bool crypto::CesarEng::is_small_letter(char letter)
{
	return ENG_FIRST_SMALL_LETTER <= letter && letter <= ENG_LAST_SMALL_LETTER;
}

bool crypto::CesarEng::is_big_letter(char letter)
{
	return ENG_FIRST_BIG_LETTER <= letter && letter <= ENG_LAST_BIG_LETTER;
}

crypto::CesarEng::CesarEng()
{
}

crypto::CesarEng::CesarEng(int key)
	: Cesar(key)
{
}

crypto::CesarEng::CesarEng(const std::string& inputstr)
	: Cesar(inputstr)
{
}

crypto::CesarEng::CesarEng(int key, const std::string& inputstr)
	: Cesar(key, inputstr)
{
}

crypto::CesarEng::~CesarEng()
{
}

char crypto::CesarEng::encode_letter(char letter)
{
	char first, last;

	if (is_small_letter(letter))
	{
		first = ENG_FIRST_SMALL_LETTER;
		last = ENG_LAST_SMALL_LETTER;
	}
	else if (is_big_letter(letter))
	{
		first = ENG_FIRST_BIG_LETTER;
		last = ENG_LAST_BIG_LETTER;
	}
	else
	{
		return letter;
	}

	int letters_count = last - first + 1;

	int letter_number = letter - first + 1;

	return first + ((letter_number + m_Key - 1) % letters_count);
}

char crypto::CesarEng::decode_letter(char letter)
{
	char first, last;

	if (is_small_letter(letter))
	{
		first = ENG_FIRST_SMALL_LETTER;
		last = ENG_LAST_SMALL_LETTER;
	}
	else if (is_big_letter(letter))
	{
		first = ENG_FIRST_BIG_LETTER;
		last = ENG_LAST_BIG_LETTER;
	}
	else
	{
		return letter;
	}

	int letter_number = letter - first + 1;

	int decode = letter_number - m_Key;

	if (decode <= 0)
	{
		int letters_count = last - first + 1;

		decode += letters_count;
	}

	return first + (decode - 1);
}
