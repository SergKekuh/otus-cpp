#pragma once

#include <string.h>
 
#include <boost/cstdint.hpp>
 
 namespace Version
{
	const std::string& AsText();
	boost::uint64_t AsNumber();
}

#define PROJECT_VERSION_PATCH 1
