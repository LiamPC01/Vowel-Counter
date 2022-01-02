#include "Header.h"


int main()
{
	std::cout << "Enter a sentence:\n";
	std::getline(std::cin, input);

	for (int i = 0; i <= input.length(); i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			if (input[i] == vowels[j])
			{
				vowel_count++;
			}
		}
	}
	std::cout << "There are " << vowel_count << " vowels in that sentence\n";
}

