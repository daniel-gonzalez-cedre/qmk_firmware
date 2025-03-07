#include QMK_KEYBOARD_H

enum layer_names {
  _QWE,
  _NAV,
  _SYM_LHS,
  _SYM_RHS,
  _NUM,
  _NUM_LHS,
  _NUM_RHS,
  _MED,
  _SYM,
};

#define MT_TABA MT(MOD_LALT, KC_TAB)  /* LSFT_T(KC_SPC) */
#define MT_LSS MT(MOD_LSFT, KC_SPC)  /* LSFT_T(KC_SPC) */
#define MT_SPC MT(MOD_RSFT, KC_SPC)  /* RSFT_T(KC_SPC) */
#define NAV_SPC LT(_NAV, KC_SPC)
#define MT_ACTL MT(MOD_LCTL, KC_A)
#define OSM_LALT OSM(MOD_LALT)
#define TAB_PRV RCS(KC_TAB)
#define TAB_NXT RCTL(KC_TAB)

const uint16_t PROGMEM combo_single_quote[]  = {KC_L, KC_SCLN, COMBO_END};     // L;
const uint16_t PROGMEM combo_double_quote[]  = {KC_Q, KC_W, COMBO_END};        // QW
const uint16_t PROGMEM combo_backslash[]     = {KC_O, KC_P, COMBO_END};        // OP
/* const uint16_t PROGMEM combo_colon[]         = {KC_L, KC_SCLN, COMBO_END};     // L; */
const uint16_t PROGMEM combo_left_shift[]    = {KC_Z, KC_X, COMBO_END};        // ZX
const uint16_t PROGMEM combo_right_shift[]   = {KC_DOT, KC_SLSH, COMBO_END};   // ./
const uint16_t PROGMEM combo_underscore[]    = {KC_COMMA, KC_DOT, COMBO_END};  // ,.
const uint16_t PROGMEM combo_layer_sym_lhs[] = {KC_J, KC_K, COMBO_END};        // JK
const uint16_t PROGMEM combo_layer_sym_rhs[] = {KC_D, KC_F, COMBO_END};        // DF
const uint16_t PROGMEM combo_layer_num_lhs[] = {KC_H, KC_J, COMBO_END};        // HJ
const uint16_t PROGMEM combo_layer_num_rhs[] = {KC_F, KC_G, COMBO_END};        // FG
const uint16_t PROGMEM combo_caps_word[]     = {KC_LSFT, KC_RSFT, COMBO_END};  // BOTH SHIFTS
combo_t key_combos[] = {
  COMBO(combo_single_quote,  KC_QUOT),
  COMBO(combo_double_quote,  KC_DQUO),
  COMBO(combo_backslash,     KC_BSLS),
  /* COMBO(combo_colon,         KC_COLN), */
  COMBO(combo_left_shift,    KC_LSFT),
  COMBO(combo_right_shift,   KC_RSFT),
  COMBO(combo_underscore,    KC_UNDS),
  COMBO(combo_layer_sym_lhs, MO(_SYM_LHS)),
  COMBO(combo_layer_sym_rhs, MO(_SYM_RHS)),
  COMBO(combo_layer_num_lhs, MO(_NUM_LHS)),
  COMBO(combo_layer_num_rhs, MO(_NUM_RHS)),
  COMBO(combo_caps_word,     CW_TOGG),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWE] = LAYOUT(  /* [> BASE LAYER <] */
    KC_Q  ,KC_W    ,KC_E   ,KC_R   ,KC_T   ,                KC_Y  ,KC_U    ,KC_I   ,KC_O  ,KC_P   ,
    KC_A  ,KC_S    ,KC_D   ,KC_F   ,KC_G   ,                KC_H  ,KC_J    ,KC_K   ,KC_L  ,KC_SCLN,
    KC_Z  ,KC_X    ,KC_C   ,KC_V   ,KC_B   ,MT_TABA,KC_BSPC,KC_N  ,KC_M    ,KC_COMM,KC_DOT,KC_SLSH,
    KC_ESC,MO(_MED),KC_LALT,KC_LCMD,KC_LCTL,KC_LSFT,KC_RSFT,KC_SPC,MO(_NAV),KC_MINS,KC_EQL,KC_ENT
  ),
  [_NAV] = LAYOUT(  /* [> NAVIGATION LAYER <] */
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,TAB_PRV,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,KC_COLN,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_CAPS,KC_DEL ,TAB_NXT,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LCTL,KC_LSFT,KC_RSFT,_______,XXXXXXX,KC_UNDS,KC_PLUS,QK_LLCK
  ),
  /*
   * [_NAV] = LAYOUT(
   *   KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,_______,                _______,_______,_______,_______,TAB_PRV,
   *   KC_LCBR,KC_LPRN,KC_RPRN,KC_RCBR,_______,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,XXXXXXX,
   *   KC_LABK,KC_PIPE,KC_MINS,KC_RABK,_______,KC_CAPS,KC_DEL ,TAB_NXT,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
   *   TO(0)  ,_______,_______,_______,KC_LCTL,KC_LSFT,_______,_______,_______,KC_UNDS,KC_PLUS,QK_LLCK
   * ),
   */
  /*
   * [_NAV] = LAYOUT(
   *   KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_BSLS,
   *   KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,KC_GRV ,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,KC_QUOT,
   *   KC_LCBR,KC_LABK,KC_RABK,KC_RCBR,_______,KC_CAPS,KC_DEL ,XXXXXXX,XXXXXXX,KC_LT  ,KC_GT  ,KC_DQUO,
   *   TO(0)  ,_______,_______,_______,KC_LCTL,KC_LSFT,_______,_______,_______,KC_UNDS,KC_PLUS,QK_LLCK
   * ),
   */
  [_SYM_LHS] = LAYOUT(  /* [> LHS NAV LAYER <] */
    KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,KC_GRV ,                XXXXXXX,XXXXXXX,XXXXXXX,TAB_NXT,TAB_PRV,
    KC_LCBR,KC_LABK,KC_RABK,KC_RCBR,KC_TILD,KC_PIPE,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LCTL,KC_LSFT,KC_RSFT,KC_RCTL,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
  ),
  [_SYM_RHS] = LAYOUT(  /* [> RHS NAV LAYER <] */
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_BSLS,
    TAB_PRV,TAB_NXT,XXXXXXX,XXXXXXX,XXXXXXX,                KC_QUOT,KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_DEL ,KC_DQUO,KC_LCBR,KC_LABK,KC_RABK,KC_RCBR,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LCTL,KC_LSFT,KC_RSFT,KC_RCTL,KC_SPC ,KC_UNDS,KC_PLUS,QK_LLCK
  ),
  [_NUM] = LAYOUT(  /* [> NUMBER LAYER <] */
    XXXXXXX,KC_7   ,KC_8   ,KC_9,XXXXXXX,                XXXXXXX,KC_7,KC_8    ,KC_9  ,TAB_PRV,
    XXXXXXX,KC_4   ,KC_5   ,KC_6,XXXXXXX,                XXXXXXX,KC_4,KC_5    ,KC_6  ,XXXXXXX,
    XXXXXXX,KC_1   ,KC_2   ,KC_3,XXXXXXX,KC_CAPS,KC_BSPC,TAB_NXT,KC_1,KC_2    ,KC_3  ,XXXXXXX,
    TO(0)  ,_______,_______,KC_0,KC_LCTL,KC_LSFT,_______,KC_SPC ,KC_0,KC_COMMA,KC_DOT,QK_LLCK
  ),
  [_NUM_LHS] = LAYOUT(  /* [> LHS NUMBER LAYER <] */
    KC_ASTR,KC_7  ,KC_8    ,KC_9,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_PLUS,KC_4  ,KC_5    ,KC_6,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_SLSH,KC_1  ,KC_2    ,KC_3,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,KC_DOT,KC_COMMA,KC_0,KC_SPC ,KC_LSFT,_______,KC_SPC ,_______,XXXXXXX,XXXXXXX,QK_LLCK
  ),
  [_NUM_RHS] = LAYOUT(  /* [> RHS NUMBER LAYER <] */
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,KC_7,KC_8    ,KC_9  ,KC_ASTR,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,KC_4,KC_5    ,KC_6  ,KC_PLUS,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,KC_1,KC_2    ,KC_3  ,KC_SLSH,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LCTL,KC_LSFT,_______,KC_SPC ,KC_0,KC_COMMA,KC_DOT,QK_LLCK
  ),
  [_MED] = LAYOUT(  /* [> MEDIA LAYER <] */
    _______,_______,SCMD(KC_3),SCMD(KC_4),SCMD(KC_5),                _______,_______,_______,_______,_______,
    _______,_______,_______   ,_______   ,_______   ,                _______,_______,_______,_______,_______,
    _______,_______,_______   ,_______   ,_______   ,KC_BRIU,KC_VOLU,_______,_______,_______,_______,_______,
    TO(0)  ,_______,_______   ,_______   ,KC_MUTE   ,KC_BRID,KC_VOLD,KC_MPLY,_______,_______,_______,_______
  ),
};

