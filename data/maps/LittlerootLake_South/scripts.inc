LittlerootLake_South_MapScripts::
	.byte 0


LittlerootLakeSouth_Locked::
# 6 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 7 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeSouth_Locked_Text_0
# 8 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 9 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootLakeSouth_Mart::
# 14 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 15 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeSouth_Mart_Text_0
# 16 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 17 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootLakeSouth_Berry::
# 22 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 23 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeSouth_Berry_Text_0
# 24 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 25 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootLakeWalker_1::
# 30 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 31 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeWalker_1_Text_0
# 32 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 33 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootLakeWalker_2::
# 38 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 39 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeWalker_2_Text_0
# 40 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 41 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootLakeWalker_3::
# 46 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 47 "data/maps/LittlerootLake_South/scripts.pory"
	faceplayer
# 48 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeWalker_3_Text_0
# 49 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 50 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootLakeWalker_3_Text_1
# 52 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 53 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootWoods_Shrine_Sign::
# 58 "data/maps/LittlerootLake_South/scripts.pory"
	lockall
# 59 "data/maps/LittlerootLake_South/scripts.pory"
	msgbox LittlerootWoods_Shrine_Sign_Text_0
# 60 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
# 61 "data/maps/LittlerootLake_South/scripts.pory"
	releaseall
	end


LittlerootWoods_EventScript_HikerDave::
# 66 "data/maps/LittlerootLake_South/scripts.pory"
	trainerbattle_single TRAINER_DAVE1, Dave_Intro, Dave_Outro
# 67 "data/maps/LittlerootLake_South/scripts.pory"
	waitmessage
	end


LittlerootLakeSouth_Locked_Text_0:
# 7 "data/maps/LittlerootLake_South/scripts.pory"
	.string "This door is locked.$"

LittlerootLakeSouth_Mart_Text_0:
# 15 "data/maps/LittlerootLake_South/scripts.pory"
	.string "Tranquil Treasures: Your Lakeside Stop\n"
	.string "for All Things Essential.$"

LittlerootLakeSouth_Berry_Text_0:
# 23 "data/maps/LittlerootLake_South/scripts.pory"
	.string "Lapras Berry Harbour$"

LittlerootLakeWalker_1_Text_0:
# 31 "data/maps/LittlerootLake_South/scripts.pory"
	.string "The guidebook says there's a shrine in\n"
	.string "the forest across that bridge.$"

LittlerootLakeWalker_2_Text_0:
# 39 "data/maps/LittlerootLake_South/scripts.pory"
	.string "It sounds so romantic!$"

LittlerootLakeWalker_3_Text_0:
# 48 "data/maps/LittlerootLake_South/scripts.pory"
	.string "My daily walks keep me young.$"

LittlerootLakeWalker_3_Text_1:
# 50 "data/maps/LittlerootLake_South/scripts.pory"
	.string "They're the secret to staying fit!\p"
	.string "...Or so my wife says.$"

LittlerootWoods_Shrine_Sign_Text_0:
# 59 "data/maps/LittlerootLake_South/scripts.pory"
	.string "“Littleroot Lake Shrine”$"

Dave_Intro::
# 71 "data/maps/LittlerootLake_South/scripts.pory"
	.string "Nice place for a break!$"

Dave_Outro::
# 75 "data/maps/LittlerootLake_South/scripts.pory"
	.string "Always gets the blood pumping!$"
