+/**
 + * German
 + *
 + * LCD Menu Messages
 + * Please note these are limited to 17 characters!
 + *
 + */
	+
	+#define(length = 20) WELCOME_MSG              CUSTOM_MENDEL_NAME " bereit."
	+ #define MSG_SD_INSERTED                     "SD eingesetzt"
	+ #define MSG_SD_REMOVED                      "SD entfernt "
	+ #define MSG_MAIN                            "Hauptmenue"
	+ #define MSG_DISABLE_STEPPERS                "Motoren aus"
	+ #define MSG_AUTO_HOME                       "Startposition"
	+ #define MSG_SET_HOME_OFFSETS                "Abstand vom Ursprung einstellen"
	+ #define MSG_SET_ORIGIN                      "Ursprung einstellen"
	+ #define MSG_COOLDOWN                        "Abkuehlen"
	+ #define MSG_SWITCH_PS_ON                    "Netzteil EIN"
	+ #define MSG_SWITCH_PS_OFF                   "Netzteil AUS"
	+ #define MSG_MOVE_AXIS                       "Achsbewegung"
	+ #define MSG_MOVE_X                          "Bewege X"
	+ #define MSG_MOVE_Y                          "Bewege Y"
	+ #define MSG_MOVE_Z                          "Bewege Z"
	+ #define MSG_MOVE_E                          "Extruder"
	+ #define MSG_SPEED                           "Geschwindigkeit"
	+ #define MSG_NOZZLE                          "Duese"
	+ #define MSG_NOZZLE1                         "Duese2"
	+ #define MSG_NOZZLE2                         "Duese3"
	+ #define MSG_BED                             "Bett"
	+ #define MSG_FAN_SPEED                       "Luefter-Tempo"
	+ #define MSG_FLOW                            "Durchfluss"
	+ #define MSG_FLOW0                           "Durchfluss 0"
	+ #define MSG_FLOW1                           "Durchfluss 1"
	+ #define MSG_FLOW2                           "Durchfluss 2"
	+ #define MSG_CONTROL                         "Kontrolle"
	+ #define MSG_MIN                             " \002 Min"
	+ #define MSG_MAX                             " \002 Max"
	+ #define MSG_FACTOR                          " \002 Fakt"
	+ #define MSG_TEMPERATURE                     "Temperatur"
	+ #define MSG_MOTION                          "Bewegung"
	+ #define MSG_VOLUMETRIC                      "Filament"
	+ #define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
	+ #define MSG_STORE_EPROM                     "Abspeichern"
	+ #define MSG_LOAD_EPROM                      "Lade Speicher"
	+ #define MSG_RESTORE_FAILSAFE                "Standardwerte setzen"
	+ #define MSG_REFRESH                         "\xF8" "Erneuern"
	+ #define MSG_WATCH                           "Information"
	+ #define MSG_TUNE                            "Feineinstellung"
	+ #define MSG_PAUSE_PRINT                     "Druck unterbrech."
	+ #define MSG_RESUME_PRINT                    "Fortsetzen"
	+ #define MSG_STOP_PRINT                      "Druck abbrechen"
	+ #define MSG_CARD_MENU                       "Drucken von SD"
	+ #define MSG_NO_CARD                         "Keine SD Karte"
	+ #define MSG_DWELL                           "Einen Moment bitte."
	+ #define MSG_USERWAIT                        "Warte auf user..."
	+ #define MSG_RESUMING                        "Druck fortgesetzt"
	+ #define(length = 20) MSG_PRINT_ABORTED        "Druck abgebrochen"
	+ #define MSG_NO_MOVE                         "Keine Bewegung."
	+ #define MSG_KILLED                          "ABGEBROCHEN. "
	+ #define MSG_STOPPED                         "GESTOPPT. "
	+ #define MSG_FILAMENTCHANGE                  "Filament-Wechsel"
	+ #define MSG_INIT_SDCARD                     "Init SD Karte"
	+ #define MSG_CNG_SDCARD                      "Wechsel SD Karte"
	+ #define MSG_BABYSTEP_X                      "Babystep X"
	+ #define MSG_BABYSTEP_Y                      "Babystep Y"
	+ #define MSG_BABYSTEP_Z                      "Z einstellen"
	+ #define MSG_ADJUSTZ							"Auto Z einstellen?"
	+ #define MSG_PICK_Z							"Waehle Abdruck"
	+
	+#define MSG_SETTINGS                        "Einstellungen"
	+ #define MSG_PREHEAT                         "Vorwaermen"
	+ #define MSG_UNLOAD_FILAMENT                 "Filament entladen"
	+ #define MSG_LOAD_FILAMENT                 "Filament laden"
	+
	+#define MSG_RECTRACT                        "Retract"
	+ #define MSG_ERROR                        "FEHLER:"
	+ #define(length = 20) MSG_PREHEAT_NOZZLE       "Duese Vorwaermen"
	+ #define MSG_SUPPORT "Support"
	+ #define(length = 20) MSG_CORRECTLY			"Wechsel ok?"
	+ #define MSG_YES					"Ja"
	+ #define MSG_NO					"Nein"
	+ #define(length = 19) MSG_NOT_LOADED 			"Fil. nicht geladen"
	+ #define MSG_NOT_COLOR 				"Farbe unklar"
	+ #define(length = 20) MSG_LOADING_FILAMENT		"Filament leadt"
	+ #define(length = 20) MSG_PLEASE_WAIT			"Bitte warten"
	+ #define MSG_LOADING_COLOR		"Lade Farbe"
	+ #define MSG_CHANGE_SUCCESS		"Wechsel erfolgr.!"
	+ #define(length = 20) MSG_PRESS				"und Knopf druecken"
	+ #define(length = 20) MSG_INSERT_FILAMENT		"Filament einlegen"
	+ #define(length = 20) MSG_CHANGING_FILAMENT	"Filament-Wechsel!"
	+
	+
	+#define MSG_SILENT_MODE_ON					"Mode     [leise]"
	+ #define MSG_SILENT_MODE_OFF					"Mode [Hohe Leist]"
	+ #define(length = 20) MSG_REBOOT				"Zum Uebernehmen "
	+ #define(length = 22) MSG_TAKE_EFFECT			"Drucker neu starten"
	+
	+#define MSG_Enqueing                        "enqueuing \"
	+ #define MSG_POWERUP                         "Einschalten"
	+ #define MSG_CONFIGURATION_VER               " Letztes Update:"
	+ #define MSG_FREE_MEMORY                     " Freier Speicher: "
	+ #define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
	+ #define MSG_OK                              "ok"
	+ #define MSG_ERR_CHECKSUM_MISMATCH           "Pruefsummenfehler, Letzte Zeile: " //Checksum Fehler, Letzte Zeile: "
	+ #define MSG_ERR_NO_CHECKSUM                 "Keine Pruefsumme mit Zeilennummer, Letzte Zeile: " //Keine Checksum mit Zeilennummer, Letzte Zeile: "
	+ #define MSG_BEGIN_FILE_LIST                 "Beginn Dateiliste"
	+ #define MSG_END_FILE_LIST                   "Ende Dateiliste"
	+ #define MSG_M104_INVALID_EXTRUDER           "M104 Falscher Extruder"
	+ #define MSG_M105_INVALID_EXTRUDER           "M105 Falscher Extruder"
	+ #define MSG_M200_INVALID_EXTRUDER           "M200 Falscher Extruder"
	+ #define MSG_M218_INVALID_EXTRUDER           "M218 Falscher Extruder"
	+ #define MSG_M221_INVALID_EXTRUDER           "M221 Falscher Extruder"
	+ #define MSG_ERR_NO_THERMISTORS              "Keine Thermistoren - keine Temperatur"
	+ #define MSG_M109_INVALID_EXTRUDER           "M109 Falscher Extruder"
	+ #define MSG_HEATING                         "Aufwaermen"
	+ #define(length = 20) MSG_HEATING_COMPLETE   "Aufwaermen OK"
	+ #define MSG_BED_HEATING                     "Bett aufwaermen"
	+ #define MSG_BED_DONE                        "Bett OK"
	+ #define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	+ #define MSG_ERR_KILLED                      "Printer gestoppt. kill() aufgerufen!"
	+ #define MSG_ERR_STOPPED                     "Drucker aufgrund von Fehlern gestoppt. Fehler beheben und mit M999 neu starten. (Temperatur wird zurueckgesetzt. Nach dem Neustart neu einstellen!)"
	+ #define MSG_RESEND                          "Wiederholen: "
	+ #define MSG_M119_REPORT                     "Statusbericht Endanschlag"
	+ #define MSG_ENDSTOP_HIT                     "AUSGELOEST"
	+ #define MSG_ENDSTOP_OPEN                    "offen"
	+
	+#define MSG_SD_CANT_OPEN_SUBDIR             "Kann Unterverz. nicht oeffnen"
	+ #define MSG_SD_INIT_FAIL                    "SD Init fehlerhaft"
	+ #define MSG_SD_VOL_INIT_FAIL                "Dateisystem Init fehlerhaft"
	+ #define MSG_SD_OPENROOT_FAIL                "Zugriff auf Basisverzeichnis misslungen"
	+ #define MSG_SD_CARD_OK                      "SD Karte ok"
	+ #define MSG_SD_WORKDIR_FAIL                 "Oeffnen Arbeitsverzeichnis misslungen"
	+ #define MSG_SD_OPEN_FILE_FAIL               "Fehler beim Oeffnen der Datei: "
	+ #define MSG_SD_FILE_OPENED                  "Datei geoeffnet: "
	+ #define MSG_SD_FILE_SELECTED                "Datei ausgewaehlt"
	+ #define MSG_SD_WRITE_TO_FILE                "Schreiben der Datei: "
	+ #define MSG_SD_PRINTING_BYTE                "SD printing byte "
	+ #define MSG_SD_NOT_PRINTING                 "Kein SD Print"
	+ #define MSG_SD_ERR_WRITE_TO_FILE            "Fehler beim Schreiben in Datei"
	+ #define MSG_SD_CANT_ENTER_SUBDIR            "Zugangsproblem Unterverzeichnis: "
	+ #define MSG_STEPPER_TOO_HIGH                "Schrittrate zu hoch"
	+ #define MSG_ENDSTOPS_HIT                    "Endanschlag erreicht"
	+ #define MSG_ERR_COLD_EXTRUDE_STOP           "Stopp, Extruder kalt!"
	+ #define MSG_BABYSTEPPING_X                  "Babystepping X"
	+ #define MSG_BABYSTEPPING_Y                  "Babystepping Y"
	+ #define MSG_BABYSTEPPING_Z                  "Z wurde eingestellt"
	+ #define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Menuestruktur fehlerhaft"
	+
	+#define MSG_LANGUAGE_NAME					"Deutsch"
	+ #define MSG_LANGUAGE_SELECT					"Waehle Sprache"
	+ #define MSG_PRUSA3D							"prusa3d.com"
	+ #define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
	+ #define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"
	+
	+#define MSG_SELFTEST_ERROR					"Selbtest Fehler!"
	+ #define MSG_SELFTEST_PLEASECHECK			"Bitte pruefe:"
	+ #define MSG_SELFTEST_NOTCONNECTED			"Nicht angeschlossen"
	+ #define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
	+ #define MSG_SELFTEST_BEDHEATER				"Bett / Heater"
	+ #define MSG_SELFTEST_WIRINGERROR			"Verdrahtungfehler"
	+ #define MSG_SELFTEST_ENDSTOPS				"Endschalter"
	+ #define MSG_SELFTEST_MOTOR					"Motor"
	+ #define MSG_SELFTEST_ENDSTOP				"Endstop"
	+ #define MSG_SELFTEST_ENDSTOP_NOTHIT			"Ende nicht getrof."
	+ #define MSG_SELFTEST_OK						"Selbsttest OK"
	+ #define MSG_LOOSE_PULLEY					"Lose Riemenscheibe"
	+
	+#define MSG_SELFTEST_FAN					"Lueftertest"
