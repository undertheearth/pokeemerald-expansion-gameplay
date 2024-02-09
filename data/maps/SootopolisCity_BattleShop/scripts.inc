SootopolisCity_BattleShop_MapScripts::
	.byte 0


Sootopolis_Battle_Shop_1::
# 6 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	message Sootopolis_Battle_Shop_1_Text_0
# 9 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	waitmessage
# 10 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	pokemart SOOTOPOLIS_BATTLE_SHOP_1
# 11 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	msgbox Sootopolis_Battle_Shop_1_Text_1
# 12 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	release
	end


Sootopolis_Battle_Shop_2::
# 17 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	lock
# 18 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	faceplayer
# 19 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	message Sootopolis_Battle_Shop_2_Text_0
# 20 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	waitmessage
# 21 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	pokemart SOOTOPOLIS_BATTLE_SHOP_2
# 22 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	msgbox Sootopolis_Battle_Shop_2_Text_1
# 23 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 27 "data/maps/SootopolisCity_BattleShop/scripts.pory"
SOOTOPOLIS_BATTLE_SHOP_1:
# 28 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 29 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 30 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 31 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 32 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 33 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 34 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 35 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 36 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 37 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 38 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 39 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 40 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 41 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_RED_CARD
# 42 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 43 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 44 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_SNOWBALL
# 45 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 46 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 47 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_NONE

	.align 2
# 50 "data/maps/SootopolisCity_BattleShop/scripts.pory"
SOOTOPOLIS_BATTLE_SHOP_2:
# 51 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 52 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 53 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 54 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 55 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 56 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 57 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 58 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 59 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 60 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 61 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 62 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 63 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 64 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 65 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 66 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 67 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 68 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 69 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 70 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

Sootopolis_Battle_Shop_1_Text_0:
# 8 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.string "Need any battle items?$"

Sootopolis_Battle_Shop_1_Text_1:
# 11 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.string "Thanks!$"

Sootopolis_Battle_Shop_2_Text_0:
# 19 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.string "For trainers, by trainers!$"

Sootopolis_Battle_Shop_2_Text_1:
# 22 "data/maps/SootopolisCity_BattleShop/scripts.pory"
	.string "Come back soon!$"
