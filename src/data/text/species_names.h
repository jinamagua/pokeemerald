const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("BULBSAUR"),
    [SPECIES_IVYSAUR] = _("IVYSAUR"),
    [SPECIES_VENUSAUR] = _("VENASAUR"),
    [SPECIES_CHARMANDER] = _("CHARMANDER"),
    [SPECIES_CHARMELEON] = _("CHARMELEON"),
    [SPECIES_CHARIZARD] = _("CHARIZARD"),
    [SPECIES_SQUIRTLE] = _("SQUIRTLE"),
    [SPECIES_WARTORTLE] = _("WARTORTLE"),
    [SPECIES_BLASTOISE] = _("BLASTOISE"),
    [SPECIES_CATERPIE] = _("CATERPIE"),
    [SPECIES_METAPOD] = _("METAPOD"),
    [SPECIES_BUTTERFREE] = _("BUTTERFREE"),
    [SPECIES_WEEDLE] = _("WEEDLE"),
    [SPECIES_KAKUNA] = _("KAKUNA"),
    [SPECIES_BEEDRILL] = _("BEEDRILL"),
    [SPECIES_PIDGEY] = _("PIDGEY"),
    [SPECIES_PIDGEOTTO] = _("PIDGEOTTO"),
    [SPECIES_PIDGEOT] = _("PIDGEOT"),
    [SPECIES_RATTATA] = _("RATTATA"),
    [SPECIES_RATICATE] = _("RATICATE"),
    [SPECIES_SPEAROW] = _("SPEAROW"),
    [SPECIES_FEAROW] = _("FEAROW"),
    [SPECIES_EKANS] = _("EKANS"),
    [SPECIES_ARBOK] = _("ARBOK"),
    [SPECIES_PIKACHU] = _("PIKACHU"),
    [SPECIES_RAICHU] = _("Raichu"),
    [SPECIES_SANDSHREW] = _("SANDSHREW"),
    [SPECIES_SANDSLASH] = _("SANDSLASH"),
    [SPECIES_NIDORAN_F] = _("NIDORAN♀"),
    [SPECIES_NIDORINA] = _("NIDORINA"),
    [SPECIES_NIDOQUEEN] = _("NIDOQUEEN"),
    [SPECIES_NIDORAN_M] = _("NIDORAN♂"),
    [SPECIES_NIDORINO] = _("NIDORINO"),
    [SPECIES_NIDOKING] = _("NIDOKING"),
    [SPECIES_CLEFAIRY] = _("CLEFAIRY"),
    [SPECIES_CLEFABLE] = _("CLEFABLE"),
    [SPECIES_VULPIX] = _("VULPIX"),
    [SPECIES_NINETALES] = _("NINETAILS"),
    [SPECIES_JIGGLYPUFF] = _("JIGGLYPUFF"),
    [SPECIES_WIGGLYTUFF] = _("WIGGLYTUFF"),
    [SPECIES_ZUBAT] = _("ZUBAT"),
    [SPECIES_GOLBAT] = _("GOLBAT"),
    [SPECIES_ODDISH] = _("ODDISH"),
    [SPECIES_GLOOM] = _("GLOOM"),
    [SPECIES_VILEPLUME] = _("VILEPLUME"),
    [SPECIES_PARAS] = _("PARAS"),
    [SPECIES_PARASECT] = _("PARASECT"),
    [SPECIES_VENONAT] = _("VENONAT"),
    [SPECIES_VENOMOTH] = _("VENOMOTH"),
    [SPECIES_DIGLETT] = _("DIGLETT"),
    [SPECIES_DUGTRIO] = _("DUGTRIO"),
    [SPECIES_MEOWTH] = _("MEOWTH"),
    [SPECIES_PERSIAN] = _("PERSIAN"),
    [SPECIES_PSYDUCK] = _("PSYDUCK"),
    [SPECIES_GOLDUCK] = _("GOLDUCK"),
    [SPECIES_MANKEY] = _("MANKEY"),
    [SPECIES_PRIMEAPE] = _("PRIMAPE"),
    [SPECIES_GROWLITHE] = _("GROWLITH"),
    [SPECIES_ARCANINE] = _("ARCANINE"),
    [SPECIES_POLIWAG] = _("POLIWAG"),
    [SPECIES_POLIWHIRL] = _("POLIWHIRL"),
    [SPECIES_POLIWRATH] = _("POLIWRATH"),
    [SPECIES_ABRA] = _("ABRA"),
    [SPECIES_KADABRA] = _("KADABRA"),
    [SPECIES_ALAKAZAM] = _("ALAKAZAM"),
    [SPECIES_MACHOP] = _("MACHOP"),
    [SPECIES_MACHOKE] = _("MACHOKE"),
    [SPECIES_MACHAMP] = _("MACHAMP"),
    [SPECIES_BELLSPROUT] = _("BELLSPROUT"),
    [SPECIES_WEEPINBELL] = _("WEEPINBELL"),
    [SPECIES_VICTREEBEL] = _("VICTREEBEL"),
    [SPECIES_TENTACOOL] = _("TENTACOOL"),
    [SPECIES_TENTACRUEL] = _("TENTACRUEL"),
    [SPECIES_GEODUDE] = _("GEODUDE"),
    [SPECIES_GRAVELER] = _("GRAVELER"),
    [SPECIES_GOLEM] = _("GOLEM"),
    [SPECIES_PONYTA] = _("PONYTA"),
    [SPECIES_RAPIDASH] = _("RAPIDASH"),
    [SPECIES_SLOWPOKE] = _("SLOWPOKE"),
    [SPECIES_SLOWBRO] = _("SLOWBRO"),
    [SPECIES_MAGNEMITE] = _("MAGNEMITE"),
    [SPECIES_MAGNETON] = _("MaAGNETON"),
    [SPECIES_FARFETCHD] = _("FARFETCH'D"),
    [SPECIES_DODUO] = _("DODUO"),
    [SPECIES_DODRIO] = _("DODRIO"),
    [SPECIES_SEEL] = _("SEEL"),
    [SPECIES_DEWGONG] = _("DEWGONG"),
    [SPECIES_GRIMER] = _("GRIMER"),
    [SPECIES_MUK] = _("MUK"),
    [SPECIES_SHELLDER] = _("SHELLDER"),
    [SPECIES_CLOYSTER] = _("CLOYSTER"),
    [SPECIES_GASTLY] = _("GASTLY"),
    [SPECIES_HAUNTER] = _("HAUNTER"),
    [SPECIES_GENGAR] = _("GENGAR"),
    [SPECIES_ONIX] = _("ONIX"),
    [SPECIES_DROWZEE] = _("DROWZEE"),
    [SPECIES_HYPNO] = _("HYPNO"),
    [SPECIES_KRABBY] = _("KRABBY"),
    [SPECIES_KINGLER] = _("KINGLER"),
    [SPECIES_VOLTORB] = _("VOLTORB"),
    [SPECIES_ELECTRODE] = _("ELECTRODE"),
    [SPECIES_EXEGGCUTE] = _("EXEGGCUTE"),
    [SPECIES_EXEGGUTOR] = _("EXEGGUTOR"),
    [SPECIES_CUBONE] = _("CUBONE"),
    [SPECIES_MAROWAK] = _("MAROWAK"),
    [SPECIES_HITMONLEE] = _("HITMONLEE"),
    [SPECIES_HITMONCHAN] = _("HITMONCHAN"),
    [SPECIES_LICKITUNG] = _("LICKITUNG"),
    [SPECIES_KOFFING] = _("KOFFING"),
    [SPECIES_WEEZING] = _("WEEZING"),
    [SPECIES_RHYHORN] = _("RYHORN"),
    [SPECIES_RHYDON] = _("RHYDON"),
    [SPECIES_CHANSEY] = _("CHANSEY"),
    [SPECIES_TANGELA] = _("TANGELA"),
    [SPECIES_KANGASKHAN] = _("KANGASKHAN"),
    [SPECIES_HORSEA] = _("HORSEA"),
    [SPECIES_SEADRA] = _("SEADRA"),
    [SPECIES_GOLDEEN] = _("GOLDEEN"),
    [SPECIES_SEAKING] = _("SEAKING"),
    [SPECIES_STARYU] = _("STARYU"),
    [SPECIES_STARMIE] = _("STARMIE"),
    [SPECIES_MR_MIME] = _("MR. MIME"),
    [SPECIES_SCYTHER] = _("SCYTHER"),
    [SPECIES_JYNX] = _("JYNX"),
    [SPECIES_ELECTABUZZ] = _("ELECTABUZZ"),
    [SPECIES_MAGMAR] = _("MAGMAR"),
    [SPECIES_PINSIR] = _("PINSIR"),
    [SPECIES_TAUROS] = _("TAUROS"),
    [SPECIES_MAGIKARP] = _("MAGIKARP"),
    [SPECIES_GYARADOS] = _("GYARADOS"),
    [SPECIES_LAPRAS] = _("LAPRAS"),
    [SPECIES_DITTO] = _("DITTO"),
    [SPECIES_EEVEE] = _("EEVEE"),
    [SPECIES_VAPOREON] = _("VAPOREON"),
    [SPECIES_JOLTEON] = _("JOLTEON"),
    [SPECIES_FLAREON] = _("FLAREON"),
    [SPECIES_PORYGON] = _("PORYGON"),
    [SPECIES_OMANYTE] = _("OMANYTE"),
    [SPECIES_OMASTAR] = _("OMASTAR"),
    [SPECIES_KABUTO] = _("KABUTO"),
    [SPECIES_KABUTOPS] = _("KABUTOPS"),
    [SPECIES_AERODACTYL] = _("AERODACTYL"),
    [SPECIES_SNORLAX] = _("SNORLAX"),
    [SPECIES_ARTICUNO] = _("ARTICUNO"),
    [SPECIES_ZAPDOS] = _("ZAPDOS"),
    [SPECIES_MOLTRES] = _("MOLTRES"),
    [SPECIES_DRATINI] = _("DRATINI"),
    [SPECIES_DRAGONAIR] = _("DRAGONAIR"),
    [SPECIES_DRAGONITE] = _("DRAGONITE"),
    [SPECIES_MEWTWO] = _("MEWTWO"),
    [SPECIES_MEW] = _("MEW"),
    [SPECIES_CHIKORITA] = _("CHIKORITA"),
    [SPECIES_BAYLEEF] = _("BAYLEEF"),
    [SPECIES_MEGANIUM] = _("MEGANIUM"),
    [SPECIES_CYNDAQUIL] = _("CYNDAQUILL"),
    [SPECIES_QUILAVA] = _("QUILAVA"),
    [SPECIES_TYPHLOSION] = _("TYPHLOSION"),
    [SPECIES_TOTODILE] = _("TOTODILE"),
    [SPECIES_CROCONAW] = _("CROAK"),
    [SPECIES_FERALIGATR] = _("FERALIGATR"),
    [SPECIES_SENTRET] = _("SENTRET"),
    [SPECIES_FURRET] = _("FURRET"),
    [SPECIES_HOOTHOOT] = _("HOOTHOOT"),
    [SPECIES_NOCTOWL] = _("NOCTOWL"),
    [SPECIES_LEDYBA] = _("LEDYBA"),
    [SPECIES_LEDIAN] = _("LEDIAN"),
    [SPECIES_SPINARAK] = _("SPINARAK"),
    [SPECIES_ARIADOS] = _("ARIADOS"),
    [SPECIES_CROBAT] = _("CROBAT"),
    [SPECIES_CHINCHOU] = _("CHINCHOU"),
    [SPECIES_LANTURN] = _("LANTURN"),
    [SPECIES_PICHU] = _("PICHU"),
    [SPECIES_CLEFFA] = _("CLEFFA"),
    [SPECIES_IGGLYBUFF] = _("IGGLYBUFF"),
    [SPECIES_TOGEPI] = _("TOGEPI"),
    [SPECIES_TOGETIC] = _("TOGETIC"),
    [SPECIES_NATU] = _("NATU"),
    [SPECIES_XATU] = _("XATU"),
    [SPECIES_MAREEP] = _("MAREEP"),
    [SPECIES_FLAAFFY] = _("FLAAFFY"),
    [SPECIES_AMPHAROS] = _("AMPHAROS"),
    [SPECIES_BELLOSSOM] = _("BELLOSSOM"),
    [SPECIES_MARILL] = _("MARILL"),
    [SPECIES_AZUMARILL] = _("AZUMARILL"),
    [SPECIES_SUDOWOODO] = _("SUDOWOODO"),
    [SPECIES_POLITOED] = _("POLITOED"),
    [SPECIES_HOPPIP] = _("HOPPIP"),
    [SPECIES_SKIPLOOM] = _("SKIPLOOM"),
    [SPECIES_JUMPLUFF] = _("JUMPLUFF"),
    [SPECIES_AIPOM] = _("AIPOM"),
    [SPECIES_SUNKERN] = _("SUNKERN"),
    [SPECIES_SUNFLORA] = _("SUNFLORA"),
    [SPECIES_YANMA] = _("YANMA"),
    [SPECIES_WOOPER] = _("WOOPER"),
    [SPECIES_QUAGSIRE] = _("QUAGSIRE"),
    [SPECIES_ESPEON] = _("ESPEON"),
    [SPECIES_UMBREON] = _("UMBREON"),
    [SPECIES_MURKROW] = _("MURKROW"),
    [SPECIES_SLOWKING] = _("SLOWKING"),
    [SPECIES_MISDREAVUS] = _("MISDREAVUS"),
    [SPECIES_UNOWN] = _("UNOWN"),
    [SPECIES_WOBBUFFET] = _("WOBBUFFET"),
    [SPECIES_GIRAFARIG] = _("GIRAFARIG"),
    [SPECIES_PINECO] = _("PINECO"),
    [SPECIES_FORRETRESS] = _("FORRETRESS"),
    [SPECIES_DUNSPARCE] = _("DUNSPARCE"),
    [SPECIES_GLIGAR] = _("GLIGAR"),
    [SPECIES_STEELIX] = _("STEELIX"),
    [SPECIES_SNUBBULL] = _("SNUBBULL"),
    [SPECIES_GRANBULL] = _("GRANBULL"),
    [SPECIES_QWILFISH] = _("QWILFISH"),
    [SPECIES_SCIZOR] = _("SCIZOR"),
    [SPECIES_SHUCKLE] = _("SHUCKLE"),
    [SPECIES_HERACROSS] = _("HERACROSS"),
    [SPECIES_SNEASEL] = _("SNEASEL"),
    [SPECIES_TEDDIURSA] = _("TEDDIURSA"),
    [SPECIES_URSARING] = _("URSARING"),
    [SPECIES_SLUGMA] = _("SLUGMA"),
    [SPECIES_MAGCARGO] = _("MAGCARGO"),
    [SPECIES_SWINUB] = _("SWINUB"),
    [SPECIES_PILOSWINE] = _("PILOSWINE"),
    [SPECIES_CORSOLA] = _("CORSOLA"),
    [SPECIES_REMORAID] = _("REMORAID"),
    [SPECIES_OCTILLERY] = _("OCTILLERY"),
    [SPECIES_DELIBIRD] = _("DELIBIRD"),
    [SPECIES_MANTINE] = _("MANTINE"),
    [SPECIES_SKARMORY] = _("SKARMORY"),
    [SPECIES_HOUNDOUR] = _("HOUNDOUR"),
    [SPECIES_HOUNDOOM] = _("HOUNDOOM"),
    [SPECIES_KINGDRA] = _("KINGDRA"),
    [SPECIES_PHANPY] = _("PHANPY"),
    [SPECIES_DONPHAN] = _("DONPHAN"),
    [SPECIES_PORYGON2] = _("PORYGON2"),
    [SPECIES_STANTLER] = _("STANTLER"),
    [SPECIES_SMEARGLE] = _("SMEARGLE"),
    [SPECIES_TYROGUE] = _("TYROGUE"),
    [SPECIES_HITMONTOP] = _("HITMONTOP"),
    [SPECIES_SMOOCHUM] = _("SMOOCHUM"),
    [SPECIES_ELEKID] = _("ELEKID"),
    [SPECIES_MAGBY] = _("MAGBY"),
    [SPECIES_MILTANK] = _("MILTANK"),
    [SPECIES_BLISSEY] = _("BLISSEY"),
    [SPECIES_RAIKOU] = _("RAIKOU"),
    [SPECIES_ENTEI] = _("ENTEI"),
    [SPECIES_SUICUNE] = _("SUICUNE"),
    [SPECIES_LARVITAR] = _("LARVITAR"),
    [SPECIES_PUPITAR] = _("PUPITAR"),
    [SPECIES_TYRANITAR] = _("TYRANITAR"),
    [SPECIES_LUGIA] = _("LUGIA"),
    [SPECIES_HO_OH] = _("HO-OH"),
    [SPECIES_CELEBI] = _("CELEBI"),
    [SPECIES_TREECKO] = _("TREECKO"),
    [SPECIES_GROVYLE] = _("GROVYLE"),
    [SPECIES_SCEPTILE] = _("SCEPTILE"),
    [SPECIES_TORCHIC] = _("TORCHIC"),
    [SPECIES_COMBUSKEN] = _("COMBUSKEN"),
    [SPECIES_BLAZIKEN] = _("BLAZIKEN"),
    [SPECIES_MUDKIP] = _("MUDKIP"),
    [SPECIES_MARSHTOMP] = _("MARSHTOMP"),
    [SPECIES_SWAMPERT] = _("SWAMPERT"),
    [SPECIES_POOCHYENA] = _("POOCHYENA"),
    [SPECIES_MIGHTYENA] = _("MIGHTYENA"),
    [SPECIES_ZIGZAGOON] = _("ZIGZAGOON"),
    [SPECIES_LINOONE] = _("LINOONE"),
    [SPECIES_WURMPLE] = _("WURMPLE"),
    [SPECIES_SILCOON] = _("SILCOON"),
    [SPECIES_BEAUTIFLY] = _("BEAUTIFLY"),
    [SPECIES_CASCOON] = _("CASCOON"),
    [SPECIES_DUSTOX] = _("DUSTOX"),
    [SPECIES_LOTAD] = _("LOTAD"),
    [SPECIES_LOMBRE] = _("LOMBRE"),
    [SPECIES_LUDICOLO] = _("LUDICOLO"),
    [SPECIES_SEEDOT] = _("SEEDOT"),
    [SPECIES_NUZLEAF] = _("NUZLEAF"),
    [SPECIES_SHIFTRY] = _("SHIFTRY"),
    [SPECIES_TAILLOW] = _("TAILLOW"),
    [SPECIES_SWELLOW] = _("SWELLOW"),
    [SPECIES_WINGULL] = _("WINGULL"),
    [SPECIES_PELIPPER] = _("PELIPPER"),
    [SPECIES_RALTS] = _("RALTS"),
    [SPECIES_KIRLIA] = _("KIRLIA"),
    [SPECIES_GARDEVOIR] = _("GARDEVOIR"),
    [SPECIES_SURSKIT] = _("SURSKIT"),
    [SPECIES_MASQUERAIN] = _("MASQUERAIN"),
    [SPECIES_SHROOMISH] = _("SHROOMISH"),
    [SPECIES_BRELOOM] = _("BRELOOM"),
    [SPECIES_SLAKOTH] = _("SLAKOTH"),
    [SPECIES_VIGOROTH] = _("VIGOROTH"),
    [SPECIES_SLAKING] = _("SLAKING"),
    [SPECIES_NINCADA] = _("NINCADA"),
    [SPECIES_NINJASK] = _("NINJASK"),
    [SPECIES_SHEDINJA] = _("SHEDINJA"),
    [SPECIES_WHISMUR] = _("WHISMUR"),
    [SPECIES_LOUDRED] = _("LOUDRED"),
    [SPECIES_EXPLOUD] = _("EXPLOUD"),
    [SPECIES_MAKUHITA] = _("MAKUHITA"),
    [SPECIES_HARIYAMA] = _("HARIYAMA"),
    [SPECIES_AZURILL] = _("AZURILL"),
    [SPECIES_NOSEPASS] = _("NOSEPASS"),
    [SPECIES_SKITTY] = _("SKITTY"),
    [SPECIES_DELCATTY] = _("DELCATTY"),
    [SPECIES_SABLEYE] = _("SABLEYE"),
    [SPECIES_MAWILE] = _("MAWILE"),
    [SPECIES_ARON] = _("ARON"),
    [SPECIES_LAIRON] = _("LAIRON"),
    [SPECIES_AGGRON] = _("AGGRON"),
    [SPECIES_MEDITITE] = _("MEDITITE"),
    [SPECIES_MEDICHAM] = _("MEDICHAM"),
    [SPECIES_ELECTRIKE] = _("ELECTRIKE"),
    [SPECIES_MANECTRIC] = _("MANECTRIC"),
    [SPECIES_PLUSLE] = _("PLUSLE"),
    [SPECIES_MINUN] = _("MINUN"),
    [SPECIES_VOLBEAT] = _("VOLBEAT"),
    [SPECIES_ILLUMISE] = _("ILLUMISE"),
    [SPECIES_ROSELIA] = _("ROSELIA"),
    [SPECIES_GULPIN] = _("GULPIN"),
    [SPECIES_SWALOT] = _("SWALOT"),
    [SPECIES_CARVANHA] = _("CARVANHA"),
    [SPECIES_SHARPEDO] = _("SHARPEDO"),
    [SPECIES_WAILMER] = _("WAILMER"),
    [SPECIES_WAILORD] = _("WAILORD"),
    [SPECIES_NUMEL] = _("NUMEL"),
    [SPECIES_CAMERUPT] = _("CAMERUPT"),
    [SPECIES_TORKOAL] = _("TORKOAL"),
    [SPECIES_SPOINK] = _("SPOINK"),
    [SPECIES_GRUMPIG] = _("GRUMPIG"),
    [SPECIES_SPINDA] = _("SPINDA"),
    [SPECIES_TRAPINCH] = _("TRAPINCH"),
    [SPECIES_VIBRAVA] = _("VIBRAVA"),
    [SPECIES_FLYGON] = _("FLYGON"),
    [SPECIES_CACNEA] = _("CACNEA"),
    [SPECIES_CACTURNE] = _("CACTURNE"),
    [SPECIES_SWABLU] = _("SWABLU"),
    [SPECIES_ALTARIA] = _("ALTARIA"),
    [SPECIES_ZANGOOSE] = _("ZANGOOSE"),
    [SPECIES_SEVIPER] = _("SEVIPER"),
    [SPECIES_LUNATONE] = _("LUNATONE"),
    [SPECIES_SOLROCK] = _("SOLROCK"),
    [SPECIES_BARBOACH] = _("BARBOACH"),
    [SPECIES_WHISCASH] = _("WHISCASH"),
    [SPECIES_CORPHISH] = _("CORPHISH"),
    [SPECIES_CRAWDAUNT] = _("CRAWDAUNT"),
    [SPECIES_BALTOY] = _("BALTOY"),
    [SPECIES_CLAYDOL] = _("CLAYDOL"),
    [SPECIES_LILEEP] = _("LILEEP"),
    [SPECIES_CRADILY] = _("CRADILY"),
    [SPECIES_ANORITH] = _("ANORITH"),
    [SPECIES_ARMALDO] = _("ARMALDO"),
    [SPECIES_FEEBAS] = _("FEEBAS"),
    [SPECIES_MILOTIC] = _("MILOTIC"),
    [SPECIES_CASTFORM] = _("CASTFORM"),
    [SPECIES_KECLEON] = _("KECLEON"),
    [SPECIES_SHUPPET] = _("SHUPPET"),
    [SPECIES_BANETTE] = _("BANETTE"),
    [SPECIES_DUSKULL] = _("DUSKULL"),
    [SPECIES_DUSCLOPS] = _("DUSCLOPS"),
    [SPECIES_TROPIUS] = _("TROPIUS"),
    [SPECIES_CHIMECHO] = _("CHIMECHO"),
    [SPECIES_ABSOL] = _("ABSOL"),
    [SPECIES_WYNAUT] = _("WYNAUT"),
    [SPECIES_SNORUNT] = _("SNORUNT"),
    [SPECIES_GLALIE] = _("GLALIE"),
    [SPECIES_SPHEAL] = _("SPHEAL"),
    [SPECIES_SEALEO] = _("SEALEO"),
    [SPECIES_WALREIN] = _("WALREIN"),
    [SPECIES_CLAMPERL] = _("CLAMPERL"),
    [SPECIES_HUNTAIL] = _("HUNTAIL"),
    [SPECIES_GOREBYSS] = _("GOREBYSS"),
    [SPECIES_RELICANTH] = _("RELICANTH"),
    [SPECIES_LUVDISC] = _("LUVDISC"),
    [SPECIES_BAGON] = _("BAGON"),
    [SPECIES_SHELGON] = _("SHELGON"),
    [SPECIES_SALAMENCE] = _("SALAMENCE"),
    [SPECIES_BELDUM] = _("BELDUM"),
    [SPECIES_METANG] = _("METANG"),
    [SPECIES_METAGROSS] = _("METAGROSS"),
    [SPECIES_REGIROCK] = _("REGIROCK"),
    [SPECIES_REGICE] = _("REGICE"),
    [SPECIES_REGISTEEL] = _("REGISTEEL"),
    [SPECIES_LATIAS] = _("LATIAS"),
    [SPECIES_LATIOS] = _("LATIOS"),
    [SPECIES_KYOGRE] = _("KYOGRE"),
    [SPECIES_GROUDON] = _("GROUDON"),
    [SPECIES_RAYQUAZA] = _("RAYQUAZA"),
    [SPECIES_JIRACHI] = _("JIRACHI"),
    [SPECIES_DEOXYS] = _("DEOXYS"),
    [SPECIES_TURTWIG] = _("TURTWIG"),
    [SPECIES_GROTLE] = _("GROTLE"),
    [SPECIES_TORTERRA] = _("TORTERRA"),
    [SPECIES_CHIMCHAR] = _("CHIMCHAR"),
    [SPECIES_MONFERNO] = _("MONFERNO"),
    [SPECIES_INFERNAPE] = _("INFERNAPE"),
    [SPECIES_PIPLUP] = _("PIPLUP"),
    [SPECIES_PRINPLUP] = _("PRINPLUP"),
    [SPECIES_EMPOLEON] = _("EMPOLEON"),
    [SPECIES_STARLY] = _("STARLY"),
    [SPECIES_STARAVIA] = _("STARAVIA"),
    [SPECIES_STARAPTOR] = _("STARAPTOR"),
    [SPECIES_BIDOOF] = _("BIDOOF"),
    [SPECIES_BIBAREL] = _("BIBAREL"),
    [SPECIES_KRICKETOT] = _("KRICKETOT"),
    [SPECIES_KRICKETUNE] = _("KRICKETUNE"),
    [SPECIES_SHINX] = _("SHINX"),
    [SPECIES_LUXIO] = _("LUXIO"),
    [SPECIES_LUXRAY] = _("LUXRAY"),
    [SPECIES_BUDEW] = _("BUDEW"),
    [SPECIES_ROSERADE] = _("ROSERADE"),
    [SPECIES_CRANIDOS] = _("CRANIDOS"),
    [SPECIES_RAMPARDOS] = _("RAMPARDOS"),
    [SPECIES_SHIELDON] = _("SHIELDON"),
    [SPECIES_BASTIODON] = _("BASTIODON"),
    [SPECIES_BURMY] = _("BURMY"),
    [SPECIES_BURMY_SANDY] = _("BURMY"),
    [SPECIES_BURMY_TRASH] = _("BURMY"),
    [SPECIES_WORMADAM] = _("WORMADAM"),
    [SPECIES_WORMADAM_SANDY] = _("WORMADAM"),
    [SPECIES_WORMADAM_TRASH] = _("WORMADAM"),
    [SPECIES_MOTHIM] = _("MOTHIM"),
    [SPECIES_COMBEE] = _("COMBEE"),
    [SPECIES_VESPIQUEN] = _("VESPIQUEN"),
    [SPECIES_PACHIRISU] = _("PACHIRISU"),
    [SPECIES_BUIZEL] = _("BUIZEL"),
    [SPECIES_FLOATZEL] = _("FLOATZEL"),
    [SPECIES_CHERUBI] = _("CHERUBI"),
    [SPECIES_CHERRIM] = _("CHERRIM"),
    [SPECIES_SHELLOS] = _("SHELLOS"),
    [SPECIES_GASTRODON] = _("GASTRODON"),
    [SPECIES_AMBIPOM] = _("AMBIPOM"),
    [SPECIES_DRIFLOON] = _("DRIFLOON"),
    [SPECIES_DRIFBLIM] = _("DRIFBLIM"),
    [SPECIES_BUNEARY] = _("BUNEARY"),
    [SPECIES_LOPUNNY] = _("LOPUNNY"),
    [SPECIES_MISMAGIUS] = _("MISMAGIUS"),
    [SPECIES_HONCHKROW] = _("HONCHKROW"),
    [SPECIES_GLAMEOW] = _("GLAMEOW"),
    [SPECIES_PURUGLY] = _("PURUGLY"),
    [SPECIES_CHINGLING] = _("CHINGLING"),
    [SPECIES_STUNKY] = _("STUNKY"),
    [SPECIES_SKUNTANK] = _("SKUNTANK"),
    [SPECIES_BRONZOR] = _("BRONZOR"),
    [SPECIES_BRONZONG] = _("BRONZONG"),
    [SPECIES_BONSLY] = _("BONSLY"),
    [SPECIES_MIMEJR] = _("MIME JR."),
    [SPECIES_HAPPINY] = _("HAPPINY"),
    [SPECIES_CHATOT] = _("CHATOT"),
    [SPECIES_SPIRITOMB] = _("SPIRITOMB"),
    [SPECIES_GIBLE] = _("GIBLE"),
    [SPECIES_GABITE] = _("GABITE"),
    [SPECIES_GARCHOMP] = _("GARCHOMP"),
    [SPECIES_MUNCHLAX] = _("MUNCHLAX"),
    [SPECIES_RIOLU] = _("RIOLU"),
    [SPECIES_LUCARIO] = _("LUCARIO"),
    [SPECIES_HIPPOPOTAS] = _("HIPPOPOTAS"),
    [SPECIES_HIPPOWDON] = _("HIPPOWDON"),
    [SPECIES_SKORUPI] = _("SKORUPI"),
    [SPECIES_DRAPION] = _("DRAPION"),
    [SPECIES_CROAGUNK] = _("CROAGUNK"),
    [SPECIES_TOXICROAK] = _("TOXICROAK"),
    [SPECIES_CARNIVINE] = _("CARNIVINE"),
    [SPECIES_FINNEON] = _("FINNEON"),
    [SPECIES_LUMINEON] = _("LUMINEON"),
    [SPECIES_MANTYKE] = _("MANTYKE"),
    [SPECIES_SNOVER] = _("SNOVER"),
    [SPECIES_ABOMASNOW] = _("ABOMASNOW"),
    [SPECIES_WEAVILE] = _("WEAVILE"),
    [SPECIES_MAGNEZONE] = _("MAGNEZONE"),
    [SPECIES_LICKILICKY] = _("LICKILICKY"),
    [SPECIES_RHYPERIOR] = _("RHYPERIOR"),
    [SPECIES_TANGROWTH] = _("TANGROWTH"),
    [SPECIES_ELECTIVIRE] = _("ELECTIVIRE"),
    [SPECIES_MAGMORTAR] = _("MAGMORTAR"),
    [SPECIES_TOGEKISS] = _("TOGEKISS"),
    [SPECIES_YANMEGA] = _("YANMEGA"),
    [SPECIES_LEAFEON] = _("LEAFEON"),
    [SPECIES_GLACEON] = _("GLACEON"),
    [SPECIES_GLISCOR] = _("GLISCOR"),
    [SPECIES_MAMOSWINE] = _("MAMOSWINE"),
    [SPECIES_PORYGON_Z] = _("PORYGON-z"),
    [SPECIES_GALLADE] = _("GALLADE"),
    [SPECIES_PROBOPASS] = _("PROBOPASS"),
    [SPECIES_DUSKNOIR] = _("DUSKNOIR"),
    [SPECIES_FROSLASS] = _("FROSLASS"),
    [SPECIES_ROTOM] = _("ROTOM"),
    [SPECIES_ROTOM_HEAT] = _("ROTOM"),
    [SPECIES_ROTOM_FAN] = _("ROTOM"),
    [SPECIES_ROTOM_FROST] = _("ROTOM"),
    [SPECIES_ROTOM_MOW] = _("ROTOM"),
    [SPECIES_ROTOM_WASH] = _("ROTOM"),
    [SPECIES_UXIE] = _("UXIE"),
    [SPECIES_MESPRIT] = _("MESPRIT"),
    [SPECIES_AZELF] = _("AZELF"),
    [SPECIES_DIALGA] = _("DIALGA"),
    [SPECIES_PALKIA] = _("PALKIA"),
    [SPECIES_HEATRAN] = _("HEATRAN"),
    [SPECIES_REGIGIGAS] = _("REGIGIGAS"),
    [SPECIES_GIRATINA] = _("GIRATINA"),
    [SPECIES_CRESSELIA] = _("CRESSELIA"),
    [SPECIES_PHIONE] = _("PHIONE"),
    [SPECIES_MANAPHY] = _("MANAPHY"),
    [SPECIES_DARKRAI] = _("DARKRAI"),
    [SPECIES_SHAYMIN] = _("SHAYMIN"),
    [SPECIES_ARCEUS] = _("ARCEUS"),
    [SPECIES_VICTINI] = _("VICTINI"),
    [SPECIES_SNIVY] = _("SNIVY"),
    [SPECIES_SERVINE] = _("SERVINE"),
    [SPECIES_SERPERIOR] = _("SERPERIOR"),
    [SPECIES_TEPIG] = _("TEPIG"),
    [SPECIES_PIGNITE] = _("PIGNITE"),
    [SPECIES_EMBOAR] = _("EMBOAR"),
    [SPECIES_OSHAWOTT] = _("OSHAWOTT"),
    [SPECIES_DEWOTT] = _("DEWOTT"),
    [SPECIES_SAMUROTT] = _("SAMUROTT"),
    [SPECIES_PATRAT] = _("PATRAT"),
    [SPECIES_WATCHOG] = _("WATCHOG"),
    [SPECIES_LILLIPUP] = _("LILLIPUP"),
    [SPECIES_HERDIER] = _("HERDIER"),
    [SPECIES_STOUTLAND] = _("STOUTLAND"),
    [SPECIES_PURRLOIN] = _("PURRLOIN"),
    [SPECIES_LIEPARD] = _("LIEPARD"),
    [SPECIES_PANSAGE] = _("PANSAGE"),
    [SPECIES_SIMISAGE] = _("SIMISAGE"),
    [SPECIES_PANSEAR] = _("PANSEAR"),
    [SPECIES_SIMISEAR] = _("SIMISEAR"),
    [SPECIES_PANPOUR] = _("PANPOUR"),
    [SPECIES_SIMIPOUR] = _("SIMIPOUR"),
    [SPECIES_MUNNA] = _("MUNNA"),
    [SPECIES_MUSHARNA] = _("MUSHARNA"),
    [SPECIES_PIDOVE] = _("PIDOVE"),
    [SPECIES_TRANQUILL] = _("TRANQUILL"),
    [SPECIES_UNFEZANT] = _("UNFEZANT"),
    [SPECIES_BLITZLE] = _("BLITZLE"),
    [SPECIES_ZEBSTRIKA] = _("ZEBSTRIKA"),
    [SPECIES_ROGGENROLA] = _("ROGGENROLA"),
    [SPECIES_BOLDORE] = _("BOLDORE"),
    [SPECIES_GIGALITH] = _("GIGALITH"),
    [SPECIES_WOOBAT] = _("WOOBAT"),
    [SPECIES_SWOOBAT] = _("SWOOBAT"),
    [SPECIES_DRILBUR] = _("DRILBUR"),
    [SPECIES_EXCADRILL] = _("EXCADRILL"),
    [SPECIES_AUDINO] = _("AUDINO"),
    [SPECIES_TIMBURR] = _("TIMBURR"),
    [SPECIES_GURDURR] = _("GURDURR"),
    [SPECIES_CONKELDURR] = _("CONKELDURR"),
    [SPECIES_TYMPOLE] = _("TYMPOLE"),
    [SPECIES_PALPITOAD] = _("PALPITOAD"),
    [SPECIES_SEISMITOAD] = _("SEISMITOAD"),
    [SPECIES_THROH] = _("THROH"),
    [SPECIES_SAWK] = _("SAWK"),
    [SPECIES_SEWADDLE] = _("SEWADDLE"),
    [SPECIES_SWADLOON] = _("SWADLOON"),
    [SPECIES_LEAVANNY] = _("LEAVANNY"),
    [SPECIES_VENIPEDE] = _("VENIPEDE"),
    [SPECIES_WHIRLIPEDE] = _("WHIRLIPEDE"),
    [SPECIES_SCOLIPEDE] = _("SCOLIPEDE"),
    [SPECIES_COTTONEE] = _("COTTONEE"),
    [SPECIES_WHIMSICOTT] = _("WHIMSICOTT"),
    [SPECIES_PETILIL] = _("PETILIL"),
    [SPECIES_LILLIGANT] = _("LILLIGANT"),
    [SPECIES_BASCULIN] = _("BASCULIN"),
    [SPECIES_SANDILE] = _("SANDILE"),
    [SPECIES_KROKOROK] = _("KROKOROK"),
    [SPECIES_KROOKODILE] = _("KROOKODILE"),
    [SPECIES_DARUMAKA] = _("DARUMAKA"),
    [SPECIES_DARMANITAN] = _("DARMANITAN"),
    [SPECIES_MARACTUS] = _("MARACTUS"),
    [SPECIES_DWEBBLE] = _("DWEBBLE"),
    [SPECIES_CRUSTLE] = _("CRUSTLE"),
    [SPECIES_SCRAGGY] = _("SCRAGGY"),
    [SPECIES_SCRAFTY] = _("SCRAFTY"),
    [SPECIES_SIGILYPH] = _("SIGILYPH"),
    [SPECIES_YAMASK] = _("YAMASK"),
    [SPECIES_COFAGRIGUS] = _("COFAGRIGUS"),
    [SPECIES_TIRTOUGA] = _("TIRTOUGA"),
    [SPECIES_CARRACOSTA] = _("CARRACOSTA"),
    [SPECIES_ARCHEN] = _("ARCHEN"),
    [SPECIES_ARCHEOPS] = _("ARCHEOPS"),
    [SPECIES_TRUBBISH] = _("TRUBBISH"),
    [SPECIES_GARBODOR] = _("GARBODOR"),
    [SPECIES_ZORUA] = _("ZORUA"),
    [SPECIES_ZOROARK] = _("ZOROARK"),
    [SPECIES_MINCCINO] = _("MINCCINO"),
    [SPECIES_CINCCINO] = _("CINCCINO"),
    [SPECIES_GOTHITA] = _("GOTHITA"),
    [SPECIES_GOTHORITA] = _("GOTHORITA"),
    [SPECIES_GOTHITELLE] = _("GOTHITELLE"),
    [SPECIES_SOLOSIS] = _("SOLOSIS"),
    [SPECIES_DUOSION] = _("DUOSION"),
    [SPECIES_REUNICLUS] = _("REUNICLUS"),
    [SPECIES_DUCKLETT] = _("DUCKLETT"),
    [SPECIES_SWANNA] = _("SWANNA"),
    [SPECIES_VANILLITE] = _("VANILLITE"),
    [SPECIES_VANILLISH] = _("VANILLISH"),
    [SPECIES_VANILLUXE] = _("VANILLUXE"),
    [SPECIES_DEERLING] = _("DEERLING"),
    [SPECIES_SAWSBUCK] = _("SAWSBUCK"),
    [SPECIES_EMOLGA] = _("EMOLGA"),
    [SPECIES_KARRABLAST] = _("KARRABLAST"),
    [SPECIES_ESCAVALIER] = _("ESCAVALIER"),
    [SPECIES_FOONGUS] = _("FOONGUS"),
    [SPECIES_AMOONGUSS] = _("AMOONGUSS"),
    [SPECIES_FRILLISH] = _("FRILLISH"),
    [SPECIES_JELLICENT] = _("JELLICENT"),
    [SPECIES_ALOMOMOLA] = _("ALOMOMOLA"),
    [SPECIES_JOLTIK] = _("JOLTIK"),
    [SPECIES_GALVANTULA] = _("GALVANTULA"),
    [SPECIES_FERROSEED] = _("FERROSEED"),
    [SPECIES_FERROTHORN] = _("FERROTHORN"),
    [SPECIES_KLINK] = _("KLINK"),
    [SPECIES_KLANG] = _("KLANG"),
    [SPECIES_KLINKLANG] = _("KLINKLANG"),
    [SPECIES_TYNAMO] = _("TYNAMO"),
    [SPECIES_EELEKTRIK] = _("EELEKTRIK"),
    [SPECIES_EELEKTROSS] = _("EELEKTROSS"),
    [SPECIES_ELGYEM] = _("ELGYEM"),
    [SPECIES_BEHEEYEM] = _("BEHEEYEM"),
    [SPECIES_LITWICK] = _("LITWICK"),
    [SPECIES_LAMPENT] = _("LAMPENT"),
    [SPECIES_CHANDELURE] = _("CHANDELURE"),
    [SPECIES_AXEW] = _("AXEW"),
    [SPECIES_FRAXURE] = _("FRAXURE"),
    [SPECIES_HAXORUS] = _("HAXORUS"),
    [SPECIES_CUBCHOO] = _("CUBCHOO"),
    [SPECIES_BEARTIC] = _("BEARTIC"),
    [SPECIES_CRYOGONAL] = _("CRYOGONAL"),
    [SPECIES_SHELMET] = _("SHELMET"),
    [SPECIES_ACCELGOR] = _("ACCELGOR"),
    [SPECIES_STUNFISK] = _("STUNFISK"),
    [SPECIES_MIENFOO] = _("MIENFOO"),
    [SPECIES_MIENSHAO] = _("MIENSHAO"),
    [SPECIES_DRUDDIGON] = _("DRUDDIGON"),
    [SPECIES_GOLETT] = _("GOLETT"),
    [SPECIES_GOLURK] = _("GOLURK"),
    [SPECIES_PAWNIARD] = _("PAWNIARD"),
    [SPECIES_BISHARP] = _("BISHARP"),
    [SPECIES_BOUFFALANT] = _("BOUFFALANT"),
    [SPECIES_RUFFLET] = _("RUFFLET"),
    [SPECIES_BRAVIARY] = _("BRAVIARY"),
    [SPECIES_VULLABY] = _("VULLABY"),
    [SPECIES_MANDIBUZZ] = _("MANDIBUZZ"),
    [SPECIES_HEATMOR] = _("HEATMOR"),
    [SPECIES_DURANT] = _("DURANT"),
    [SPECIES_DEINO] = _("DEINO"),
    [SPECIES_ZWEILOUS] = _("ZWEILOUS"),
    [SPECIES_HYDREIGON] = _("HYDREIGON"),
    [SPECIES_LARVESTA] = _("LARVESTA"),
    [SPECIES_VOLCARONA] = _("VOLCARONA"),
    [SPECIES_COBALION] = _("COBALION"),
    [SPECIES_TERRAKION] = _("TERRAKION"),
    [SPECIES_VIRIZION] = _("VIRIZION"),
    [SPECIES_TORNADUS] = _("TORNADUS"),
    [SPECIES_THUNDURUS] = _("THUNDURUS"),
    [SPECIES_RESHIRAM] = _("RESHIRAM"),
    [SPECIES_ZEKROM] = _("ZEKROM"),
    [SPECIES_LANDORUS] = _("LANDORUS"),
    [SPECIES_KYUREM] = _("KYUREM"),
    [SPECIES_KYUREM_BLACK] = _("KYUREM"),
    [SPECIES_KYUREM_WHITE] = _("KYUREM"),
    [SPECIES_KELDEO] = _("KELDEO"),
    [SPECIES_MELOETTA] = _("MELOETTA"),
    [SPECIES_GENESECT] = _("GENESECT"),
    [SPECIES_CHESPIN] = _("CHESPIN"),
    [SPECIES_QUILLADIN] = _("QUILLADIN"),
    [SPECIES_CHESNAUGHT] = _("CHESNAUGHT"),
    [SPECIES_FENNEKIN] = _("FENNEKIN"),
    [SPECIES_BRAIXEN] = _("BRAIXEN"),
    [SPECIES_DELPHOX] = _("DELPHOX"),
    [SPECIES_FROAKIE] = _("FROAKIE"),
    [SPECIES_FROGADIER] = _("FROGADIER"),
    [SPECIES_GRENINJA] = _("GRENINJA"),
    [SPECIES_BUNNELBY] = _("BUNNELBY"),
    [SPECIES_DIGGERSBY] = _("DIGGERSBY"),
    [SPECIES_FLETCHLING] = _("FLETCHLING"),
    [SPECIES_FLETCHINDER] = _("FLECHINDER"),
    [SPECIES_TALONFLAME] = _("TALONFLAME"),
    [SPECIES_SCATTERBUG] = _("SCATTERBUG"),
    [SPECIES_SPEWPA] = _("SPEWPA"),
    [SPECIES_VIVILLON] = _("VIVILLON"),
    [SPECIES_LITLEO] = _("LITLEO"),
    [SPECIES_PYROAR] = _("PYROAR"),
    [SPECIES_FLABEBE] = _("FLABÉBÉ"),
    [SPECIES_FLOETTE] = _("FLOETTE"),
    [SPECIES_FLORGES] = _("FLORGES"),
    [SPECIES_SKIDDO] = _("SKIDDO"),
    [SPECIES_GOGOAT] = _("GOGOAT"),
    [SPECIES_PANCHAM] = _("PANCHAM"),
    [SPECIES_PANGORO] = _("PANGORO"),
    [SPECIES_FURFROU] = _("FURFROU"),
    [SPECIES_ESPURR] = _("ESPURR"),
    [SPECIES_MEOWSTIC] = _("MEOWSTIC"),
    [SPECIES_MEOWSTIC_F] = _("MEOWSTIC"),
    [SPECIES_HONEDGE] = _("HONEDGE"),
    [SPECIES_DOUBLADE] = _("DOUBLADE"),
    [SPECIES_AEGISLASH] = _("AEGISLASH"),
    [SPECIES_SPRITZEE] = _("SPRITZEE"),
    [SPECIES_AROMATISSE] = _("AROMATISSE"),
    [SPECIES_SWIRLIX] = _("SWIRLIX"),
    [SPECIES_SLURPUFF] = _("SLURPUFF"),
    [SPECIES_INKAY] = _("INKAY"),
    [SPECIES_MALAMAR] = _("MALAMAR"),
    [SPECIES_BINACLE] = _("BINACLE"),
    [SPECIES_BARBARACLE] = _("BARBARACLE"),
    [SPECIES_SKRELP] = _("SKRELP"),
    [SPECIES_DRAGALGE] = _("DRAGALGE"),
    [SPECIES_CLAUNCHER] = _("CLAUNCHER"),
    [SPECIES_CLAWITZER] = _("CLAWITZER"),
    [SPECIES_HELIOPTILE] = _("HELIOPTILE"),
    [SPECIES_HELIOLISK] = _("HELIOLISK"),
    [SPECIES_TYRUNT] = _("TYRUNT"),
    [SPECIES_TYRANTRUM] = _("TYRANTRUM"),
    [SPECIES_AMAURA] = _("AMAURA"),
    [SPECIES_AURORUS] = _("AURORUS"),
    [SPECIES_SYLVEON] = _("SYLVEON"),
    [SPECIES_HAWLUCHA] = _("HAWLUCHA"),
    [SPECIES_DEDENNE] = _("DEDENNE"),
    [SPECIES_CARBINK] = _("CARBINK"),
    [SPECIES_GOOMY] = _("GOOMY"),
    [SPECIES_SLIGGOO] = _("SLIGGOO"),
    [SPECIES_GOODRA] = _("GOODRA"),
    [SPECIES_KLEFKI] = _("KLEFKI"),
    [SPECIES_PHANTUMP] = _("PHANTUMP"),
    [SPECIES_TREVENANT] = _("TREVENANT"),
    [SPECIES_PUMPKABOO] = _("PUMPKABOO"),
    [SPECIES_GOURGEIST] = _("GOURGEIST"),
    [SPECIES_BERGMITE] = _("BERGMITE"),
    [SPECIES_AVALUGG] = _("AVALUGG"),
    [SPECIES_NOIBAT] = _("NOIBAT"),
    [SPECIES_NOIVERN] = _("NOIVERN"),
    [SPECIES_XERNEAS] = _("XERNEAS"),
    [SPECIES_YVELTAL] = _("YVELTAL"),
    [SPECIES_ZYGARDE] = _("ZYGARDE"),
    [SPECIES_DIANCIE] = _("DIANCIE"),
    [SPECIES_HOOPA] = _("HOOPA"),
    [SPECIES_VOLCANION] = _("VOLCANION"),
    [SPECIES_ROWLET] = _("ROWLET"),
    [SPECIES_DARTRIX] = _("DARTRIX"),
    [SPECIES_DECIDUEYE] = _("DECIDUEYE"),
    [SPECIES_LITTEN] = _("LITTEN"),
    [SPECIES_TORRACAT] = _("TORRACAT"),
    [SPECIES_INCINEROAR] = _("INCINEROAR"),
    [SPECIES_POPPLIO] = _("POPPLIO"),
    [SPECIES_BRIONNE] = _("BRIONNE"),
    [SPECIES_PRIMARINA] = _("PRIMARINA"),
    [SPECIES_PIKIPEK] = _("PIKIPEK"),
    [SPECIES_TRUMBEAK] = _("TRUMBEAK"),
    [SPECIES_TOUCANNON] = _("TOUCANNON"),
    [SPECIES_YUNGOOS] = _("YUNGOOS"),
    [SPECIES_GUMSHOOS] = _("GUMSHOOS"),
    [SPECIES_GRUBBIN] = _("GRUBBIN"),
    [SPECIES_CHARJABUG] = _("CHARJABUG"),
    [SPECIES_VIKAVOLT] = _("VIKAVOLT"),
    [SPECIES_CRABRAWLER] = _("CRABRAWLER"),
    [SPECIES_CRABOMINABLE] = _("CRABMINABL"),
    [SPECIES_ORICORIO] = _("ORICORIO"),
    [SPECIES_CUTIEFLY] = _("CUTIEFLY"),
    [SPECIES_RIBOMBEE] = _("RIBOMBEE"),
    [SPECIES_ROCKRUFF] = _("ROCKRUFF"),
    [SPECIES_LYCANROC] = _("LYCANROC"),
    [SPECIES_WISHIWASHI] = _("WISHIWASHI"),
    [SPECIES_MAREANIE] = _("MAREANIE"),
    [SPECIES_TOXAPEX] = _("TOXAPEX"),
    [SPECIES_MUDBRAY] = _("MUDBRAY"),
    [SPECIES_MUDSDALE] = _("MUDSDALE"),
    [SPECIES_DEWPIDER] = _("DEWPIDER"),
    [SPECIES_ARAQUANID] = _("ARAQUANID"),
    [SPECIES_FOMANTIS] = _("FOMANTIS"),
    [SPECIES_LURANTIS] = _("LURANTIS"),
    [SPECIES_MORELULL] = _("MORELULL"),
    [SPECIES_SHIINOTIC] = _("SHIINOTIC"),
    [SPECIES_SALANDIT] = _("SALANDIT"),
    [SPECIES_SALAZZLE] = _("SALAZZLE"),
    [SPECIES_STUFFUL] = _("STUFFUL"),
    [SPECIES_BEWEAR] = _("BEWEAR"),
    [SPECIES_BOUNSWEET] = _("BOUNSWEET"),
    [SPECIES_STEENEE] = _("STEENEE"),
    [SPECIES_TSAREENA] = _("TSAREENA"),
    [SPECIES_COMFEY] = _("COMFEY"),
    [SPECIES_ORANGURU] = _("ORANGURU"),
    [SPECIES_PASSIMIAN] = _("PASSIMIAN"),
    [SPECIES_WIMPOD] = _("WIMPOD"),
    [SPECIES_GOLISOPOD] = _("GOLISOPOD"),
    [SPECIES_SANDYGAST] = _("SANDYGAST"),
    [SPECIES_PALOSSAND] = _("PALOSSAND"),
    [SPECIES_PYUKUMUKU] = _("PYUKUMUKU"),
    [SPECIES_TYPE_NULL] = _("TYPE: NULL"),
    [SPECIES_SILVALLY] = _("SILVALLY"),
    [SPECIES_MINIOR] = _("MINIOR"),
    [SPECIES_KOMALA] = _("KOMALA"),
    [SPECIES_TURTONATOR] = _("TURTONATOR"),
    [SPECIES_TOGEDEMARU] = _("TOGEDEMARU"),
    [SPECIES_MIMIKYU] = _("MIMIKYU"),
    [SPECIES_BRUXISH] = _("BRUXISH"),
    [SPECIES_DRAMPA] = _("DRAMPA"),
    [SPECIES_DHELMISE] = _("DHELMISE"),
    [SPECIES_JANGMO_O] = _("JANGMO-O"),
    [SPECIES_HAKAMO_O] = _("HAKAMO-O"),
    [SPECIES_KOMMO_O] = _("KOMMO-O"),
    [SPECIES_TAPU_KOKO] = _("TAPU KOKO"),
    [SPECIES_TAPU_LELE] = _("TAPU LELE"),
    [SPECIES_TAPU_BULU] = _("TAPU BULU"),
    [SPECIES_TAPU_FINI] = _("TAPU FINI"),
    [SPECIES_COSMOG] = _("COSMOG"),
    [SPECIES_COSMOEM] = _("COSMOEM"),
    [SPECIES_SOLGALEO] = _("SOLGALEO"),
    [SPECIES_LUNALA] = _("LUNALA"),
    [SPECIES_NIHILEGO] = _("NIHILEGO"),
    [SPECIES_BUZZWOLE] = _("BUZZWOLE"),
    [SPECIES_PHEROMOSA] = _("PHEROMOSA"),
    [SPECIES_XURKITREE] = _("XURKITREE"),
    [SPECIES_CELESTEELA] = _("CELESTEELA"),
    [SPECIES_KARTANA] = _("KARTANA"),
    [SPECIES_GUZZLORD] = _("GUZZLORD"),
    [SPECIES_NECROZMA] = _("NECROZMA"),
    [SPECIES_MAGEARNA] = _("MAGEARNA"),
    [SPECIES_MARSHADOW] = _("MARSHADOW"),
    [SPECIES_POIPOLE] = _("POIPOLE"),
    [SPECIES_NAGANADEL] = _("NAGANADEL"),
    [SPECIES_STAKATAKA] = _("STAKATAKA"),
    [SPECIES_BLACEPHALON] = _("BLACEFALON"),
    [SPECIES_ZERAORA] = _("ZERAORA"),
    [SPECIES_MELTAN] = _("MELTAN"),
    [SPECIES_MELMETAL] = _("MELMETAL"),

    [SPECIES_MEGA_VENUSAUR] = _("VENUSAUR"),
    [SPECIES_MEGA_CHARIZARD_X] = _("CHARIZARD"),
    [SPECIES_MEGA_CHARIZARD_Y] = _("CHARIZARD"),
    [SPECIES_MEGA_BLASTOISE] = _("BLASTOISE"),
    [SPECIES_MEGA_BEEDRILL] = _("BEEDRILL"),
    [SPECIES_MEGA_PIDGEOT] = _("PIDGEOT"),
    [SPECIES_MEGA_ALAKAZAM] = _("ALAKAZAM"),
    [SPECIES_MEGA_SLOWBRO] = _("SLOWBRO"),
    [SPECIES_MEGA_GENGAR] = _("GENGAR"),
    [SPECIES_MEGA_KANGASKHAN] = _("KANGASKHAN"),
    [SPECIES_MEGA_PINSIR] = _("PINSIR"),
    [SPECIES_MEGA_GYARADOS] = _("GYARADOS"),
    [SPECIES_MEGA_AERODACTYL] = _("AERODACTYL"),
    [SPECIES_MEGA_MEWTWO_X] = _("MEWTWO"),
    [SPECIES_MEGA_MEWTWO_Y] = _("MEWTWO"),
    [SPECIES_MEGA_AMPHAROS] = _("AMPHAROS"),
    [SPECIES_MEGA_STEELIX] = _("STEELIX"),
    [SPECIES_MEGA_SCIZOR] = _("SCIZOR"),
    [SPECIES_MEGA_HERACROSS] = _("HERACROSS"),
    [SPECIES_MEGA_HOUNDOOM] = _("HOUNDOOM"),
    [SPECIES_MEGA_TYRANITAR] = _("TYRANITAR"),
    [SPECIES_MEGA_SCEPTILE] = _("SCEPTILE"),
    [SPECIES_MEGA_BLAZIKEN] = _("BLAZIKEN"),
    [SPECIES_MEGA_SWAMPERT] = _("SWAMPERT"),
    [SPECIES_MEGA_GARDEVOIR] = _("GARDEVOIR"),
    [SPECIES_MEGA_SABLEYE] = _("SABLEYE"),
    [SPECIES_MEGA_MAWILE] = _("MAWILE"),
    [SPECIES_MEGA_AGGRON] = _("AGGRON"),
    [SPECIES_MEGA_MEDICHAM] = _("MEDICHAM"),
    [SPECIES_MEGA_MANECTRIC] = _("MANECTRIC"),
    [SPECIES_MEGA_SHARPEDO] = _("SHARPEDO"),
    [SPECIES_MEGA_CAMERUPT] = _("CAMERUPT"),
    [SPECIES_MEGA_ALTARIA] = _("ALTARIA"),
    [SPECIES_MEGA_BANETTE] = _("BANETTE"),
    [SPECIES_MEGA_ABSOL] = _("ABSOL"),
    [SPECIES_MEGA_GLALIE] = _("GLALIE"),
    [SPECIES_MEGA_SALAMENCE] = _("SALAMENCE"),
    [SPECIES_MEGA_METAGROSS] = _("METAGROSS"),
    [SPECIES_MEGA_LATIAS] = _("LATIAS"),
    [SPECIES_MEGA_LATIOS] = _("LATIOS"),
    [SPECIES_PRIMAL_KYOGRE] = _("KYOGRE"),
    [SPECIES_PRIMAL_GROUDON] = _("GROUDON"),
    [SPECIES_MEGA_RAYQUAZA] = _("RAYQUAZA"),
    [SPECIES_MEGA_LOPUNNY] = _("LOPUNNY"),
    [SPECIES_MEGA_GARCHOMP] = _("GARCHOMP"),
    [SPECIES_MEGA_LUCARIO] = _("LUCARIO"),
    [SPECIES_MEGA_ABOMASNOW] = _("ABOMASNOW"),
    [SPECIES_MEGA_GALLADE] = _("GALLADE"),
    [SPECIES_MEGA_AUDINO] = _("AUDINO"),
    [SPECIES_MEGA_DIANCIE] = _("DIANCIE"),

    [SPECIES_ALOLAN_RATTATA] = _("RATTATA"),
    [SPECIES_ALOLAN_RATICATE] = _("RATICATE"),
    [SPECIES_ALOLAN_RAICHU] = _("RAICHU"),
    [SPECIES_ALOLAN_SANDSHREW] = _("SANDSHREW"),
    [SPECIES_ALOLAN_SANDSLASH] = _("SANDSLASH"),
    [SPECIES_ALOLAN_VULPIX] = _("VULPIX"),
    [SPECIES_ALOLAN_NINETALES] = _("NINETALES"),
    [SPECIES_ALOLAN_DIGLETT] = _("DIGLETT"),
    [SPECIES_ALOLAN_DUGTRIO] = _("DUGTRIO"),
    [SPECIES_ALOLAN_MEOWTH] = _("MEOWTH"),
    [SPECIES_ALOLAN_PERSIAN] = _("PERSIAN"),
    [SPECIES_ALOLAN_GEODUDE] = _("GEODUDE"),
    [SPECIES_ALOLAN_GRAVELER] = _("GRAVELER"),
    [SPECIES_ALOLAN_GOLEM] = _("GOLEM"),
    [SPECIES_ALOLAN_GRIMER] = _("GRIMER"),
    [SPECIES_ALOLAN_MUK] = _("MUK"),
    [SPECIES_ALOLAN_EXEGGUTOR] = _("EXEGGUTOR"),
    [SPECIES_ALOLAN_MAROWAK] = _("MAROWAK"),

    [SPECIES_SHAYMIN_SKY] = _("SHAYMIN"),
    [SPECIES_GIRATINA_ORIGIN] = _("GIRATINA"),
    [SPECIES_DARMANITAN_ZEN] = _("DARMANITAN"),
    [SPECIES_TORNADUS_THERIAN] = _("TORNADUS"),
    [SPECIES_THUNDURUS_THERIAN] = _("THUNDURUS"),
    [SPECIES_LANDORUS_THERIAN] = _("LANDORUS"),
    [SPECIES_MELOETTA_PIROUETTE] = _("MELOETTA"),
    [SPECIES_AEGISLASH_BLADE] = _("AEGISLASH"),
    [SPECIES_HOOPA_UNBOUND] = _("HOOPA"),
    [SPECIES_MINIOR_CORE] = _("MINIOR"),
    [SPECIES_WISHIWASHI_SCHOOL] = _("WISHIWASHI"),
};
