#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_main",
            "ghostb_common"
        };
        author = "NemesisRE";
        authors[] = {"baermitumlaut", "commy2"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMarkers.hpp"
#include "CfgMarkerColors.hpp"
