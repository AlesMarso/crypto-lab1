#pragma once

#include "crypto.h"

namespace crypto
{
	class Cesar : public Crypto
	{
	public:
		Cesar();
		Cesar(int);
		Cesar(const std::string&);
		Cesar(int, const std::string&);
		~Cesar();

		bool Encode() override;
		bool Decode() override;

		virtual char encode_letter(char) = 0;
		virtual char decode_letter(char) = 0;

	protected:
		int m_Key;
	};
}

