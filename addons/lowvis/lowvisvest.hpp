class ItemCore;
class Vest_NoCamo_Base : ItemCore {
    class ItemInfo;
};
class GVAR(vest) : Vest_NoCamo_Base {
    author = "Piper";
    scope = 2;
    displayName = "LowVis Plate";
    picture = QPATHTOF(data\null_vest.paa);
    model = QPATHTOF(data\nullvest);
    hiddenSelectionsTextures[] = {};
    class ItemInfo : ItemInfo {
        uniformModel = QPATHTOF(data\nullvest);
        containerClass = "Supply70";
        mass = 4.4;

        class HitpointsProtectionInfo {
            class Chest {
                hitPointName = "HitChest";
                armor = 10;
                passThrough = 0.3;
            };
            class Diaphragm {
                hitPointName = "HitDiaphragm";
                armor = 10;
                passThrough = 0.3;
            };
        };
    };
};
