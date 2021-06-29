#include "utils.h"

template <class E, class T>
void check_file_error(const basic_ios<E, T>& file, const string& path)
{
	if (file.fail()) {
		cout << "Cannot open file! Path: " << "\"" << path << "\"" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		cout << "\"" << path << "\"" << " is sucessfully open" << endl;
	}
}

string read_all_file(const string& path)
{
	ifstream file(path);
	check_file_error(file, path);

	return string(istreambuf_iterator<char>(file), istreambuf_iterator<char>());
}

void write_file(const string& path, const string& value)
{
	ofstream file(path, ios::out | ios::trunc);

	check_file_error(file, path);

	file << value;
	file.close();
}

string remove_all_comments(string source)
{
	while (source.find("/*") != string::npos) {
		size_t begin = source.find("/*");
		source.erase(begin, (source.find("*/", begin) - begin) + 2);
	}

	while (source.find("//") != string::npos) {
		size_t begin = source.find("//");
		source.erase(begin, source.find("\n", begin) - begin);
	}
	return source;
}