+#define(length = 20) MSG_SELFTEST_COOLING_FAN			"Vorderer Luefter?"
+#define(length = 20) MSG_SELFTEST_EXTRUDER_FAN			"Linker Luefter?"
+#define MSG_SELFTEST_FAN_YES				"Dreht"
+#define MSG_SELFTEST_FAN_NO					"Dreht nicht"
+
+#define(length = 20) MSG_STATS_TOTALFILAMENT	"Gesamtfilament:"
+ #define(length = 20) MSG_STATS_TOTALPRINTTIME "Totale Druckzeit:"
+ #define(length = 20) MSG_STATS_FILAMENTUSED	"Filamentverbrauch:"
+ #define(length = 20) MSG_STATS_PRINTTIME		"Druckzeit:  "
+ #define(length = 20) MSG_SELFTEST_START				"Selbsttest start "
+ #define(length = 20) MSG_SELFTEST_CHECK_ENDSTOPS	"Pruefe Endschalter  "
+ #define(length = 20) MSG_SELFTEST_CHECK_HOTEND		"Pruefe Duese" 
+ #define(length = 20) MSG_SELFTEST_CHECK_X				"Pruefe X Achse    "
+ #define(length = 20) MSG_SELFTEST_CHECK_Y				"Pruefe Y Achse    "
+ #define(length = 20) MSG_SELFTEST_CHECK_Z				"Pruefe Z Achse    "
+ #define(length = 20) MSG_SELFTEST_CHECK_BED			"Pruefe Bett        "
+ #define(length = 20) MSG_SELFTEST_CHECK_ALLCORRECT	"Alles richtig    "
+ #define MSG_SELFTEST						"Selbsttest       "
+ #define(length = 20) MSG_SELFTEST_FAILED		"Selbsttest misslung."
+ #define MSG_STATISTICS						"Statistiken "
+ #define MSG_USB_PRINTING					"Drucken ueber USB"
+ #define MSG_HOMEYZ                          "Kalibrieren Z"
+ #define MSG_HOMEYZ_PROGRESS                 "Kalibriere Z"
+ #define MSG_HOMEYZ_DONE		                "Kalibrierung OK"
+
+#define MSG_SHOW_END_STOPS					"Endschalter Stat."
+ #define MSG_CALIBRATE_BED					"Kalibrierung XYZ"
+ #define MSG_CALIBRATE_BED_RESET				"Reset XYZ Kalibr."
+

