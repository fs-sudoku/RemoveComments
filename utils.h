#pragma once
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

extern string remove_all_comments(const string source);

extern string read_all_file(const string& path);
extern void write_file(const string& path, const string& value);