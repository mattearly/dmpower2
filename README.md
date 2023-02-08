# dmpower2

dmpower2 is a CLI Dungeons & Dragons 5th edition toolkit for Dungeon Masters. Its primary use is to hasten game prep and on the fly assistance. dmpower2 runs in a terminal window and prompts all available options.

## Development

The legacy original version is archived [here](https://github.com/mattearly/dmpower)

Anyone is welcome to contribute to this Open Source project.

*dev note: 
 This project was something I personally made on my own time to assist with my DMing. This is a just a personal side project thing I did for fun/practice/my own use. You can help fund these smaller sideprojects and my dev time in general by becoming a Github Sponsor! Many thanks to any and all who do.  -MattEarly*

## Main Feature

### 5th Edition Characters Creator and Maintainer Features

1. Levels One to Twenty class trees for all twelve core Character Classes
1. Twenty-two different class races.
1. All core skills, feats, variants, langauges, spell slots.
1. All core background choices or use custom background option.
1. Starter stat rolling options:
    - custom entry 
    - standard point buy
    - normal 3d6
    - high powered 4d6 drop lowest


1. Save/Load sets of characters (Campaigns).
1. Level Up and Editor Tools.
1. Random character gen.

_Example created high powered level 6 Human Warlock_

<img src="docs\Level 6 High Powered Warlock Screenshot 2021-11-30.png" align="center">

_[more screenshots](https://imgur.com/a/S3t73rI)_

### Limitations

Character Manager **does not** handle the following:

1. Equipment
1. Spell memorization choices
1. Multiclassing
1. Personality traits

## Other Tools

1. Randomized Loot Tool.
1. Spellbook Generator.
1. Scroll Spell Names.
1. Random Name Generator. Names from [Kisment's list](http://www.dnd.kismetrose.com/pdfs/KismetsFantasyNames.pdf). Custom Editable [config file](data/lists/lists/names.dat).
1. XP Calculator.
1. Insult Generator. Has clean and dirty mode. Easily adapted to new words by editing the settings file [data/lists/insults-dirty.dat](data/lists/insults-dirty.dat) or [data/lists/insults-clean.dat](data/lists/insults-clean.dat) - just note that if you change the number of words in that file, it must be adjusted in the code as well, you'll find the number of words hardcoded in [src/gen_insult.cpp](src/gen_insult.cpp) (to be improved later to be more adaptable and automatic for varying sizes like the name generator already does).
1. Random Encounters. Difficulty Generator that accounts for all party member levels and group size, generates an appropriate Challenge Rating even for the oddest of groups. Seeded from -2 to +2 representing _Very Easy_, _Easy_, _Normal_, _Hard_, _Very Hard_. I'm not sure that this is all that useful yet, I would like to add in mob group generators based on location.
1. Charts. There always seems to be at least one player interested in using poison. Madness can be useful in many cases (causing scenarios, things for the PC's to deal with, etc).
    - Level Up chart
    - Poison Prices chart
    - Madness chart
    - Diseases chart
    - Player problem resolution flowchart walkthrough (based off of and credits to the creator for the idea [Resolving Basic Behavioral Problems in your Tabletop RPG Group: A Flowchart](https://www.reddit.com/r/rpg/comments/3avp57/resolving_basic_behavioral_problems_in_your/)

## Building & installing dmpower2

- Use CMake to generate for the toolchain of your preference

- linux install example:
```bash
git clone https://github.com/mattearly/dmpower.git
cd dmpower
cmake -DCMAKE_INSTALL_PREFIX=/usr
sudo make all install
```

You can now run dmpower from your terminal any time by typing the command ```dmpower2```

### Build Dependencies

- C++17 or later Compiler

### Data

#### Windows

- Exports go to `%USERPROFILE%/Documents/DMpowerExports/`.
- Saves and settings go to `%USERPROFILE%/AppData/Local/dmpower`
 
#### Linux

- Exports go to `%USERPROFILE%/DMpowerExports/`.
- Saves and settings go to `%USERPROFILE%/.dmpower`

#### MAC

- Exports go to `%HOME%/DMpowerExports/`.
- Saves and settings go to `%HOME%/.dmpower`

## Sources

### Books Currently Integrated  

1. [Player's Handbook](http://dnd.wizards.com/products/tabletop-games/rpg-products/rpg_playershandbook)
1. [Dungeon Master's Guide](http://dnd.wizards.com/products/tabletop-games/rpg-products/dungeon-masters-guide)
1. [Sword Coast Adventurer's Guide](http://dnd.wizards.com/products/tabletop-games/rpg-products/sc-adventurers-guide)
1. [Volo's Guide to Monsters](http://dnd.wizards.com/products/tabletop-games/rpg-products/volos-guide-to-monsters)
1. [Wayfinder's Guide to Eberron](https://www.dmsguild.com/product/247882/wayfinders-guide-to-eberron-5e)
1. [The Tortle Package](https://www.dmsguild.com/product/221716/Tortle-Package-5e)
1. [Elemental Guide of Evil](https://www.dmsguild.com/product/145542/Elemental-Evil-Players-Companion-5e)

### Internet

1. [Kismet's Name List](http://www.dnd.kismetrose.com/MyCharacterNameList.html)
1. [Resolving Basic Behavioral Problems in your Tabletop RPG Group: A Flowchart](https://www.reddit.com/r/rpg/comments/3avp57/resolving_basic_behavioral_problems_in_your/)

### Legal

This project and I are not affiliated with Wizards of the Coast or Hasbro. Due to the nature of the game data being used for this software, dmpwer is not to be used for any form of profit or sale.

## Special Thanks

For those getting involved in the project and helping out at times with features and improvements!