+#define(length = 20, lines = 8) MSG_MOVE_CARRIAGE_TO_THE_TOP 	"Kalibrieren von XYZ. Drehen Sie den Knopf bis der obere Anschlag erreicht wird. Klicken Sie den Knopf wenn es ganz oben wird."
+ #define(length = 20, lines = 8) MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 	"Kalibrieren von Z. Drehen Sie den Knopf bis der obere Anschlag erreicht wird. Klicken Sie den Knopf wenn es ganz oben wird."
+

+#define(length = 20, lines = 8) MSG_CONFIRM_NOZZLE_CLEAN			"Bitte entfernen Sie ueberstehendes Filament von der Duese. Klicken wenn sauber."
+ #define(length = 20, lines = 2) MSG_CONFIRM_CARRIAGE_AT_THE_TOP	"Ist der Schlitten ganz oben?"
+
+#define(length = 60) MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Suchen Bett Kalibrierpunkt"
+ #define(length = 14) MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" von 4"
+ #define(length = 60) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Verbesserung Bett Kalibrierpunkt"
+ #define(length = 14) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" von 4"
+ #define(length = 60) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Messen der Referenzhoehe des Kalibrierpunktes"
+ #define(length = 14) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" von 9"
#define MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Iteration "
+
+#define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"XYZ-Kalibrierung fehlgeschlagen. Bett-Kalibrierpunkt nicht gefunden."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED				"XYZ-Kalibrierung fehlgeschlagen. Bitte schauen Sie in das Handbuch."

