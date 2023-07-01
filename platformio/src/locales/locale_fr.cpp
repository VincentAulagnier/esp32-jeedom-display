/* American English locale settings for esp32-weather-epd.
 * Copyright (C) 2022-2023  Luke Marzen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "config.h"

#ifdef LOCALE_FR

#include <vector>
#include <Arduino.h>
#include "_locale.h"

// TIME/DATE (NL_LANGINFO)
// locale-based information,
// see https://man7.org/linux/man-pages/man3/nl_langinfo.3.html for more info.
const char *LC_ABDAY[7] = {"Dim", "Lun", "Mar", "Mer", "Jeu", "Ven", "Sam"};
const char *LC_DAY[7] = {"Dimanche", "Lundi",    "Mardi", "Mercredi", 
                         "Jeudi",    "Vendredi", "Samedi"};
const char *LC_ABMON[12] = {"Jan",  "Fev", "Mar", "Avr", "Mai", "Juin", 
                            "Juil", "Aou", "Sep", "Oct", "Nov", "Dec"};
const char *LC_MON[12] = {"Janvier",    "Fevrier", "Mars",     "Avril", 
                           "Mai",       "Juin",    "Juillet",  "Aout", 
                           "Septembre", "Octobre", "Novembre", "Decembre"};
const char *LC_AM_PM[2] = {"AM", "PM"};
const char *LC_D_T_FMT     = "%a %b %e %H:%M:%S %Y";
const char *LC_D_FMT       = "%d/%m/%y";
const char *LC_T_FMT       = "%H:%M:%S";
const char *LC_T_FMT_AMPM  = "%I:%M:%S %p";
const char *LC_DATE_FORMAT = "%A %e %B";

// OWM LANGUAGE
// For full list of languages, see https://openweathermap.org/api/one-call-api#multi
// Note: "[only] The contents of the 'description' field will be translated."
const String OWM_LANG = "fr";

// CURRENT CONDITIONS
const char *TXT_FEELS_LIKE         = "Ressenti";
const char *TXT_SUNRISE            = "Lever";
const char *TXT_SUNSET             = "Coucher";
const char *TXT_WIND               = "Vent";
const char *TXT_HUMIDITY           = "Humidite";
const char *TXT_UV_INDEX           = "Index UV";
const char *TXT_PRESSURE           = "Pression";
const char *TXT_AIR_QUALITY_INDEX  = "Qualite de l'air";
const char *TXT_VISIBILITY         = "Visibilite";
const char *TXT_INDOOR_TEMPERATURE = "Temperature";
const char *TXT_INDOOR_HUMIDITY    = "Humidite";

// UV INDEX
const char *TXT_UV_LOW       = "Bas";
const char *TXT_UV_MODERATE  = "Moyen";
const char *TXT_UV_HIGH      = "Haut";
const char *TXT_UV_VERY_HIGH = "Tres Haut";
const char *TXT_UV_EXTREME   = "Extreme";

// WIFI
const char *TXT_WIFI_EXCELLENT     = "Excellent";
const char *TXT_WIFI_GOOD          = "Bon";
const char *TXT_WIFI_FAIR          = "Moyen";
const char *TXT_WIFI_WEAK          = "Faible";
const char *TXT_WIFI_NO_CONNECTION = "Pas de Connexion";

// LAST REFRESH
const char *TXT_UNKNOWN = "Inconnu";

// ALERTS
// The display can show up to 2 alerts, but alerts can be unpredictible in
// severity and number. If more than 2 alerts are active, the esp32 will attempt
// to interpret the urgency of each alert and prefer to display the most urgent 
// and recently issued alerts of each event type. Depending on your region 
// different keywords are used to convey the level of urgency.
//
// A vector array is used to store these keywords. Urgency is ranked from low to
// high where the first index of the vector is the least urgent keyword and the 
// last index is the most urgent keyword. Expected as all lowercase.
//
// Here are a few examples, uncomment the array for your region (or create your 
// own).
// const std::vector<String> ALERT_URGENCY = {"statement", "watch", "advisory", "warning", "emergency"}; // US National Weather Service
// const std::vector<String> ALERT_URGENCY = {"yellow", "amber", "red"};                 // United Kingdom's national weather service (MET Office)
// const std::vector<String> ALERT_URGENCY = {"minor", "moderate", "severe", "extreme"}; // METEO
const std::vector<String> ALERT_URGENCY = {}; // Disable urgency interpretation (algorithm will fallback to only prefer the most recently issued alerts)

// ALERT TERMINOLOGY
// Weather terminology associated with each alert icon
const std::vector<String> TERM_SMOG =
    {"pollution"};
const std::vector<String> TERM_SMOKE =
    {"fumee"};
const std::vector<String> TERM_FOG =
    {"brouillard", "haar"};
const std::vector<String> TERM_METEOR =
    {"meteorite", "asteroide"};
const std::vector<String> TERM_NUCLEAR =
    {"nucleaire", "radiations"};
const std::vector<String> TERM_BIOHAZARD =
    {"pollution biologique", "risque biologique"};
const std::vector<String> TERM_EARTHQUAKE =
    {"tremblement de terre"};
const std::vector<String> TERM_TSUNAMI =
    {"tsunami"};
const std::vector<String> TERM_FIRE =
    {"feu", "drapeau rouge"};
const std::vector<String> TERM_HEAT =
    {"chaleur"};
const std::vector<String> TERM_WINTER =
    {"blizzard", "hiver", "glace", "neige", "sleet", "froid", "pluie verglacante", 
     "vent froid", "gelee", "frost", "hail"};
const std::vector<String> TERM_LIGHTNING =
    {"orage", "storm cell", "pulse storm", "squall line", "supercell",
     "lightning"};
const std::vector<String> TERM_SANDSTORM =
    {"sandstorm", "blowing dust", "dust storm"};
const std::vector<String> TERM_FLOOD =
    {"flood", "storm surge", "seiche", "swell", "high seas", "high tides",
     "tidal surge"};
const std::vector<String> TERM_VOLCANO =
    {"volcanic", "ash", "volcano", "eruption"};
const std::vector<String> TERM_AIR_QUALITY =
    {"air", "stagnation", "pollution"};
const std::vector<String> TERM_TORNADO =
    {"tornade"};
const std::vector<String> TERM_SMALL_CRAFT_ADVISORY =
    {"small craft", "wind advisory"};
const std::vector<String> TERM_GALE_WARNING =
    {"gale"};
const std::vector<String> TERM_STORM_WARNING =
    {"storm warning"};
const std::vector<String> TERM_HURRICANE_WARNING =
    {"hurricane force wind", "extreme wind", "high wind"};
const std::vector<String> TERM_HURRICANE =
    {"tempete", "tempete tropicale", "typhon", "cyclone"};
const std::vector<String> TERM_DUST =
    {"poussiere", "sable"};
const std::vector<String> TERM_STRONG_WIND =
    {"vent fort"};

#endif
