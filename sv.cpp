#include "inkluderingar.hufvudpp"

#define hel int
#define hufvud main
#define pekare *
#define dubbelpekare pekare pekare
#define referens_till &
#define dereferera *
#define skrivutf printf
#define medans while
#define placeras puts
#define mall template
#define typnamn typename
#define sluta break
#define om if
#define annars else
#define alternativt else if
#define uppfostra throw
#define offentligt public
#define personligt private
#define snöre string
#define bil auto
#define evig const
#define fackförbund union
#define knapp switch
#define fodral case
#define rullskridsko inline
#define default
#define barnförbjudet explicit
#define förinta delete
#define gör do
#define evig_gjutning const_cast
#define icke_vid_kompileringstid_bestämd_gjutning dynamic_cast
#define gratis free

#define könssjukdom std

#define herr_bool bool
#define oskyltad unsigned
#define dubbel double
#define flyt float
#define vidbränd char
#define tomma_intet void
#define inget NULL

#define öppen_krullig_tandställning {
#define stängd_krullig_tandställning }


#define ökas_med_ett ++

#define klass class

klass Barn öppen_krullig_tandställning
offentligt:
    Barn(könssjukdom::snöre meddelande) : meddelande(meddelande)
        öppen_krullig_tandställning stängd_krullig_tandställning
personligt:
    könssjukdom::snöre meddelande;
stängd_krullig_tandställning;


hel hufvud(hel arga, vidbränd dubbelpekare argv)
{
    bil i = 0;
    vidbränd dubbelpekare nuvarande = argv;

    medans (i < arga) {
        placeras(dereferera nuvarande);
        nuvarande++;
        i ökas_med_ett;
        om (i == 3) {
            uppfostra Barn("För många argument");
        }
    }
}
