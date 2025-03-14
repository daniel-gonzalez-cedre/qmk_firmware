#include QMK_KEYBOARD_H

/* SM_TD */

/* enum custom_keycodes { */
  /* SMTD_KEYCODES_BEGIN = SAFE_RANGE, */
  /* CKC_F, */
  /* CKC_J, */
  /* SMTD_KEYCODES_END, */
/* }; */
/* #include "sm_td.h" */

/* void on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) { */
  /* switch (keycode) { */
    /* SMTD_MT(CKC_F, KC_F, KC_LSFT) */
    /* SMTD_MT(CKC_J, KC_J, KC_RSFT) */
  /* } */
/* } */

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
  /* if (!process_smtd(keycode, record)) { */
    /* return false; */
  /* } */
  /* return true; */
/* } */

/* SM_TD */

enum layer_names {
  _QWE,
  _NAV,
  _SYM_LHS,
  _SYM_RHS,
  _NUM,
  _NUM_LHS,
  _NUM_RHS,
  _MED,
};

#define MT_TABA MT(MOD_LALT, KC_TAB)  /* LSFT_T(KC_SPC) */
#define MT_LSS MT(MOD_LSFT, KC_SPC)  /* LSFT_T(KC_SPC) */
#define MT_SPC MT(MOD_RSFT, KC_SPC)  /* RSFT_T(KC_SPC) */
#define NAV_SPC LT(_NAV, KC_SPC)
#define MT_ACTL MT(MOD_LCTL, KC_A)
#define OSM_LALT OSM(MOD_LALT)
#define TAB_PRV RCS(KC_TAB)
#define TAB_NXT RCTL(KC_TAB)
#define CTRL_W LCTL(KC_W)
#define CTRL_F LCTL(KC_F)
#define CTRL_D LCTL(KC_D)
#define CTRL_C LCTL(KC_C)
#define CTRL_B LCTL(KC_B)
#define CTRL_U LCTL(KC_U)

const uint16_t PROGMEM combo_shift_l[]       = {KC_S,    KC_D,    COMBO_END};  /* sd ∷ shift */
const uint16_t PROGMEM combo_shift_r[]       = {KC_K,    KC_L,    COMBO_END};  /* kl ∷ shift */

const uint16_t PROGMEM combo_parens_l[]      = {KC_D,    KC_F,    COMBO_END};  /* df ∷ ( */
const uint16_t PROGMEM combo_parens_r[]      = {KC_J,    KC_K,    COMBO_END};  /* jk ∷ ) */
const uint16_t PROGMEM combo_bracket_l[]     = {KC_C,    KC_V,    COMBO_END};  /* cv ∷ [ */
const uint16_t PROGMEM combo_bracket_r[]     = {KC_M,    KC_COMM, COMBO_END};  /* m, ∷ ] */
const uint16_t PROGMEM combo_brace_l[]       = {KC_S,    KC_F,    COMBO_END};  /* sf ∷ { */
const uint16_t PROGMEM combo_brace_r[]       = {KC_J,    KC_L,    COMBO_END};  /* jl ∷ } */
const uint16_t PROGMEM combo_brocket_l[]     = {KC_X,    KC_V,    COMBO_END};  /* xv ∷ < */
const uint16_t PROGMEM combo_brocket_r[]     = {KC_M,    KC_DOT,  COMBO_END};  /* m. ∷ > */

const uint16_t PROGMEM combo_tilde[]         = {KC_Q,    KC_D,    COMBO_END};  /* qd ∷ ~ */
const uint16_t PROGMEM combo_backtick[]      = {KC_Q,    KC_F,    COMBO_END};  /* qf ∷ ` */
const uint16_t PROGMEM combo_single_quote[]  = {KC_L,    KC_SCLN, COMBO_END};  /* l; ∷ ' */
const uint16_t PROGMEM combo_double_quote[]  = {KC_K,    KC_SCLN, COMBO_END};  /* k; ∷ " */
const uint16_t PROGMEM combo_pipe[]          = {KC_K,    KC_P,    COMBO_END};  /* kp ∷ | */
const uint16_t PROGMEM combo_backslash[]     = {KC_J,    KC_P,    COMBO_END};  /* jp ∷ \ */
const uint16_t PROGMEM combo_underscore[]    = {KC_COMM, KC_DOT,  COMBO_END};  /* ,. ∷ _ */
const uint16_t PROGMEM combo_plus[]          = {KC_MINS, KC_EQL,  COMBO_END};  /* -= ∷ + */

