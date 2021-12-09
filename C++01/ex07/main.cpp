#include "replace.hpp"

int main(int argc, char **argv)
{

	std :: ifstream in_file;
	std :: ofstream out_file;
	if (argc == 4)
	{
		std :: string	file_name = argv[1];
		std :: string	s1 = argv[2];
		std :: string	s2 = argv[3];
		if (s1.empty() || s2.empty())
		{
			std :: cout << "ERROR" << std :: endl;
		}
		in_file.open(file_name + ".replace");
		if (!in_file.is_open())
		{
			std :: cout << "ERROR: NO HAVE FILE" << file_name<< "out" << std :: endl;
			return 0;
		}
		out_file.open(file_name + ".replace");
		replace_string(s1, s2, out_file,in_file);
		in_file.close();
		out_file.close();
	}
	else
	{
		std :: cout << "ERROR: NO ARGUMENT" << std :: endl;
	}
	return 0;
}