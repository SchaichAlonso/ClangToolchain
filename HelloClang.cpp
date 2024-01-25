#include <cstdlib>
#include <iostream>
#include <sqlite3.h>

int main()
{
	std::cout << "Linked Against SQLite3 Version: " <<  sqlite3_libversion() << std::endl;
	return EXIT_SUCCESS;
}