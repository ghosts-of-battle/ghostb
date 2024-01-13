#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_common"
        };
        author = "Ghostb";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"