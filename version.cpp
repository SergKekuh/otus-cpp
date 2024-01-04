#include <boost/format.hpp>
 
#include "build/version.h"
 
namespace
{
	const boost::uint8_t MAJOR = 4;
	const boost::uint16_t MINOR = 6;
	const boost::uint16_t PATCH = 12;
	const boost::uint32_t BUILD = 589; // Это значение будет изменено автоматически
}
 
const std::string& Version::AsText()
{
	static const std::string text = boost::str(boost::format("%1%.%2%.%3%.%4%") %
		static_cast<unsigned>(MAJOR) % MINOR % PATCH % BUILD);
 
	return text;
}
 
boost::uint64_t Version::AsNumber()
{
	BOOST_STATIC_ASSERT(BUILD < 0xFFFFFF);
 
	using namespace boost;
	const size_t size = sizeof(uint64_t);
 
	static const boost::uint64_t number =
		(static_cast<uint64_t>(MAJOR) 
			<< (size - sizeof(MAJOR)) * 8) |
		(static_cast<uint64_t>(MINOR) 
			<< (size - sizeof(MAJOR) - sizeof(MINOR)) * 8) |
		(static_cast<uint64_t>(PATCH) 
			<< (size - sizeof(MAJOR) - sizeof(MINOR) - sizeof(PATCH)) * 8) |
		BUILD;
 
	return number;
}