+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"XYZ-Kalibrierung ok. X/Y-Achsen sind senkrecht zueinander. Glueckwunsch!"
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"XYZ Kalibrierung in Ordnung. X/Y Achsen sind etwas schief."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME					"XYZ Kalibrierung in Ordnung. Schiefheit wird automatisch korrigiert."

+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"XYZ-Kalibrierung fehlgeschlagen. Linker vorderer Kalibrierpunkt ist zu weit vorne."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR		"XYZ-Kalibrierung fehlgeschlagen. Rechter vorderer Kalibrierpunkt ist zu weit vorne."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"XYZ-Kalibrierung fehlgeschlagen. Vordere Kalibrierpunkte sind zu weit vorne."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR		"XYZ-Kalibrierung ungenau. Linker vorderer Kalibrierpunkt ist zu weit vorne."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR		"XYZ-Kalibrierung ungenau. Rechter vorderer Kalibrierpunkt ist zu weit vorne."
+ #define(length = 20, lines = 8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR		"XYZ-Kalibrierung ungenau. Vordere Kalibrierpunkte sind zu weit vorne."
+
+#define(length = 20, lines = 4) MSG_BED_LEVELING_FAILED_POINT_LOW						"Z-Kal. fehlgeschlg. Sensor nicht ausgeloest. Schmutzige Duese? Warte auf Reset"

