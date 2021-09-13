#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {"CUP_O_RU_Soldier","CUP_O_RU_Soldier_Saiga","CUP_O_RU_Soldier_GL","CUP_O_RU_Soldier_SL","CUP_O_RU_Soldier_TL","CUP_O_RU_Soldier_MG","CUP_O_RU_Soldier_AR","CUP_O_RU_Soldier_LAT","CUP_O_RU_Soldier_AT","CUP_O_RU_Soldier_HAT","CUP_O_RU_Soldier_AA","CUP_O_RU_Soldier_AA","CUP_O_RU_Soldier_Marksman","CUP_O_RU_Medic","CUP_O_RU_Pilot","CUP_O_RU_Crew","CUP_O_RU_Engineer","CUP_O_RU_Explosive_Specialist","CUP_O_RU_Soldier_Light","CUP_O_RU_Soldier_VDV","CUP_O_RU_Soldier_Saiga_VDV","CUP_O_RU_Soldier_GL_VDV","CUP_O_RU_Soldier_SL_VDV","CUP_O_RU_Soldier_TL_VDV","CUP_O_RU_Soldier_MG_VDV","CUP_O_RU_Soldier_AR_VDV","CUP_O_RU_Soldier_LAT_VDV","CUP_O_RU_Soldier_AT_VDV","CUP_O_RU_Soldier_HAT_VDV","CUP_O_RU_Soldier_AA_VDV","CUP_O_RU_Soldier_AA_VDV","CUP_O_RU_Soldier_Marksman_VDV","CUP_O_RU_Medic_VDV","CUP_O_RU_Pilot_VDV","CUP_O_RU_Crew_VDV","CUP_O_RU_Engineer_VDV","CUP_O_RU_Explosive_Specialist_VDV","CUP_O_RU_Soldier_Light_VDV","CUP_O_RU_Soldier_VDV_EMR","CUP_O_RU_Soldier_Saiga_VDV_EMR","CUP_O_RU_Soldier_GL_VDV_EMR","CUP_O_RU_Soldier_SL_VDV_EMR","CUP_O_RU_Soldier_TL_VDV_EMR","CUP_O_RU_Soldier_MG_VDV_EMR","CUP_O_RU_Soldier_AR_VDV_EMR","CUP_O_RU_Soldier_LAT_VDV_EMR","CUP_O_RU_Soldier_AT_VDV_EMR","CUP_O_RU_Soldier_HAT_VDV_EMR","CUP_O_RU_Soldier_AA_VDV_EMR","CUP_O_RU_Soldier_AA_VDV_EMR","CUP_O_RU_Soldier_Marksman_VDV_EMR","CUP_O_RU_Medic_VDV_EMR","CUP_O_RU_Pilot_VDV_EMR","CUP_O_RU_Crew_VDV_EMR","CUP_O_RU_Engineer_VDV_EMR","CUP_O_RU_Explosive_Specialist_VDV_EMR","CUP_O_RU_Soldier_Light_VDV_EMR","CUP_O_RU_Soldier_EMR","CUP_O_RU_Soldier_Saiga_EMR","CUP_O_RU_Soldier_GL_EMR","CUP_O_RU_Soldier_SL_EMR","CUP_O_RU_Soldier_TL_EMR","CUP_O_RU_Soldier_MG_EMR","CUP_O_RU_Soldier_AR_EMR","CUP_O_RU_Soldier_LAT_EMR","CUP_O_RU_Soldier_AT_EMR","CUP_O_RU_Soldier_HAT_EMR","CUP_O_RU_Soldier_AA_EMR","CUP_O_RU_Soldier_AA_EMR","CUP_O_RU_Soldier_Marksman_EMR","CUP_O_RU_Medic_EMR","CUP_O_RU_Pilot_EMR","CUP_O_RU_Crew_EMR","CUP_O_RU_Engineer_EMR","CUP_O_RU_Explosive_Specialist_EMR","CUP_O_RU_Soldier_Light_EMR"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aag14_main", "CUP_Creatures_Military_Russia"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    #include "CfgVehicles.hpp"
};
