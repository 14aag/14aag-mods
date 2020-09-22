#include "script_component.hpp"
params ["_helo"];

if (hasInterface) then {
    if (_helo call FUNC(hasSideDoors)) then {
        _helo call FUNC(addSideExitActions);
    };
};