const uint16_t PROGMEM combo_layer_num_lhs[] = {KC_X,    KC_C,    COMBO_END};  /* xc ∷ NUM  */
/* const uint16_t PROGMEM combo_layer_num_lhs[] = {MO(_MED),KC_LALT, COMBO_END};  [> ?? ∷ NUM  <] */

/* const uint16_t PROGMEM combo_layer_sym_lhs[] = {KC_J,    KC_K,    COMBO_END};  [> jk ∷ SYM <] */
/* const uint16_t PROGMEM combo_layer_sym_rhs[] = {KC_D,    KC_F,    COMBO_END};  [> df ∷ SYM  <] */
/* const uint16_t PROGMEM combo_layer_num_rhs[] = {KC_C,    KC_V,    COMBO_END};  [> cv ∷ NUM  <] */
/* const uint16_t PROGMEM combo_caps_word[]     = {KC_LSFT, KC_SPC,  COMBO_END};  [> ∷ <] */

/* const uint16_t PROGMEM combo_colon[]         = {KC_L,    KC_SCLN, COMBO_END};  [> l; ∷ : <] */
/* const uint16_t PROGMEM combo_shift_l[]       = {KC_S,    KC_D,    COMBO_END};  [> sd ∷ shift <] */
/* const uint16_t PROGMEM combo_shift_r[]       = {KC_K,    KC_L,    COMBO_END};  [> kl ∷ shift <] */
/* const uint16_t PROGMEM combo_double_quote[]  = {KC_Q,    KC_W,    COMBO_END};  [> qw ∷ " <] */