/*
   7 8 9
   4 5 6 0
   1 2 3
   0 , .

   & * (
   $ % ^ )
   ! @ #
   )

   7 8 9
   0 4 5 6
   1 2 3
   . , 0
*/

/*                                  [ _QWE ]
 *    Q    W    E    R    T         ░▒▓██▓▒░        Y     U     I     O    P
 *    A    S    D    F    G         ░▒▓██▓▒░        H     J     K     L    ;
 *    Z    X    C    V    B   TAB   ░▒▓██▓▒░  BSPC  N     M     ,     .    /
 *   ESC _MED  CMD _NUM  CTRL SHFT  ░▒▓██▓▒░ _NAV  SPC  _NUM    -     =   LCK
 *                                  [ _NAV ]
 *    !    @    #    $    %         ░▒▓██▓▒░        ^     &     *     =    \
 *    [    (    )    ]    `         ░▒▓██▓▒░        ←     ↓     ↑     →    '
 *    {    <    >    }   XXX  CAPS  ░▒▓██▓▒░  DEL  XXX   XXX    <     >    |
 *   _L0   ▽    ▽    ▽   SHFT CTRL  ░▒▓██▓▒░   ▽    ▽     ▽     _     +   LCK
 *                                  [ _NUM ]
 *   XXX  F7   F8   F9   F10        ░▒▓██▓▒░       XXX    7     8     9   CSTAB
 *   XXX  F4   F5   F6   F11        ░▒▓██▓▒░       XXX    4     5     6    0
 *   XXX  F1   F2   F3   F12  XXX   ░▒▓██▓▒░  BSPC STAB   1     2     3   XXX
 *   _L0   ▽    ▽    ▽   SHFT CTRL  ░▒▓██▓▒░   ▽   SPC    ▽     ,     .   LCK
 *                                  [ _MED ]
 *    ▽    ▽   SC3  SC4  SC5        ░▒▓██▓▒░        ▽     ▽     ▽     ▽    ▽
 *    ▽    ▽    ▽    ▽    ▽         ░▒▓██▓▒░        ▽     ▽     ▽     ▽    ▽
 *    ▽    ▽    ▽    ▽    ▽   BRI+  ░▒▓██▓▒░  VOL+  ▽     ▽     ▽     ▽    ▽
 *   _L0   ▽    ▽    ▽   MUTE BRI-  ░▒▓██▓▒░  VOL- PLAY   ▽     ▽     ▽    ▽
 */