+ #define(length = 20, lines = 4) MSG_BED_LEVELING_FAILED_POINT_HIGH						"Z-Kalibrierung fehlgeschlg. Sensor zu hoch ausgeloest. Warte auf Reset."
+ #define(length = 20, lines = 4) MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Z-Kalibrierung fehlgeschlg. Sensor nicht angeschlossen. Warte auf Reset."
+
+#define(length = 20, lines = 2) MSG_NEW_FIRMWARE_AVAILABLE								"Neue Firmware Version verfuegbar:"
+ #define(length = 20) MSG_NEW_FIRMWARE_PLEASE_UPGRADE									"Bitte aktualisieren."
+
+ #define(length = 20, lines = 8) MSG_FOLLOW_CALIBRATION_FLOW								"Der Drucker wurde noch nicht kalibriert. Bitte folgen Sie das Handbuch, Kapitel First steps, Abschnitt Calibration flow."
+ #define(length = 20, lines = 12) MSG_BABYSTEP_Z_NOT_SET									"Der Abstand zwischen der Spitze der Duese und der Bett ist noch nicht eingestellt. Bitte folgen Sie dem Handbuch, First steps, section First layer calibration."
+ 
+

+ #define(length = 20, lines = 4) MSG_FILAMENT_LOADING_T0							"Filament in extruder 1 einlegen. Klicken wenn fertig."
+ #define(length = 20, lines = 4) MSG_FILAMENT_LOADING_T1							"Filament in extruder 2 einlegen. Klicken wenn fertig."
+ #define(length = 20, lines = 4) MSG_FILAMENT_LOADING_T2							"Filament in extruder 3 einlegen. Klicken wenn fertig."
+ #define(length = 20, lines = 4) MSG_FILAMENT_LOADING_T3							"Filament in extruder 4 einlegen. Klicken wenn fertig."
+ #define(length = 20, lines = 1) MSG_CHANGE_EXTR									"Wechsel extruder"
+


+ #define(length = 20, lines = 4) MSG_FIL_ADJUSTING								"Filament positionieren. Bitte warten."
+ #define(length = 20, lines = 8) MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ			"Filamente sind jetzt eingestellt. Bitte reinigen Sie die Duese zur Kalibrierung. Klicken wenn fertig."
+ 
+ #define(length = 20, lines = 1) MSG_CALIBRATE_E						"Kalibriere E"
+//#define(length=20, lines=1)				"Reset E Cal."

+#define(length = 20, lines = 8) MSG_E_CAL_KNOB						"Knopf drehen bis die Filamentmarkierung erreicht ist. Klicken wenn fertig."
+
+//#define(length=20, lines=1) MSG_FARM_CARD_MENU					"Farm mode print"

