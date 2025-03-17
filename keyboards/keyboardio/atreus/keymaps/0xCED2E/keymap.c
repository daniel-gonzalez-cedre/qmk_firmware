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
  LY_QWER,
  LY_SYML,
  LY_SYMR,
  LY_NUMB,
  LY_NUML,
  LY_NUMR,
  LY_MEDI,
};

#define MO_QWER MO(LY_QWER)
#define MO_SYML MO(LY_SYML)
#define MO_SYMR MO(LY_SYMR)
#define MO_NUMB MO(LY_NUMB)
#define MO_NUML MO(LY_NUML)
#define MO_NUMR MO(LY_NUMR)
#define MO_MEDI MO(LY_MEDI)

#define MT_TABA MT(MOD_LALT, KC_TAB)  /* LSFT_T(KC_SPC) */
#define MT_LSS MT(MOD_LSFT, KC_SPC)  /* LSFT_T(KC_SPC) */
#define MT_SPC MT(MOD_RSFT, KC_SPC)  /* RSFT_T(KC_SPC) */
#define TAB_PRV RCS(KC_TAB)
#define TAB_NXT RCTL(KC_TAB)

#define CTRL_Q LCTL(KC_Q)
#define CTRL_W LCTL(KC_W)
#define CTRL_E LCTL(KC_E)
#define CTRL_R LCTL(KC_R)
#define CTRL_T LCTL(KC_T)
#define CTRL_Y LCTL(KC_Y)
#define CTRL_U LCTL(KC_U)
#define CTRL_I LCTL(KC_I)
#define CTRL_O LCTL(KC_O)
#define CTRL_P LCTL(KC_P)
#define CTRL_A LCTL(KC_A)
#define CTRL_S LCTL(KC_S)
#define CTRL_D LCTL(KC_D)
#define CTRL_F LCTL(KC_F)
#define CTRL_G LCTL(KC_G)
#define CTRL_H LCTL(KC_H)
#define CTRL_J LCTL(KC_J)
#define CTRL_K LCTL(KC_K)
#define CTRL_L LCTL(KC_L)
#define CTRL_Z LCTL(KC_Z)
#define CTRL_X LCTL(KC_X)
#define CTRL_C LCTL(KC_C)
#define CTRL_V LCTL(KC_V)
#define CTRL_B LCTL(KC_B)
#define CTRL_N LCTL(KC_N)
#define CTRL_M LCTL(KC_M)

/* #define CTRL_L LCTL(KC_R) */
/* #define CTRL_L LCTL(KC_R) */
/* #define CTRL_D LCTL(KC_D) */
/* #define CTRL_C LCTL(KC_C) */
/* #define CTRL_B LCTL(KC_B) */
/* #define CTRL_U LCTL(KC_U) */

const uint16_t PROGMEM cmb_shift_lft[]   = {KC_S,    KC_D,    COMBO_END};  /* sd ∷ shift */
const uint16_t PROGMEM cmb_shift_rgt[]   = {KC_K,    KC_L,    COMBO_END};  /* kl ∷ shift */

const uint16_t PROGMEM cmb_prn_opn[]     = {KC_X,    KC_C,    COMBO_END};  /* xc ∷ ( */
const uint16_t PROGMEM cmb_prn_clo[]     = {KC_COMM, KC_DOT,  COMBO_END};  /* ,. ∷ ) */
const uint16_t PROGMEM cmb_brk_sqr_opn[] = {KC_C,    KC_V,    COMBO_END};  /* cv ∷ [ */
const uint16_t PROGMEM cmb_brk_sqr_clo[] = {KC_M,    KC_COMM, COMBO_END};  /* m, ∷ ] */
const uint16_t PROGMEM cmb_brk_crl_opn[] = {KC_X,    KC_V,    COMBO_END};  /* xc ∷ { */
const uint16_t PROGMEM cmb_brk_crl_clo[] = {KC_M,    KC_DOT,  COMBO_END};  /* m. ∷ } */
const uint16_t PROGMEM cmb_brk_ang_opn[] = {KC_Z,    KC_V,    COMBO_END};  /* zv ∷ < */
const uint16_t PROGMEM cmb_brk_ang_clo[] = {KC_M,    KC_SLSH, COMBO_END};  /* m/ ∷ > */

