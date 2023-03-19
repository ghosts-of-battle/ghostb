#include "script_component.hpp"

class CfgPatches {
    class ghostb_defib {
        name = "GHOSTB_DEFIB - Defib";
        units[] = {"ghostb_defib_AEDItem"};
        weapons[] = {"ghostb_defib_AED"};
        requiredVersion = 1.88;
        requiredAddons[] = {"A3_Data_F_Tank_Loadorder","cba_main","ace_main"};
        author = "";
        authors[] = {""};
        version = "1.0.0.0";
        versionStr = "1.0.0.0";
        versionAr[] = {1,0,0,0};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgSounds.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
