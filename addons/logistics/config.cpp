#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QGVAR(ammo_hq),
            QGVAR(ammo_v11),
            QGVAR(ammo_v12),
            QGVAR(ammo_v13),
            QGVAR(ammo_loki),
            QGVAR(ammo_soar),
            QGVAR(weapons_hq),
            QGVAR(weapons_v11),
            QGVAR(weapons_v12),
            QGVAR(weapons_v13),
            QGVAR(weapons_loki),
            QGVAR(weapons_soar),
            QGVAR(explosives_hq),
            QGVAR(explosives_v11),
            QGVAR(explosives_v12),
            QGVAR(explosives_v13),
            QGVAR(explosives_loki),
            QGVAR(explosives_soar),
            QGVAR(grenades_hq),
            QGVAR(grenades_v11),
            QGVAR(grenades_v12),
            QGVAR(grenades_v13),
            QGVAR(grenades_loki),
            QGVAR(grenades_soar),
            QGVAR(launcher_hq),
            QGVAR(launcher_v11),
            QGVAR(launcher_v12),
            QGVAR(launcher_v13),
            QGVAR(launcher_loki),
            QGVAR(launcher_soar),
            QGVAR(special_hq),
            QGVAR(special_v11),
            QGVAR(special_v12),
            QGVAR(special_v13),
            QGVAR(special_loki),
            QGVAR(special_soar),
            QGVAR(support_hq),
            QGVAR(support_v11),
            QGVAR(support_v12),
            QGVAR(support_v13),
            QGVAR(support_loki),
            QGVAR(support_soar),
            QGVAR(supplycrate_hq),
            QGVAR(cargonet_hq),
            QGVAR(taru_pod_hq)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"14aag_common"};
        author = "14AAG";
        VERSION_CONFIG;
    };
};


#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"