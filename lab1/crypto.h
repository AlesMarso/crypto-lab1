#pragma once

#include <string>

namespace crypto
{
	class Crypto
	{
	public:
		Crypto();
		Crypto(const std::string&);
		~Crypto();

		void SetInputString(const std::string&);

		std::string GetEncodedString();
		std::string GetDecodedString();

		virtual bool Encode() = 0;
		virtual bool Decode() = 0;

	protected:
		std::string m_InputStr;
		std::string m_EncodedStr;
		std::string m_DecodedStr;
	};
}

