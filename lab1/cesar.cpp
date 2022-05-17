#include "cesar.h"

crypto::Cesar::Cesar()
{
	m_Key = 2;
}

crypto::Cesar::Cesar(int key)
{
	m_Key = key;
}

crypto::Cesar::Cesar(const std::string& inputstr)
{
	m_Key = 2;
	m_InputStr = inputstr;
}

crypto::Cesar::Cesar(int key, const std::string& inputstr)
{
	m_Key = key;
	m_InputStr = inputstr;
}

crypto::Cesar::~Cesar()
{
}

bool crypto::Cesar::Encode()
{
	if (m_InputStr.empty())
		return false;

	if (!m_EncodedStr.empty())
		m_EncodedStr.clear();

	std::size_t input_length = m_InputStr.length();

	m_EncodedStr.resize(input_length + 1);

	for (int i = 0; i < input_length; i++)
		m_EncodedStr[i] = encode_letter(m_InputStr[i]);
	
	return true;
}

bool crypto::Cesar::Decode()
{
	if (m_InputStr.empty())
		return false;

	if (!m_DecodedStr.empty())
		m_DecodedStr.clear();

	std::size_t input_length = m_InputStr.length();

	m_DecodedStr.resize(input_length + 1);

	for (int i = 0; i < input_length; i++)
		m_DecodedStr[i] = decode_letter(m_InputStr[i]);

	return true;
}
