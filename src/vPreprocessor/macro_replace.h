#pragma once

#include <string>
#include <vector>

class macro_replace {

	std::string _replaceString;
	std::vector<std::string> * _args;

	void replaceAll(std::string& str, const std::string& from, const std::string& to);

	public:
		macro_replace(std::string,std::vector<std::string>);
		~macro_replace();
		virtual std::string replace(std::vector<std::string>);

};
