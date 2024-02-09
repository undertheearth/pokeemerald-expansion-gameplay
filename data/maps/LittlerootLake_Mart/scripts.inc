LittlerootLake_Mart_MapScripts::
	.byte 0


LittlerootMartShop0::
# 6 "data/maps/LittlerootLake_Mart/scripts.pory"
	lock
# 7 "data/maps/LittlerootLake_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootLake_Mart/scripts.pory"
	message LittlerootMartShop0_Text_0
# 10 "data/maps/LittlerootLake_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/LittlerootLake_Mart/scripts.pory"
	pokemart LittlerootMart0
# 12 "data/maps/LittlerootLake_Mart/scripts.pory"
	msgbox LittlerootMartShop0_Text_1
# 13 "data/maps/LittlerootLake_Mart/scripts.pory"
	release
	end


LittlerootMartShop1::
# 18 "data/maps/LittlerootLake_Mart/scripts.pory"
	lock
# 19 "data/maps/LittlerootLake_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/LittlerootLake_Mart/scripts.pory"
	message LittlerootMartShop1_Text_0
# 21 "data/maps/LittlerootLake_Mart/scripts.pory"
	waitmessage
# 22 "data/maps/LittlerootLake_Mart/scripts.pory"
	pokemart LittlerootMart1
# 23 "data/maps/LittlerootLake_Mart/scripts.pory"
	msgbox LittlerootMartShop1_Text_1
# 24 "data/maps/LittlerootLake_Mart/scripts.pory"
	release
	end


LittlerootMartShop2::
# 29 "data/maps/LittlerootLake_Mart/scripts.pory"
	lock
# 30 "data/maps/LittlerootLake_Mart/scripts.pory"
	faceplayer
# 31 "data/maps/LittlerootLake_Mart/scripts.pory"
	message LittlerootMartShop2_Text_0
# 32 "data/maps/LittlerootLake_Mart/scripts.pory"
	waitmessage
# 33 "data/maps/LittlerootLake_Mart/scripts.pory"
	pokemart LittlerootMart2
# 34 "data/maps/LittlerootLake_Mart/scripts.pory"
	msgbox LittlerootMartShop2_Text_1
# 35 "data/maps/LittlerootLake_Mart/scripts.pory"
	release
	end


LittlerootMartShop3::
# 40 "data/maps/LittlerootLake_Mart/scripts.pory"
	lock
# 41 "data/maps/LittlerootLake_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/LittlerootLake_Mart/scripts.pory"
	message LittlerootMartShop3_Text_0
# 43 "data/maps/LittlerootLake_Mart/scripts.pory"
	waitmessage
# 44 "data/maps/LittlerootLake_Mart/scripts.pory"
	pokemart LittlerootMart3
# 45 "data/maps/LittlerootLake_Mart/scripts.pory"
	msgbox LittlerootMartShop3_Text_1
# 46 "data/maps/LittlerootLake_Mart/scripts.pory"
	release
	end


LittlerootMartShop4::
# 51 "data/maps/LittlerootLake_Mart/scripts.pory"
	lock
# 52 "data/maps/LittlerootLake_Mart/scripts.pory"
	faceplayer
# 53 "data/maps/LittlerootLake_Mart/scripts.pory"
	message LittlerootMartShop4_Text_0
# 54 "data/maps/LittlerootLake_Mart/scripts.pory"
	waitmessage
# 55 "data/maps/LittlerootLake_Mart/scripts.pory"
	pokemart LittlerootMart4
# 56 "data/maps/LittlerootLake_Mart/scripts.pory"
	msgbox LittlerootMartShop4_Text_1
# 57 "data/maps/LittlerootLake_Mart/scripts.pory"
	release
	end


	.align 2
# 61 "data/maps/LittlerootLake_Mart/scripts.pory"
LittlerootMart0:
# 62 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 63 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 64 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 65 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 66 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 67 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 68 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 69 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 70 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 71 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 72 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 73 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 74 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 75 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 76 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 77 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 78 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 79 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 80 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_NONE

	.align 2
# 83 "data/maps/LittlerootLake_Mart/scripts.pory"
LittlerootMart1:
# 84 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM51
# 85 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM52
# 86 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM53
# 87 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM54
# 88 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM55
# 89 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM56
# 90 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM57
# 91 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM58
# 92 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM59
# 93 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM60
# 94 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM61
# 95 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM62
	.2byte ITEM_NONE

	.align 2
# 98 "data/maps/LittlerootLake_Mart/scripts.pory"
LittlerootMart2:
# 99 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM63
# 100 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM64
# 101 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM65
# 102 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM66
# 103 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM67
# 104 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM68
# 105 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM69
# 106 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM70
# 107 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM71
# 108 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM72
# 109 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM73
# 110 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM74
	.2byte ITEM_NONE

	.align 2
# 113 "data/maps/LittlerootLake_Mart/scripts.pory"
LittlerootMart3:
# 114 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM75
# 115 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM76
# 116 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM77
# 117 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM78
# 118 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM79
# 119 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM80
# 120 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM81
# 121 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM82
# 122 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM83
# 123 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM84
# 124 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM85
# 125 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM86
	.2byte ITEM_NONE

	.align 2
# 128 "data/maps/LittlerootLake_Mart/scripts.pory"
LittlerootMart4:
# 129 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM87
# 130 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM88
# 131 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM89
# 132 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM90
# 133 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM91
# 134 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM92
# 135 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM93
# 136 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM94
# 137 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM95
# 138 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM96
# 139 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM97
# 140 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM98
# 141 "data/maps/LittlerootLake_Mart/scripts.pory"
	.2byte ITEM_TM99
	.2byte ITEM_NONE

LittlerootMartShop0_Text_0:
# 8 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "Seriously, this place is mega bOooOring\n"
	.string "since the bridge drama. UGH.\p"
	.string "Need anything??$"

LittlerootMartShop0_Text_1:
# 12 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "Whatever...$"

LittlerootMartShop1_Text_0:
# 20 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "I specialize in TMs that pack a punch!\n"
	.string "If you seek power, you're in the right\l"
	.string "place.$"

LittlerootMartShop1_Text_1:
# 23 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "Strength awaits, trainer.$"

LittlerootMartShop2_Text_0:
# 31 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "It's really cramped back here.$"

LittlerootMartShop2_Text_1:
# 34 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "Happy battling!$"

LittlerootMartShop3_Text_0:
# 42 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "May the knowledge within those TMs\n"
	.string "guide your path, young one.$"

LittlerootMartShop3_Text_1:
# 45 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "Choose wisely.$"

LittlerootMartShop4_Text_0:
# 53 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "The owner's enthusiasm is as genuine as\n"
	.string "a Monday morning smile. But hey, enjoy\l"
	.string "the TMs.$"

LittlerootMartShop4_Text_1:
# 56 "data/maps/LittlerootLake_Mart/scripts.pory"
	.string "Until next time!$"
