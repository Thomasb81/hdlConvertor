#include "macro_replace.h"


macro_replace::macro_replace(std::string replace, std::vector<std::string> arg){
	_replaceString = replace;
	_args = new std::vector<std::string>(arg);
}

macro_replace::~macro_replace() {
	delete _args;
}

void macro_replace::replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

std::string macro_replace::replace(std::vector<std::string> arg) {

	std::string returnString = _replaceString;

	if (arg.size() != _args->size()) {
	  //TODO throw an exception
	}
	
	std::vector<std::string>::iterator macro= _args->begin();
	std::vector<std::string>::iterator instance = arg.begin();

	for ( ; macro != _args->end(); macro++, instance++) {
		replaceAll(returnString,*macro,*instance);
	}

	return returnString;

}
