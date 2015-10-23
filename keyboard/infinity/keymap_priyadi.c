#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|BSp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Del|
     * |-----------------------------------------------------------'
     * |Ctrl|Gui |Alt  |       Fn0/Space        |Alt |Gui|App |Ctrl|
     * `-----------------------------------------------------------'
     */
    [0] =
    KEYMAP(ESC, FN11,FN12,FN13,FN14,FN15,FN16,FN17,FN18,FN19,FN20,FN21,FN22,  GRV,BSPC, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
           BSPC,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN3 ,QUOT,ENT,  \
           FN1,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,  SLSH, FN2,DEL, \
           LCTL,LGUI,LALT,          FN0,                RALT,RGUI,SLCK, RCTL),

    /* Layer 1: Hybrid ESC and hard semicolon
     * ,-----------------------------------------------------------.
     * |  `|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------'
     * |    |    |     |                        |    |   |    |    |
     * `-----------------------------------------------------------'
     */
    [1] =
    KEYMAP( GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SCLN,TRNS,          TRNS,  \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS, \
           TRNS,TRNS,TRNS,         TRNS,                          TRNS,TRNS,TRNS,TRNS),

    /* Layer 2: SpaceFn/SemicolonFn layer
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Del|
     * |-----------------------------------------------------------|
     * |     |   |Prv|Ply|Nxt|   |   |PgU|Up |PgD|Prs|Vl-|Vl+|Mute |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |Hom|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |Bt3|Spc|End|   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |    |   |     |                          |    |   |App|Ins |
     * `-----------------------------------------------------------'
     */ 
    [2] = 
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS, DEL,   \
           CAPS,TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,PGUP,  UP,PGDN,PSCR,VOLD,VOLU, MUTE,      \
           DEL ,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,BTN3, SPC, END,TRNS,HOME, END,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS, APP, INS),
};

enum function_id {
    LONGF1,
    LONGF2,
    LONGF3,
    LONGF4,
    LONGF5,
    LONGF6,
    LONGF7,
    LONGF8,
    LONGF9,
    LONGF10,
    LONGF11,
    LONGF12
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    [3] = ACTION_LAYER_TAP_KEY(2, KC_SCLN),
    [1] = ACTION_LAYER_MODS(1, MOD_LSFT),
    [2] = ACTION_LAYER_MODS(1, MOD_RSFT),
    [11] = ACTION_FUNCTION_TAP(LONGF1),
    [12] = ACTION_FUNCTION_TAP(LONGF2),
    [13] = ACTION_FUNCTION_TAP(LONGF3),
    [14] = ACTION_FUNCTION_TAP(LONGF4),
    [15] = ACTION_FUNCTION_TAP(LONGF5),
    [16] = ACTION_FUNCTION_TAP(LONGF6),
    [17] = ACTION_FUNCTION_TAP(LONGF7),
    [18] = ACTION_FUNCTION_TAP(LONGF8),
    [19] = ACTION_FUNCTION_TAP(LONGF9),
    [20] = ACTION_FUNCTION_TAP(LONGF10),
    [21] = ACTION_FUNCTION_TAP(LONGF11),
    [22] = ACTION_FUNCTION_TAP(LONGF12)
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case LONGF1:
        case LONGF2:
        case LONGF3:
        case LONGF4:
        case LONGF5:
        case LONGF6:
        case LONGF7:
        case LONGF8:
        case LONGF9:
        case LONGF10:
        case LONGF11:
        case LONGF12:
            longfunc_function(record, id, opt);
            break;
    }
}

void longfunc_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    uint8_t tapkey;
    uint8_t longkey;

    switch (id) {
        case LONGF1:
            tapkey = KC_1;
            longkey = KC_F1;
            break;
        case LONGF2:
            tapkey = KC_2;
            longkey = KC_F2;
            break;
        case LONGF3:
            tapkey = KC_3;
            longkey = KC_F3;
            break;
        case LONGF4:
            tapkey = KC_4;
            longkey = KC_F4;
            break;
        case LONGF5:
            tapkey = KC_5;
            longkey = KC_F5;
            break;
        case LONGF6:
            tapkey = KC_6;
            longkey = KC_F6;
            break;
        case LONGF7:
            tapkey = KC_7;
            longkey = KC_F7;
            break;
        case LONGF8:
            tapkey = KC_8;
            longkey = KC_F8;
            break;
        case LONGF9:
            tapkey = KC_9;
            longkey = KC_F9;
            break;
        case LONGF10:
            tapkey = KC_0;
            longkey = KC_F10;
            break;
        case LONGF11:
            tapkey = KC_MINS;
            longkey = KC_F11;
            break;
        case LONGF12:
            tapkey = KC_EQL;
            longkey = KC_F12;
            break;
    }

    if (record->event.pressed) {
        if (record->tap.count <= 0) {
            register_code(longkey);
            unregister_code(longkey);
            record->tap.count = 0;  // ad hoc: cancel tap
        }
    } else {
        if (record->tap.count > 0) {
            register_code(tapkey);
            unregister_code(tapkey);
            record->tap.count = 0;  // ad hoc: cancel tap
        }
    }
}