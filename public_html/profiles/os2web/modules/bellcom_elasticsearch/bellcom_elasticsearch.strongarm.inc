<?php
/**
 * @file
 * bellcom_elasticsearch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bellcom_elasticsearch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms';
  $strongarm->value = 'myself, mig
gnavere, rotter, mus
ab 92,ab92
abr 89,abr89
abr-89,abr89
abt 93,abt93
abt-93,abt93
ab-92,ab92
adresse,flytning
adresse på kommunen,kontakt
adresseflytning,flytning
Adresser &Åbningstider,åbnetide
Adresser &Åbningstider,adrss
adresseændring,flytning
advokathjælp,advokatvagt
afbrændingsceromoni,sankt hans
afbrændingsforbud,bålforbud
afbrændning,sankt hans
affald,blyholdigt affald,genbrugsstation
Affald med PCB,asbestholdingt affald
affaldsposer,affaldssæk
affaldssortering,genbrugsspand
affaldsstation,genbrugsstation
aflæsning vand,vandmåleraflæsning
aflæsningskort,forbrugsafgifter
afvænning,alkoholbehandlingen
agande 21,agenda 21
Akut boligproblem,akut boligliste
Alkohol,alkoholafvænning,alkoholafvænding,Alkohol & andre rusmidler,afvendning,alkoholafvæning
alkoholkonsulent,misbrugskonsulent
alkoholpolitik,alkohol- og misbrugspolitik
alkoholrådgivning,alkoholbehandlingen
amatørscenen,teater
anke,klage
Anmeldelse og anvisning af asbestholdigt affald,asbestholdingt affald
annoncering,annonce
Ansøgning om byggetilladelse via selvbetjeningsløsningen Byg og Miljø.,byggetillade
ansøgning om tilskud lokaleleje,lokaleleje
arbejdsformidling,jobcenter
Arbejdsmarkedets feriefond,feriefont
arbejdsmarkedschef,jobcenterchef
badesøen,badeland,friluftsbad
Ballerup Brandvæsen,beredskabspolitik
barsel,fødsel,graviditet
barselrefusion,refusion af barsel
barselsblanketter,blanketter om dagpenge
barselsdagpenge,dp 400c barsel,barselsdsgpenge,dp 400c
barselspenge for studerende,barselsdagpenge og økonomi
batterier til høreapparat,hjælpemidler
BBR,bygningsdokumenter
bbr,ejendomsoplysninger
bbr meddelelser,bbr meddeldelser
beboerindskud,boligindskudløn,bolig indskudsløn,boligtilskud
befolkningsprognose,indbyggere
befordringstilskud,kørsel
behandlingsfrister,svarfrister
beredskab,alarmberedskab
beskæftigelsesråd,lbr,lokalbeskæftigelsesrådet
beskæftigelsesråd,det lokale beskæftigelsesråd
Bestil NemID,bestille nyt næglekort
betaling,takster
betalingskontor,opkrævning,betalingskontoret,opkrævning
BFO,fritidaordning,fripladsansøgning
Bibliotek,bibilote,bibl.dk ballerup,bibliotekets filmtilbud,hovedbibliotekets filmtilbud
bibliotekarchef,bibliotekschef
bikort,forskudsopgørelsen
bil,nummerpladeekspedition
billetautomat,p-billetautomat
bistand,kontanthjælp
bistandshjælp,kontanthjælp
bjørnekloplan,indsatsplan for bekæmpelse af kæmpebjørneklo
blanketter,selvbetjening
blå eu kort,blåt sygesik,blåsysikring,blå sygeforsikring,eukort,blå sygesikringsbevigoogle kort,blå sygesikringsbevigoogle,rejsessikring,rejsesygeforsikring,blå eukort,blå sygeforsikringkort,blå sygesirkingskort,eu sygeforsikringskort,eurokort,eu-sygesekringskort,eu-sygesektringskort,rejsesikringskort
blå syg,blåt kort
blå sygesikring,eu-sygesikringsbevis
blå sygesikring,blå sygesikringsbevis
blå sygesikrings kort,blå sygesikringsbevis
blå sygesikringskort,blåt sygesikringsbevis
blå sygesikringskort,blåt sygesikringskort
blå sygesikringskort,blå sygesikringsbevis
blå sygesikringskort,eu-sygesikringsbevis
blåt kort,blåt sygesikringskort
blåt sygesikringsbevis,blå sygesikringsbevis
blåt sygesikringsbevis |||or||| blåtsygesikringsbevis,blå sygesikringsbevis
blåt sygesikringskort,bestilling af blåt sygesikring
blåt sygsikringskort,eu-sygesikringskort
blåtsygesikringskort,rejsesygesikring
blåtsygesikringskort,blå sygesikringsbevis
Bolig,bolig.dk
bolig,boligkontor idtrætsbyen
bolig,bolighenvisning
bolig,boligsøgning
Bolig &Flytning,boplæsadresse
Bolig &Flytning,logiværtserklæring
boliganvisning,sociale boligområder
boliganvisning,boligansøgningsskema
boliganvisning,boligkontoret
boliganvisning,bolig
boliganvisning,oversigt over boliger
boliganvisning,skrevet op til bolig
boliganvisning,opskrivning til bolig,opskrivning,bolig kontoret,boligkontoret chif,boligsøgrnde,boligkonteret
Boligerne,plantegning rosenhaven,plantegning bolig rosenhaven
Boligstøtte,huslejetilskud,boligtilskud,boligstøtte,boligsikring,boligydelse
Bopælsattest,bopæltest,boligaftest,boligatest,boligatsest,husejerattest,bopælattest
bopælskommune,bokommune
borgercenter,borgerservicecentre
borgermillionen,borgermillion
borgerrådgiver,borgervejleder
borgerservicecenter,borgerportal,borgerservicecentret,borgerservice,borgertorvet,åbningstider
borgmester,byråd
borgmesterens,borgmesterens afdeling
Botilbuddet Rødbo,adr. for rødbo
brand,branvæsen,brandvæsen
brandinspektør,beredskabet,redningsberedskabet
brandmyndighed,brandvæsen,brandmyndighederne
brandværn,brandvæsen
brandvæsenet,brandvæsen
brevstemning,brevafstemning
brugertilfredshed,forældretilfredshed
brugerundersøgelse,forældreundersøgelse
brænde,pejsebrænde
br95,bygningsregelment 1995,bygningsregelmenter
bu,børn og unge
Budgetaftale 2015: Mere velfærd til borgerne,topdanamrk hallen
Budgettet for 2015,budget 2115
building permit,byggetilladelse
bundfældningstank,hustank
busplan,kollektiv trafik
busplaner,kollektiv trafik
busruter,køreplaner
bybus,businfo
byggeaffald,genbrug
byggeanmeldelse,anmeldelse,byggeansøgning
byggeansøgning,byggetilladelse
byggeforskrifter,byggeregler
byggegrund,salg byggegrunde,køb byggegrunde,køb byggegrund,salg byggegrund,byggegrunde
Byggepladser,sølind og risøg
byggeregelment,bygningsreglement
byggereglement,bygningsreglement
byggesag,center for byggeri
byggesag gebyr,byggesagsgebyr
byggesagsafdelingen,byggesagsbehandling
Byggesagsarkiv,byggearkiv
Byggesagsarkiv,filarkiv
Byggesagsarkiv,weblager
byggesagskontoret,byggesagsafdelingen
byggesagskontoret,center for byggeri
byggetegninger,digitalt arkiv
bygningstilladelse,byggetilladelse
byplan,planteam
byplan,kommuneplan
byplaner,lokalplaner
byråd,kommunalbestyrelse
byrådet,kommunalbestyrelsen
byrådsmedlem,kommunalbestyrelsen
byudvikling,planlægning
bøjleklinik,tandpleje
bøjleklinik,tandlæge
bøjletandlæge,tandplejen
bøjletandlæge,tandlæge
børn - og ungelæger,børnelæge
børn og unge forvaltningen,børn og unge
børn- og ungelæger,ungelæge
børn- og ungelæger,børnelæge
børne og ungdomsydelse,børne og ungeydelse
børne- og ungeafdelingen,børn og unge
børne og ungepolitik,børnepolitik
børnecheck,familieydelse
børnefamilieydelse,børnepenge
børnegymnastik,gymnastik
Børnehave,bærnhave
børnehave,børnepasning
børnehave,daginstitution
børnehave,børnehus
børnehave,integreret
børnepas,pas til børn
børnepenge,børnecheck
børnepolitik,temaplan for børn og unge
børnerådgivningen,børne- ungerådgivningen
børnetandklinik,tandplejen
børnetandlæge,tandpleje
børnetandlæge,tandplejen
børnetandpleje,tandpleje
børnetandpleje,tandlæge
Børnetilskud,børnetoilskud
børneydelse,børnetilskud
børneydelse,familieydelse
camping,campingpladser
Center for Børne- og Ungerådgivning, PPR,børne og unge telefon nummer9
centeret,centret
check,supplerende pensionsydelse
containerplads,anbringelse af container
containerplads,genbrugspladser
cvr numre,cvr
cvr-nummer,cvr
cykeldag,cykel
cykelkort,cykelkarta
cykelprojekter,cykel
cykelture,cykelruter
cykle, cykling, cykelsti,cykel
cyklist, cyklisme, cykelsupersti, cykelpendler, cykelprojekt, cyklen,cykel
Cyklister er gladere trafikanter,ballerups cykelindsatser
daginstitutionsfriplads,friplads
daginstitutionspriser,betaling for daginstitution
dagpasningstilbud,børnepasning
dagpenge,dp 211
dagpenge ydelse,dagpenge
dagpengecenter,dagpengekontoret
dagpengekontor,dagpenge
dagpengekontoret,dagpenge
dagsordenener,dagsordener
dagsordener,dagsordner
dagsordener byrådet,dagsordner byråd
dagsordener og referater,dagsorden
dagsordner Kommunalbestyrelsen,dagsordner byråd
dagtilbud,dagtilbuddene
Dagtilbud (åbner i BørneIntra),daginstitutioner i rugvænget destrikt
dato for storskrald,storskrald
Demens,demensforedrag
Demens,demenskordinator
demens,senildemens
Demenskoordinator,demenskordinator
demenstilbud,støttegruppe
demenstilbud,plejecentre
demenstilbud,bofællesskaber for borgere med demens
demenstilbud,ældreområdets opgaver
designvejledning,design
Digital Post,epost
Digital Post,sikkermail
Digital post,ebook
Digital post,ebox
digital post,digetalpost
digital post,fritagelse digtalisering
digital post,eboks
digitale kort,netgis
dp 200,blanketter om dagpenge
dp 402,barsel
dp201,dp 201
dp201,blanketter om dagpenge
dp201,dagpenge
dp202,dp 202
dp400a,dp 400a
dp401,dp 401
dyr,skadedyr
e 104,e104
ean,ean-lokationsnumre
ean,ean numre
ean,ean-numre
eannummer,ean
eannummer,eanummer
eannummer,ean-nummer
eannumre,ean
East Kilbride,svømmehal
East Kilbride,estkildebrite
e-boks,eboks
eboks,e boks
eco,nøgletal
Efterlønnens størrelse,efterlevelsespension
Ejendomme,ejendomsafdeling
Ejendomme,ejedomscentret
Ejendomme,ejedomscenter
ejendomsvurdering,ejendomsværdi
Ejendomsvurdering og ejendomsskat,ejdomskat
Ejendomsvurdering og ejendomsskat,ejdomssket
Ejendomsvurdering og ejendomsskat,ejdomskatter
ejendomsværdipåtegning,påtegning ejendomsværdi
e-klasse,ungdomsskole
elektriker,el-installatør
elever socialsundhed,social- og sundhedsuddannelser
elevplads,kontorelev
elevuddannelse,kontorelev
Energi &Varme,naturdas
energi og varme,varmeforsyningsplan
engangshjælp,enkeltydel
Enkeltydelser,enkeltydelsesblanket
Enkeltydelser,enkelydelse
Enkeltydelser,ansøning til engans
Enkeltydelser,ansøgning til engansydelse
erhvervsaffaldsafgift,erhvervsaffaldsgebyr
erhvervsbyggegrund,erhvervsgrunde
erhvervsbyggegrunde,erhvervsgrunde
erhvervschef,udviklingscentret for erhverv &turisme
erhvervsgebyr,erhvervsaffaldsgebyr
erstatningssygesikringsbevis,sygsikringsbevis
eu blåt,blåt sygesikringsbevis
eu kort,blåt kort
eu sygesikringsbevis,blå sygesikringsbevis
eu-kort,eu bevis
eu-kort,eu-sygesikringsbevis
eu-sygesikring,sundhedskort
eu-sygesikringsbevis,blå sygesikringsbevis
eu-sygesikringskort,blå sygesikringsbevis
eu-sygesikringskort,eu sygesikringskort
EU-sygesikringskortet - det blå kort,blåkort
EU-sygesikringskortet - det blå kort,blå sysikringskort
EU-sygesikringskortet - det blå kort,blå sygsikkring
EU-sygesikringskortet - det blå kort,blå sygesikrings bevis
EU-sygesikringskortet - det blå kort,eusygesikringsbevis
EU-sygesikringskortet - det blå kort,blå sygesikringskory
EU-sygesikringskortet - det blå kort,blåt sygsikrings bevis
eu-valg,eu-parlamentsvalg
Familieydelser,alenemor
Familieydelser,børnetoilskud
farligt affald,miljøfarligt affald
ferie,ferieplan
ferie fonden,feriefonden
feriebevis,feriekort
feriedagpenge,dagpenge
feriefolderen,ferieaktiviteter
feriekalender,ferieplan
feriekort,feriepenge
festlokaler,selskabslokaler
Find dit dagtilbud,ballerup.inst
Find dit dagtilbud,børnehaven nordstjernen
Find dit dagtilbud,akselunden
Find dit dagtilbud,dagtilbud hede-magleparkenilbud
Find dit dagtilbud,dagthede-magleparkenilbud
Find dit dagtilbud,dagplejekontor
fjernvarmeforsyningsområder,fjernvarme
fjolletobak,misbrug
flaskecontainer,glas- og avisbeholdere
flekskontoret,fleksjob
flexvejledning,flex
flytning,skifte adresse,folkeregistrering,folkereg,flyttemedelse,flyttning af barb,folkeregisteret
flytningsguiden,flytteguiden
flytteanmeldelse,flytning,flytning,flytteanmeldelsen
flyttevejledning,bolig
folkeregister,flytning
folkeskole,skole
folkeskoleområdet,skoleområdet
folketal,indbyggertal
foreningscenter,tapeten
forhøjet børnetilskud,børnetilskud
forskud,forskudsopgørelse
forurening,jordforurening
forureningsoplysninger,forurening
forældreorlov,barselsorlov
fredegården,børnehaven frdegården
friplads,ffriplads,ansægningsskema økonomisk friplads,fripladsblanket
frivilligcenter,tapeten
førerbevis,kørekort
gadelys,vejbelysning,lys
gartnerafdelingen,park
Gaver,ballerup kommunes jubilæumsgaver
Gaver,jubilæer og afskedsreceptioner
genbrug,genbrugsstation,genbrugsplads,genbrugsstationer,affaldsplads,genbrugspladser,genbrugs station
genlån,fornyelse
giro,gironummer,pengeinstitut
gis,netgis,gis kort,giskort
glatførebekæmpelse,snerydning
google,søg
graveansøgning,gravetilladelse
gravetilladelser,gravearbejde
greenhouse,drivhus
grillfest,grill
grunde,byggegrunde
grundsalg,salg af grund,jordsalg,arealer til salg,byggegrunde
grundskyld,grunskyld
grænsegænger,grænsearbejder
grænsegængerbevis,særligt sundhedskort
grøn spand,genbrugsspand
grønlænderhjemmet,hjemmet for grønlændere
grønne affaldsspande,genbrugsspand
grønt råd,grøn pulje
gule plader,nummerpladeekspedition
gulpladebil,nummerpladeekspedition
handel med ejendom,ejendomshandel
handicap,handkap,handikap,handicapkørsel,handicapbefordring,handicappede,handikappede,handicapkørsel
Handicapparkeringskort,ansøgning om handicapskilt
handicappolitik,handicap- og psykiatripolitik
hash,misbrug
havehjælp,havearbejde
hedepleje,heder
hegnsyn,hegnssyn
Helbredstillæg,ansøge om medicinkort
helbredstillæg,tilskud til tandpjele
hjemfaldsklausul,hjemfaldspligt
Hjemmeplejen,indkøbshjælp
hjemmeservicefirma,hjemmeservice
hjemmeservicefirmaer,hjemmeservice
hjemmesygeplejerske,hjemmesygepleje
hjerterehabilitering,sundhedstilbud
hjerteruten,sundhedsruten
hjerteruten,hjertestier
Hjælp og Pleje,borger/ældrepleje
hjælpemiddelcentral,hjælpemiddeldepot
hjælpemiddelcentralen,hjælpemidler
hospital,sygehus
husholdningsregulativ,regulativ for husholdningsaffald
Hvad er kommunens strategi for nærdemokrati?,borgerhjælp
Hvad kan du søge hjælp til?,ansøge om medicinkort
Hvad kan du søge hjælp til?,ansøgning medicinkort
hvilke betingelser er der for beboerindskudslån?,bolig inskud,indskudslån,ansøgning om lån til beboerindskud,bolig hjælp til indskud
Hvis du bliver syg og er lønmodtager,blanketter dp 211
høring stiplan,stiplan
håndværker fradrag,håndværker tilskud,håndværkerfradrag
hårdhedsgrad,vand
ID kort,legitimantionskortidkort,billedlegitimationskort
idkort,legitimationskort
indbyggerantal,indbyggere,indbyggertal
Indkøbsbussen,indkøbshjælp
influensavaccine,influenzavaccination
Influenzavaccination,influenzavaccine
informationsafdeling,kommunikation
institutionspriser,priser,betaling for daginstitution
instution,betaling for daginstitution
interbook,foreninger og lokaler
internationalt kørekort,internationalt kørekørt
invalidepension,førtidspension
iværksætter,udviklingscentret
job,ledige stillinger,stilling,jobb,jobs
jobcenter,ydelsescentret,af,ydelsecenter
jord,jordforurening
jordtilsyn,jord
Kan jeg få hjælp til uforudsete udgifter?,merudgiift ansøgnignsblanket,enkeltydelser,enkeltydelse,merudgift ansøgnig,enkeltydelsesansøgning,enketydelse,merudgifter ansøgnignsblanket,merudgiift ansøgnig,merudgiift ansøgnign
kantine,kantineudvalg,bestilling,mødebestilling
kapelbygning,kapel
kapelsal,kapel
kirke,folkekirke
kistefællesgravsted,kistefælles-gravsted
Klager vedrørende bolig,boligklage
kloak,kloakanlæg
kloak,kloakering
kmb,kommunalbestyrelsen
knallertbevis,knallertkørekort
Kommunalbestyrelsen,byrådssammensætning,borgmestrer,bormester
kommunaldirektør,stadsdirektør
kommunalplan,kommuneplan
kommunalvalg,valg,kommunalbestyrelsesvalg
kommunekode,kommunenummer
kommunekort,netgis
kommunelogo,byvåben
kommunenr,kommunenummer
Kommunens affaldsplan,affaldsplanlægnng
kommuneplan,kommuneplanlægning
Kommunernes Landsforening,lockout
kommuneskat,skatteprocenter
kommunevalg,kommunalbestyrelsesvalg
kompost,kompostmuld
kompost,kompostorm
kompost,hjemmekompostering
kompostjord,kompostmuld
kompostorm,hjemmekompostering
konfirmationshjælp,konfirmation
konflikt,lockout
konstruktionstegninger,bygningstegninger
kontakt,kontaktinformation
kontakt,adresse
kontaktinfo,adresser
Kontanthjælp,sådan søger du kontanthgæp
Kontanthjælp,kontanthgæp
kontanthjælp,kontandhjælpe
krykker,hjælpemidler
krykstokke,hjælpemidler
kulturansvarlig,kulturborgmester
kulturinstitutioner,kulturinstitution
køkkenaffald,husholdningsaffald
kørestol,rullestol
køretøj,nummerpladeekspedition
lag,landdistriktsudvikling
landdistriktsmidler,landdistriktsudvikling
landzone,landzonetilladelse
landzoneansøgning,landzonetilladelse
lastbilparkering,lastvognsparkering
lastvognsparkering,parkering af trailer
Ledige job,ledige stillinger i ballerrup kommunne
ledige jobs,job
ledige stillinger,ledige job
ledighedsydelse,leidghedsydelser
legepladser,legeplads
lettere forurenet jord,områdeklassificering
lock out,lockout
logo,byvåben
lokalarkiv,lokalhistoriske arkiver
lokalbus,bus
lokalebooking,lokalebookning
lokalebooking,lokaleudlejning
Lokaler &Anlæg,topdanamrk hallen
lokaleudlejning,foreningsportalen
lokaleudlejning,lån af lokaler
lokalhistorie,lokalhistorisk
lokalplan,lokalplaner
lokalplan,lokalplanlægning
Lokalplan nr. 137 ud i offentlig høring,lokalplan137
Lokalplaner,lokalplan 102.01
lægehus,lægeliste
læger,lægeoversigt
lægeskift,selvbetjening
lægeskifte,lægeskift
lægevagt,læge
lægevalg,læger
lægevalg,læge
lægevalgsliste,lægeliste
læs ind firma,læs-ind-bureauer
løn- og personalekontoret,hr-afdelingen
lønkontor,personaleområdet
lønkontoret,personaleområdet
lønningskontor,personale
Løntilskud,anmodning om udbetaling af løntilskud
lån af krykstokke,hjælpemidler
Lån til beboerindskud,boligindkud
mailadreser,mailliste
mailadresser,mailliste
maste,antennemaster
mastepolitik,antennemaster
medarbejder,ansat
medarbejdere,kommunens afdelinger
medicinkort,helbredstillægskort
Meld dit barn ud af dagtilbud,udmeldelse af inst
mentoruddannelse,mentor
miljødirektør,direktionen
motorkontor,nummerpladeekspedition
motorregistrering,nummerpladeekspedition
målbaserede kontrakter,servicemål
måleraflæsning,aflæsning
nabolarm,støj
nabostøj,støj
navneskift,navneændring
nedrivning,nedrivningspulje
nedrivning,renoveringspulje
Nedrivning af bebyggelser,anmeldse af asbest
Nedrivning af bebyggelser,anmeldse af asbest
nedsivningsanlæg,faskine
nemid,nem id
nemid,nem-id
nemid,digital signatur
netborger,borger.dk
nummerplade,motorkontor
nummerplade,nummerpladeekspedition
nummerpladeekspeditionen,nummerpladeekspedition
ny læge,lægeskift
Når du skal flytte,adressflyning
Når I vil giftes,vigselsatest
Når I vil giftes,ægteskabsbevis
Når I vil giftes,brudegården
Når I vil giftes,bryllupskontor
Når I vil giftes,bryllupskontoret
olietank,udskiftning olietank
Om Beskæftigelsespolitikken,beskæftigelssplan 2015
Om Beskæftigelsespolitikken,beskæftigelssplan 2014
Om boliganvisning,søgfamilien bolig
Om Plejecenter Kirstinehaven,christinehaven
ombytning af kørekort,udlands kørekort
omlastning,genbrugspladser
omlastningen,genbrugspladser
omlastningsstation,genbrugstationen
omlastningsstationen,genbrugsstationen
omlastningstationen,genbrugsstationen
områdeklassificering,forurenet jord
organisationsdiagram,organisationsplan
orlov,barselsorlov
orlov,sygeorlov
orlov,forældreorlov
orm,hjemmekompostering
Papir,afhentning af papircontainer
Papir,afhentning af papiraffald 2015
parcelhusgrunde,byggegrunde
parkering,parkeringsmuligheder
parkering,parkeringspladser
parkeringslicens,erhvervslicens
parkeringslicens,beboerlicens
parkeringsregulativ,parkering
partistøtte,støtte til politisk arbejde
pas,rejsepas
pas,fornyelse af pas
pas,ekspres pas
pas,akutpas
pas,akutbpas
pas,mistet pas
pas,pasregler
pas,ekspress pas
paskontoret,paskontor
pasningsorlov,børnepasningsorlov
pasningstilbud,pasningsgaranti
patienter,kræft
(Pdf) virksomhedspraktik,ab131
(Pdf) voksenlaerling - over 25 aar,blankettet voksenlærling
Pension,pensionsbevis
pension guide,pensionsguide
pensionist tilskud,tilskud
pensionistbolig,ældrebolig
pensionisthaver,kolonihaver
pensionisthåndbog,håndbog for pensionister
pensionskontor,folkepension
pensionskontorer,pensions- og omsorgskontor
Permanent opholdstilladelse,dansk statsborgerskabs
Personalegoder,billeder af feriehuse
Personalepolitikker,personaleværdier
personlige tillæg,helbredstillæg
personlige tillæg,tilskud til tandpjele
Personregister,bopælspligt
personregisterfører,personregister
pladsanvisnig,afmelde mit barn fra børnehaven
pladsanvisning,pladsanvisningsventeliste
pladsanvisning,opskrivning i institutioon
pladsanvisning,børnepasning
pladsanvisning,istitions venteliste
pladsanvisning,daginstitutioner stjernehuset
pladsanvisning,daginstitutioner stjernehuset i distrikt rugvænget
pladsanvisning,dagsinstitioner
pladsanvisning,opskrivning
pladsanvisning,pladsanvisnings venteliste
pladsanvisning,pladsanvisningen
pladsanvisning,instititons venteliste
Pladsanvisningen,digitalpladsanvisning
pladsanvisningen,børnepasning
pladsgaranti,pasningstilbud
pladsgaranti,pasningsgaranti
plejebolig,plejehjemsplads
Plejecenter Rosenhaven,plantegning bolig rosenhaven
plejehjem,plejecenter
plejehjem,plejecentre
plejehjem,ældreinstitutioner
politikerweb,politiker-web
ppr,pædagogisk psykologisk rådgivning
ppr,pædagogisk psykologisk
pris,takst
prisblad,priser
procedure for rykkere,rykkere
prækvalifikation,udbud
prøveplade,motorkontor
prøveplader,motorkontor
psykisk syg,sindslidende
redningsberedskabet,beredskabschef
registreringsafgift,nummerpladeekspedition
rejse sygesikring,rejsesygesikring
Rekruttering,jobekspressen
rensningsanlæg,renseanlæg
reservebedste,mormor
resningsanlæg,forsyningen
restskat,skat
Retningslinjer for orlov,ansøgning om plejeorlov
Ret&Råd Glostrup/Ballerup,gratis retshjælp
robinsonliste,navne- og adressebeskyttelse
Robinson-listen,robin liste
Robinson-listen,robinlisten
robinsonlisten,navne- og adressebeskyttelse
rottebekæmpelse,rotter
rottefænger,rotter
rss-feeds,rss
rss-feeds,feeds
rusmiddelkonsulent,misbrug
rykkere,procedure rykkere
Rådgivning &Støtte,handicaptillæg
Rådgivning i SundhedsHuset,afvendning
rådhus,rådhuset
rådhustets adresse,rådhuset
sagsbehandlingsfrist,sagsbehandlingstider
samtykkeerklæring,samtykke erklæring
sankt hans,sankthansaften
sankt hans aften,sankthansaften
sankt hans ved fjorden,sankt hans
sankte hans,sankthansaften
sankthans,sankthansaften
sankthans aften,sankthansaften
sankthans bål,sankt hans
satser,priser
Senior Boliger,Boliger for ældre
seniorbo,seniorbofællesskab, Bofællesskab
seniorrådgivningen,rådgivning for ældre
separation,samlivsophør
servicekvalitet 4.1.7,servicemål
servicekvaliteter,servicemål
skadedyr,skadedyrsbekæmpelse
skadesanmeldelsesskema,skadesanmeldelse
skat,skatteprocenter
Skat, Løn &Gæld,skattekontor
skattekontoret,skat
skattekort,forskudsopgørelse
skelregler,skel
skift af læge,lægeskift
skift læge,lægeskift
skilles,skilsmisse
skilsmisse,separation
skizofren,sindslidende
skizofreni,sindslindende
skjold,byvåben
skole ferie,ferieplan
skolebus,transport
skolebuskort,transporttilskud
skolebusser,transporttilskud
skoledirektør,folkeskoler
skoledirektør,skoleområdet
skoledistrikt,skoledistrikter
skoleferie,ferieplan
skoleferieplan,ferieplan
skolefritidsordning,sfo
Skoleindskrivning,skoleopskrivning
skolekalender,feriekalender
skolelandbrug,skolelandbruget
skolepsykolog,psykologer
Skoler,ballerup.inst
Skoler og Institutioner,dagtilbudschef
skoletandlæge,tandpleje
skoletandlæge,tandlæge
skoletandlæge,tandplejen
skoletandpleje,tandpleje
skoletandpleje,tandplejen
skoletandplejen,tandpleje
skoletandplejen,tandlæge
skoletilmelding,indskrivning
skoleudvalget,udvalget for skoler og børn
skolevejledere,skolevejledning
skraldeposer,affaldsposer
skraldordning,affaldsordning
skt. hans,sankthansaften
skt hans,sankthansaften
skt hans,sankt hans
skt. hans aften,sankthansaften
skt hans aften,sankthansaften
skøjtehal,skøjter
slutopgørelse,årsopgørelse
småhusreglement,bygningsreglement for småhuse
snerydning,vintervedligeholdelse
social bedrageri,skatte snyd
social bedrageri,anmeld socialbedrageri
social bedrageri,skattesnyd
social forvaltning,børne- og ungeteam
social forvaltning,børne- ungerådgivningen
social forvaltning,voksenrådgivning
Social og Sundhed,sundhedsdirektør
socialdirektør,direktion
socialdirektøren,direktør
socialforvaltning,socialforvaltningen
socialforvaltning,socialcentret
Socialpsykiatrien,socialpsyliatrien
socialpsykiatripolitik,psykiatripolitik
socialudvalget,udvalget for social og ældre
sommeraktiviteter,sommerferieaktiviteter
sommerferie,ferieplan
sommerferieaktivitet,sommeraktivitet 2013
sommerferieaktiviteter,sommeraktivitet 2013
sommerferieaktiviteter,sommerferieaktivitete
sommerferieplan,ferieplan
sommerforborn,sommer for børn
spildevand,kloakvand
spildevandsplan,spildevandsplaner
springgymnastik,foreninger
sprogvejleder,tosprogskonsulent
sprogvejleder,tosprogskonsulenten
stadsarkiv,stadsarkivet
sti systemer,stiplan
stilingsbeskrivelse,stillingsbeskrivelse
stisystem,stiplan
stofmisbrug,narko
stofmisbrug,misbrug
stofmisbrug,narkotika
Storskrald,storskral
Sundhed &Sundhedskort,ansøen helbredskort
sundhedsambasadør,sundhedsordning
sundhedsambassadør,sundhedsordning
sundhedsbevis,sundhedskort
SundhedsHuset,www.helsehuset.dk
sundhedskort,nyt gult sygesikringsbevis
sundhedskort,mistet det gule sygesikringsbevis
sundhedskort,sygesikring
sundhedskort,sygesikrins bevis
sundhedskort,sygesikringskort
sundhedskort,sygekringskort
sundhedsplejen,sundhedstjenesten
sundhedsplejeske,sundhedspleje
Svømmehal,Svømmehaller
svømmehal,svømehal
svømmehal,vild med vand
svømmehal,svømmerhal
svømmehal,svømmehallen
svømning,skolesvømning
sygdom,kræft
sygdom,kræft
Sygedagpenge,blanketter dp 211
Sygedagpenge,dp211
sygedagpenge,udbetalings dag sygedagpenge
sygedagpenge,udbetalingsdag sygedagpenge
sygedagpenge,dp225 varighedsbegrænsing sygedagpenge
sygedagpenge,dp225 varighedsbegrænsing
sygedagpenge,dp225
sygedagpenge,sygedagåemge
sygedagpenge,udbetalingsdato sygedagpenge
sygedagpengeafsnittet,beskæftigelse
sygedagpengekontoret,syge- og dagpenge
sygesikringsbevis,sygesikringskort
sygsikringskort,sygesikrings bevis
Sønderhaven,center søndergaard
søskenderabat,søskendetilskud
søskendetilskud,søskende rabat på daginstitution
Sådan søger du kontanthjælp,sådan søger du kontanthgæp
takster,priser
takster,takstblad
takster,takst
talepædagog,specialundervisning
tandklinik,tandplejen
tandlægetilskud,tandlægeregninger
tandregulering,tandpleje
tandretning,tandplejen
tast selv,selvbetjening
tast selv service,selvbetjening
tegninger,digitalt arkiv
teknik,teknik- og miljøområdet
Teknik- og Miljøudvalget,medlemmer af miljø og teknik ulvalg
teknisk direktør,direktion
teknisk forvaltning,teknik og mijøforvaltningen
teknisk forvaltning,teknik og miljø
teknisk forvaltning,teknik
teknisk forvaltning,driftsby og teknik- og miljøcenter
teknisk forvaltning,teknik- og miljøområdet
telefonliste,telefon- og mailliste
telefonnummer,telefon- og mailliste
tilflytterguiden,flytning
tilladelse,landzonetilladelse
tilmelding pladsanvisning,pladsanvisning
tilskud kørsel til speciallæge,lægekørsel
tilskud kørsel til speciallæge,kørsel til læge æjenlæge
tilskud kørsel til speciallæge,kørselsordning forpensionister
tilskud kørsel til speciallæge,kørselsrefusion
tosprogede,andetsprog
tosprogede,tosproget
trafikundersøgelse,trafiksikkerhed
trailerparkering,lastvognsparkering
Træning,knætræning
Træning &Aktivitet,knætræning
turist,turisme
turistinformation,udviklingscentret
turistkontor,turisme
Udbetaling af feriepenge,e-feriekort
Udbetaling af feriepenge,eferiekort
udbud,jobcenter udbud
udflytterbørnehave,skovbørnehave
udflytterbørnehave,privat børnehave
udlejningslokaler,foreningsportalen
udlændingestyrelsen,udlændingeservice
udviklingshæmmede,særlige behov
underretning,anmeldelse
understøttelse,dagpenge
ungdomsbolig,studiebolig
ungdomsboliger,kollegier
ungdomsvejledning,uddannelsesvejledning
ungdomsvejledningen,uddannelsesvejledning
vagtlæge,lægevagten
valg,brevstemme
valg af læge,lægeskift
valgregler,valg og afstemninger
valgsteder,afstemningssteder
vandafledningsafgift,forbrugsafgifter
vandaflæsning,aflæsning
vandaflæsning,forbrugsafgifter
vandaflæsning,vandforsyning
vandaflæsning,vandmåleraflæsning
vandaflæsningskort,vadmåleraflæsning
vandets hårdhedsgrad,hårdhedsgrad
vandingsforbud,forbud mod vanding
vandmåler,vandforsyning
vanværker,vandværker
varmetilskud,varmetillæg
Ved flerbørnsfødsler,tvillingehjælp
Ved kun én forælder mv.,alenemor
vej,veje
vejlys,gadebelysning
Velkommen til Rødbo,botilbud rødebo
Vi satser på mennesker,borgerinddragelsesstrategi
videncenter,videnscenter
vielse,ægteskab
vielse,vielser
vielse,giftes
vikar,vikarkorps
vikarbeauro,vikarkorps
vilde katte,herreløse katte
vilde katte,katte
vildkat,katte
vildkatte,katte
villagrunde,byggegrunde
virksomhedsgebyr,erhvervsgebyr
vægtafgift,nummerpladeekspedition
værdier,dekur
våbenskjold,byvåben
Weblager,Filarkiv
webmail,mail
webmail,nempost
webpost,nempost
webredaktør,webmaster
Ydelser,ydelsesservice
ydelsescenter,jobcenter
yellow card,sundhedskort
yoga,idræt
ældrecheck,supplerende pensionsydelse
ældrerådet,seniorrådet
ændring navn,navneændring
Økonomi og Personale,ballerup kommune centerchef jens vedel jørensen
økonomidirektør,økonomichef
økonomidiretør,økonomi
Økonomisk tilskud fra kommunen,helbredstillæg tandprotese
Økonomisk tilskud fra kommunen,helbrædstillæg
Økonomisk tilskud fra kommunen,helbredstilleg
ølruten,øl ruten
ørelæge,speciallæger
Åbne cafearrangementer om demens,demensforedrag
åbning for skat,skat
åbningstider,åbningstider paskontor
åbningstider rådhus,rådhuset
§18 midler,§18
7. Kollektiv bustrafik,250s
9. Parkering,langtiddparkering';
  $export['bellcom_elasticsearch_synonyms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_active';
  $strongarm->value = 1;
  $export['bellcom_elasticsearch_synonyms_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_cluser';
  $strongarm->value = 'bellcom_elasticsearch_cluster';
  $export['bellcom_elasticsearch_synonyms_cluser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_file_path';
  $strongarm->value = 'public://';
  $export['bellcom_elasticsearch_synonyms_file_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_index';
  $strongarm->value = 'web_search';
  $export['bellcom_elasticsearch_synonyms_index'] = $strongarm;

  return $export;
}
