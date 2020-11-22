#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aag14_main"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgMagazineWells.hpp"
