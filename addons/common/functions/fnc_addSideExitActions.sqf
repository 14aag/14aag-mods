#include "script_component.hpp"

private _condition = QUOTE((vehicle _this) isEqualTo _target);
private _action = {[_this#0, _this#1, _this#3] call FUNC(useSideExit)};
_this addAction ["Exit left", _action, -1, 0, false, true, "", _condition, 5];
_this addAction ["Exit right", _action, 1, 0, false, true, "", _condition, 5];
