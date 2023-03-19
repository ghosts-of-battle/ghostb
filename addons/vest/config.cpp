#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_main",
            "A3_Characters_F",
            "aceax_gearinfo",
            "A3_Characters_F_Enoch",
            "A3_Characters_F_Enoch_Vests"
            };
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "XtdGearghostb.hpp"
#include "XtdGear.hpp"
#include "XtdGear_tsf_avs.hpp"
