/* Author: Kat Bergen
v01 21.06.2020

cpp to throw errors

PAD1 P4A3
*/

#include <string>
#include <stdexcept>


void error(const std::string& s)
{
	throw std::runtime_error{ s };
}