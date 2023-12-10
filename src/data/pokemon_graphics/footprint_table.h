const u8 *const gMonFootprintTable[] =
{
    [SPECIES_NONE] = gMonFootprint_Bulbasaur,
    [SPECIES_BULBASAUR] = gMonFootprint_Bulbasaur,
    [SPECIES_IVYSAUR] = gMonFootprint_Ivysaur,
    [SPECIES_VENUSAUR] = gMonFootprint_Venusaur,
    [SPECIES_CHARMANDER] = gMonFootprint_Charmander,
    [SPECIES_CHARMELEON] = gMonFootprint_Charmeleon,
    [SPECIES_CHARIZARD] = gMonFootprint_Charizard,
    [SPECIES_SQUIRTLE] = gMonFootprint_Squirtle,
    [SPECIES_WARTORTLE] = gMonFootprint_Wartortle,
    [SPECIES_BLASTOISE] = gMonFootprint_Blastoise,
    [SPECIES_CATERPIE] = gMonFootprint_Caterpie,
    [SPECIES_METAPOD] = gMonFootprint_Metapod,
    [SPECIES_BUTTERFREE] = gMonFootprint_Butterfree,
    [SPECIES_WEEDLE] = gMonFootprint_Weedle,
    [SPECIES_KAKUNA] = gMonFootprint_Kakuna,
    [SPECIES_BEEDRILL] = gMonFootprint_Beedrill,
    [SPECIES_PIDGEY] = gMonFootprint_Pidgey,
    [SPECIES_PIDGEOTTO] = gMonFootprint_Pidgeotto,
    [SPECIES_PIDGEOT] = gMonFootprint_Pidgeot,
    [SPECIES_RATTATA] = gMonFootprint_Rattata,
    [SPECIES_RATICATE] = gMonFootprint_Raticate,
    [SPECIES_SPEAROW] = gMonFootprint_Spearow,
    [SPECIES_FEAROW] = gMonFootprint_Fearow,
    [SPECIES_EKANS] = gMonFootprint_Ekans,
    [SPECIES_ARBOK] = gMonFootprint_Arbok,
    [SPECIES_PIKACHU] = gMonFootprint_Pikachu,
    [SPECIES_RAICHU] = gMonFootprint_Raichu,
    [SPECIES_SANDSHREW] = gMonFootprint_Sandshrew,
    [SPECIES_SANDSLASH] = gMonFootprint_Sandslash,
    [SPECIES_NIDORAN_F] = gMonFootprint_NidoranF,
    [SPECIES_NIDORINA] = gMonFootprint_Nidorina,
    [SPECIES_NIDOQUEEN] = gMonFootprint_Nidoqueen,
    [SPECIES_NIDORAN_M] = gMonFootprint_NidoranM,
    [SPECIES_NIDORINO] = gMonFootprint_Nidorino,
    [SPECIES_NIDOKING] = gMonFootprint_Nidoking,
    [SPECIES_CLEFAIRY] = gMonFootprint_Clefairy,
    [SPECIES_CLEFABLE] = gMonFootprint_Clefable,
    [SPECIES_VULPIX] = gMonFootprint_Vulpix,
    [SPECIES_NINETALES] = gMonFootprint_Ninetales,
    [SPECIES_JIGGLYPUFF] = gMonFootprint_Jigglypuff,
    [SPECIES_WIGGLYTUFF] = gMonFootprint_Wigglytuff,
    [SPECIES_ZUBAT] = gMonFootprint_Zubat,
    [SPECIES_GOLBAT] = gMonFootprint_Golbat,
    [SPECIES_ODDISH] = gMonFootprint_Oddish,
    [SPECIES_GLOOM] = gMonFootprint_Gloom,
    [SPECIES_VILEPLUME] = gMonFootprint_Vileplume,
    [SPECIES_PARAS] = gMonFootprint_Paras,
    [SPECIES_PARASECT] = gMonFootprint_Parasect,
    [SPECIES_VENONAT] = gMonFootprint_Venonat,
    [SPECIES_VENOMOTH] = gMonFootprint_Venomoth,
    [SPECIES_DIGLETT] = gMonFootprint_Diglett,
    [SPECIES_DUGTRIO] = gMonFootprint_Dugtrio,
    [SPECIES_MEOWTH] = gMonFootprint_Meowth,
    [SPECIES_PERSIAN] = gMonFootprint_Persian,
    [SPECIES_PSYDUCK] = gMonFootprint_Psyduck,
    [SPECIES_GOLDUCK] = gMonFootprint_Golduck,
    [SPECIES_MANKEY] = gMonFootprint_Mankey,
    [SPECIES_PRIMEAPE] = gMonFootprint_Primeape,
    [SPECIES_GROWLITHE] = gMonFootprint_Growlithe,
    [SPECIES_ARCANINE] = gMonFootprint_Arcanine,
    [SPECIES_POLIWAG] = gMonFootprint_Poliwag,
    [SPECIES_POLIWHIRL] = gMonFootprint_Poliwhirl,
    [SPECIES_POLIWRATH] = gMonFootprint_Poliwrath,
    [SPECIES_ABRA] = gMonFootprint_Abra,
    [SPECIES_KADABRA] = gMonFootprint_Kadabra,
    [SPECIES_ALAKAZAM] = gMonFootprint_Alakazam,
    [SPECIES_MACHOP] = gMonFootprint_Machop,
    [SPECIES_MACHOKE] = gMonFootprint_Machoke,
    [SPECIES_MACHAMP] = gMonFootprint_Machamp,
    [SPECIES_BELLSPROUT] = gMonFootprint_Bellsprout,
    [SPECIES_WEEPINBELL] = gMonFootprint_Weepinbell,
    [SPECIES_VICTREEBEL] = gMonFootprint_Victreebel,
    [SPECIES_TENTACOOL] = gMonFootprint_Tentacool,
    [SPECIES_TENTACRUEL] = gMonFootprint_Tentacruel,
    [SPECIES_GEODUDE] = gMonFootprint_Geodude,
    [SPECIES_GRAVELER] = gMonFootprint_Graveler,
    [SPECIES_GOLEM] = gMonFootprint_Golem,
    [SPECIES_PONYTA] = gMonFootprint_Ponyta,
    [SPECIES_RAPIDASH] = gMonFootprint_Rapidash,
    [SPECIES_SLOWPOKE] = gMonFootprint_Slowpoke,
    [SPECIES_SLOWBRO] = gMonFootprint_Slowbro,
    [SPECIES_MAGNEMITE] = gMonFootprint_Magnemite,
    [SPECIES_MAGNETON] = gMonFootprint_Magneton,
    [SPECIES_FARFETCHD] = gMonFootprint_Farfetchd,
    [SPECIES_DODUO] = gMonFootprint_Doduo,
    [SPECIES_DODRIO] = gMonFootprint_Dodrio,
    [SPECIES_SEEL] = gMonFootprint_Seel,
    [SPECIES_DEWGONG] = gMonFootprint_Dewgong,
    [SPECIES_GRIMER] = gMonFootprint_Grimer,
    [SPECIES_MUK] = gMonFootprint_Muk,
    [SPECIES_SHELLDER] = gMonFootprint_Shellder,
    [SPECIES_CLOYSTER] = gMonFootprint_Cloyster,
    [SPECIES_GASTLY] = gMonFootprint_Gastly,
    [SPECIES_HAUNTER] = gMonFootprint_Haunter,
    [SPECIES_GENGAR] = gMonFootprint_Gengar,
    [SPECIES_ONIX] = gMonFootprint_Onix,
    [SPECIES_DROWZEE] = gMonFootprint_Drowzee,
    [SPECIES_HYPNO] = gMonFootprint_Hypno,
    [SPECIES_KRABBY] = gMonFootprint_Krabby,
    [SPECIES_KINGLER] = gMonFootprint_Kingler,
    [SPECIES_VOLTORB] = gMonFootprint_Voltorb,
    [SPECIES_ELECTRODE] = gMonFootprint_Electrode,
    [SPECIES_EXEGGCUTE] = gMonFootprint_Exeggcute,
    [SPECIES_EXEGGUTOR] = gMonFootprint_Exeggutor,
    [SPECIES_CUBONE] = gMonFootprint_Cubone,
    [SPECIES_MAROWAK] = gMonFootprint_Marowak,
    [SPECIES_HITMONLEE] = gMonFootprint_Hitmonlee,
    [SPECIES_HITMONCHAN] = gMonFootprint_Hitmonchan,
    [SPECIES_LICKITUNG] = gMonFootprint_Lickitung,
    [SPECIES_KOFFING] = gMonFootprint_Koffing,
    [SPECIES_WEEZING] = gMonFootprint_Weezing,
    [SPECIES_RHYHORN] = gMonFootprint_Rhyhorn,
    [SPECIES_RHYDON] = gMonFootprint_Rhydon,
    [SPECIES_CHANSEY] = gMonFootprint_Chansey,
    [SPECIES_TANGELA] = gMonFootprint_Tangela,
    [SPECIES_KANGASKHAN] = gMonFootprint_Kangaskhan,
    [SPECIES_HORSEA] = gMonFootprint_Horsea,
    [SPECIES_SEADRA] = gMonFootprint_Seadra,
    [SPECIES_GOLDEEN] = gMonFootprint_Goldeen,
    [SPECIES_SEAKING] = gMonFootprint_Seaking,
    [SPECIES_STARYU] = gMonFootprint_Staryu,
    [SPECIES_STARMIE] = gMonFootprint_Starmie,
    [SPECIES_MR_MIME] = gMonFootprint_MrMime,
    [SPECIES_SCYTHER] = gMonFootprint_Scyther,
    [SPECIES_JYNX] = gMonFootprint_Jynx,
    [SPECIES_ELECTABUZZ] = gMonFootprint_Electabuzz,
    [SPECIES_MAGMAR] = gMonFootprint_Magmar,
    [SPECIES_PINSIR] = gMonFootprint_Pinsir,
    [SPECIES_TAUROS] = gMonFootprint_Tauros,
    [SPECIES_MAGIKARP] = gMonFootprint_Magikarp,
    [SPECIES_GYARADOS] = gMonFootprint_Gyarados,
    [SPECIES_LAPRAS] = gMonFootprint_Lapras,
    [SPECIES_DITTO] = gMonFootprint_Ditto,
    [SPECIES_EEVEE] = gMonFootprint_Eevee,
    [SPECIES_VAPOREON] = gMonFootprint_Vaporeon,
    [SPECIES_JOLTEON] = gMonFootprint_Jolteon,
    [SPECIES_FLAREON] = gMonFootprint_Flareon,
    [SPECIES_PORYGON] = gMonFootprint_Porygon,
    [SPECIES_OMANYTE] = gMonFootprint_Omanyte,
    [SPECIES_OMASTAR] = gMonFootprint_Omastar,
    [SPECIES_KABUTO] = gMonFootprint_Kabuto,
    [SPECIES_KABUTOPS] = gMonFootprint_Kabutops,
    [SPECIES_AERODACTYL] = gMonFootprint_Aerodactyl,
    [SPECIES_SNORLAX] = gMonFootprint_Snorlax,
    [SPECIES_ARTICUNO] = gMonFootprint_Articuno,
    [SPECIES_ZAPDOS] = gMonFootprint_Zapdos,
    [SPECIES_MOLTRES] = gMonFootprint_Moltres,
    [SPECIES_DRATINI] = gMonFootprint_Dratini,
    [SPECIES_DRAGONAIR] = gMonFootprint_Dragonair,
    [SPECIES_DRAGONITE] = gMonFootprint_Dragonite,
    [SPECIES_MEWTWO] = gMonFootprint_Mewtwo,
    [SPECIES_MEW] = gMonFootprint_Mew,
    [SPECIES_CHIKORITA] = gMonFootprint_Chikorita,
    [SPECIES_BAYLEEF] = gMonFootprint_Bayleef,
    [SPECIES_MEGANIUM] = gMonFootprint_Meganium,
    [SPECIES_CYNDAQUIL] = gMonFootprint_Cyndaquil,
    [SPECIES_QUILAVA] = gMonFootprint_Quilava,
    [SPECIES_TYPHLOSION] = gMonFootprint_Typhlosion,
    [SPECIES_TOTODILE] = gMonFootprint_Totodile,
    [SPECIES_CROCONAW] = gMonFootprint_Croconaw,
    [SPECIES_FERALIGATR] = gMonFootprint_Feraligatr,
    [SPECIES_SENTRET] = gMonFootprint_Sentret,
    [SPECIES_FURRET] = gMonFootprint_Furret,
    [SPECIES_HOOTHOOT] = gMonFootprint_Hoothoot,
    [SPECIES_NOCTOWL] = gMonFootprint_Noctowl,
    [SPECIES_LEDYBA] = gMonFootprint_Ledyba,
    [SPECIES_LEDIAN] = gMonFootprint_Ledian,
    [SPECIES_SPINARAK] = gMonFootprint_Spinarak,
    [SPECIES_ARIADOS] = gMonFootprint_Ariados,
    [SPECIES_CROBAT] = gMonFootprint_Crobat,
    [SPECIES_CHINCHOU] = gMonFootprint_Chinchou,
    [SPECIES_LANTURN] = gMonFootprint_Lanturn,
    [SPECIES_PICHU] = gMonFootprint_Pichu,
    [SPECIES_CLEFFA] = gMonFootprint_Cleffa,
    [SPECIES_IGGLYBUFF] = gMonFootprint_Igglybuff,
    [SPECIES_TOGEPI] = gMonFootprint_Togepi,
    [SPECIES_TOGETIC] = gMonFootprint_Togetic,
    [SPECIES_NATU] = gMonFootprint_Natu,
    [SPECIES_XATU] = gMonFootprint_Xatu,
    [SPECIES_MAREEP] = gMonFootprint_Mareep,
    [SPECIES_FLAAFFY] = gMonFootprint_Flaaffy,
    [SPECIES_AMPHAROS] = gMonFootprint_Ampharos,
    [SPECIES_BELLOSSOM] = gMonFootprint_Bellossom,
    [SPECIES_MARILL] = gMonFootprint_Marill,
    [SPECIES_AZUMARILL] = gMonFootprint_Azumarill,
    [SPECIES_SUDOWOODO] = gMonFootprint_Sudowoodo,
    [SPECIES_POLITOED] = gMonFootprint_Politoed,
    [SPECIES_HOPPIP] = gMonFootprint_Hoppip,
    [SPECIES_SKIPLOOM] = gMonFootprint_Skiploom,
    [SPECIES_JUMPLUFF] = gMonFootprint_Jumpluff,
    [SPECIES_AIPOM] = gMonFootprint_Aipom,
    [SPECIES_SUNKERN] = gMonFootprint_Sunkern,
    [SPECIES_SUNFLORA] = gMonFootprint_Sunflora,
    [SPECIES_YANMA] = gMonFootprint_Yanma,
    [SPECIES_WOOPER] = gMonFootprint_Wooper,
    [SPECIES_QUAGSIRE] = gMonFootprint_Quagsire,
    [SPECIES_ESPEON] = gMonFootprint_Espeon,
    [SPECIES_UMBREON] = gMonFootprint_Umbreon,
    [SPECIES_MURKROW] = gMonFootprint_Murkrow,
    [SPECIES_SLOWKING] = gMonFootprint_Slowking,
    [SPECIES_MISDREAVUS] = gMonFootprint_Misdreavus,
    [SPECIES_UNOWN] = gMonFootprint_Unown,
    [SPECIES_WOBBUFFET] = gMonFootprint_Wobbuffet,
    [SPECIES_GIRAFARIG] = gMonFootprint_Girafarig,
    [SPECIES_PINECO] = gMonFootprint_Pineco,
    [SPECIES_FORRETRESS] = gMonFootprint_Forretress,
    [SPECIES_DUNSPARCE] = gMonFootprint_Dunsparce,
    [SPECIES_GLIGAR] = gMonFootprint_Gligar,
    [SPECIES_STEELIX] = gMonFootprint_Steelix,
    [SPECIES_SNUBBULL] = gMonFootprint_Snubbull,
    [SPECIES_GRANBULL] = gMonFootprint_Granbull,
    [SPECIES_QWILFISH] = gMonFootprint_Qwilfish,
    [SPECIES_SCIZOR] = gMonFootprint_Scizor,
    [SPECIES_SHUCKLE] = gMonFootprint_Shuckle,
    [SPECIES_HERACROSS] = gMonFootprint_Heracross,
    [SPECIES_SNEASEL] = gMonFootprint_Sneasel,
    [SPECIES_TEDDIURSA] = gMonFootprint_Teddiursa,
    [SPECIES_URSARING] = gMonFootprint_Ursaring,
    [SPECIES_SLUGMA] = gMonFootprint_Slugma,
    [SPECIES_MAGCARGO] = gMonFootprint_Magcargo,
    [SPECIES_SWINUB] = gMonFootprint_Swinub,
    [SPECIES_PILOSWINE] = gMonFootprint_Piloswine,
    [SPECIES_CORSOLA] = gMonFootprint_Corsola,
    [SPECIES_REMORAID] = gMonFootprint_Remoraid,
    [SPECIES_OCTILLERY] = gMonFootprint_Octillery,
    [SPECIES_DELIBIRD] = gMonFootprint_Delibird,
    [SPECIES_MANTINE] = gMonFootprint_Mantine,
    [SPECIES_SKARMORY] = gMonFootprint_Skarmory,
    [SPECIES_HOUNDOUR] = gMonFootprint_Houndour,
    [SPECIES_HOUNDOOM] = gMonFootprint_Houndoom,
    [SPECIES_KINGDRA] = gMonFootprint_Kingdra,
    [SPECIES_PHANPY] = gMonFootprint_Phanpy,
    [SPECIES_DONPHAN] = gMonFootprint_Donphan,
    [SPECIES_PORYGON2] = gMonFootprint_Porygon2,
    [SPECIES_STANTLER] = gMonFootprint_Stantler,
    [SPECIES_SMEARGLE] = gMonFootprint_Smeargle,
    [SPECIES_TYROGUE] = gMonFootprint_Tyrogue,
    [SPECIES_HITMONTOP] = gMonFootprint_Hitmontop,
    [SPECIES_SMOOCHUM] = gMonFootprint_Smoochum,
    [SPECIES_ELEKID] = gMonFootprint_Elekid,
    [SPECIES_MAGBY] = gMonFootprint_Magby,
    [SPECIES_MILTANK] = gMonFootprint_Miltank,
    [SPECIES_BLISSEY] = gMonFootprint_Blissey,
    [SPECIES_RAIKOU] = gMonFootprint_Raikou,
    [SPECIES_ENTEI] = gMonFootprint_Entei,
    [SPECIES_SUICUNE] = gMonFootprint_Suicune,
    [SPECIES_LARVITAR] = gMonFootprint_Larvitar,
    [SPECIES_PUPITAR] = gMonFootprint_Pupitar,
    [SPECIES_TYRANITAR] = gMonFootprint_Tyranitar,
    [SPECIES_LUGIA] = gMonFootprint_Lugia,
    [SPECIES_HO_OH] = gMonFootprint_HoOh,
    [SPECIES_CELEBI] = gMonFootprint_Celebi,
    [SPECIES_TREECKO] = gMonFootprint_Treecko,
    [SPECIES_GROVYLE] = gMonFootprint_Grovyle,
    [SPECIES_SCEPTILE] = gMonFootprint_Sceptile,
    [SPECIES_TORCHIC] = gMonFootprint_Torchic,
    [SPECIES_COMBUSKEN] = gMonFootprint_Combusken,
    [SPECIES_BLAZIKEN] = gMonFootprint_Blaziken,
    [SPECIES_MUDKIP] = gMonFootprint_Mudkip,
    [SPECIES_MARSHTOMP] = gMonFootprint_Marshtomp,
    [SPECIES_SWAMPERT] = gMonFootprint_Swampert,
    [SPECIES_POOCHYENA] = gMonFootprint_Poochyena,
    [SPECIES_MIGHTYENA] = gMonFootprint_Mightyena,
    [SPECIES_ZIGZAGOON] = gMonFootprint_Zigzagoon,
    [SPECIES_LINOONE] = gMonFootprint_Linoone,
    [SPECIES_WURMPLE] = gMonFootprint_Wurmple,
    [SPECIES_SILCOON] = gMonFootprint_Silcoon,
    [SPECIES_BEAUTIFLY] = gMonFootprint_Beautifly,
    [SPECIES_CASCOON] = gMonFootprint_Cascoon,
    [SPECIES_DUSTOX] = gMonFootprint_Dustox,
    [SPECIES_LOTAD] = gMonFootprint_Lotad,
    [SPECIES_LOMBRE] = gMonFootprint_Lombre,
    [SPECIES_LUDICOLO] = gMonFootprint_Ludicolo,
    [SPECIES_SEEDOT] = gMonFootprint_Seedot,
    [SPECIES_NUZLEAF] = gMonFootprint_Nuzleaf,
    [SPECIES_SHIFTRY] = gMonFootprint_Shiftry,
    [SPECIES_NINCADA] = gMonFootprint_Nincada,
    [SPECIES_NINJASK] = gMonFootprint_Ninjask,
    [SPECIES_SHEDINJA] = gMonFootprint_Shedinja,
    [SPECIES_TAILLOW] = gMonFootprint_Taillow,
    [SPECIES_SWELLOW] = gMonFootprint_Swellow,
    [SPECIES_SHROOMISH] = gMonFootprint_Shroomish,
    [SPECIES_BRELOOM] = gMonFootprint_Breloom,
    [SPECIES_SPINDA] = gMonFootprint_Spinda,
    [SPECIES_WINGULL] = gMonFootprint_Wingull,
    [SPECIES_PELIPPER] = gMonFootprint_Pelipper,
    [SPECIES_SURSKIT] = gMonFootprint_Surskit,
    [SPECIES_MASQUERAIN] = gMonFootprint_Masquerain,
    [SPECIES_WAILMER] = gMonFootprint_Wailmer,
    [SPECIES_WAILORD] = gMonFootprint_Wailord,
    [SPECIES_SKITTY] = gMonFootprint_Skitty,
    [SPECIES_DELCATTY] = gMonFootprint_Delcatty,
    [SPECIES_KECLEON] = gMonFootprint_Kecleon,
    [SPECIES_BALTOY] = gMonFootprint_Baltoy,
    [SPECIES_CLAYDOL] = gMonFootprint_Claydol,
    [SPECIES_NOSEPASS] = gMonFootprint_Nosepass,
    [SPECIES_TORKOAL] = gMonFootprint_Torkoal,
    [SPECIES_SABLEYE] = gMonFootprint_Sableye,
    [SPECIES_BARBOACH] = gMonFootprint_Barboach,
    [SPECIES_WHISCASH] = gMonFootprint_Whiscash,
    [SPECIES_LUVDISC] = gMonFootprint_Luvdisc,
    [SPECIES_CORPHISH] = gMonFootprint_Corphish,
    [SPECIES_CRAWDAUNT] = gMonFootprint_Crawdaunt,
    [SPECIES_FEEBAS] = gMonFootprint_Feebas,
    [SPECIES_MILOTIC] = gMonFootprint_Milotic,
    [SPECIES_CARVANHA] = gMonFootprint_Carvanha,
    [SPECIES_SHARPEDO] = gMonFootprint_Sharpedo,
    [SPECIES_TRAPINCH] = gMonFootprint_Trapinch,
    [SPECIES_VIBRAVA] = gMonFootprint_Vibrava,
    [SPECIES_FLYGON] = gMonFootprint_Flygon,
    [SPECIES_MAKUHITA] = gMonFootprint_Makuhita,
    [SPECIES_HARIYAMA] = gMonFootprint_Hariyama,
    [SPECIES_ELECTRIKE] = gMonFootprint_Electrike,
    [SPECIES_MANECTRIC] = gMonFootprint_Manectric,
    [SPECIES_NUMEL] = gMonFootprint_Numel,
    [SPECIES_CAMERUPT] = gMonFootprint_Camerupt,
    [SPECIES_SPHEAL] = gMonFootprint_Spheal,
    [SPECIES_SEALEO] = gMonFootprint_Sealeo,
    [SPECIES_WALREIN] = gMonFootprint_Walrein,
    [SPECIES_CACNEA] = gMonFootprint_Cacnea,
    [SPECIES_CACTURNE] = gMonFootprint_Cacturne,
    [SPECIES_SNORUNT] = gMonFootprint_Snorunt,
    [SPECIES_GLALIE] = gMonFootprint_Glalie,
    [SPECIES_LUNATONE] = gMonFootprint_Lunatone,
    [SPECIES_SOLROCK] = gMonFootprint_Solrock,
    [SPECIES_AZURILL] = gMonFootprint_Azurill,
    [SPECIES_SPOINK] = gMonFootprint_Spoink,
    [SPECIES_GRUMPIG] = gMonFootprint_Grumpig,
    [SPECIES_PLUSLE] = gMonFootprint_Plusle,
    [SPECIES_MINUN] = gMonFootprint_Minun,
    [SPECIES_MAWILE] = gMonFootprint_Mawile,
    [SPECIES_MEDITITE] = gMonFootprint_Meditite,
    [SPECIES_MEDICHAM] = gMonFootprint_Medicham,
    [SPECIES_SWABLU] = gMonFootprint_Swablu,
    [SPECIES_ALTARIA] = gMonFootprint_Altaria,
    [SPECIES_WYNAUT] = gMonFootprint_Wynaut,
    [SPECIES_DUSKULL] = gMonFootprint_Duskull,
    [SPECIES_DUSCLOPS] = gMonFootprint_Dusclops,
    [SPECIES_ROSELIA] = gMonFootprint_Roselia,
    [SPECIES_SLAKOTH] = gMonFootprint_Slakoth,
    [SPECIES_VIGOROTH] = gMonFootprint_Vigoroth,
    [SPECIES_SLAKING] = gMonFootprint_Slaking,
    [SPECIES_GULPIN] = gMonFootprint_Gulpin,
    [SPECIES_SWALOT] = gMonFootprint_Swalot,
    [SPECIES_TROPIUS] = gMonFootprint_Tropius,
    [SPECIES_WHISMUR] = gMonFootprint_Whismur,
    [SPECIES_LOUDRED] = gMonFootprint_Loudred,
    [SPECIES_EXPLOUD] = gMonFootprint_Exploud,
    [SPECIES_CLAMPERL] = gMonFootprint_Clamperl,
    [SPECIES_HUNTAIL] = gMonFootprint_Huntail,
    [SPECIES_GOREBYSS] = gMonFootprint_Gorebyss,
    [SPECIES_ABSOL] = gMonFootprint_Absol,
    [SPECIES_SHUPPET] = gMonFootprint_Shuppet,
    [SPECIES_BANETTE] = gMonFootprint_Banette,
    [SPECIES_SEVIPER] = gMonFootprint_Seviper,
    [SPECIES_ZANGOOSE] = gMonFootprint_Zangoose,
    [SPECIES_RELICANTH] = gMonFootprint_Relicanth,
    [SPECIES_ARON] = gMonFootprint_Aron,
    [SPECIES_LAIRON] = gMonFootprint_Lairon,
    [SPECIES_AGGRON] = gMonFootprint_Aggron,
    [SPECIES_CASTFORM] = gMonFootprint_Castform,
    [SPECIES_VOLBEAT] = gMonFootprint_Volbeat,
    [SPECIES_ILLUMISE] = gMonFootprint_Illumise,
    [SPECIES_LILEEP] = gMonFootprint_Lileep,
    [SPECIES_CRADILY] = gMonFootprint_Cradily,
    [SPECIES_ANORITH] = gMonFootprint_Anorith,
    [SPECIES_ARMALDO] = gMonFootprint_Armaldo,
    [SPECIES_RALTS] = gMonFootprint_Ralts,
    [SPECIES_KIRLIA] = gMonFootprint_Kirlia,
    [SPECIES_GARDEVOIR] = gMonFootprint_Gardevoir,
    [SPECIES_BAGON] = gMonFootprint_Bagon,
    [SPECIES_SHELGON] = gMonFootprint_Shelgon,
    [SPECIES_SALAMENCE] = gMonFootprint_Salamence,
    [SPECIES_BELDUM] = gMonFootprint_Beldum,
    [SPECIES_METANG] = gMonFootprint_Metang,
    [SPECIES_METAGROSS] = gMonFootprint_Metagross,
    [SPECIES_REGIROCK] = gMonFootprint_Regirock,
    [SPECIES_REGICE] = gMonFootprint_Regice,
    [SPECIES_REGISTEEL] = gMonFootprint_Registeel,
    [SPECIES_KYOGRE] = gMonFootprint_Kyogre,
    [SPECIES_GROUDON] = gMonFootprint_Groudon,
    [SPECIES_RAYQUAZA] = gMonFootprint_Rayquaza,
    [SPECIES_LATIAS] = gMonFootprint_Latias,
    [SPECIES_LATIOS] = gMonFootprint_Latios,
    [SPECIES_JIRACHI] = gMonFootprint_Jirachi,
    [SPECIES_DEOXYS] = gMonFootprint_Deoxys,
    [SPECIES_CHIMECHO] = gMonFootprint_Chimecho,
    [SPECIES_TURTWIG] = gMonFootprint_Turtwig,
    [SPECIES_GROTLE] = gMonFootprint_Grotle,
    [SPECIES_TORTERRA] = gMonFootprint_Torterra,
    [SPECIES_CHIMCHAR] = gMonFootprint_Chimchar,
    [SPECIES_MONFERNO] = gMonFootprint_Monferno,
    [SPECIES_INFERNAPE] = gMonFootprint_Infernape,
    [SPECIES_PIPLUP] = gMonFootprint_Piplup,
    [SPECIES_PRINPLUP] = gMonFootprint_Prinplup,
    [SPECIES_EMPOLEON] = gMonFootprint_Empoleon,
    [SPECIES_STARLY] = gMonFootprint_Starly,
    [SPECIES_STARAVIA] = gMonFootprint_Staravia,
    [SPECIES_STARAPTOR] = gMonFootprint_Staraptor,
    [SPECIES_BIDOOF] = gMonFootprint_Bidoof,
    [SPECIES_BIBAREL] = gMonFootprint_Bibarel,
    [SPECIES_KRICKETOT] = gMonFootprint_Kricketot,
    [SPECIES_KRICKETUNE] = gMonFootprint_Kricketune,
    [SPECIES_SHINX] = gMonFootprint_Shinx,
    [SPECIES_LUXIO] = gMonFootprint_Luxio,
    [SPECIES_LUXRAY] = gMonFootprint_Luxray,
    [SPECIES_BUDEW] = gMonFootprint_Budew,
    [SPECIES_ROSERADE] = gMonFootprint_Roserade,
    [SPECIES_CRANIDOS] = gMonFootprint_Cranidos,
    [SPECIES_RAMPARDOS] = gMonFootprint_Rampardos,
    [SPECIES_SHIELDON] = gMonFootprint_Shieldon,
    [SPECIES_BASTIODON] = gMonFootprint_Bastiodon,
    [SPECIES_BURMY] = gMonFootprint_Burmy,
    [SPECIES_WORMADAM] = gMonFootprint_Wormadam,
    [SPECIES_MOTHIM] = gMonFootprint_Mothim,
    [SPECIES_COMBEE] = gMonFootprint_Combee,
    [SPECIES_VESPIQUEN] = gMonFootprint_Vespiquen,
    [SPECIES_PACHIRISU] = gMonFootprint_Pachirisu,
    [SPECIES_BUIZEL] = gMonFootprint_Buizel,
    [SPECIES_FLOATZEL] = gMonFootprint_Floatzel,
    [SPECIES_CHERUBI] = gMonFootprint_Cherubi,
    [SPECIES_CHERRIM] = gMonFootprint_Cherrim,
    [SPECIES_SHELLOS] = gMonFootprint_Shellos,
    [SPECIES_GASTRODON] = gMonFootprint_Gastrodon,
    [SPECIES_AMBIPOM] = gMonFootprint_Ambipom,
    [SPECIES_DRIFLOON] = gMonFootprint_Drifloon,
    [SPECIES_DRIFBLIM] = gMonFootprint_Drifblim,
    [SPECIES_BUNEARY] = gMonFootprint_Buneary,
    [SPECIES_LOPUNNY] = gMonFootprint_Lopunny,
    [SPECIES_MISMAGIUS] = gMonFootprint_Mismagius,
    [SPECIES_HONCHKROW] = gMonFootprint_Honchkrow,
    [SPECIES_GLAMEOW] = gMonFootprint_Glameow,
    [SPECIES_PURUGLY] = gMonFootprint_Purugly,
    [SPECIES_CHINGLING] = gMonFootprint_Chingling,
    [SPECIES_STUNKY] = gMonFootprint_Stunky,
    [SPECIES_SKUNTANK] = gMonFootprint_Skuntank,
    [SPECIES_BRONZOR] = gMonFootprint_Bronzor,
    [SPECIES_BRONZONG] = gMonFootprint_Bronzong,
    [SPECIES_BONSLY] = gMonFootprint_Bonsly,
    [SPECIES_MIME_JR] = gMonFootprint_MimeJr,
    [SPECIES_HAPPINY] = gMonFootprint_Happiny,
    [SPECIES_CHATOT] = gMonFootprint_Chatot,
    [SPECIES_SPIRITOMB] = gMonFootprint_Spiritomb,
    [SPECIES_GIBLE] = gMonFootprint_Gible,
    [SPECIES_GABITE] = gMonFootprint_Gabite,
    [SPECIES_GARCHOMP] = gMonFootprint_Garchomp,
    [SPECIES_MUNCHLAX] = gMonFootprint_Munchlax,
    [SPECIES_RIOLU] = gMonFootprint_Riolu,
    [SPECIES_LUCARIO] = gMonFootprint_Lucario,
    [SPECIES_HIPPOPOTAS] = gMonFootprint_Hippopotas,
    [SPECIES_HIPPOWDON] = gMonFootprint_Hippowdon,
    [SPECIES_SKORUPI] = gMonFootprint_Skorupi,
    [SPECIES_DRAPION] = gMonFootprint_Drapion,
    [SPECIES_CROAGUNK] = gMonFootprint_Croagunk,
    [SPECIES_TOXICROAK] = gMonFootprint_Toxicroak,
    [SPECIES_CARNIVINE] = gMonFootprint_Carnivine,
    [SPECIES_FINNEON] = gMonFootprint_Finneon,
    [SPECIES_LUMINEON] = gMonFootprint_Lumineon,
    [SPECIES_MANTYKE] = gMonFootprint_Mantyke,
    [SPECIES_SNOVER] = gMonFootprint_Snover,
    [SPECIES_ABOMASNOW] = gMonFootprint_Abomasnow,
    [SPECIES_WEAVILE] = gMonFootprint_Weavile,
    [SPECIES_MAGNEZONE] = gMonFootprint_Magnezone,
    [SPECIES_LICKILICKY] = gMonFootprint_Lickilicky,
    [SPECIES_RHYPERIOR] = gMonFootprint_Rhyperior,
    [SPECIES_TANGROWTH] = gMonFootprint_Tangrowth,
    [SPECIES_ELECTIVIRE] = gMonFootprint_Electivire,
    [SPECIES_MAGMORTAR] = gMonFootprint_Magmortar,
    [SPECIES_TOGEKISS] = gMonFootprint_Togekiss,
    [SPECIES_YANMEGA] = gMonFootprint_Yanmega,
    [SPECIES_LEAFEON] = gMonFootprint_Leafeon,
    [SPECIES_GLACEON] = gMonFootprint_Glaceon,
    [SPECIES_GLISCOR] = gMonFootprint_Gliscor,
    [SPECIES_MAMOSWINE] = gMonFootprint_Mamoswine,
    [SPECIES_PORYGON_Z] = gMonFootprint_PorygonZ,
    [SPECIES_GALLADE] = gMonFootprint_Gallade,
    [SPECIES_PROBOPASS] = gMonFootprint_Probopass,
    [SPECIES_DUSKNOIR] = gMonFootprint_Dusknoir,
    [SPECIES_FROSLASS] = gMonFootprint_Froslass,
    [SPECIES_ROTOM] = gMonFootprint_Rotom,
    [SPECIES_UXIE] = gMonFootprint_Uxie,
    [SPECIES_MESPRIT] = gMonFootprint_Mesprit,
    [SPECIES_AZELF] = gMonFootprint_Azelf,
    [SPECIES_DIALGA] = gMonFootprint_Dialga,
    [SPECIES_PALKIA] = gMonFootprint_Palkia,
    [SPECIES_HEATRAN] = gMonFootprint_Heatran,
    [SPECIES_REGIGIGAS] = gMonFootprint_Regigigas,
    [SPECIES_GIRATINA] = gMonFootprint_Giratina,
    [SPECIES_CRESSELIA] = gMonFootprint_Cresselia,
    [SPECIES_PHIONE] = gMonFootprint_Phione,
    [SPECIES_MANAPHY] = gMonFootprint_Manaphy,
    [SPECIES_DARKRAI] = gMonFootprint_Darkrai,
    [SPECIES_SHAYMIN] = gMonFootprint_Shaymin,
    [SPECIES_ARCEUS] = gMonFootprint_Arceus,
    [SPECIES_VICTINI] = gMonFootprint_Victini,
    [SPECIES_SNIVY] = gMonFootprint_Snivy,
    [SPECIES_SERVINE] = gMonFootprint_Servine,
    [SPECIES_SERPERIOR] = gMonFootprint_Serperior,
    [SPECIES_TEPIG] = gMonFootprint_Tepig,
    [SPECIES_PIGNITE] = gMonFootprint_Pignite,
    [SPECIES_EMBOAR] = gMonFootprint_Emboar,
    [SPECIES_OSHAWOTT] = gMonFootprint_Oshawott,
    [SPECIES_DEWOTT] = gMonFootprint_Dewott,
    [SPECIES_SAMUROTT] = gMonFootprint_Samurott,
    [SPECIES_PATRAT] = gMonFootprint_Patrat,
    [SPECIES_WATCHOG] = gMonFootprint_Watchog,
    [SPECIES_LILLIPUP] = gMonFootprint_Lillipup,
    [SPECIES_HERDIER] = gMonFootprint_Herdier,
    [SPECIES_STOUTLAND] = gMonFootprint_Stoutland,
    [SPECIES_PURRLOIN] = gMonFootprint_Purrloin,
    [SPECIES_LIEPARD] = gMonFootprint_Liepard,
    [SPECIES_PANSAGE] = gMonFootprint_Pansage,
    [SPECIES_SIMISAGE] = gMonFootprint_Simisage,
    [SPECIES_PANSEAR] = gMonFootprint_Pansear,
    [SPECIES_SIMISEAR] = gMonFootprint_Simisear,
    [SPECIES_PANPOUR] = gMonFootprint_Panpour,
    [SPECIES_SIMIPOUR] = gMonFootprint_Simipour,
    [SPECIES_MUNNA] = gMonFootprint_Munna,
    [SPECIES_MUSHARNA] = gMonFootprint_Musharna,
    [SPECIES_PIDOVE] = gMonFootprint_Pidove,
    [SPECIES_TRANQUILL] = gMonFootprint_Tranquill,
    [SPECIES_UNFEZANT] = gMonFootprint_Unfezant,
    [SPECIES_BLITZLE] = gMonFootprint_Blitzle,
    [SPECIES_ZEBSTRIKA] = gMonFootprint_Zebstrika,
    [SPECIES_ROGGENROLA] = gMonFootprint_Roggenrola,
    [SPECIES_BOLDORE] = gMonFootprint_Boldore,
    [SPECIES_GIGALITH] = gMonFootprint_Gigalith,
    [SPECIES_WOOBAT] = gMonFootprint_Woobat,
    [SPECIES_SWOOBAT] = gMonFootprint_Swoobat,
    [SPECIES_DRILBUR] = gMonFootprint_Drilbur,
    [SPECIES_EXCADRILL] = gMonFootprint_Excadrill,
    [SPECIES_AUDINO] = gMonFootprint_Audino,
    [SPECIES_TIMBURR] = gMonFootprint_Timburr,
    [SPECIES_GURDURR] = gMonFootprint_Gurdurr,
    [SPECIES_CONKELDURR] = gMonFootprint_Conkeldurr,
    [SPECIES_TYMPOLE] = gMonFootprint_Tympole,
    [SPECIES_PALPITOAD] = gMonFootprint_Palpitoad,
    [SPECIES_SEISMITOAD] = gMonFootprint_Seismitoad,
    [SPECIES_THROH] = gMonFootprint_Throh,
    [SPECIES_SAWK] = gMonFootprint_Sawk,
    [SPECIES_SEWADDLE] = gMonFootprint_Sewaddle,
    [SPECIES_SWADLOON] = gMonFootprint_Swadloon,
    [SPECIES_LEAVANNY] = gMonFootprint_Leavanny,
    [SPECIES_VENIPEDE] = gMonFootprint_Venipede,
    [SPECIES_WHIRLIPEDE] = gMonFootprint_Whirlipede,
    [SPECIES_SCOLIPEDE] = gMonFootprint_Scolipede,
    [SPECIES_COTTONEE] = gMonFootprint_Cottonee,
    [SPECIES_WHIMSICOTT] = gMonFootprint_Whimsicott,
    [SPECIES_PETILIL] = gMonFootprint_Petilil,
    [SPECIES_LILLIGANT] = gMonFootprint_Lilligant,
    [SPECIES_BASCULIN] = gMonFootprint_Basculin,
    [SPECIES_SANDILE] = gMonFootprint_Sandile,
    [SPECIES_KROKOROK] = gMonFootprint_Krokorok,
    [SPECIES_KROOKODILE] = gMonFootprint_Krookodile,
    [SPECIES_DARUMAKA] = gMonFootprint_Darumaka,
    [SPECIES_DARMANITAN] = gMonFootprint_Darmanitan,
    [SPECIES_MARACTUS] = gMonFootprint_Maractus,
    [SPECIES_DWEBBLE] = gMonFootprint_Dwebble,
    [SPECIES_CRUSTLE] = gMonFootprint_Crustle,
    [SPECIES_SCRAGGY] = gMonFootprint_Scraggy,
    [SPECIES_SCRAFTY] = gMonFootprint_Scrafty,
    [SPECIES_SIGILYPH] = gMonFootprint_Sigilyph,
    [SPECIES_YAMASK] = gMonFootprint_Yamask,
    [SPECIES_COFAGRIGUS] = gMonFootprint_Cofagrigus,
    [SPECIES_TIRTOUGA] = gMonFootprint_Tirtouga,
    [SPECIES_CARRACOSTA] = gMonFootprint_Carracosta,
    [SPECIES_ARCHEN] = gMonFootprint_Archen,
    [SPECIES_ARCHEOPS] = gMonFootprint_Archeops,
    [SPECIES_TRUBBISH] = gMonFootprint_Trubbish,
    [SPECIES_GARBODOR] = gMonFootprint_Garbodor,
    [SPECIES_ZORUA] = gMonFootprint_Zorua,
    [SPECIES_ZOROARK] = gMonFootprint_Zoroark,
    [SPECIES_MINCCINO] = gMonFootprint_Minccino,
    [SPECIES_CINCCINO] = gMonFootprint_Cinccino,
    [SPECIES_GOTHITA] = gMonFootprint_Gothita,
    [SPECIES_GOTHORITA] = gMonFootprint_Gothorita,
    [SPECIES_GOTHITELLE] = gMonFootprint_Gothitelle,
    [SPECIES_SOLOSIS] = gMonFootprint_Solosis,
    [SPECIES_DUOSION] = gMonFootprint_Duosion,
    [SPECIES_REUNICLUS] = gMonFootprint_Reuniclus,
    [SPECIES_DUCKLETT] = gMonFootprint_Ducklett,
    [SPECIES_SWANNA] = gMonFootprint_Swanna,
    [SPECIES_VANILLITE] = gMonFootprint_Vanillite,
    [SPECIES_VANILLISH] = gMonFootprint_Vanillish,
    [SPECIES_VANILLUXE] = gMonFootprint_Vanilluxe,
    [SPECIES_DEERLING] = gMonFootprint_Deerling,
    [SPECIES_SAWSBUCK] = gMonFootprint_Sawsbuck,
    [SPECIES_EMOLGA] = gMonFootprint_Emolga,
    [SPECIES_KARRABLAST] = gMonFootprint_Karrablast,
    [SPECIES_ESCAVALIER] = gMonFootprint_Escavalier,
    [SPECIES_FOONGUS] = gMonFootprint_Foongus,
    [SPECIES_AMOONGUSS] = gMonFootprint_Amoonguss,
    [SPECIES_FRILLISH] = gMonFootprint_Frillish,
    [SPECIES_JELLICENT] = gMonFootprint_Jellicent,
    [SPECIES_ALOMOMOLA] = gMonFootprint_Alomomola,
    [SPECIES_JOLTIK] = gMonFootprint_Joltik,
    [SPECIES_GALVANTULA] = gMonFootprint_Galvantula,
    [SPECIES_FERROSEED] = gMonFootprint_Ferroseed,
    [SPECIES_FERROTHORN] = gMonFootprint_Ferrothorn,
    [SPECIES_KLINK] = gMonFootprint_Klink,
    [SPECIES_KLANG] = gMonFootprint_Klang,
    [SPECIES_KLINKLANG] = gMonFootprint_Klinklang,
    [SPECIES_TYNAMO] = gMonFootprint_Tynamo,
    [SPECIES_EELEKTRIK] = gMonFootprint_Eelektrik,
    [SPECIES_EELEKTROSS] = gMonFootprint_Eelektross,
    [SPECIES_ELGYEM] = gMonFootprint_Elgyem,
    [SPECIES_BEHEEYEM] = gMonFootprint_Beheeyem,
    [SPECIES_LITWICK] = gMonFootprint_Litwick,
    [SPECIES_LAMPENT] = gMonFootprint_Lampent,
    [SPECIES_CHANDELURE] = gMonFootprint_Chandelure,
    [SPECIES_AXEW] = gMonFootprint_Axew,
    [SPECIES_FRAXURE] = gMonFootprint_Fraxure,
    [SPECIES_HAXORUS] = gMonFootprint_Haxorus,
    [SPECIES_CUBCHOO] = gMonFootprint_Cubchoo,
    [SPECIES_BEARTIC] = gMonFootprint_Beartic,
    [SPECIES_CRYOGONAL] = gMonFootprint_Cryogonal,
    [SPECIES_SHELMET] = gMonFootprint_Shelmet,
    [SPECIES_ACCELGOR] = gMonFootprint_Accelgor,
    [SPECIES_STUNFISK] = gMonFootprint_Stunfisk,
    [SPECIES_MIENFOO] = gMonFootprint_Mienfoo,
    [SPECIES_MIENSHAO] = gMonFootprint_Mienshao,
    [SPECIES_DRUDDIGON] = gMonFootprint_Druddigon,
    [SPECIES_GOLETT] = gMonFootprint_Golett,
    [SPECIES_GOLURK] = gMonFootprint_Golurk,
    [SPECIES_PAWNIARD] = gMonFootprint_Pawniard,
    [SPECIES_BISHARP] = gMonFootprint_Bisharp,
    [SPECIES_BOUFFALANT] = gMonFootprint_Bouffalant,
    [SPECIES_RUFFLET] = gMonFootprint_Rufflet,
    [SPECIES_BRAVIARY] = gMonFootprint_Braviary,
    [SPECIES_VULLABY] = gMonFootprint_Vullaby,
    [SPECIES_MANDIBUZZ] = gMonFootprint_Mandibuzz,
    [SPECIES_HEATMOR] = gMonFootprint_Heatmor,
    [SPECIES_DURANT] = gMonFootprint_Durant,
    [SPECIES_DEINO] = gMonFootprint_Deino,
    [SPECIES_ZWEILOUS] = gMonFootprint_Zweilous,
    [SPECIES_HYDREIGON] = gMonFootprint_Hydreigon,
    [SPECIES_LARVESTA] = gMonFootprint_Larvesta,
    [SPECIES_VOLCARONA] = gMonFootprint_Volcarona,
    [SPECIES_COBALION] = gMonFootprint_Cobalion,
    [SPECIES_TERRAKION] = gMonFootprint_Terrakion,
    [SPECIES_VIRIZION] = gMonFootprint_Virizion,
    [SPECIES_TORNADUS] = gMonFootprint_Tornadus,
    [SPECIES_THUNDURUS] = gMonFootprint_Thundurus,
    [SPECIES_RESHIRAM] = gMonFootprint_Reshiram,
    [SPECIES_ZEKROM] = gMonFootprint_Zekrom,
    [SPECIES_LANDORUS] = gMonFootprint_Landorus,
    [SPECIES_KYUREM] = gMonFootprint_Kyurem,
    [SPECIES_KELDEO] = gMonFootprint_Keldeo,
    [SPECIES_MELOETTA] = gMonFootprint_Meloetta,
    [SPECIES_GENESECT] = gMonFootprint_Genesect,
    [SPECIES_CHESPIN] = gMonFootprint_Chespin,
    [SPECIES_QUILLADIN] = gMonFootprint_Quilladin,
    [SPECIES_CHESNAUGHT] = gMonFootprint_Chesnaught,
    [SPECIES_FENNEKIN] = gMonFootprint_Fennekin,
    [SPECIES_BRAIXEN] = gMonFootprint_Braixen,
    [SPECIES_DELPHOX] = gMonFootprint_Delphox,
    [SPECIES_FROAKIE] = gMonFootprint_Froakie,
    [SPECIES_FROGADIER] = gMonFootprint_Frogadier,
    [SPECIES_GRENINJA] = gMonFootprint_Greninja,
    [SPECIES_BUNNELBY] = gMonFootprint_Bunnelby,
    [SPECIES_DIGGERSBY] = gMonFootprint_Diggersby,
    [SPECIES_FLETCHLING] = gMonFootprint_Fletchling,
    [SPECIES_FLETCHINDER] = gMonFootprint_Fletchinder,
    [SPECIES_TALONFLAME] = gMonFootprint_Talonflame,
    [SPECIES_SCATTERBUG] = gMonFootprint_Scatterbug,
    [SPECIES_SPEWPA] = gMonFootprint_Spewpa,
    [SPECIES_VIVILLON] = gMonFootprint_Vivillon,
    [SPECIES_LITLEO] = gMonFootprint_Litleo,
    [SPECIES_PYROAR] = gMonFootprint_Pyroar,
    [SPECIES_FLABEBE] = gMonFootprint_Flabebe,
    [SPECIES_FLOETTE] = gMonFootprint_Floette,
    [SPECIES_FLORGES] = gMonFootprint_Florges,
    [SPECIES_SKIDDO] = gMonFootprint_Skiddo,
    [SPECIES_GOGOAT] = gMonFootprint_Gogoat,
    [SPECIES_PANCHAM] = gMonFootprint_Pancham,
    [SPECIES_PANGORO] = gMonFootprint_Pangoro,
    [SPECIES_FURFROU] = gMonFootprint_Furfrou,
    [SPECIES_ESPURR] = gMonFootprint_Espurr,
    [SPECIES_MEOWSTIC] = gMonFootprint_Meowstic,
    [SPECIES_HONEDGE] = gMonFootprint_Honedge,
    [SPECIES_DOUBLADE] = gMonFootprint_Doublade,
    [SPECIES_AEGISLASH] = gMonFootprint_Aegislash,
    [SPECIES_SPRITZEE] = gMonFootprint_Spritzee,
    [SPECIES_AROMATISSE] = gMonFootprint_Aromatisse,
    [SPECIES_SWIRLIX] = gMonFootprint_Swirlix,
    [SPECIES_SLURPUFF] = gMonFootprint_Slurpuff,
    [SPECIES_INKAY] = gMonFootprint_Inkay,
    [SPECIES_MALAMAR] = gMonFootprint_Malamar,
    [SPECIES_BINACLE] = gMonFootprint_Binacle,
    [SPECIES_BARBARACLE] = gMonFootprint_Barbaracle,
    [SPECIES_SKRELP] = gMonFootprint_Skrelp,
    [SPECIES_DRAGALGE] = gMonFootprint_Dragalge,
    [SPECIES_CLAUNCHER] = gMonFootprint_Clauncher,
    [SPECIES_CLAWITZER] = gMonFootprint_Clawitzer,
    [SPECIES_HELIOPTILE] = gMonFootprint_Helioptile,
    [SPECIES_HELIOLISK] = gMonFootprint_Heliolisk,
    [SPECIES_TYRUNT] = gMonFootprint_Tyrunt,
    [SPECIES_TYRANTRUM] = gMonFootprint_Tyrantrum,
    [SPECIES_AMAURA] = gMonFootprint_Amaura,
    [SPECIES_AURORUS] = gMonFootprint_Aurorus,
    [SPECIES_SYLVEON] = gMonFootprint_Sylveon,
    [SPECIES_HAWLUCHA] = gMonFootprint_Hawlucha,
    [SPECIES_DEDENNE] = gMonFootprint_Dedenne,
    [SPECIES_CARBINK] = gMonFootprint_Carbink,
    [SPECIES_GOOMY] = gMonFootprint_Goomy,
    [SPECIES_SLIGGOO] = gMonFootprint_Sliggoo,
    [SPECIES_GOODRA] = gMonFootprint_Goodra,
    [SPECIES_KLEFKI] = gMonFootprint_Klefki,
    [SPECIES_PHANTUMP] = gMonFootprint_Phantump,
    [SPECIES_TREVENANT] = gMonFootprint_Trevenant,
    [SPECIES_PUMPKABOO] = gMonFootprint_Pumpkaboo,
    [SPECIES_GOURGEIST] = gMonFootprint_Gourgeist,
    [SPECIES_BERGMITE] = gMonFootprint_Bergmite,
    [SPECIES_AVALUGG] = gMonFootprint_Avalugg,
    [SPECIES_NOIBAT] = gMonFootprint_Noibat,
    [SPECIES_NOIVERN] = gMonFootprint_Noivern,
    [SPECIES_XERNEAS] = gMonFootprint_Xerneas,
    [SPECIES_YVELTAL] = gMonFootprint_Yveltal,
    [SPECIES_ZYGARDE] = gMonFootprint_Zygarde,
    [SPECIES_DIANCIE] = gMonFootprint_Diancie,
    [SPECIES_HOOPA] = gMonFootprint_Hoopa,
    [SPECIES_RIBOMBEE_MEGA] = gMonFootprint_Ribombee_Mega,
    [SPECIES_HONEDGE_REDUX] = gMonFootprint_Honedge_Redux,
    [SPECIES_DOUBLADE_REDUX] = gMonFootprint_Doublade_Redux,
    [SPECIES_AEGISLASH_REDUX] = gMonFootprint_Aegislash_Redux,
    [SPECIES_AEGISLASH_BLADE_REDUX] = gMonFootprint_Aegislash_Blade_Redux,
    [SPECIES_ABRA_REDUX] = gMonFootprint_Abra_Redux,
    [SPECIES_KADABRA_REDUX] = gMonFootprint_Kadabra_Redux,
    [SPECIES_ALAKAZAM_REDUX] = gMonFootprint_Alakazam_Redux,
    [SPECIES_ALAKAZAM_MEGA_REDUX] = gMonFootprint_Alakazam_Redux_Mega,
    [SPECIES_WEEDLE_REDUX] = gMonFootprint_Weedle_Redux,
    [SPECIES_KAKUNA_REDUX] = gMonFootprint_Kakuna_Redux,
    [SPECIES_BEEDRILL_REDUX] = gMonFootprint_Beedrill_Redux,
    [SPECIES_VOLCANION] = gMonFootprint_Volcanion,
    [SPECIES_EGG] = gMonFootprint_Bulbasaur,
};
