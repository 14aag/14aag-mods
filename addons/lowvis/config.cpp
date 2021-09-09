#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {"lowvis_vest"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aag14_main"};
        author = "Piper";
        VERSION_CONFIG;
    };
};
	

class CfgWeapons {
	#include "lowvisvest.hpp"
};
class Cfgvehicles {
	#include "lowvisbackpack.hpp"
};