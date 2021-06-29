#include "utils.h"

int main(int argc, char* argv[])
{
	string input_file;

	cout << "Enter path to input file..." << endl;
	cin >> input_file;

	cout << "Reading input file" << endl;
	string input_text = read_all_file(input_file);
	cout << "Writing output file" << endl;
	string result = remove_all_comments(input_text);

	write_file("NoComments.txt", result);
	
	cout << "All comments removed, program finished" << endl;
}