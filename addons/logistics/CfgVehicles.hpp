class CfgVehicles {
    class Box_NATO_Ammo_F;
    class GVAR(ammo_base): Box_NATO_Ammo_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=2000;
        ace_cargo_size=1;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(ammo_hq): GVAR(ammo_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(ammo_hq);
    };

    class GVAR(ammo_v11): GVAR(ammo_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(ammo_v11);
    };

    class GVAR(ammo_v12): GVAR(ammo_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(ammo_v12);
    };

    class GVAR(ammo_v13): GVAR(ammo_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(ammo_v13);
    };

    class GVAR(ammo_loki): GVAR(ammo_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(ammo_loki);
    };

    class GVAR(ammo_soar): GVAR(ammo_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(ammo_soar);
    };

    class Box_NATO_Wps_F;
    class GVAR(weapons_box_base): Box_NATO_Wps_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        ace_cargo_size=4;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(weapons_hq): GVAR(weapons_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(weapons_hq);
    };

    class GVAR(weapons_v11): GVAR(weapons_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(weapons_v11);
    };

    class GVAR(weapons_v12): GVAR(weapons_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(weapons_v12);
    };

    class GVAR(weapons_v13): GVAR(weapons_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(weapons_v13);
    };

    class GVAR(weapons_loki): GVAR(weapons_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(weapons_loki);
    };

    class GVAR(weapons_soar): GVAR(weapons_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(weapons_soar);
    };

    class Box_NATO_AmmoOrd_F;
    class GVAR(explosives_box_base): Box_NATO_AmmoOrd_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=2000;
        ace_cargo_size=1;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(explosives_hq): GVAR(explosives_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(explosives_hq);
    };

    class GVAR(explosives_v11): GVAR(explosives_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(explosives_v11);
    };

    class GVAR(explosives_v12): GVAR(explosives_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(explosives_v12);
    };

    class GVAR(explosives_v13): GVAR(explosives_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(explosives_v13);
    };

    class GVAR(explosives_loki): GVAR(explosives_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(explosives_loki);
    };

    class GVAR(explosives_soar): GVAR(explosives_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(explosives_soar);
    };

    class Box_NATO_Grenades_F;
    class GVAR(grenades_box_base): Box_NATO_Grenades_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=2000;
        ace_cargo_size=1;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(grenades_hq): GVAR(grenades_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(grenades_hq);
    };

    class GVAR(grenades_v11): GVAR(grenades_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(grenades_v11);
    };

    class GVAR(grenades_v12): GVAR(grenades_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(grenades_v12);
    };

    class GVAR(grenades_v13): GVAR(grenades_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(grenades_v13);
    };

    class GVAR(grenades_loki): GVAR(grenades_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(grenades_loki);
    };

    class GVAR(grenades_soar): GVAR(grenades_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(grenades_soar);
    };

    class Box_NATO_WpsLaunch_F;
    class GVAR(launcher_box_base): Box_NATO_WpsLaunch_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=5000;
        ace_cargo_size=4;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(launcher_hq): GVAR(launcher_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(launcher_hq);
    };

    class GVAR(launcher_v11): GVAR(launcher_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(launcher_v11);
    };

    class GVAR(launcher_v12): GVAR(launcher_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(launcher_v12);
    };

    class GVAR(launcher_v13): GVAR(launcher_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(launcher_v13);
    };

    class GVAR(launcher_loki): GVAR(launcher_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(launcher_loki);
    };

    class GVAR(launcher_soar): GVAR(launcher_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(launcher_soar);
    };

    class Box_NATO_WpsSpecial_F;
    class GVAR(special_box_base): Box_NATO_WpsSpecial_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=5000;
        ace_cargo_size=4;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(special_hq): GVAR(special_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(special_hq);
    };

    class GVAR(special_v11): GVAR(special_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(special_v11);
    };

    class GVAR(special_v12): GVAR(special_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(special_v12);
    };

    class GVAR(special_v13): GVAR(special_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(special_v13);
    };

    class GVAR(special_loki): GVAR(special_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(special_loki);
    };

    class GVAR(special_soar): GVAR(special_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(special_soar);
    };

    class Box_NATO_Support_F;
    class GVAR(support_box_base): Box_NATO_Support_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=2000;
        ace_cargo_size=1;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(support_hq): GVAR(support_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\HQAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(support_hq);
    };

    class GVAR(support_v11): GVAR(support_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V11AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(support_v11);
    };

    class GVAR(support_v12): GVAR(support_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V12AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(support_v12);
    };

    class GVAR(support_v13): GVAR(support_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\V13AmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(support_v13);
    };

    class GVAR(support_loki): GVAR(support_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\LKAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(support_loki);
    };

    class GVAR(support_soar): GVAR(support_box_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ammoboxes\SRAmmoBox_signs_CA.paa),
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa"
        };
        displayName = CSTRING(support_soar);
    };

    class B_supplyCrate_F;
    class GVAR(supplyCrate_HQ_base): B_supplyCrate_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=5000;
        ace_cargo_size=5;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(supplyCrate_HQ): GVAR(supplyCrate_HQ_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {"a3\weapons_f\Ammoboxes\data\supplydrop_co.paa"
        };
        displayName = CSTRING(supplyCrate_HQ);
    };

    class B_CargoNet_01_ammo_F;
    class GVAR(CargoNet_HQ_base): B_CargoNet_01_ammo_F {
        scope = 0;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        maximumLoad=6000;
        ace_cargo_size=6;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class GVAR(CargoNet_HQ): GVAR(CargoNet_HQ_base) {
        scope = 2;
        hiddenSelectionsTextures[] = {
            "a3\weapons_f\Ammoboxes\data\AmmoBox_CO.paa","a3\weapons_f\Ammoboxes\data\AmmoBox_signs_CA.paa"
        };
        displayName = CSTRING(CargoNet_HQ);
    };

    class Land_Pod_Heli_Transport_04_box_F;
    class GVAR(Taru_Pod_HQ): Land_Pod_Heli_Transport_04_box_F {
        scope = 2;
        vehicleClass = QEGVAR(main,ammunition);
        editorCategory = QEGVAR(main,static);
        editorSubcategory = QEGVAR(main,ammunition);
        hiddenSelectionsTextures[] = {
            "A3\air_f_heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
            "A3\air_f_heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
        };
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
        displayName = CSTRING(Taru_Pod_HQ);
    };
};
