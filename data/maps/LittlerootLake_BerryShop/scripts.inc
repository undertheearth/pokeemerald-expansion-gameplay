LittlerootLake_BerryShop_MapScripts::
	.byte 0


LittlerootBerry_1::
# 6 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	lock
# 7 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	message LittlerootBerry_1_Text_0
# 10 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	waitmessage
# 11 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	pokemart Berries_1
# 12 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	msgbox LittlerootBerry_1_Text_1
# 13 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	release
	end


LittlerootBerry_2::
# 18 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	lock
# 19 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	faceplayer
# 20 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	message LittlerootBerry_2_Text_0
# 21 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	waitmessage
# 22 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	pokemart Berries_2
# 23 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	msgbox LittlerootBerry_2_Text_1
# 24 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	release
	end


LittlerootBerry_Customer::
# 29 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	lock
# 30 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	faceplayer
# 31 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	message LittlerootBerry_Customer_Text_0
# 32 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	waitmessage
# 33 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	msgbox LittlerootBerry_Customer_Text_1
# 34 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	waitmessage
# 35 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	release
	end


	.align 2
# 39 "data/maps/LittlerootLake_BerryShop/scripts.pory"
Berries_1:
# 40 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 41 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 42 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 43 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 44 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 45 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 46 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 47 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 48 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 49 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 50 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 51 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 52 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 53 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 54 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_NONE

	.align 2
# 57 "data/maps/LittlerootLake_BerryShop/scripts.pory"
Berries_2:
# 58 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 59 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 60 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 61 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 62 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 63 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 64 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 65 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 66 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 67 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 68 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 69 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 70 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 71 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 72 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 73 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 74 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 75 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 76 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 77 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 78 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 79 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 80 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 81 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

LittlerootBerry_1_Text_0:
# 8 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.string "Uh, hi Trainer! Welcome to... Berry Bliss?\n"
	.string "Explore our, um\p"
	.string "...berrylicious options? Your Pokémon\n"
	.string "might, you know, like them.$"

LittlerootBerry_1_Text_1:
# 12 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.string "Hope you enjoy... I guess?$"

LittlerootBerry_2_Text_0:
# 20 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.string "Welcome! We've just opened so excuse\n"
	.string "the clutter!$"

LittlerootBerry_2_Text_1:
# 23 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.string "Thanks for coming!$"

LittlerootBerry_Customer_Text_0:
# 31 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.string "I wanted a CUSTAP BERRY, but they don't\n"
	.string "have them here.$"

LittlerootBerry_Customer_Text_1:
# 33 "data/maps/LittlerootLake_BerryShop/scripts.pory"
	.string "Maybe theres someone else who farms\n"
	.string "berries...$"
