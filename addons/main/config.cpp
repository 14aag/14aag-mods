#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aag14_common", "aag14_logistics"};
        author = "14AAG";
        VERSION_CONFIG;
    };
};
