//Base Values
    class MEU_Mar_MOS_Helm_Sealed_Base: 1stMEU_Base_CH252D_Helmet
	{
		author = "Rave";
		scope = 1;
		scopeCurator = 1;
		model = "\OPTRE_UNSC_Units\Army\helmet_p";
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Ghillie"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
        ace_hearing_lowerVolume = 0.85;
        ace_hearing_protection = 5.0;
		class ItemInfo: ItemInfo
		{
			uniformModel = "OPTRE_UNSC_Units\Army\helmet_p";
			picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Ghillie"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
			hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat4thPltZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		};
    };
    
//Marine
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_56 : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-6 ECH252 Helmet (Marine Gold) (Spades)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_56.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_57 : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-7 ECH252 Helmet (Marine Gold) (Starbuck)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_57.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5R : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-R ECH252 Helmet (Marine Gold) (Aqyrys)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R3_CO_AQ.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5M : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Marine Gold) (Avon)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_5M.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 Helmet (Marine)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO Helmet (Marine)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO Helmet (Marine)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Marine DP
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_56_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_56.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_57_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_57.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5R_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R3_CO_AQ.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5M_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_5M.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Desert
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 Helmet (Desert)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R1_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO Helmet (Desert)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R2_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO Helmet (Desert)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Desert DP
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_L_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R1_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_DES_R2_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Evolved
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-0 ECH252 Helmet (Evolved Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-0 ECH252 Helmet (Evolved Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_A_GLD_50 : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-0 ECH252 Helmet (Evolved Gold) (Muffins)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_50.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    
//Evolved DP
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
 	    hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_A_GLD_50_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_50.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    
//Snow
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 Helmet (Snow)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO Helmet (Snow)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};SNO
    class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO Helmet (Snow)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Snow DP
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_L_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};

//Urban
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 Helmet (Urban)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R1_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO Helmet (Urban)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};SNO
    class MEU_Mar_Sealed_V_CH252_URB_R2_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO Helmet (Urban)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Urban DP
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
          scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_L_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R1_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_URB_R2_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Woodland
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 Helmet (Urban)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO Helmet (Urban)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};SNO
    class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_F : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO Helmet (Urban)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Woodland DP
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
          scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_L_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_F_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_F.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
    
//Beret
    class fifth_plt_beret : LM_OPCAN_Beret_CGC
    {
       scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Beret (5th Plt)";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\VulcanBeretV2.paa"};
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
    };