const uint16_t PROGMEM cmb_backtick[]    = {KC_K,    KC_SCLN, COMBO_END};  /* k; ∷ ` */
const uint16_t PROGMEM cmb_sgl_quote[]   = {KC_L,    KC_SCLN, COMBO_END};  /* l; ∷ ' */
const uint16_t PROGMEM cmb_dbl_quote[]   = {KC_J,    KC_SCLN, COMBO_END};  /* j; ∷ " */
const uint16_t PROGMEM cmb_backslash[]   = {KC_J,    KC_P,    COMBO_END};  /* jp ∷ \ */
const uint16_t PROGMEM cmb_pipe[]        = {KC_M,    KC_SCLN, COMBO_END};  /* m; ∷ | */
const uint16_t PROGMEM cmb_underscore[]  = {KC_M,    KC_COMM, KC_DOT,  COMBO_END};  /* m,. ∷ _ */
const uint16_t PROGMEM cmb_plus[]        = {KC_MINS, KC_EQL,  COMBO_END};  /* -= ∷ + */

const uint16_t PROGMEM cmb_lyr_num_lft[] = {KC_D,    KC_F,    COMBO_END};  /* df ∷ NUM  */
const uint16_t PROGMEM cmb_lyr_sym_rgt[] = {KC_J,    KC_K,    COMBO_END};  /* jk ∷ SYM  */

/* const uint16_t PROGMEM cmb_lyr_sym_lft[] = {KC_J,    KC_K,    COMBO_END};  [> jk ∷ SYM <] */
/* const uint16_t PROGMEM cmb_lyr_num_rgt[] = {KC_C,    KC_V,    COMBO_END};  [> cv ∷ NUM  <] */
/* const uint16_t PROGMEM cmb_caps_word[]     = {KC_LSFT, KC_SPC,  COMBO_END};  [> ∷ <] */

/* const uint16_t PROGMEM cmb_colon[]         = {KC_L,    KC_SCLN, COMBO_END};  [> l; ∷ : <] */
/* const uint16_t PROGMEM cmb_shift_lft[]       = {KC_S,    KC_D,    COMBO_END};  [> sd ∷ shift <] */
/* const uint16_t PROGMEM cmb_shift_rgt[]       = {KC_K,    KC_L,    COMBO_END};  [> kl ∷ shift <] */
/* const uint16_t PROGMEM cmb_dbl_quote[]  = {KC_Q,    KC_W,    COMBO_END};  [> qw ∷ " <] */

