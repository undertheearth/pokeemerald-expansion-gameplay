PetalburgCity_BattleShop_MapScripts::
	.byte 0


Petalburg_Battle_Shop_1::
# 6 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	message Petalburg_Battle_Shop_1_Text_0
# 9 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	pokemart PETALBURG_BATTLE_SHOP_1
# 11 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	msgbox Petalburg_Battle_Shop_1_Text_1
# 12 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	release
	end


Petalburg_Battle_Shop_2::
# 17 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	lock
# 18 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	faceplayer
# 19 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	message Petalburg_Battle_Shop_1_Text_0
# 20 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	waitmessage
# 21 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	pokemart PETALBURG_BATTLE_SHOP_2
# 22 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	msgbox Petalburg_Battle_Shop_1_Text_1
# 23 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 27 "data/maps/PetalburgCity_BattleShop/scripts.pory"
PETALBURG_BATTLE_SHOP_1:
# 28 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 29 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 30 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_CHARCOAL
# 31 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 32 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 33 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_HARD_STONE
# 34 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_MAGNET
# 35 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_METAL_COAT
# 36 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 37 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 38 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_MAGNET
# 39 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 40 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_POISON_BARB
# 41 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 42 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 43 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 44 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 45 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 46 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 47 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

	.align 2
# 50 "data/maps/PetalburgCity_BattleShop/scripts.pory"
PETALBURG_BATTLE_SHOP_2:
# 51 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_HP_UP
# 52 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_PROTEIN
# 53 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_IRON
# 54 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_CALCIUM
# 55 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_ZINC
# 56 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_CARBOS
# 57 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_PP_UP
# 58 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_PP_MAX
# 59 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 60 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 61 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 62 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 63 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 64 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 65 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

Petalburg_BattleShop_Flavour_1::
# 70 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	lock
# 71 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	msgbox Petalburg_BattleShop_Flavour_1_Text_0
# 72 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	waitmessage
# 73 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	faceplayer
# 74 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	msgbox Petalburg_BattleShop_Flavour_1_Text_1
# 75 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	release
	end


Petalburg_Battle_Shop_1_Text_0:
# 8 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.string "Need any battle items?$"

Petalburg_Battle_Shop_1_Text_1:
# 11 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.string "Thanks!$"

Petalburg_BattleShop_Flavour_1_Text_0:
# 71 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.string "Y'know in terms of...$"

Petalburg_BattleShop_Flavour_1_Text_1:
# 74 "data/maps/PetalburgCity_BattleShop/scripts.pory"
	.string "Huh? What? I'm on the phone.$"
