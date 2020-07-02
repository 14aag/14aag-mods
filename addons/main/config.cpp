#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"14aag_common", "14aag_logistics"};
        author = "14AAG";
        VERSION_CONFIG;
    };
};
