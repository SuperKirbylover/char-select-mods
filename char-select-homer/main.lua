-- name: [CS] \\#FAD700\\Homer Simpson
-- description: D'oh!\n\nProgrammed by SKL. Model edited from The Simpsons: Road Rage on the Gamecube.\n\n\\\#808080\\Version 1
-- deluxe: true
local modName = "Homer Simpson";
local packVers = "1";

local E_MODEL_HOMER = smlua_model_util_get_id("homer_skl_geo");
local HOMER_SOUNDBANK = {
	[CHAR_SOUND_OKEY_DOKEY] = 'HomerOKIEDOKIE.ogg', -- Starting game
	[CHAR_SOUND_LETS_A_GO] = 'HomerLETSAGO.ogg', -- Starting level
	[CHAR_SOUND_PUNCH_YAH] = 'HomerPUNCHYAH.ogg', -- Punch 1
	[CHAR_SOUND_PUNCH_WAH] = 'HomerPUNCHWAH.ogg', -- Punch 2
	[CHAR_SOUND_PUNCH_HOO] = 'HomerPUNCHHOO.ogg', -- Punch 3
	[CHAR_SOUND_YAH_WAH_HOO] = {'HomerJUMPYAH.ogg', 'HomerJUMPWAH.ogg', 'HomerJUMPHOO.ogg'}, -- First/Second jump sounds
	[CHAR_SOUND_HOOHOO] = 'HomerJUMPHOOHOO.ogg', -- Third jump sound
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'HomerWAHA.ogg', 'HomerYIPPEE.ogg'}, -- Triple jump sounds
	[CHAR_SOUND_UH] = 'HomerUH.ogg', -- Wall bonk
	[CHAR_SOUND_UH2] = 'HomerUH2.ogg', -- Landing after long jump
	[CHAR_SOUND_UH2_2] = 'HomerUH2.ogg', -- Same sound as UH2; jumping onto ledge
	[CHAR_SOUND_OOOF] = 'HomerOOOF.ogg', -- Pushed by a bully
	[CHAR_SOUND_OOOF2] = 'HomerOOOF.ogg', -- Same as OOOF, landing after ejected from painting
	[CHAR_SOUND_HAHA] = 'HomerHAHA.ogg', -- Landing triple jump
	[CHAR_SOUND_YAHOO] = 'HomerYAHOO.ogg', -- Long jump
	[CHAR_SOUND_DOH] = 'HomerDOH.ogg', -- Long jump wall bonk
	[CHAR_SOUND_WHOA] = 'HomerWOAH.ogg', -- Grabbing ledge
	[CHAR_SOUND_EEUH] = 'HomerEEUH.ogg', -- Climbing over ledge
	[CHAR_SOUND_WAAAOOOW] = 'HomerWAAAOOOW.ogg', -- Falling a long distance
	[CHAR_SOUND_TWIRL_BOUNCE] = 'HomerTWIRLBOUNCE.ogg', -- Bouncing off of a flower spring
	[CHAR_SOUND_GROUND_POUND_WAH] = 'HomerGROUNDPOUNDWAH.ogg', 
	[CHAR_SOUND_HRMM] = 'HomerHRMM.ogg', -- Lifting something
	[CHAR_SOUND_HERE_WE_GO] = 'HomerHEREWEGO.ogg', -- Star get
	[CHAR_SOUND_SO_LONGA_BOWSER] = 'HomerSOLONGABOWSER.ogg', -- Throwing Bowser
--DAMAGE
	[CHAR_SOUND_ATTACKED] = 'HomerATTACKED.ogg', -- Damaged
	[CHAR_SOUND_PANTING] = 'HomerPANTING.ogg', -- Low health
	[CHAR_SOUND_ON_FIRE] = 'HomerONFIRE.ogg', -- Burned
--SLEEP SOUNDS
	--[CHAR_SOUND_IMA_TIRED] = 'HomerIMATIRED.ogg', -- Mario feeling tired
	--[CHAR_SOUND_YAWNING] = 'HomerYAWN.ogg', -- Mario yawning before he sits down to sleep
	[CHAR_SOUND_SNORING1] = 'HomerSNORING1.ogg', -- Snore Inhale
	[CHAR_SOUND_SNORING2] = 'HomerSNORING2.ogg', -- Exhale
	[CHAR_SOUND_SNORING3] = 'HomerSNORING3.ogg', -- Sleep talking / mumbling