+#define(length = 20, lines = 8) MSG_MARK_FIL						"Filament 100mm vom Extrudergehaeuse markieren. Klicken wenn Fertig."
+ #define(length = 20, lines = 8) MSG_CLEAN_NOZZLE_E				"E-Kalibrierung beendet. Bitte reinigen Sie die Duese. Klicken wenn fertig."
+ #define(length = 20, lines = 3) MSG_WAITING_TEMP				"Warten auf Abkuehlung von Heater und Bett."

+ #define(length = 20, lines = 2) MSG_FILAMENT_CLEAN				"Ist Farbe rein?"
+ #define(lenght = 20, lines = 1) MSG_UNLOADING_FILAMENT			"Filament auswerfen"
+ #define(length = 20, lines = 8) MSG_PAPER						"Legen ein Blatt Papier unter die Duese waehrend der Kalibrierung der ersten 4 Punkte. Wenn die Duese das Papier einklemmt, Drucker sofort ausschalten"
+
+#define MSG_BED_CORRECTION_MENU									"Bett level Korrekt"

+ #define MSG_BED_CORRECTION_LEFT									"Links     [um]"
+ #define MSG_BED_CORRECTION_RIGHT								"Rechts    [um]"
+ #define MSG_BED_CORRECTION_FRONT								"Vorne     [um]"
+ #define MSG_BED_CORRECTION_REAR									"Hinten    [um]"
+ #define MSG_BED_CORRECTION_RESET								"Ruecksetzen"
+
+#define MSG_MESH_BED_LEVELING									"Mesh Bett Leveling"
+ #define MSG_MENU_CALIBRATION									"Kalibrierung"

+ #define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF					"SD Karte [normal]"
+ #define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON					"SD Karte [FlashAir]"

#define MSG_FINISHING_MOVEMENTS							"Bewegung beenden"
#define MSG_PRINT_PAUSED								"Druck pausiert"
#define MSG_RESUMING_PRINT								"Druck weitergehen"
#define MSG_PID_EXTRUDER								"PID Kalibrierung"
#define MSG_SET_TEMPERATURE								"Temp. einsetzen"
#define MSG_PID_FINISHED								"PID Kalib. fertig"
#define MSG_PID_RUNNING									"PID Kalib."

#define MSG_CALIBRATE_PINDA								"Kalibrieren"
#define MSG_CALIBRATION_PINDA_MENU						"Temp. kalibrieren"
#define MSG_PINDA_NOT_CALIBRATED						"Temperatur wurde nicht kalibriert"
#define MSG_PINDA_PREHEAT								"PINDA erwaermen"
#define MSG_TEMP_CALIBRATION							"Temp Kalib.         "
#define MSG_TEMP_CALIBRATION_DONE						"Temp. Kalibrierung fertig. Klicken um weiter zu gehen."
#define MSG_TEMP_CALIBRATION_ON							"Temp. Kal. [ON]"
#define MSG_TEMP_CALIBRATION_OFF						"Temp. Kal. [OFF]"

#define MSG_LOAD_ALL									"Alle laden"
#define MSG_LOAD_FILAMENT_1								"Filament 1 laden"
#define MSG_LOAD_FILAMENT_2								"Filament 2 laden"
#define MSG_LOAD_FILAMENT_3								"Filament 3 laden"
#define MSG_LOAD_FILAMENT_4								"Filament 4 laden"
#define MSG_UNLOAD_FILAMENT_1							"Filam. 1 entladen"
#define MSG_UNLOAD_FILAMENT_2							"Filam. 2 entladen"
#define MSG_UNLOAD_FILAMENT_3							"Filam. 3 entladen"
#define MSG_UNLOAD_FILAMENT_4							"Filam. 4 entladen"
#define MSG_UNLOAD_ALL									"Alles entladen"
#define MSG_PREPARE_FILAMENT							"Filam. bereithalten"
#define MSG_ALL											"Alle"
#define MSG_USED										"Beim Druck benutzte"
#define MSG_CURRENT										"Aktuelles"
#define MSG_CHOOSE_EXTRUDER								"Waehlen Sie Extruder"
#define MSG_EXTRUDER									"Extruder"
#define MSG_EXTRUDER_1									"Extruder 1"
#define MSG_EXTRUDER_2									"Extruder 2"
#define MSG_EXTRUDER_3									"Extruder 3"
#define MSG_EXTRUDER_4									"Extruder 4"

