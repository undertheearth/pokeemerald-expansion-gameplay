Route123_BerryShop_MapScripts::
	.byte 0


BerryShop_Employee_1::
# 6 "data/maps/Route123_BerryShop/scripts.pory"
	lock
# 7 "data/maps/Route123_BerryShop/scripts.pory"
	faceplayer
# 8 "data/maps/Route123_BerryShop/scripts.pory"
	message BerryShop_Employee_1_Text_0
# 9 "data/maps/Route123_BerryShop/scripts.pory"
	waitmessage
# 10 "data/maps/Route123_BerryShop/scripts.pory"
	pokemart Status_Berries
# 11 "data/maps/Route123_BerryShop/scripts.pory"
	msgbox BerryShop_Employee_1_Text_1
# 12 "data/maps/Route123_BerryShop/scripts.pory"
	release
	end


BerryShop_Employee_2::
# 17 "data/maps/Route123_BerryShop/scripts.pory"
	lock
# 18 "data/maps/Route123_BerryShop/scripts.pory"
	faceplayer
# 19 "data/maps/Route123_BerryShop/scripts.pory"
	message BerryShop_Employee_2_Text_0
# 20 "data/maps/Route123_BerryShop/scripts.pory"
	waitmessage
# 21 "data/maps/Route123_BerryShop/scripts.pory"
	pokemart Heal_Berries
# 22 "data/maps/Route123_BerryShop/scripts.pory"
	msgbox BerryShop_Employee_2_Text_1
# 23 "data/maps/Route123_BerryShop/scripts.pory"
	release
	end


BerryShop_Employee_3::
# 28 "data/maps/Route123_BerryShop/scripts.pory"
	lock
# 29 "data/maps/Route123_BerryShop/scripts.pory"
	faceplayer
# 30 "data/maps/Route123_BerryShop/scripts.pory"
	message BerryShop_Employee_3_Text_0
# 31 "data/maps/Route123_BerryShop/scripts.pory"
	waitmessage
# 32 "data/maps/Route123_BerryShop/scripts.pory"
	pokemart EV_Berries
# 33 "data/maps/Route123_BerryShop/scripts.pory"
	msgbox BerryShop_Employee_3_Text_1
# 34 "data/maps/Route123_BerryShop/scripts.pory"
	release
	end


BerryShop_Employee_4::
# 39 "data/maps/Route123_BerryShop/scripts.pory"
	lock
# 40 "data/maps/Route123_BerryShop/scripts.pory"
	faceplayer
# 41 "data/maps/Route123_BerryShop/scripts.pory"
	message BerryShop_Employee_4_Text_0
# 42 "data/maps/Route123_BerryShop/scripts.pory"
	waitmessage
# 43 "data/maps/Route123_BerryShop/scripts.pory"
	pokemart Damage_Berries
# 44 "data/maps/Route123_BerryShop/scripts.pory"
	msgbox BerryShop_Employee_4_Text_1
# 45 "data/maps/Route123_BerryShop/scripts.pory"
	release
	end


BerryShop_Employee_5::
# 50 "data/maps/Route123_BerryShop/scripts.pory"
	lock
# 51 "data/maps/Route123_BerryShop/scripts.pory"
	faceplayer
# 52 "data/maps/Route123_BerryShop/scripts.pory"
	message BerryShop_Employee_5_Text_0
# 53 "data/maps/Route123_BerryShop/scripts.pory"
	waitmessage
# 54 "data/maps/Route123_BerryShop/scripts.pory"
	pokemart Stat_Berries
# 55 "data/maps/Route123_BerryShop/scripts.pory"
	msgbox BerryShop_Employee_5_Text_1
# 56 "data/maps/Route123_BerryShop/scripts.pory"
	release
	end


BerryShop_Employee_6::
# 61 "data/maps/Route123_BerryShop/scripts.pory"
	lock
# 62 "data/maps/Route123_BerryShop/scripts.pory"
	faceplayer
# 63 "data/maps/Route123_BerryShop/scripts.pory"
	message BerryShop_Employee_6_Text_0
# 64 "data/maps/Route123_BerryShop/scripts.pory"
	waitmessage
# 65 "data/maps/Route123_BerryShop/scripts.pory"
	pokemart React_Berries
# 66 "data/maps/Route123_BerryShop/scripts.pory"
	msgbox BerryShop_Employee_6_Text_1
# 67 "data/maps/Route123_BerryShop/scripts.pory"
	release
	end


	.align 2
# 71 "data/maps/Route123_BerryShop/scripts.pory"
Status_Berries:
# 72 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 73 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 74 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 75 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 76 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 77 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 78 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_NONE

	.align 2
# 81 "data/maps/Route123_BerryShop/scripts.pory"
Heal_Berries:
# 82 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 83 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 84 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 85 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 86 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 87 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 88 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 89 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_NONE

	.align 2
# 92 "data/maps/Route123_BerryShop/scripts.pory"
EV_Berries:
# 93 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 94 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 95 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 96 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 97 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 98 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 99 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
# 102 "data/maps/Route123_BerryShop/scripts.pory"
Damage_Berries:
# 103 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 104 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 105 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 106 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 107 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 108 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 109 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 110 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 111 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 112 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 113 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 114 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 115 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 116 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 117 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 118 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 119 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

	.align 2
# 122 "data/maps/Route123_BerryShop/scripts.pory"
Stat_Berries:
# 123 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 124 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 125 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 126 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 127 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 128 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 129 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_NONE

	.align 2
# 132 "data/maps/Route123_BerryShop/scripts.pory"
React_Berries:
# 133 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 134 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 135 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 136 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 137 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 138 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 139 "data/maps/Route123_BerryShop/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE

BerryShop_Employee_1_Text_0:
# 8 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I grow berries that cure status effects!$"

BerryShop_Employee_1_Text_1:
# 11 "data/maps/Route123_BerryShop/scripts.pory"
	.string "Thanks!$"

BerryShop_Employee_2_Text_0:
# 19 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I grow berries that heal!$"

BerryShop_Employee_2_Text_1:
# 22 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I'm Always Here!$"

BerryShop_Employee_3_Text_0:
# 30 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I grow berries that reduce EVs!$"

BerryShop_Employee_3_Text_1:
# 33 "data/maps/Route123_BerryShop/scripts.pory"
	.string "Thank You!$"

BerryShop_Employee_4_Text_0:
# 41 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I grow berries that reduce damage taken!$"

BerryShop_Employee_4_Text_1:
# 44 "data/maps/Route123_BerryShop/scripts.pory"
	.string "Come Back Anytime!$"

BerryShop_Employee_5_Text_0:
# 52 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I grow berries that boost stats!$"

BerryShop_Employee_5_Text_1:
# 55 "data/maps/Route123_BerryShop/scripts.pory"
	.string "You're Welcome!$"

BerryShop_Employee_6_Text_0:
# 63 "data/maps/Route123_BerryShop/scripts.pory"
	.string "I grow berries that react to damage!$"

BerryShop_Employee_6_Text_1:
# 66 "data/maps/Route123_BerryShop/scripts.pory"
	.string "Enjoy!$"
