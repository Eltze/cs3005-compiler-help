
#include <string>

#include "MenuData.h"


MenuData::MenuData() {}

void MenuData::addAction(const std::string& name, ActionFunctionType func, const std::string& descrip){
    names.push_back(name);
    function[name] = func;
    description[name] = descrip;
}

const std::vector<std::string>& MenuData::getNames() const { return names; }

ActionFunctionType MenuData::getFunction(const std::string& name) {
    auto it = function.find(name);
    return it != function.end() ? it->second : nullptr;
}

const std::string& MenuData::getDescription(const std::string& name) {
    static std::string emptyString;
    auto it = description.find(name);
    return it != description.end() ? it->second : emptyString;
}