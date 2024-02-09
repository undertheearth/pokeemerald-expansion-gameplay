SlateportCity_BattleShop_MapScripts::
	.byte 0


Slateport_Battle_Shop::
# 7 "data/maps/SlateportCity_BattleShop/scripts.pory"
	lock
# 8 "data/maps/SlateportCity_BattleShop/scripts.pory"
	faceplayer
# 9 "data/maps/SlateportCity_BattleShop/scripts.pory"
	message Slateport_Battle_Shop_Text_0
# 10 "data/maps/SlateportCity_BattleShop/scripts.pory"
	waitmessage
# 11 "data/maps/SlateportCity_BattleShop/scripts.pory"
	pokemart SLATEPORT_BATTLE_SHOP
# 12 "data/maps/SlateportCity_BattleShop/scripts.pory"
	msgbox Slateport_Battle_Shop_Text_1
# 13 "data/maps/SlateportCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/SlateportCity_BattleShop/scripts.pory"
SLATEPORT_BATTLE_SHOP:
# 18 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 19 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 20 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 21 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 22 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 23 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 24 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 25 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_IRON_BALL
# 26 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 27 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_LEEK
# 28 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 29 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 30 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 31 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_METRONOME
# 32 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 33 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 34 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 35 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_RING_TARGET
# 36 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 37 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 38 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 39 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 40 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 41 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 42 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 43 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 44 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

Slateport_Battle_Shop_Text_0:
# 9 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.string "I sell more items that can be held!$"

Slateport_Battle_Shop_Text_1:
# 12 "data/maps/SlateportCity_BattleShop/scripts.pory"
	.string "Come Back Anytime!$"
