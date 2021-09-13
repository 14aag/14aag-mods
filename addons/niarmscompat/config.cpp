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

class UnderBarrelSlot;
class nia_rifle_grips_slot: UnderBarrelSlot {
    displayName="Gripod slot";
    class compatibleItems {
        rhsusf_acc_grip1=1;
        rhsusf_acc_grip2=1;
        rhsusf_acc_grip2_tan=1;
        rhsusf_acc_grip2_wd=1;
        rhsusf_acc_grip3=1;
        rhsusf_acc_grip3_tan=1;
        rhsusf_acc_rvg_blk=1;
        rhsusf_acc_rvg_de=1;
        rhsusf_acc_tacsac_blk=1;
        rhsusf_acc_tacsac_tan=1;
        rhsusf_acc_tacsac_blue=1;
        rhsusf_acc_tdstubby_blk=1;
        rhsusf_acc_tdstubby_tan=1;
    };
};
class asdg_SlotInfo;
class asdg_UnderSlot: asdg_SlotInfo {
    class compatibleItems {};
};
class nia_rifle_bipodsgrips_slot: asdg_UnderSlot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_grip1=1;
        rhsusf_acc_grip2=1;
        rhsusf_acc_grip2_tan=1;
        rhsusf_acc_grip2_wd=1;
        rhsusf_acc_grip3=1;
        rhsusf_acc_grip3_tan=1;
        rhsusf_acc_rvg_blk=1;
        rhsusf_acc_rvg_de=1;
        rhsusf_acc_tacsac_blk=1;
        rhsusf_acc_tacsac_tan=1;
        rhsusf_acc_tacsac_blue=1;
        rhsusf_acc_tdstubby_blk=1;
        rhsusf_acc_tdstubby_tan=1;
    };
};
