//Medical
    class ACE_morphineItem;
	class OPTRE_BiofoamItem; 
    class OPTRE_MediGelItem;
    class ACE_tourniquetItem;
    
//more meds
    class MEU_compat_IbuprofenItem: ACE_morphineItem 
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Ibuprofen";
        author = "1st MEU Mark";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx(MEU_compat_Ibuprofen,1);
        };
        mass = 20;
    };
    /*class AtropineItem : MEU_compat_IbuprofenItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Antidote";
        author = "1st MEU Mark";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx(Atropine,1);
        };
        mass = 20;
    };*/
    class MEU_BiofoamItem: OPTRE_BiofoamItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Corpsman Biofoam";
        author = "Article 2 Studios edits by mark";
        vehicleClass = "Items";
        class TransportItems
        {
            item_xx(MEU_Biofoam,1);
        };
        mass = 35;
    };
    class MEU_MediGelItem: OPTRE_MediGelItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Corpsman Medigel";
        author = "Article 2 Studios edits by mark";
        vehicleClass = "Items";
        class TransportItems
        {
            item_xx(MEU_Medigel,1);
        };
        mass = 35;
    };
	class MEU_BiofoamItem_Light: OPTRE_BiofoamItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Biofoam";
        author = "1stMEU Oneill";
        vehicleClass = "Items";
        class TransportItems
        {
            item_xx(MEU_Biofoam_Light,1);
        };
        mass = 2;
    };
    class MEU_MediGelItem_Light: OPTRE_MediGelItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Medigel";
        author = "1stMEU Oneill";
        vehicleClass = "Items";
        class TransportItems
        {
            item_xx(MEU_Medigel_Light,1);
        };
        mass = 2;
    };
    class MEU_tourniquetItem: ACE_tourniquetItem
    {
        scope = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[WIP] Suit Constriction System";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx(MEU_tourniquet,1);
        };
        mass = 20;
    };
    // end meds