combo_t key_combos[] = {
  COMBO(cmb_shift_lft,   OSM(MOD_LSFT)),
  COMBO(cmb_shift_rgt,   OSM(MOD_RSFT)),
  COMBO(cmb_prn_opn,     KC_LPRN),
  COMBO(cmb_prn_clo,     KC_RPRN),
  COMBO(cmb_brk_sqr_opn, KC_LBRC),
  COMBO(cmb_brk_sqr_clo, KC_RBRC),
  COMBO(cmb_brk_crl_opn, KC_LCBR),
  COMBO(cmb_brk_crl_clo, KC_RCBR),
  COMBO(cmb_brk_ang_opn, KC_LABK),
  COMBO(cmb_brk_ang_clo, KC_RABK),
  COMBO(cmb_backtick,    KC_GRV),
  COMBO(cmb_sgl_quote,   KC_QUOT),
  COMBO(cmb_dbl_quote,   KC_DQUO),
  COMBO(cmb_backslash,   KC_BSLS),
  COMBO(cmb_pipe,        KC_PIPE),
  COMBO(cmb_underscore,  KC_UNDS),
  COMBO(cmb_plus,        KC_PLUS),
  COMBO(cmb_lyr_num_lft, MO_NUMR),
  COMBO(cmb_lyr_sym_rgt, MO_SYML),
  /* COMBO(cmb_lyr_sym_lft, OSL(LY_SYMR)), */
  /* COMBO(cmb_lyr_num_rgt, OSL(LY_NUML)), */
  /* COMBO(cmb_caps_word,     CW_TOGG), */
  /* COMBO(cmb_colon,         KC_COLN), */
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LY_QWER] = LAYOUT(  /* [> BASE LAYER <] */
    KC_Q  ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                KC_Y  ,KC_U   ,KC_I   ,KC_O  ,KC_P   ,
    KC_A  ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                KC_H  ,KC_J   ,KC_K   ,KC_L  ,KC_SCLN,
    KC_Z  ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_TAB ,KC_BSPC,KC_N  ,KC_M   ,KC_COMM,KC_DOT,KC_SLSH,
    KC_ESC,MO_MEDI,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,MO_SYML,KC_SPC,MO_NUMB,KC_MINS,KC_EQL,KC_ENT
  ),
  [LY_SYML] = LAYOUT(  /* [> LHS SYMBOL LAYER <] */
    KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_DEL ,
    KC_LABK,KC_LPRN,KC_RPRN,KC_RABK,KC_CIRC,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,CW_TOGG,
    KC_LCBR,KC_LBRC,KC_RBRC,KC_RCBR,KC_AMPR,KC_TILD,KC_DEL ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,XXXXXXX,XXXXXXX,TAB_PRV,TAB_NXT,_______,_______,TAB_NXT,TAB_PRV,XXXXXXX,XXXXXXX,XXXXXXX
    /* KC_QUOT,KC_LT  ,KC_GT  ,KC_DQUO,KC_AMPR,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, */
    /* KC_EXLM,KC_MINS,KC_PLUS,KC_EQL ,KC_HASH,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,CW_TOGG, */
    /* KC_TILD,KC_SLSH,KC_ASTR,KC_BSLS,KC_PERC,XXXXXXX,KC_DEL ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, */
    /* TO(0)  ,XXXXXXX,XXXXXXX,KC_LCMD,KC_LSFT,_______,_______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX */
  ),
  [LY_SYMR] = LAYOUT(  /* [> RHS SYMBOL LAYER <] */
    CTRL_Q,CTRL_W ,CTRL_E ,CTRL_R ,CTRL_T ,                _______,KC_7,KC_8   ,KC_9  ,XXXXXXX,
    CTRL_A,CTRL_S ,CTRL_D ,_______,_______,                _______,KC_4,KC_5   ,KC_6  ,KC_0   ,
    CTRL_Z,CTRL_X ,CTRL_C ,CTRL_V ,CTRL_B ,XXXXXXX,KC_DEL ,_______,KC_1,KC_2   ,KC_3  ,XXXXXXX,
    TO(0) ,XXXXXXX,XXXXXXX,TAB_PRV,TAB_NXT,_______,_______,TAB_NXT,TAB_PRV,KC_COMM,KC_DOT ,QK_LLCK
  ),
  [LY_NUMB] = LAYOUT(  /* [> NUMBER LAYER <] */
    XXXXXXX,KC_9   ,KC_8   ,KC_7,XXXXXXX,                XXXXXXX,KC_7,KC_8   ,KC_9  ,XXXXXXX,
    KC_0   ,KC_6   ,KC_5   ,KC_4,XXXXXXX,                XXXXXXX,KC_4,KC_5   ,KC_6  ,KC_0   ,
    XXXXXXX,KC_3   ,KC_2   ,KC_1,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,KC_1,KC_2   ,KC_3  ,XXXXXXX,
    TO(0)  ,KC_DOT ,KC_COMM,KC_0,KC_LSFT,KC_LCTL,_______,KC_SPC ,KC_0,KC_COMM,KC_DOT,QK_LLCK
  ),
  [LY_NUML] = LAYOUT(  /* [> LHS NUMBER LAYER <] */
    XXXXXXX,KC_9  ,KC_8   ,KC_7,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_0   ,KC_6  ,KC_5   ,KC_4,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    XXXXXXX,KC_3  ,KC_2   ,KC_1,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO(0)  ,KC_DOT,KC_COMM,KC_0,KC_SPC ,KC_LSFT,_______,KC_SPC ,_______,XXXXXXX,XXXXXXX,QK_LLCK
  ),
  [LY_NUMR] = LAYOUT(  /* [> RHS NUMBER LAYER <] */
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,KC_7,KC_8   ,KC_9  ,XXXXXXX,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,KC_4,KC_5   ,KC_6  ,KC_0   ,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_TAB ,KC_BSPC,XXXXXXX,KC_1,KC_2   ,KC_3  ,XXXXXXX,
    TO(0)  ,XXXXXXX,XXXXXXX,TAB_PRV,TAB_NXT,KC_LSFT,_______,KC_SPC ,KC_0,KC_COMM,KC_DOT,QK_LLCK
  ),
  [LY_MEDI] = LAYOUT(  /* [> MEDIA LAYER <] */
    _______,_______,SCMD(KC_3),SCMD(KC_4),SCMD(KC_5),                _______,_______,OS_ON  ,OS_OFF ,OS_TOGG,
    _______,_______,_______   ,_______   ,_______   ,                _______,_______,_______,_______,_______,
    _______,_______,_______   ,_______   ,_______   ,KC_BRIU,KC_VOLU,_______,_______,_______,_______,_______,
    TO(0)  ,_______,_______   ,_______   ,KC_MUTE   ,KC_BRID,KC_VOLD,KC_MPLY,_______,_______,_______,_______
  ),
};
