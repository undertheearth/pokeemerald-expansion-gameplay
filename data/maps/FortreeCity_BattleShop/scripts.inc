FortreeCity_BattleShop_MapScripts::
	.byte 0


Fortree_Battle_Shop_1::
# 6 "data/maps/FortreeCity_BattleShop/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_BattleShop/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_BattleShop/scripts.pory"
	message Fortree_Battle_Shop_1_Text_0
# 9 "data/maps/FortreeCity_BattleShop/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_BattleShop/scripts.pory"
	pokemart FORTREE_BATTLE_SHOP_1
# 11 "data/maps/FortreeCity_BattleShop/scripts.pory"
	msgbox Fortree_Battle_Shop_1_Text_1
# 12 "data/maps/FortreeCity_BattleShop/scripts.pory"
	release
	end


Fortree_Battle_Shop_2::
# 17 "data/maps/FortreeCity_BattleShop/scripts.pory"
	lock
# 18 "data/maps/FortreeCity_BattleShop/scripts.pory"
	faceplayer
# 19 "data/maps/FortreeCity_BattleShop/scripts.pory"
	message Fortree_Battle_Shop_2_Text_0
# 20 "data/maps/FortreeCity_BattleShop/scripts.pory"
	waitmessage
# 21 "data/maps/FortreeCity_BattleShop/scripts.pory"
	pokemart FORTREE_BATTLE_SHOP_2
# 22 "data/maps/FortreeCity_BattleShop/scripts.pory"
	msgbox Fortree_Battle_Shop_2_Text_1
# 23 "data/maps/FortreeCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 27 "data/maps/FortreeCity_BattleShop/scripts.pory"
FORTREE_BATTLE_SHOP_1:
# 28 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 29 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 30 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 31 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_BOTTLE_CAP
# 32 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 33 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_GOLD_BOTTLE_CAP
# 34 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 35 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 36 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 37 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 38 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 39 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_NONE

	.align 2
# 42 "data/maps/FortreeCity_BattleShop/scripts.pory"
FORTREE_BATTLE_SHOP_2:
# 43 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 44 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 45 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 46 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 47 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 48 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 49 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 50 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 51 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 52 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 53 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 54 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 55 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 56 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 57 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 58 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 59 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 60 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 61 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 62 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

Fortree_Battle_Shop_1_Text_0:
# 8 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.string "Need any battle items?$"

Fortree_Battle_Shop_1_Text_1:
# 11 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.string "Thanks!$"

Fortree_Battle_Shop_2_Text_0:
# 19 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.string "For trainers, by trainers!$"

Fortree_Battle_Shop_2_Text_1:
# 22 "data/maps/FortreeCity_BattleShop/scripts.pory"
	.string "Come back soon!$"
