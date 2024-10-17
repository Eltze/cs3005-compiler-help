#ifndef MENUDATA_H
#define MENUDATA_H

#include <vector>
#include <map>
#include <string>

#include "ActionData.h"

typedef void (*ActionFunctionType)(ActionData& action_data);

class MenuData {
public:
    MenuData();
    void addAction(const std::string& name, ActionFunctionType func, const std::string& description);
    const std::vector<std::string>& getNames() const;
    ActionFunctionType getFunction(const std::string& name);
    const std::string& getDescription(const std::string& name);

    

private:
    std::vector<std::string> names;

    std::map<std::string, ActionFunctionType> function;
    std::map<std::string, std::string> description;
    
};

#endif