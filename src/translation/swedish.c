#include "translation/common.h"
#include "translation/translation.h"

static translation_string all_strings[] = {
    {TR_NO_PATCH_TITLE, "Uppdatering 1.0.1.0 inte installerad"},
    {TR_NO_PATCH_MESSAGE,
        "Din Caesar 3-installation har inte uppdatering 1.0.1.0 installerad. "
        "Du kan ladda ner installationen från:\n"
        URL_PATCHES "\n"
        "Fortsätt på egen risk."},
    {TR_MISSING_FONTS_TITLE, "Saknade typsnitt"},
    {TR_MISSING_FONTS_MESSAGE,
        "Din Caesar 3-installation behöver extra typsnittsfiler. "
        "Du kan ladda ner dem för ditt språk från:\n"
    URL_PATCHES},
    {TR_NO_EDITOR_TITLE, "Redigeringsverktyg inte installerade"},
    {TR_NO_EDITOR_MESSAGE,
        "Din Caesar 3 installation saknar redigeringsfilerna. "
        "Du kan ladda ner dom från:\n"
    URL_EDITOR},
    {TR_INVALID_LANGUAGE_TITLE, "Ogiltig språkmapp"},
    {TR_INVALID_LANGUAGE_MESSAGE,
        "Den valda mappen innehåller inte ett giltigt språkpaket. "
        "Kolla i loggen efter fel."},
    {TR_BUTTON_OK, "OK"},
    {TR_BUTTON_CANCEL, "Avbryt"},
    {TR_BUTTON_RESET_DEFAULTS, "Återställ förval"},
    {TR_BUTTON_CONFIGURE_HOTKEYS, "Kortkommando"},
	{TR_BUTTON_NEXT, "+"},
    {TR_BUTTON_PREV, "-"},			  
    {TR_CONFIG_TITLE, "Augustus-konfigurationer"},
    {TR_CONFIG_LANGUAGE_LABEL, "Språk:"},
    {TR_CONFIG_LANGUAGE_DEFAULT, "(förval)"},
	{TR_CONFIG_PAGE_LABEL, "Sida"},				   
    {TR_CONFIG_HEADER_UI_CHANGES, "Användargränssnittsändringar"},
    {TR_CONFIG_HEADER_GAMEPLAY_CHANGES, "Spelinställningar"},
    {TR_CONFIG_SHOW_INTRO_VIDEO, "Visa introduktionsfilmer"},
    {TR_CONFIG_SIDEBAR_INFO, "Extra information i kontrollpanelen"},
    {TR_CONFIG_SMOOTH_SCROLLING, "Mjuk skrollning"},
    {TR_CONFIG_DISABLE_RIGHT_CLICK_MAP_DRAG, "Inaktivera högerklicka för att dra kartan"},
    {TR_CONFIG_VISUAL_FEEDBACK_ON_DELETE, "Öka visuel återkoppling vid rensning av land"},
    {TR_CONFIG_ALLOW_CYCLING_TEMPLES, "Tillåt att bygga varje tempel i följd"},
    {TR_CONFIG_SHOW_WATER_STRUCTURE_RANGE, "Visa räckvidd vid bygge av reservoarer, fontäner och brunnar"},
    {TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Visa dragbar byggnadsstorlek"},
    {TR_CONFIG_HIGHLIGHT_LEGIONS, "Markera legion när muspekaren är över den"},
	{TR_CONFIG_ROTATE_MANUALLY, "Rotera grindstugor och triumfarken med kortkommando"},
    {TR_CONFIG_SHOW_MILITARY_SIDEBAR, "Visa militär sidopanel"},
    {TR_CONFIG_FIX_IMMIGRATION_BUG, "Fixa invandringsproblem vid väldigt svårt svårighetsgrad"},
    {TR_CONFIG_FIX_100_YEAR_GHOSTS, "Fixa 100-års spöken"},
    {TR_CONFIG_FIX_EDITOR_EVENTS, "Fixa kejsarbyte och överlevnadstid i användaruppdrag"},
	{TR_CONFIG_DRAW_WALKER_WAYPOINTS, "Efter att du har klickat på en byggnad, visa en översikt över vandrarens vägpunkt."},
    {TR_CONFIG_ENABLE_ZOOM, "Slå på zoom (kan vara långsamt, använder mer RAM)"},
    {TR_CONFIG_COMPLETE_RATING_COLUMNS, "Fixa ofullständiga ställningspelare för låga mål"},
    {TR_CONFIG_GRANDFESTIVAL, "Storslagen festival möjliggör ytterligare en gåva från en gud"},
    {TR_CONFIG_JEALOUS_GODS, "Stäng av svartsjuka gudar"},
    {TR_CONFIG_GLOBAL_LABOUR, "Slå på global arbetsstyrka"},
    {TR_CONFIG_SCHOOL_WALKERS, "Förläng skolvandrares räckvidd"},
    {TR_CONFIG_RETIRE_AT_60, "Ändra medborgares pensionsålder från 50 till 60"},
    {TR_CONFIG_FIXED_WORKERS, "Fixerad arbetsstyrka - 38% av plebejbefolkningen"},
    {TR_CONFIG_EXTRA_FORTS, "Tillåt byggandet av 4 extra fort"},
    {TR_CONFIG_WOLVES_BLOCK, "Förbjudet att bygga i närheten av vargar"},
    {TR_CONFIG_DYNAMIC_GRANARIES, "Blockera ej sammankopplade sädesmagasinvägar"},
    {TR_CONFIG_MORE_STOCKPILE, "Hus lagrar fler varor från marknader"},
    {TR_CONFIG_NO_BUYER_DISTRIBUTION, "Köpande marknadshandlare distribuerar ej varor"},
    {TR_CONFIG_IMMEDIATELY_DELETE_BUILDINGS, "Förstör byggnader direkt"},
    {TR_CONFIG_GETTING_GRANARIES_GO_OFFROAD, "Vagndragare från hämtande-sädesmagasin kan gå av vägarna"},
    {TR_CONFIG_GRANARIES_GET_DOUBLE, "Dubblera vagndragares kapacitet från hämtande-sädesmagasin"},
    {TR_CONFIG_TOWER_SENTRIES_GO_OFFROAD, "Tornvaktposter behöver inte vägtillgång till förläggningar"},
    {TR_CONFIG_FARMS_DELIVER_CLOSE, "Lantbruk och fiskehamnar levererar endast varor till närliggande sädesmagasin"},
    {TR_CONFIG_DELIVER_ONLY_TO_ACCEPTING_GRANARIES, "Mat levereras inte till hämtande-sädesmagasin"},
    {TR_CONFIG_ALL_HOUSES_MERGE, "Alla hus sammanfogas"},
    {TR_CONFIG_WINE_COUNTS_IF_OPEN_TRADE_ROUTE, "Öppna handelsvägar räknas som tillhandahållning av olika vinsorter"},
    {TR_CONFIG_RANDOM_COLLAPSES_TAKE_MONEY, "Slumpmässigt kollapsade lertag och malmbrott tar lite pengar istället"},
    {TR_CONFIG_MULTIPLE_BARRACKS, "Tillåt byggandet av flera förläggningar" },
    {TR_CONFIG_NOT_ACCEPTING_WAREHOUSES, "Handelsmagasin accepterar ingenting när de har byggts"},
    {TR_CONFIG_HOUSES_DONT_EXPAND_INTO_GARDENS, "Hus expanderar inte in i trädgårdar"},						
    {TR_HOTKEY_TITLE, "Augustus kortkommandoinställningar"},
    {TR_HOTKEY_LABEL, "Kortkommando"},
    {TR_HOTKEY_ALTERNATIVE_LABEL, "Alternativ"},
    {TR_HOTKEY_HEADER_ARROWS, "Piltangenter"},
    {TR_HOTKEY_HEADER_GLOBAL, "Globala kortkommandon"},
    {TR_HOTKEY_HEADER_CITY, "Stadskortkommandon"},
    {TR_HOTKEY_HEADER_ADVISORS, "Rådgivare"},
    {TR_HOTKEY_HEADER_OVERLAYS, "Överlägg"},
    {TR_HOTKEY_HEADER_BOOKMARKS, "Stadskartebokmärken"},
    {TR_HOTKEY_HEADER_EDITOR, "Redigeringsverktyg"},
    {TR_HOTKEY_HEADER_BUILD, "Byggnadskortkommandon"},
    {TR_HOTKEY_ARROW_UP, "Upp"},
    {TR_HOTKEY_ARROW_DOWN, "Ner"},
    {TR_HOTKEY_ARROW_LEFT, "Vänster"},
    {TR_HOTKEY_ARROW_RIGHT, "Höger"},
    {TR_HOTKEY_TOGGLE_FULLSCREEN, "Fullskärm"},
    {TR_HOTKEY_CENTER_WINDOW, "Centrera fönster"},
    {TR_HOTKEY_RESIZE_TO_640, "Sätt fönster till 640x480"},
    {TR_HOTKEY_RESIZE_TO_800, "Sätt fönster till 800x600"},
    {TR_HOTKEY_RESIZE_TO_1024, "Sätt fönster till 1024x768"},
    {TR_HOTKEY_SAVE_SCREENSHOT, "Spara skärmdump"},
    {TR_HOTKEY_SAVE_CITY_SCREENSHOT, "Spara staden som skärmdump"},
    {TR_HOTKEY_BUILD_CLONE, "Klona byggnad under pekaren"},
    {TR_HOTKEY_LOAD_FILE, "Öppna fil"},
    {TR_HOTKEY_SAVE_FILE, "Spara fil"},
    {TR_HOTKEY_INCREASE_GAME_SPEED, "Öka spelhastighet"},
    {TR_HOTKEY_DECREASE_GAME_SPEED, "Minska spelhastighet"},
    {TR_HOTKEY_TOGGLE_PAUSE, "Pausa"},
    {TR_HOTKEY_CYCLE_LEGION, "Växla mellan legioner"},
    {TR_HOTKEY_ROTATE_MAP_LEFT, "Rotera kartan vänster"},
    {TR_HOTKEY_ROTATE_MAP_RIGHT, "Rotera kartan höger"},
    {TR_HOTKEY_SHOW_ADVISOR_LABOR, "Arbetarrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_MILITARY, "Militärrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_IMPERIAL, "Imperierådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_RATINGS, "Ställningsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_TRADE, "Handelsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_POPULATION, "Befolkningsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_HEALTH, "Hälsorådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_EDUCATION, "Utbildningsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_ENTERTAINMENT, "Nöjesrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_RELIGION, "Religionsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_FINANCIAL, "Ekonomirådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_CHIEF, "Huvudrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_HOUSING, "Bostadsrådgivare", },
    {TR_HOTKEY_TOGGLE_OVERLAY, "Slå på/av nuvarande översikt"},
    {TR_HOTKEY_SHOW_OVERLAY_WATER, "Vattenöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_FIRE, "Eldöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_DAMAGE, "Skadeöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_CRIME, "Brottsöversikt"},
	{TR_HOTKEY_ROTATE_BUILDING, "Rotera byggnad"},											   
    {TR_HOTKEY_SHOW_OVERLAY_PROBLEMS, "Problemöversikt"},
    {TR_HOTKEY_GO_TO_BOOKMARK_1, "Gå till bokmärke 1"},
    {TR_HOTKEY_GO_TO_BOOKMARK_2, "Gå till bokmärke 2"},
    {TR_HOTKEY_GO_TO_BOOKMARK_3, "Gå till bokmärke 3"},
    {TR_HOTKEY_GO_TO_BOOKMARK_4, "Gå till bokmärke 4"},
    {TR_HOTKEY_SET_BOOKMARK_1, "Sätt bokmärke 1"},
    {TR_HOTKEY_SET_BOOKMARK_2, "Sätt bokmärke 2"},
    {TR_HOTKEY_SET_BOOKMARK_3, "Sätt bokmärke 3"},
    {TR_HOTKEY_SET_BOOKMARK_4, "Sätt bokmärke 4"},
    {TR_HOTKEY_EDITOR_TOGGLE_BATTLE_INFO, "Slå på/av stridsinformation"},
    {TR_HOTKEY_EDIT_TITLE, "Nytt kortkommando"},
	{TR_BUILDING_ROADBLOCK, "Vägspärr"},
    {TR_BUILDING_ROADBLOCK_DESC, "Vägspärrar stoppar strövande medborgare."},
    {TR_BUILDING_ENGINEER_GUILD, "Ingenjörsskrå" },
    {TR_BUILDING_ENGINEER_GUILD_DESC, "Ingenjörer här arbetar flitigt för att konstruera monument i Roms ära." },
    {TR_BUILDING_GRAND_TEMPLE_ADD_MODULE, "Skänker en epitet till ett tempel" },
    {TR_BUILDING_GRAND_TEMPLE_CERES, "Ceres storslaget tempel" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE, "Neptunus storslaget tempel" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY, "Merkurius storslaget tempel" },
    {TR_BUILDING_GRAND_TEMPLE_MARS, "Mars storslaget tempel" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS, "Venus storslaget tempel" },
    {TR_BUILDING_PANTHEON, "Pantheon" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC, "Storslaget tempel till Ceres" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC, "Storslaget tempel till Neptunus" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC, "Storslaget tempel till Merkurius" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC, "Storslaget tempel till Mars" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC, "Storslaget tempel till Venus" },
    {TR_BUILDING_PANTHEON_DESC, "Pantheon är en helgedom åt alla gudar" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_BONUS_DESC, "Vagndragare från lantgårdar går 50% snabbare" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_BONUS_DESC, "Ger +1 räckvidd för fontäner och brunnar, samt +2 till reservoarer. Antalet anställda som krävs till vattentjänstebyggnader minskar med 50%. Handelsfartyg seglar 25% snabbare." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_BONUS_DESC, "Köpmannakaravaner samt handelsskepp har 50% mer kapacitet. Köpmannakaravaner rör sig 25% snabbare." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_BONUS_DESC, "Utbildar soldater som en förläggning. Ytterligare fyra fort kan byggas." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_BONUS_DESC, "Stadens trädgårdar, statyer och tempel glänser med förhöjd skönhet, vilket ökar deras attraktionsvärde. Hus lagrar fler varor och de övergår till lägre nivåer i en långsammare takt." },
    {TR_BUILDING_PANTHEON_BONUS_DESC, "Förser åtkomst till alla gudar. Arrangerar årliga festivaler och minskar tempelavgifter med 25%." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_1_DESC, "Präster minskar matåtgången med 20%." },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_1_DESC, "Tempel producerar körsven till hippodromen." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_1_DESC, "Präster minskar kruk- och möbelåtgången med 20%." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_1_DESC, "Tempel genererar mat, mängden baseras på antalet hus de täcker, och levererar det till förnödenhetsstation." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_1_DESC, "Det storslagna templet producerar vin i en kvantitet som baseras på hur stor andel av befolkningen som har åtkomst till Venustempel. Tempel samlar in och distribuerar det till husen." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_2_DESC, "Präster samlar in och distribuerar både olja och en sorts mat från stadens magasin." },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_2_DESC, "Präster expanderar husens kapacitet med 5%. Det storslagna templet förser vatten som en fylld reservoar." },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_2_DESC, "Präster minskat olje- och vinkonsumptionen med 20%." },
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_2_DESC, "Präster minskar konsumptionen av alla varor med 10%." },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_2_DESC, "Präster bidrar med underhållning och förfinar husen överlag, vilket ökar attraktionsvärdet i området utan att ytterligare dekorationer krävs." },
    {TR_BUILDING_PANTHEON_MODULE_1_DESC, "Alla stadens tempel skickar präster till Pantheon, och sprider tron och välsignelser från deras respektive gudar." },
    {TR_BUILDING_PANTHEON_MODULE_2_DESC, "Hus med åtkomst till Pantheon kan utvecklas ytterligare en nivå." },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_1, "Ceres tempel Promitor" },
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_2, "Ceres tempel Reparator" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_1, "Neptunus tempel Equester" },
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_2, "Neptunus tempel Adiutor" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_1, "Merkurius tempel Fortunus" },
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_2, "Merkurius tempel Abundantia" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_1, "Mars Mars tempel Ultor" },
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_2, "Mars Mars tempel Quirinus" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_1, "Venus tempel Verticordia" },
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_2, "Venus tempel Genetrix" },
    {TR_BUILDING_PANTHEON_DESC_MODULE_1, "Pantheum Ara Maxima" },
    {TR_BUILDING_PANTHEON_DESC_MODULE_2, "Pantheum Roma Aeterna" },
    {TR_BUILDING_GRAND_TEMPLE_MENU, "Storslaget tempel" },
    {TR_BUILDING_WORK_CAMP, "Arbetarläger" },
    {TR_BUILDING_WORK_CAMP_DESC, "Arbetare samlas här för att förflytta material till byggarbetsplatser." },
    {TR_HEADER_HOUSING, "Bostäder"},
    {TR_ADVISOR_HOUSING_ROOM, "Stadens bostäder har plats för"},
    {TR_ADVISOR_HOUSING_NO_ROOM, "Det finns inget tillgängligt utrymme för inhysande."},
    {TR_ADVISOR_RESIDENCES_DEMANDING_POTTERY, "Bostäder kräver krukor"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_FURNITURE, "Bostäder kräver möbler"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_OIL, "Bostäder kräver olja"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_WINE, "Bostäder kräver vin"},
    {TR_ADVISOR_TOTAL_NUM_HOUSES, "Totala bostäder:"},
    {TR_ADVISOR_AVAILABLE_HOUSING_CAPACITY, "Tillgänglig kapacitet:"},
    {TR_ADVISOR_TOTAL_HOUSING_CAPACITY, "Total kapacitet:"},
    {TR_ADVISOR_ADVISOR_HEADER_HOUSING, "Befolkning - Bostäder"},
    {TR_ADVISOR_BUTTON_GRAPHS, "Grafer"},
    {TR_ADVISOR_HOUSING_PROSPERITY_RATING, "Bostadsvälståndsställning är"},
    {TR_ADVISOR_PERCENTAGE_IN_VILLAS_PALACES, "Andelen av din befolkning som bor i villor och palats är"},
    {TR_ADVISOR_PERCENTAGE_IN_TENTS_SHACKS, "Andelen av din befolkning som bor i tält och skjul är"},
    {TR_ADVISOR_AVERAGE_TAX, "Genomsnittlig skatteinkomst per bostad är"},
    {TR_ADVISOR_AVERAGE_AGE, "Medelåldern för din befolkning är"},
    {TR_ADVISOR_PERCENT_IN_WORKFORCE, "Andelen av din befolkning i arbetskraften är"},
    {TR_ADVISOR_BIRTHS_LAST_YEAR, "Födslar förra året"},
    {TR_ADVISOR_DEATHS_LAST_YEAR, "Dödsfall förra året"},
    {TR_ADVISOR_TOTAL_POPULATION, "invånare totalt"},
    {TR_REQUIRED_RESOURCES, "Resurser levererade till nuvarande fas:"},
    {TR_BUILDING_GRAND_TEMPLE_CONSTRUCTION_DESC, "För att konstruera ett storslaget tempel krävs lagrade material i ett varuhus, arbetare från ett arbetarläger, och ingenjörer från ett ingenjörsskrå."},
    {TR_CONSTRUCTION_PHASE, "Konstruktionsfas:"},
    {TR_ADD_MODULE, "Rededicate temple?"},
    {TR_BUILDING_TEMPLE_MODULE_CONSTRUCTED, "Epitet tilldelad."},
    {TR_BUILDING_CERES_TEMPLE_QUOTE, "Ceres var den som först med buktig plog vände torvan,\nhon gav oss grödor först och ljuva frukter ur jorden,\nskänkte oss lagar först. Allting är gåvor från Ceres.\n-Ovidius, Metamorfoser, Bok V" },
    { TR_BUILDING_NEPTUNE_TEMPLE_QUOTE, "Havets ursinne släcks,\ndess härskare lägger åt sidan treuddigt ljuster,\nsmeker till ro dess vågor och kallar Triton\nsom mörkblå höjer upp ur djupen,\nmed skuldror täckta av musslor som sugit sig fast.\nSin ljudande snäcka manas han blåsa i\noch så bjuda strömmar och floder att retirera snabbt.\n-Ovidius, Metamorfoser, Bok I"},
    {TR_BUILDING_MERCURY_TEMPLE_QUOTE, "Taga sig kan man med svärd både oxar och yppersta fårhjord,\nskaffa sig kan man den vackraste häst och den skönaste trefot\no, men en människas själ, den griper och fångar man icke,\nså att den vänder igen, när den flytt över tändernas stängsel.\n-Homeros, Iliaden, Sång IX"},
    {TR_BUILDING_MARS_TEMPLE_QUOTE, "Snabbt i den lilla staden går ryktet ut\natt beridna krigare bryter upp\nmot etruskerkonungens stränder.\nMödrar fördubblar i skräck sina bönelöften,\nty rädslan växer med faran,\noch Mars gestalt står väldig framför dem.\n-Vergilius, Aeneiden, Sång VIII" },
    {TR_BUILDING_VENUS_TEMPLE_QUOTE, "O Venus, och du som följer din vänliga moder,\nvingade gud, vilken fröjd jag njöt!\nHur begäret, nu öppet, grep mig!\nHur smälte ej,när jag låg där, hela mitt väsen!\n-Ovidius, Metamorfoser, Bok IX" },
    {TR_BUILDING_PANTHEON_QUOTE,"Nu slås Olympens, den allt behärskandes,\nmäktiga portar upp, ty människors konung och gudars\nfader har kallat samman sitt råd i stjärnstrött palats,\nfrån vars höjd han betraktar hela vår jord,\nlatinska folk och dardanernas läger.\n-Vergilius, Aeneiden, Sång X" },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1, "(Podium)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2, "(Portik)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3, "(Cella)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4, "(Praecinctum)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5, "(Dedicatio)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1_TEXT, "Arbetare konstruerar podiet som höjer upp templet och förser det med en gedigen grund för att klara tidens gång." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2_TEXT, "Hantverkade bygger portiken, som bär upp templets offeraltare." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3_TEXT, "Ingenjörer bygger cellan, insidan av templet där de heliga målningarna finns." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4_TEXT, "Arbetet på templets praecinctum har påbörjats, där tillbedjare kommer samlas utomhus för offentliga ceremonier." },
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5_TEXT, "Nu när templet snart är färdigt samlas präster för att utföra invigningsritualer."},
    {TR_BUILDING_MENU_TREES, "Träd" },
    {TR_BUILDING_MENU_PATHS, "Stråk" },
    {TR_BUILDING_MENU_PARKS, "Parker"},
    {TR_BUILDING_SMALL_POND, "Liten damm"},
    {TR_BUILDING_LARGE_POND, "Stor damm"},
    {TR_BUILDING_PINE_TREE, "Tall"},
    {TR_BUILDING_FIR_TREE, "Gran" },
    {TR_BUILDING_OAK_TREE, "Ek" },
    {TR_BUILDING_ELM_TREE, "Alm" },
    {TR_BUILDING_FIG_TREE, "Fikonträd" },
    {TR_BUILDING_PLUM_TREE, "Plommonträd" },
    {TR_BUILDING_PALM_TREE, "Palmträd" },
    {TR_BUILDING_DATE_TREE, "Dadelpalm" },
    {TR_BUILDING_PINE_PATH, "Tallstråk" },
    {TR_BUILDING_FIR_PATH, "Granstråk" },
    {TR_BUILDING_OAK_PATH, "Ekstråk" },
    {TR_BUILDING_ELM_PATH, "Almstråk" },
    {TR_BUILDING_FIG_PATH, "Fikonstråk" },
    {TR_BUILDING_PLUM_PATH, "Plommonstråk" },
    {TR_BUILDING_PALM_PATH, "Palmstråk" },
    {TR_BUILDING_DATE_PATH, "Dadelstråk" },
    {TR_BUILDING_BLUE_PAVILION, "Blå paviljong" },
    {TR_BUILDING_RED_PAVILION, "Röd paviljong"},
    {TR_BUILDING_ORANGE_PAVILION, "Orange paviljong"},
    {TR_BUILDING_YELLOW_PAVILION, "Gul paviljong"},
    {TR_BUILDING_GREEN_PAVILION, "Grön paviljong" },
    {TR_BUILDING_SMALL_STATUE_ALT, "Gudinnestaty" },
    {TR_BUILDING_SMALL_STATUE_ALT_B, "Senatorstaty"},
    {TR_BUILDING_OBELISK, "Obelisk" },
    {TR_BUILDING_POND_DESC, "Dammar förses med vatten från stadens reservoarer och förser växter och djur med vatten, men är också en svalkande och avslappnande oas för folket. Alla medborgare skulle älska att bo nära en damm." },
    {TR_BUILDING_WINDOW_POND, "Damm"},
    {TR_BUILDING_OBELISK_DESC, "Ett prestigefyllt monument, från en forntida konung av Nilen. Egyptierna använde den inte."},
    {TR_ADVISOR_FINANCE_LEVIES, "Byggnadsavgifter"},
    {TR_CONFIRM_DELETE_MONUMENT, "Rasera det här monumentet"},
    {TR_SELECT_EPITHET_PROMPT_HEADER, "Välj epitet att tilldela."},
    {TR_SELECT_EPITHET_PROMPT_TEXT, "Genom att tilldela en epitet tillägnar du ditt tempel en permanent aspekt av dess gud, vilket ger präster gudomliga krafter. Detta kommer kosta 1000 Dn." },
    {TR_BUILDING_INFO_MONTHLY_LEVY, "/månad"},
    {TR_BUILDING_MESS_HALL, "Förnödenhetsstation"},
    {TR_BUILDING_MESS_HALL_DESC, "Förnödenhetsstationen samlar in mat från stadens sädesmagasin för att utfodra soldater stationerade i stadens fort. En förnödenhetsstation med dålig tillgång till mat kommer leda till att rekryteringen saktar ned samt att truppernas moral tar skada."},
    {TR_BUILDING_MESS_HALL_FULFILLMENT, "Förra månadens matförsörjning:"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER, "Soldaterna är: " },
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_1, "Väl utfodrade" },
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_2, "Utfodrade"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_3, "Hungriga"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_4, "Mycket hungriga"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_5, "Svältande"},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_1, "En varierad diet för dina soldater kommer öka deras moral mycket."},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_2, "Den varierade och näringsrika kosten som dina soldater åtnjuter ökar moralen mycket."},
    {TR_BUILDING_MESS_HALL_NO_SOLDIERS, "Du har inga soldater att utfodra." },
    {TR_BUILDING_MESS_HALL_MONTHS_FOOD_STORED, "Månader som den lagrade maten räcker till:" },
    {TR_BUILDING_BARRACKS_FOOD_WARNING, "Matbrist i din förnödenhetsstation saktar ned rekryteringen av nya soldater."},
    {TR_BUILDING_BARRACKS_FOOD_WARNING_2, "Akut matbrist i din förnödenhetsstation stoppar trupprekryteringen." },
    {TR_BUILDING_LEGION_FOOD_WARNING_1, "Den gångna matbristen sänkte moralen."},
    {TR_BUILDING_LEGION_FOOD_WARNING_2, "Den gångna matbristen sänkte moralen mycket."},
    {TR_BUILDING_LEGION_STARVING, "Matbrist" },
    {TR_ADVISOR_LEGION_FOOD_SATISFIED, "Dina soldater har all mat som de behöver."},
    {TR_ADVISOR_LEGION_FOOD_NEEDED, "Dina soldater behöver mer mat." },
    {TR_ADVISOR_LEGION_FOOD_CRITICAL, "Dina soldater svälter!"},
    {TR_ADVISOR_LEGION_MONTHS_FOOD_STORED, "Månader som den lagrade maten i förnödenhetsstationen räcker till:" },
    {TR_CITY_MESSAGE_TITLE_MESS_HALL_NEEDS_FOOD, "Hungriga soldater" },
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_NEEDS_FOOD, "Din förnödenhetsstation har akut brist på mat, och dina truppers moral minskar. Se till att stationen har tillgång till ett välfyllt sädesmagasin."},
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_MISSING, "Din stad har förlorat sin förnödenhetsstation och dina trupper svälter. Bygg en ny station genast."},
    {TR_MARKET_SPECIAL_ORDERS_HEADER, "Varor att hämta"},
    {TR_WARNING_NO_MESS_HALL, "Först måste du bygga en förnödenhetsstation så du kan utfodra dina soldater." },
    {TR_WARNING_MAX_GRAND_TEMPLES, "Endast två storslagna tempel kan byggas." },
    {TR_CITY_MESSAGE_TITLE_GRAND_TEMPLE_COMPLETE, "Storslaget tempel färdigbyggt"},
    {TR_CITY_MESSAGE_TEXT_GRAND_TEMPLE_COMPLETE, "Präster och tillbedjare flockas till det nya storslagna templet för invigningsritualerna. Ditt folk beundrar ditt storslagna arbete, och templets tillägnade gud öser sin ynnest över dig."},
    {TR_CITY_MESSAGE_TITLE_MERCURY_BLESSING, "En välsignelse från Merkurius" },
    {TR_CITY_MESSAGE_TEXT_MERCURY_BLESSING, "Förtjust över din hängivenhet har Merkurius välsignat din industri och upptäckt bortglömda råmaterial till dina hantverkare."},
    {TR_FIGURE_TYPE_WORK_CAMP_WORKER, "Förman"},
    {TR_FIGURE_TYPE_WORK_CAMP_SLAVE, "Fraktare"},
    {TR_FIGURE_TYPE_WORK_CAMP_ENGINEER, "Ingenjör"},
    {TR_FIGURE_TYPE_MESS_HALL_BUYER, "Kvartermmästare"},
    {TR_FIGURE_TYPE_MESS_HALL_COLLECTOR, "Lägertjänare"},
    {TR_BUILDING_CERES_TEMPLE_MODULE_DESC, "Ceres präster från det storslagna templet bidrar med att distribuera mat och olja till dina hungriga invånare."},
    {TR_BUILDING_VENUS_TEMPLE_MODULE_DESC, "Venus präster från det storslagna templet förser heligt vin till dina invånare." },
    {TR_BUILDING_MARS_TEMPLE_MODULE_DESC, "Mars präster från det storslagna templet förser mat till din förnödenhetsstation."},
    {TR_BUILDING_SMALL_TEMPLE_CERES_NAME, "Tempel till Ceres"},
    {TR_BUILDING_SMALL_TEMPLE_NEPTUNE_NAME, "Tempel till Neptunus"},
    {TR_BUILDING_SMALL_TEMPLE_MERCURY_NAME, "Tempel till Merkurius"},
    {TR_BUILDING_SMALL_TEMPLE_MARS_NAME, "Tempel till Mars"},
    {TR_BUILDING_SMALL_TEMPLE_VENUS_NAME, "Tempel till Venus"},
    {TR_FIGURE_TYPE_PRIEST_BUYER, "Präst" },
    // Transcription of mission_exact4.wav
    {TR_PHRASE_FIGURE_MISSIONARY_EXACT_4, "\"Jag ska göra vad jag kan för att lugna dessa barbarer. Jag är säker på att de kommer sluta atteckera staden när jag har pratat med dem.\"" },
    {TR_CITY_MESSAGE_TITLE_PANTHEON_FESTIVAL, "En årlig festival"},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_CERES, "The faithful flock to temples for the celebration of Cerealia, in honor of Ceres. Farmers offer sacrifices for rich harvests in the coming years."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_NEPTUNE, "Today is the festival of Neptunalia, in honor of Neptune. The faithful build huts of branch and foliage and make merry under the blazing heat of the midsummer sun."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MERCURY, "Traders and merchants turn out in droves to celebrate Mercuralia. Sacred water is sprinkled on ships and warehouses in hopes of divine protection from the god Mercury."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MARS, "Citizens gather outside the city for the celebration of Equirria, to seek the favor of Mars. The air is filled with the thunder of hooves and the creaking of chariots as the faithful race in honor of their god."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_VENUS, "The faithful gather for the celebration of Veneralia, a day sacred to Venus. Your citizens beseech her for good fortune in matters of the heart."},
    {TR_TOOLTIP_BUTTON_DELETE_READ_MESSAGES, "Radera lästa meddelanden"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_ON, "Avaktivera denna byggnad"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_OFF, "Aktivera denna byggnad"},
    {TR_TOOLTIP_BUTTON_ACCEPT_MARKET_LADIES, "Tillåt marknadshandlare att köpa härifrån"},
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_CARAVAN, "Tillåt köpmannakaravaner att byteshandla här"},
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_SHIPS, "Tillåt handelsskepp att byteshandla här"},
    {TR_CONFIG_HEADER_CITY_MANAGEMENT_CHANGES, "Stadsförvaltning"},
    {TR_BUILDING_LIGHTHOUSE, "Fyr"},
    {TR_BUILDING_LIGHTHOUSE_PHASE_1, "(Grund)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_2, "(Pedestal)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_3, "(Torn)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_4, "(Krona)" },
    {TR_BUILDING_LIGHTHOUSE_PHASE_1_TEXT, "Ingenjörer lägger en stadig grund som ska tåla vikten av ett stort torn i sten." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_2_TEXT, "Murare konstruerar pedestalen som ska förhöja fyrens eld långt ovanför horisonten." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_3_TEXT, "Fyrens torn blir högre för var dag som murarna utövar sitt hantverk." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_4_TEXT, "Ingenjörer arbetar på de sista detaljerna på fyren. Snart kommer den synas från flera mil, och vägleda fartyg hem." },
    {TR_BUILDING_LIGHTHOUSE_CONSTRUCTION_DESC, "Konstruktionen av fyren kräver att material finns lagrat i ett varuhus, arbetare från ett arbetarläger och ingenjörer från ett ingenjörsskrå." },
    {TR_BUILDING_LIGHTHOUSE_BONUS_DESC, "Fiskeskepp åker 10% snabbare. Havsstormar varar endast hälften så lång tid." },
    {TR_EDITOR_ALLOWED_BUILDINGS_MONUMENTS, "Monument"},
    {TR_CITY_MESSAGE_TEXT_LIGHTHOUSE_COMPLETE, "Den färdiga fyren, ett mäktigt torn av sten, reset sig över horisonten. Må dess ljus vägleda skepp i evig tid." },
    {TR_CITY_MESSAGE_TEXT_PANTHEON_COMPLETE, "Pantheon är färdig. Den är ett oöverträffligt monument till gudarnas makt och det romerska folket." },
    {TR_CITY_MESSAGE_TITLE_MONUMENT_COMPLETE, "Monument färdigt" },
    {TR_CITY_MESSAGE_TITLE_NEPTUNE_BLESSING, "En välsignelse från Neptunus"},
    {TR_CITY_MESSAGE_TEXT_NEPTUNE_BLESSING, "Som belöning för din stads hängivenhet förunnar Neptunus säker sjöfart åt handelsskeppen i tolv månader, dessutom kommer dina exporter dra in hälften av priset som bonus under den tiden."},
    {TR_CITY_MESSAGE_TITLE_VENUS_BLESSING, "En välsignelse fån Venus" },
    {TR_CITY_MESSAGE_TEXT_VENUS_BLESSING, "Förtjust över det glädjefyllda vördnad som visas henne skänker Venus livskraft, hälsa och lycka till ditt folk, vilket ökar andelen av befolkningen som arbetar." },
    {TR_BUILDING_MENU_STATUES, "Statyer" },
    {TR_BUILDING_MENU_GOV_RES, "Governor's mansions" },
    {TR_OVERLAY_ROADS, "Vägar" },
    {TR_NO_MODS_TITLE, "'Mods'-mappen kan inte hittas." },
    {TR_NO_MODS_MESSAGE,
        "Din installation av Caesar 3 har ej en korrekt installerad 'mods'-mapp."
        "Nya tillgångar kommer ej visas korrekt.\n"
        "Var god och säkertställ att '/mods'-mappen finns på översta nivån i din Caesar 3-installationsmapp." },
    {TR_WARNING_WATER_NEEDED_FOR_LIGHTHOUSE, "Fyren måste placeras nära vatten"},
    {TR_TOOLTIP_OVERLAY_PANTHEON_ACCESS, "Det här huset har tillgång till alla fem gudarna via Pantheon."},
    {TR_BUILDING_LEGION_FOOD_BONUS, "Den rikliga maten ökar moralen" },
    {TR_BUILDING_LEGION_FOOD_STATUS, "Matstatus"},
    {TR_TOOLTIP_BUTTON_ACCEPT_QUARTERMASTER, "Tillåt kvartermästaren att hämta mat härifrån"},
    {TR_WARNING_RESOURCES_NOT_AVAILABLE, "Du kan inte erhålla materialen som krävs"},
    {TR_CONFIG_GP_CH_MONUMENTS_BOOST_CULTURE_RATING, "Färdigbyggda storslagna tempel ger +8 kulturställning"},
    {TR_BUTTON_BACK_TO_MAIN_MENU, "Tillbaka till huvudmenyn" },
    {TR_LABEL_PAUSE_MENU, "Pausa" },
    {TR_OVERLAY_LEVY, "Avgifter" },
    {TR_TOOLTIP_OVERLAY_LEVY, " denarier betalade i avgifter månadsvis." }, 
    {TR_MAP_EDITOR_OPTIONS, "Scenarieinställningar" },										 
};

void translation_swedish(const translation_string **strings, int *num_strings)
{
    *strings = all_strings;
    *num_strings = sizeof(all_strings) / sizeof(translation_string);
}
