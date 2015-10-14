// hid_liber priyadi

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer 0: Default ANSI
 *
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |~  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp | |Ins|Hom|PgU|
 * |-----------------------------------------------------------| |-----------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD|
 * |-----------------------------------------------------------| `-----------'
 * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |              
 * |-----------------------------------------------------------|     ,---.    
 * |Shft|iso|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |     |Up |    
 * |-----------------------------------------------------------| ,-----------.
 * |Ctl|Gui|Alt|          Space/Fn             |Alt|Gui|App|Ctl| |Lef|Dow|Rig|
 * `-----------------------------------------------------------' `-----------'
 */

  KEYMAP(\
      ESC,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,       PSCR, SLCK,  BRK, \
      GRV,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL, BSPC,  INS, HOME, PGUP, \
      TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,  DEL,  END, PGDN, \
     CAPS,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,        ENT,                   \
     LSFT, NUBS,    Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,       RSFT,         UP,       \
     LCTL, LGUI, LALT,              FN0,                         RALT, RGUI,  APP, RCTL, LEFT, DOWN, RGHT),

/* Layer 1:
 *
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
 * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
 * `---'   `---------------' `---------------' `---------------' `-----------'
 * ,-----------------------------------------------------------. ,-----------.
 * |   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    | |   |   |   |
 * |-----------------------------------------------------------| |-----------|
 * |     |   |Prv|Ply|Nxt|   |   |PgU|Up |PgD|Prs|Vl-|Vl+|Mute | |   |   |   |
 * |-----------------------------------------------------------| `-----------'
 * |      |   |   |   |   |   |Hom|Lef|Dow|Rig|   |   |        |              
 * |-----------------------------------------------------------|     ,---.    
 * |    |   |   |   |   |   |Spc|End|   |   |   |   |          |     |   |    
 * |-----------------------------------------------------------| ,-----------.
 * |   |   |   |                               |   |   |   |   | |   |   |   |
 * `-----------------------------------------------------------' `-----------'
 */

 KEYMAP(\
     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, \
     TRNS,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12, DEL, TRNS, TRNS, TRNS, \
     TRNS, TRNS, MPRV, MPLY, MNXT, TRNS, TRNS, PGUP,   UP, PGDN, PSCR, VOLD, VOLU, MUTE, TRNS, TRNS, TRNS, \
     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, LEFT, DOWN, RGHT, TRNS, TRNS,       TRNS,                   \
     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  SPC,  END, TRNS, TRNS, TRNS, TRNS,       TRNS,       TRNS,       \
     TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),

};

static const uint16_t PROGMEM fn_actions[] = {
	ACTION_LAYER_TAP_KEY(1, KC_SPC)
};