
class GHOSTB_booboo: ACE_ItemCore {
    displayName="Blue Force Gear Boo Boo Kit";
    scope = 2;
    descriptionShort="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
    descriptionUse="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
    picture="\z\ghostb\addons\medical\data\icon\booboo_ca.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass=0.01;
    };
};
class GHOSTB_cascard: GHOSTB_booboo {
    scope = 2;
    displayName="TACMED Casualty Cards";
    picture="\z\ghostb\addons\medical\data\icon\cascard_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOSTB_nargloves: GHOSTB_booboo {
    scope = 2;
    displayName="NAR Nitrile Gloves (Sand)";
    picture="\z\ghostb\addons\medical\data\icon\nargloves_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOSTB_shears: GHOSTB_booboo {
    scope = 2;
    displayName="Trauma Shears";
    picture="\z\ghostb\addons\medical\data\icon\shears_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOSTB_notes: GHOSTB_booboo {
    scope = 2;
    displayName="Notebook";
    picture="\z\ghostb\addons\medical\data\icon\notes_ca.paa";
    descriptionShort="For recording patient details for handover";
    descriptionUse="For recording patient details for handover";
};
class GHOSTB_triangleban: GHOSTB_booboo {
    scope = 2;
    displayName="NAR Triangle Bandage";
    picture="\z\ghostb\addons\medical\data\icon\triangleban_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class GHOSTB_NDC: GHOSTB_booboo {
    scope = 2;
    displayName="ARS Needle for decompression";
    descriptionShort="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression and drainage";
    descriptionUse="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression and drainage";
    picture="\z\ghostb\addons\medical\data\icon\NDC.paa";
};
class ACE_bodyBag: ACE_ItemCore {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
