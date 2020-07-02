#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "14AAG";
        VERSION_CONFIG;
    };
};


class CfgVehicleClasses {
    class GVAR(ammunition) {
        displayName = "Ammunition";
    };
};

class CfgEditorCategories {
    class GVAR(static) {
        displayName = "14AAG Static";
    };
};

class CfgEditorSubcategories {
    class GVAR(ammunition) {
        displayName = "Ammunition";
    };
};

#include "CfgEventHandlers.hpp"