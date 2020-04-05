class CfgWeapons
{
    class ItemCore;
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class InventoryFirstAidKitItem_Base_F;
    class MedikitItem;

    class Rifle_Base_F;
    
    class OPTRE_M45: Rifle_Base_F
    {
        magazines[]=
        {
            "OPTRE_6Rnd_8Gauge_Pellets",
            "OPTRE_6Rnd_8Gauge_Slugs",
            "OPTRE_6Rnd_8Gauge_HEDP",
            "OPTRE_6Rnd_8Gauge_Beanbags",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Slugs",
            "OPTRE_12Rnd_8Gauge_HEDP",
            "OPTRE_12Rnd_8Gauge_Beanbags"
        };
    };
    
    class OPTRE_M45E: OPTRE_M45
    {
        magazines[]=
        {
            "OPTRE_6Rnd_8Gauge_Pellets",
            "OPTRE_6Rnd_8Gauge_Slugs",
            "OPTRE_6Rnd_8Gauge_HEDP",
            "OPTRE_6Rnd_8Gauge_Beanbags",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Slugs",
            "OPTRE_12Rnd_8Gauge_HEDP",
            "OPTRE_12Rnd_8Gauge_Beanbags"
        };
    };

    class OPTRE_M45X: OPTRE_M45E 
    {
        magazines[]=
        {
            "OPTRE_6Rnd_8Gauge_Pellets",
            "OPTRE_6Rnd_8Gauge_Slugs",
            "OPTRE_6Rnd_8Gauge_HEDP",
            "OPTRE_6Rnd_8Gauge_Beanbags",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Slugs",
            "OPTRE_12Rnd_8Gauge_HEDP",
            "OPTRE_12Rnd_8Gauge_Beanbags"
        };
    };
};
class ACE_Painkiller: ACE_ItemCore {
        scope = 2;
        displayName = "Adpil";
        picture = ;
        model = ;
        descriptionShort = "don't sue us big pharma";
        descriptionUse = "Dont take too many at once";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = .1;
        };
    };