#define MSG_WIZARD							"Wizard"
#define MSG_WIZARD_WELCOME					"Hallo, ich bin dein Original Prusa i3 Drucker. Moechten Sie meine Hilfe durch den Setup-Prozess?"
#define MSG_WIZARD_QUIT						"Sie koennen immer den Asistenten im Menu neu aufrufen: Kalibrierung -> Assistant"
#define MSG_WIZARD_SELFTEST					"Zunaechst fuehre ich den Selbsttest durch um die haeufigsten Probleme bei der Aufbau zu ueberpruefen."
#define MSG_WIZARD_CALIBRATION_FAILED		"Bitte ueberpruefen Sie unser Handbuch und beheben Sie das Problem. Fahren Sie dann mit dem Assistenten fort, indem Sie den Drucker neu starten."
#define MSG_WIZARD_XYZ_CAL					"Ich werde jetzt die XYZ-Kalibrierung durchfuehren. Es wird ca. 12 Minuten dauern"
#define MSG_WIZARD_FILAMENT_LOADED			"Ist das Filament geladen?"
#define MSG_WIZARD_Z_CAL					"Ich werde jetzt die Z Kalibrierung durchfuehren."
#define MSG_WIZARD_WILL_PREHEAT				"Jetzt werde ich die Duese fuer PLA vorheizen. "
#define MSG_WIZARD_V2_CAL					"Jetzt werde ich den Abstand zwischen Duesenspitze und Druckbett kalibrieren."
#define MSG_WIZARD_V2_CAL_2					"Ich werde jetzt erste Linie drucken. Waehrend des Druckes koennen Sie die Duese allmaehlich senken indem Sie den Knopf drehen, bis Sie die optimale Hoehe erreichen. Ueberpruefen Sie die Bilder in unserem Handbuch im Kapitel Kalibrierung"
#define MSG_V2_CALIBRATION					"Erste-Schicht Kal"
#define MSG_WIZARD_DONE						"Alles wurde getan. Viel Spass beim Drucken!"
#define MSG_WIZARD_LOAD_FILAMENT			"Fuehren Sie bitte PLA Filament in den Extruder und bestaetigen Sie den Knopf um es zu laden."
#define MSG_WIZARD_RERUN					"Der laufende Assistent loescht die aktuelle Kalibrierergebnisse und wird von Anfang an beginnen. Fortsetzen?"
#define MSG_WIZARD_REPEAT_V2_CAL			"Moechten Sie den letzten Schritt wiederholen um den Abstand zwischen Duese und Druckbett neu einzustellen?"
#define MSG_WIZARD_CLEAN_HEATBED			"Bitte reinigen Sie das Heizbett und druecken Sie dann den Knopf."
#define MSG_WIZARD_PLA_FILAMENT				"Ist es wirklich PLA Filament?"
#define MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Bitte laden Sie PLA-Filament und fahren Sie mit dem Assistenten fort, indem Sie den Drucker neu starten."
#define MSG_PLA_FILAMENT_LOADED				"Ist PLA Filament geladen?"
#define MSG_PLEASE_LOAD_PLA					"Bitte laden Sie zuerst PLA Filament."
#define MSG_WIZARD_HEATING					"Vorheizen der Duese. Bitte warten."
#define MSG_M117_V2_CALIBRATION				"M117 Erste-Schicht Kal."

#define MSG_DATE							"Datum"
#define MSG_XYZ_DETAILS						"XYZ Kal. Details"
#define	MSG_Y_DISTANCE_FROM_MIN				"Y Entfernung vom min"
#define	MSG_LEFT							"Links:"
#define MSG_RIGHT							"Rechts:"
#define MSG_MEASURED_SKEW					"Schraeglauf:"
#define MSG_SLIGHT_SKEW						"Leichter Schr.:"
#define MSG_SEVERE_SKEW						"Schwerer Schr.:"