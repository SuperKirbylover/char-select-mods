# About
This lists the source files for every [Character Select](https://github.com/Squishy6094/character-select-coop) mod I've created. If any of these assets are used, please please pleaaaassee credit the respective authors.

I'll go over the file structure of this repository:
## char-select-(name)
This is the pack folder that holds all relevant files. Sometimes the name differs from the final release name (i.e. PTCharacter eventually got released as "Pizza Pack").
## actors
This holds the exported model files from Blender. Here, I edit the C files to correctly account for recolorability and certain textures (i.e. cutouts, transparents, etc).
## sound
In the final packs, all of the audio is completely unorganized. Unfortuantely, this is because if I put them in folders within the sound folder, the game would not be able to read them. For convenience sake, when possible, I've taken the opportunity to organize them by folder.
## textures
This is where HUD textures go. Nothing else to really say.
## blend
This never comes in the release files, because these take up a lot of space. Not only that, but these are the raw model files accompanied by their textures!
The template files automatically pack most textures into the blend file. I found this to be annoying when having to change textures constantly, since I usually did them in Aseprite. I changed some of them to just reference them instead of compressing them into a file, so, hopefully that's not too much of an issue.
Noisette re-uses Noise's eyes and mouth textures.

# Packs
In order from oldest to newest, here's a bit about each!
## char-select-PTCharacters
This was the first Character Select pack I've ever created, so it's a little messy in its source files. Initially, the source model files were put together by my friend Quotation / 123a, as he was the person who introduced me to modding SM64. I've done my best over time to clean it up.
Originally, Noise was to equip his jetpack for the wing cap. However, for thematic purposes, I stuck with just giving him the wing cap. That's why his jetpack texture is still in there.

Authors:
- Models: SuperKirbylover
- Audio mixing: ZAIDORZ, SuperKirbylover
- Voice actors:
- - Peppino: DevilRedd
- - The Noise: ZAIDORZ
- - Gustavo: Skullduggery918
- - Noisette: SuperKirbylover

## char-select-maurice
Technically, this was mainly 123's doing. I just helped maintain it over time... That's why the blend file is just called *marice.blend*. I never bothered to fix it.
He shared a few textures with Peppino at first, so I did my best to separate them.

Authors:
- Model: SuperKirbylover, Quotation / 123a
- Audio mixing: ZAIDORZ
- Voice actor: ChipPotato / ChipPixels

## char-select-briangriffin
Contrary to popular belief, this was not my first Character Select mod! It was just the first *finished* one. I made this mostly myself after Pizza Pack allowed me to get the hang of it.

Authors:
- Model: SuperKirbylover (edited from Family Guy: The Game)
- Audio mixing: ZAIDORZ

## char-select-BoneBros
This was initially made for a character pack competition, the topic being [iconic duos](https://mods.sm64coopdx.com/threads/character-select-pack-competition-iconic-duo.588/). I thought this would've been a perfect opportunity to do these two boneheads.

Authors:
- Models: SuperKirbylover
- Audio mixing: ZAIDORZ
- Voice actors:
- - Sans: LiterallyNoOne
- - Papyrus: Audiospawn Sudzy Bubbles

## char-select-BlastPack
Annie re-uses Anton's cap models here.
Squishy6094 did the custom menu for this pack!! Special thanks to her for that.

Authors:
- Models: SuperKirbylover
- Audio mixing: ZAIDORZ
- Voice actors:
- - Anton: Shawnster
- - Annie: Abicadabr

## char-select-H
This was my first mod that I flat up didn't use any textures for the player model. Which, well, makes sense. It's just H.
I was thinking about Saltydkdan's videos about Pokemon H... It led to me creating this. I thought it would be funny.

Authors:
- Model: SuperKirbylover
- Audio mixing: SuperKirbylover
- Voice actor: Microsoft Sam

## char-select-homer
A vile idea entered my head while playing Coop-DX with pals. What if I also made Homer Simpson... I knew a pack existed already, but I wanted one that fit the SM64 style. Hence, this thing.

Authors:
- Model: SuperKirbylover (edited from Simpsons: Road Rage)
- Audio mixing: SuperKirbylover