combo_t key_combos[] = {
  COMBO(combo_shift_l,       OSM(MOD_LSFT)),
  COMBO(combo_shift_r,       OSM(MOD_RSFT)),
  COMBO(combo_parens_l,      KC_LPRN),
  COMBO(combo_parens_r,      KC_RPRN),
  COMBO(combo_bracket_l,     KC_LBRC),
  COMBO(combo_bracket_r,     KC_RBRC),
  COMBO(combo_brace_l,       KC_LCBR),
  COMBO(combo_brace_r,       KC_RCBR),
  COMBO(combo_brocket_l,     KC_LABK),
  COMBO(combo_brocket_r,     KC_RABK),
  COMBO(combo_tilde,         KC_TILD),
  COMBO(combo_backtick,      KC_GRV),
  COMBO(combo_single_quote,  KC_QUOT),
  COMBO(combo_double_quote,  KC_DQUO),
  COMBO(combo_pipe,          KC_PIPE),
  COMBO(combo_backslash,     KC_BSLS),
  COMBO(combo_underscore,    KC_UNDS),
  COMBO(combo_plus,          KC_PLUS),
  COMBO(combo_layer_num_lhs, MO(_NUM_RHS)),
  /* COMBO(combo_layer_sym_lhs, OSL(_SYM_RHS)), */
  /* COMBO(combo_layer_sym_rhs, OSL(_SYM_LHS)), */
  /* COMBO(combo_layer_num_rhs, OSL(_NUM_LHS)), */
  /* COMBO(combo_caps_word,     CW_TOGG), */
  /* COMBO(combo_colon,         KC_COLN), */
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWE] = LAYOUT(  /* [> BASE LAYER <] */
    KC_Q  ,KC_W    ,KC_E   ,KC_R   ,KC_T   ,                 KC_Y  ,KC_U    ,KC_I   ,KC_O  ,KC_P   ,
    KC_A  ,KC_S    ,KC_D   ,KC_F   ,KC_G   ,                 KC_H  ,KC_J    ,KC_K   ,KC_L  ,KC_SCLN,
    KC_Z  ,KC_X    ,KC_C   ,KC_V   ,KC_B   ,KC_TAB ,KC_BSPC ,KC_N  ,KC_M    ,KC_COMM,KC_DOT,KC_SLSH,
    KC_ESC,MO(_MED),KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,MO(_NAV),KC_SPC,MO(_NUM),KC_MINS,KC_EQL,KC_ENT
  ),
  [_NAV] = LAYOUT(  /* [> NAVIGATION LAYER <] */
    KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_BSLS,
    CW_TOGG,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,CW_TOGG,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_CAPS,KC_DEL ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,XXXXXXX,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,_______,KC_SPC ,XXXXXXX,XXXXXXX,XXXXXXX,QK_LLCK
  ),
  [_SYM_LHS] = LAYOUT(  /* [> LHS NAV LAYER <] */
    KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,KC_GRV ,                XXXXXXX,XXXXXXX,XXXXXXX,TAB_NXT,TAB_PRV,
    KC_LCBR,KC_LABK,KC_RABK,KC_RCBR,KC_TILD,KC_PIPE,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LSFT,KC_LCTL,KC_RCTL,KC_RSFT,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
  ),
  [_SYM_RHS] = LAYOUT(  /* [> RHS NAV LAYER <] */
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_BSLS,
    TAB_PRV,TAB_NXT,XXXXXXX,XXXXXXX,XXXXXXX,                KC_QUOT,KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_DEL ,KC_DQUO,KC_LCBR,KC_LABK,KC_RABK,KC_RCBR,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LSFT,KC_LCTL,KC_RCTL,KC_RSFT,KC_SPC ,KC_UNDS,KC_PLUS,QK_LLCK
  ),
  [_NUM] = LAYOUT(  /* [> NUMBER LAYER <] */
    XXXXXXX,KC_9   ,KC_8   ,KC_7,XXXXXXX,                XXXXXXX,KC_7,KC_8   ,KC_9  ,XXXXXXX,
    KC_0   ,KC_6   ,KC_5   ,KC_4,XXXXXXX,                XXXXXXX,KC_4,KC_5   ,KC_6  ,KC_0   ,
    XXXXXXX,KC_3   ,KC_2   ,KC_1,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,KC_1,KC_2   ,KC_3  ,XXXXXXX,
    TO(0)  ,KC_DOT ,KC_COMM,KC_0,KC_LSFT,KC_LCTL,_______,KC_SPC ,KC_0,KC_COMM,KC_DOT,QK_LLCK
  ),
  [_NUM_LHS] = LAYOUT(  /* [> LHS NUMBER LAYER <] */
    XXXXXXX,KC_9  ,KC_8   ,KC_7,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_0   ,KC_6  ,KC_5   ,KC_4,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    XXXXXXX,KC_3  ,KC_2   ,KC_1,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,KC_DOT,KC_COMM,KC_0,KC_SPC ,KC_LSFT,_______,KC_SPC ,_______,XXXXXXX,XXXXXXX,QK_LLCK
  ),
  [_NUM_RHS] = LAYOUT(  /* [> RHS NUMBER LAYER <] */
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,KC_7,KC_8   ,KC_9  ,XXXXXXX,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,KC_4,KC_5   ,KC_6  ,KC_0   ,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,KC_1,KC_2   ,KC_3  ,XXXXXXX,
    TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,KC_LCTL,KC_LSFT,_______,KC_SPC ,KC_0,KC_COMM,KC_DOT,QK_LLCK
  ),
  [_MED] = LAYOUT(  /* [> MEDIA LAYER <] */
    _______,_______,SCMD(KC_3),SCMD(KC_4),SCMD(KC_5),                _______,_______,OS_ON  ,OS_OFF ,OS_TOGG,
    _______,_______,_______   ,_______   ,_______   ,                _______,_______,_______,_______,_______,
    _______,_______,_______   ,_______   ,_______   ,KC_BRIU,KC_VOLU,_______,_______,_______,_______,_______,
    TO(0)  ,_______,_______   ,_______   ,KC_MUTE   ,KC_BRID,KC_VOLD,KC_MPLY,_______,_______,_______,_______
  ),
};
