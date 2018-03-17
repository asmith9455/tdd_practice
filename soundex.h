#ifndef SOUNDEX_H_
#define SOUNDEX_H_

class Soundex
{
private:

	std::string zero_pad(const std::string& word, size_t minimum_size)
	{
		auto padded_word = word;

		while(word.size() < minimum_size)
			padded_word.push_back('0');

		return padded_word;
	}

public:

	std::string encode(const std::string& word)
	{
		return zero_pad(word, 4);
	}

};


#endif	//end SOUNDEX_H_
