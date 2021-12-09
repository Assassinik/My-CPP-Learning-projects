#include "replace.hpp"

void replace_string(std :: string const s1, std :: string const s2, std :: ofstream &out_file, std :: ifstream &in_file)
{
	std :: string getfile;
	size_t n = 0;
	while (std :: getline (in_file, getfile))
	{
		std :: cout << getfile << std :: endl;
		n = 0;
		while (1)
		{
			n = getfile.find(s1, n);
			if (n != std :: string :: npos)
			{
				getfile.replace(n, s1.length(), s2);
				n += s2.length();
			}
			else
				break;
		}
		std :: cout << getfile << std :: endl << std :: endl;
		out_file << getfile << "\n";
	}
}
