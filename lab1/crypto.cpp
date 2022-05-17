#include "crypto.h"

crypto::Crypto::Crypto()
{
}

crypto::Crypto::Crypto(const std::string& inputstr)
{
	m_InputStr = inputstr;
}

crypto::Crypto::~Crypto()
{
}

void crypto::Crypto::SetInputString(const std::string& inputstr)
{
	m_InputStr = inputstr;
}

std::string crypto::Crypto::GetEncodedString()
{
	return m_EncodedStr;
}

std::string crypto::Crypto::GetDecodedString()
{
	return m_DecodedStr;
}
