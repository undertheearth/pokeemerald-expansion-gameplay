MossdeepCity_BattleShop_MapScripts::
	.byte 0


Mossdeep_Battle_Shop_1::
# 6 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	message Mossdeep_Battle_Shop_1_Text_0
# 9 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	pokemart MOSSDEEP_BATTLE_SHOP_1
# 11 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	msgbox Mossdeep_Battle_Shop_1_Text_1
# 12 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	release
	end


Mosddeep_Battle_Shop_2::
# 17 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	lock
# 18 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	faceplayer
# 19 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	message Mosddeep_Battle_Shop_2_Text_0
# 20 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	waitmessage
# 21 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	pokemart MOSSEEP_BATTLE_SHOP_2
# 22 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	msgbox Mosddeep_Battle_Shop_2_Text_1
# 23 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 27 "data/maps/MossdeepCity_BattleShop/scripts.pory"
MOSSDEEP_BATTLE_SHOP_1:
# 28 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 29 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 30 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 31 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 32 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 33 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 34 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 35 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_SOUL_DEW
# 36 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_NONE

	.align 2
# 39 "data/maps/MossdeepCity_BattleShop/scripts.pory"
MOSSEEP_BATTLE_SHOP_2:
# 40 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 41 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 42 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 43 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 44 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 45 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 46 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 47 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 48 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 49 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 50 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 51 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 52 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 53 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 54 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 55 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 56 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 57 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 58 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 59 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

Mossdeep_Battle_Shop_1_Text_0:
# 8 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.string "Need any battle items?$"

Mossdeep_Battle_Shop_1_Text_1:
# 11 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.string "Thanks!$"

Mosddeep_Battle_Shop_2_Text_0:
# 19 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.string "For trainers, by trainers!$"

Mosddeep_Battle_Shop_2_Text_1:
# 22 "data/maps/MossdeepCity_BattleShop/scripts.pory"
	.string "Come back soon!$"