--COUGHING (USED IN THE GAS MAZE)
	[CHAR_SOUND_COUGHING1] = 'HomerCOUGHING.ogg', -- Cough take 1
	[CHAR_SOUND_COUGHING2] = 'HomerCOUGHING.ogg', -- Cough take 2
	[CHAR_SOUND_COUGHING3] = 'HomerCOUGHING.ogg', -- Cough take 3
--DEATH
	[CHAR_SOUND_DYING] = 'HomerDYING.ogg', -- Dying from damage
	[CHAR_SOUND_DROWNING] = 'HomerDROWNING.ogg', -- Running out of air underwater
	[CHAR_SOUND_MAMA_MIA] = 'HomerMAMMAMIA.ogg' -- Booted out of level
}
local HOMER_DESC = {
	"D'oh!",
	"",
	"Model edited from Hit & Run",
	"HUD texture templates by Miked",
	"Version ".. packVers
}
local HOMER_CAPMODELS = { -- cap code
	normal = smlua_model_util_get_id("homer_skl_cap_geo"),
	wing = smlua_model_util_get_id("homer_skl_cap_wing_geo"),
	metal = smlua_model_util_get_id("homer_skl_cap_metal_geo"),
	metalWing = smlua_model_util_get_id("homer_skl_cap_metal_wing_geo"),
}
local HOMER_PALETTE = {
	[PANTS] = "5F9BD2",
	[SHIRT] = "ffffff",
	[GLOVES] = "D3B67B", -- BEARD
	[SHOES] = "657679",
	[HAIR] = "000000",
	[SKIN] = "FAD700",
	[CAP] = "A51C02", -- DUFF
	[EMBLEM] = "FAD700" -- nametag
}
local healthHUDTex = {
	label = {
		left = get_texture_info("homer_skl_healthhudback-left"),
		right = get_texture_info("homer_skl_healthhudback-right"),
	},	pie = {
		[8] = get_texture_info("homer_skl_slice8"),
		[7] = get_texture_info("homer_skl_slice7"),
		[6] = get_texture_info("homer_skl_slice6"),
		[5] = get_texture_info("homer_skl_slice5"),
		[4] = get_texture_info("homer_skl_slice4"),
		[3] = get_texture_info("homer_skl_slice3"),
		[2] = get_texture_info("homer_skl_slice2"),
		[1] = get_texture_info("homer_skl_slice1"),
	}
}
local courseTex = {
	top = get_texture_info("homer_skl_course-top"),
	bottom = get_texture_info("homer_skl_course-bottom")
}

hook_event(HOOK_ON_MODS_LOADED, function()
	if _G.charSelectExists then
		if _G.charSelect.get_version_full and _G.charSelect.get_version_full().major < 12 then
			djui_chat_message_create("\\#ffffa0\\"..modName.."can only run on the latest version of Character Select. Please update.");
		else
			-- DESCRIPTION & CREDITS
			_G.charSelect.credit_add(modName, "SuperKirbylover", "Programmer, artist");
			_G.charSelect.credit_add(modName, "Mike", "HUD texture templates");
			
			local charNum = _G.charSelect.character_add("Homer", HOMER_DESC, "Homer", "FAD700", E_MODEL_HOMER, CT_LUIGI, get_texture_info("homer_skl_icon"));
			_G.charSelect.character_add_caps(E_MODEL_HOMER, HOMER_CAPMODELS); -- cap code
			
			_G.charSelect.character_add_palette_preset(E_MODEL_HOMER, HOMER_PALETTE);
			_G.charSelect.character_add_health_meter(charNum, healthHUDTex);
			_G.charSelect.character_add_course_texture(charNum, courseTex);
			
			_G.charSelect.character_add_voice(E_MODEL_HOMER, HOMER_SOUNDBANK);
			
			_G.charSelect.config_character_sounds();
		end
	else
		djui_chat_message_create("\\#ffffa0\\"..modName.."requires the Character Select Mod. Please turn on Character Select and restart the room."); -- partially stole this from extra charas ultimate pack. love you
	end
end);