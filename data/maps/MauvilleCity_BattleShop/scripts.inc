MauvilleCity_BattleShop_MapScripts::
	.byte 0


Mauville_Battle_Shop::
# 7 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	lock
# 8 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	faceplayer
# 9 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	message Mauville_Battle_Shop_Text_0
# 10 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	waitmessage
# 11 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	pokemart MAUVILLE_BATTLE_SHOP
# 12 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	msgbox Mauville_Battle_Shop_Text_1
# 13 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/MauvilleCity_BattleShop/scripts.pory"
MAUVILLE_BATTLE_SHOP:
# 18 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 19 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 20 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 21 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 22 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 23 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 24 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 25 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_METAL_COAT
# 26 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 27 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 28 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_PROTECTOR
# 29 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 30 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 31 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.2byte ITEM_UPGRADE
	.2byte ITEM_NONE

Mauville_Battle_Shop_Text_0:
# 9 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.string "I sell held items.$"

Mauville_Battle_Shop_Text_1:
# 12 "data/maps/MauvilleCity_BattleShop/scripts.pory"
	.string "Thanks!$"
