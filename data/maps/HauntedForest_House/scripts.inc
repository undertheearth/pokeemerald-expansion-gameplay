# 1 "data/maps/HauntedForest_House/scripts.pory"

# 2 "data/maps/HauntedForest_House/scripts.pory"
HauntedForest_House_MapScripts::
# 3 "data/maps/HauntedForest_House/scripts.pory"
	.byte 0

Haunted_Woman::
# 6 "data/maps/HauntedForest_House/scripts.pory"
	lock
# 7 "data/maps/HauntedForest_House/scripts.pory"
	msgbox Haunted_Woman_Text_0
# 8 "data/maps/HauntedForest_House/scripts.pory"
	waitmessage
# 9 "data/maps/HauntedForest_House/scripts.pory"
	faceplayer
# 10 "data/maps/HauntedForest_House/scripts.pory"
	msgbox Haunted_Woman_Text_1
# 11 "data/maps/HauntedForest_House/scripts.pory"
	release
	end


Haunted_Woman_Text_0:
# 7 "data/maps/HauntedForest_House/scripts.pory"
	.string "I like it here.$"

Haunted_Woman_Text_1:
# 10 "data/maps/HauntedForest_House/scripts.pory"
	.string "The POKEMON here are dangerous.$"
