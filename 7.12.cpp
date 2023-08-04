#include <cstdlib>
#include <iostream>


auto cleanup()
{
	std::cout << "\n\n0xF11 We have from all files being used by this program. Thank you, Please load this again whenever you feel like.\n\n\n\n\n\n\n";


}

int main()
{

	std::cout << "blah blah blah";

	std::atexit(cleanup);

	std::exit(0); // cstdlib version of return 0, Same is achieved with just typing return 0.

	std::cout << " bloo bloo bloo ";
	return 0;
}
