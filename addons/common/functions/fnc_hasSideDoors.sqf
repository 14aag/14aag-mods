#include "script_component.hpp"

private _hasSideDoors = (([configFile >> "CfgVehicles" >> typeOf _this >> QGVAR(hasSideDoors), "NUMBER", 0] call CBA_fnc_getConfigEntry) == 1);
if (!_hasSideDoors) then {
    _hasSideDoors = GVAR(sideDoorOverrides) findIf { _this isKindOf _x } != -1;
};

_hasSideDoors
