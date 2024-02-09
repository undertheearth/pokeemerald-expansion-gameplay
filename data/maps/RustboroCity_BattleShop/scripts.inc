RustboroCity_BattleShop_MapScripts::
	.byte 0


Rustboro_Battle_Shop::
# 6 "data/maps/RustboroCity_BattleShop/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_BattleShop/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_BattleShop/scripts.pory"
	message Rustboro_Battle_Shop_Text_0
# 9 "data/maps/RustboroCity_BattleShop/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_BattleShop/scripts.pory"
	pokemart RUSTBORO_BATTLE_SHOP
# 11 "data/maps/RustboroCity_BattleShop/scripts.pory"
	msgbox Rustboro_Battle_Shop_Text_1
# 12 "data/maps/RustboroCity_BattleShop/scripts.pory"
	release
	end


	.align 2
# 16 "data/maps/RustboroCity_BattleShop/scripts.pory"
RUSTBORO_BATTLE_SHOP:
# 17 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 18 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_EVIOLITE
# 19 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 20 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 21 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_POWER_BAND
# 22 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_POWER_BELT
# 23 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 24 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_POWER_LENS
# 25 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_NONE

Rustboro_Battle_Shop_Text_0:
# 8 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.string "I sell held items.$"

Rustboro_Battle_Shop_Text_1:
# 11 "data/maps/RustboroCity_BattleShop/scripts.pory"
	.string "Thanks!$"
