#include <iostream>
#include <boost/log/trivial.hpp>

using namespace std;

int main() {
	BOOST_LOG_TRIVIAL(debug) << "hello world";
}