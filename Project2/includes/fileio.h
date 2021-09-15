#include <vector>
#include "constants.h"
#ifndef FILEIO_H_
#define FILEIO_H_

namespace KP{
	int load(const std::string filename, std::vector<process> &myProcesses);
	int save(const std::string filename, std::vector<process> &myProcesses);
	
	
	
	
}
#endif


