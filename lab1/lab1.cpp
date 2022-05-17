#include <iostream>

#include "cesar_eng.h"

void test_cesar();
void interactive_test_encode_cesar();
void interactive_test_decode_cesar();

int main()
{
	interactive_test_encode_cesar();

	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;
	
	interactive_test_decode_cesar();

	return 0;
}

void test_cesar()
{
	std::string input_test_eng = "abcdefghijklmnopqrstuvwxyz ABCDEFGHJKLMNOPQRSTUVWXYZ";
	std::string output_test_eng;

	crypto::CesarEng cesarEng(input_test_eng);

	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Test encoding string" << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;

	if (!cesarEng.Encode())
		return;
	else
		output_test_eng = cesarEng.GetEncodedString();

	std::cout << "INPUT:  " << input_test_eng << std::endl;
	std::cout << "OUTPUT: " << output_test_eng << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;

	cesarEng.SetInputString(output_test_eng);

	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Test decoding string" << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;

	if (!cesarEng.Decode())
		return;
	else
		input_test_eng = cesarEng.GetDecodedString();

	std::cout << "INPUT:  " << output_test_eng << std::endl;
	std::cout << "OUTPUT: " << input_test_eng << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------" << std::endl;
}

void interactive_test_encode_cesar()
{
	std::cout << "PRINT ENCODING STRING ON ENGLISH: " << std::endl;

	std::string in_str;

	std::string out_str;

	std::getline(std::cin, in_str);

	crypto::CesarEng cesarEng(in_str);

	if (!cesarEng.Encode())
		return;
	else
		out_str = cesarEng.GetEncodedString();

	std::cout << std::endl;
	std::cout << "RESULT ENCODING" << std::endl;

	std::cout << "INPUT:  " << in_str << std::endl;
	std::cout << "OUTPUT: " << out_str << std::endl;
}

void interactive_test_decode_cesar()
{
	std::cout << "PRINT DECODING STRING ON ENGLISH: " << std::endl;

	std::string in_str;

	std::string out_str;

	std::getline(std::cin, in_str);

	crypto::CesarEng cesarEng(in_str);

	if (!cesarEng.Decode())
		return;
	else
		out_str = cesarEng.GetDecodedString();

	std::cout << std::endl;
	std::cout << "RESULT ENCODING" << std::endl;

	std::cout << "INPUT:  " << in_str << std::endl;
	std::cout << "OUTPUT: " << out_str << std::endl;
}

