#include "script_component.hpp"
params ["_vehicle", "_unit", "_side"];

private _dir = getDir _vehicle;
_dir = _dir + 50 * _side;

private _posASL = (getPosASL _vehicle) vectorAdd [sin _dir * 5, cos _dir * 5, 0];
moveOut _unit;
_unit setPosASL _posASL;
_unit setDir _dir + 40 * _side;
