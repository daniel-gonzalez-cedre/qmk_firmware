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
  LY_CLMK,
  LY_RAIS,
  LY_LOWR,
  LY_NUMB,
  LY_MOUS,
  LY_SCRL,
};

#define MO_QWER MO(LY_QWER)
#define MO_CLMK MO(LY_CLMK)
#define MO_RAIS MO(LY_RAIS)
#define MO_LOWR MO(LY_LOWR)
#define MO_NUMB MO(LY_NUMB)
#define MO_MOUS MO(LY_MOUS)
#define MO_SCRL MO(LY_SCRL)

#define TO_QWER TO(LY_QWER)
#define TO_CLMK TO(LY_CLMK)
#define TO_RAIS TO(LY_RAIS)
#define TO_LOWR TO(LY_LOWR)
#define TO_NUMB TO(LY_NUMB)
#define TO_MOUS TO(LY_MOUS)
#define TO_SCRL TO(LY_SCRL)

#define TG_QWER TG(LY_QWER)
#define TG_CLMK TG(LY_CLMK)
#define TG_RAIS TG(LY_RAIS)
#define TG_LOWR TG(LY_LOWR)
#define TG_NUMB TG(LY_NUMB)
#define TG_MOUS TG(LY_MOUS)
#define TG_SCRL TG(LY_SCRL)

#define CTRLTAB LCTL(KC_TAB)
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

#define MT_ESCS MT(MOD_LSFT, KC_ESC)
#define MT_ENTS MT(MOD_RSFT, KC_ENT)
#define MT_TABA MT(MOD_LALT, KC_TAB)  /* LSFT_T(KC_SPC) */
#define MT_LSS MT(MOD_LSFT, KC_SPC)  /* LSFT_T(KC_SPC) */
#define MT_SPC MT(MOD_RSFT, KC_SPC)  /* RSFT_T(KC_SPC) */
#define TAB_PRV RCS(KC_TAB)
#define TAB_NXT RCTL(KC_TAB)

#define SCRN_S3 SCMD(KC_3)
#define SCRN_S4 SCMD(KC_4)
#define SCRN_S5 SCMD(KC_5)

/* const uint16_t PROGMEM cmb_shift_lft[]   = {KC_S,    KC_D,    COMBO_END};  [> sd ∷ shift <] */
/* const uint16_t PROGMEM cmb_shift_rgt[]   = {KC_K,    KC_L,    COMBO_END};  [> kl ∷ shift <] */

const uint16_t PROGMEM cmb_prn_opn[]     = {KC_LSFT, KC_F,    COMBO_END};  /* shift-f ∷ ( */
const uint16_t PROGMEM cmb_prn_clo[]     = {KC_SPC,  KC_J,    COMBO_END};  /* space-j ∷ ) */
const uint16_t PROGMEM cmb_brk_sqr_opn[] = {KC_LSFT, KC_D,    COMBO_END};  /* shift-d ∷ [ */
const uint16_t PROGMEM cmb_brk_sqr_clo[] = {KC_SPC,  KC_K,    COMBO_END};  /* space-k ∷ ] */
const uint16_t PROGMEM cmb_brk_crl_opn[] = {KC_LSFT, KC_S,    COMBO_END};  /* shift-s ∷ { */
const uint16_t PROGMEM cmb_brk_crl_clo[] = {KC_SPC,  KC_L,    COMBO_END};  /* space-l ∷ } */
const uint16_t PROGMEM cmb_brk_ang_opn[] = {KC_LSFT, KC_A,    COMBO_END};  /* shift-a ∷ < */
const uint16_t PROGMEM cmb_brk_ang_clo[] = {KC_SPC,  KC_SCLN, COMBO_END};  /* space-; ∷ > */

const uint16_t PROGMEM cmb_tilde[]       = {KC_F,    KC_Q,    COMBO_END};  /* fq ∷ ` */
const uint16_t PROGMEM cmb_backtick[]    = {KC_K,    KC_SCLN, COMBO_END};  /* k; ∷ ` */
const uint16_t PROGMEM cmb_sgl_quote[]   = {KC_L,    KC_SCLN, COMBO_END};  /* l; ∷ ' */
const uint16_t PROGMEM cmb_dbl_quote[]   = {KC_J,    KC_SCLN, COMBO_END};  /* j; ∷ " */
const uint16_t PROGMEM cmb_plus[]        = {KC_X,    KC_C,    COMBO_END};  /* xc ∷ + */
const uint16_t PROGMEM cmb_equal[]       = {KC_C,    KC_V,    COMBO_END};  /* cv ∷ = */
const uint16_t PROGMEM cmb_backslash[]   = {KC_J,    KC_P,    COMBO_END};  /* jp ∷ \ */
const uint16_t PROGMEM cmb_pipe[]        = {KC_M,    KC_SCLN, COMBO_END};  /* m; ∷ | */
const uint16_t PROGMEM cmb_dash[]        = {KC_M,    KC_COMM, COMBO_END};  /* m, ∷ - */
const uint16_t PROGMEM cmb_underscore[]  = {KC_COMM, KC_DOT,  COMBO_END};  /* ,. ∷ _ */
/* const uint16_t PROGMEM cmb_plus[]        = {KC_MINS, KC_EQL,  COMBO_END};  [> -= ∷ + <] */

/* const uint16_t PROGMEM cmb_lyr_lowr[]    = {KC_D,    KC_F,    COMBO_END};  [> df ∷ LOWR <] */
const uint16_t PROGMEM cmb_lyr_rais[]    = {KC_J,    KC_K,    COMBO_END};  /* jk ∷ RAIS */
const uint16_t PROGMEM cmb_lyr_numb[]    = {KC_D,    KC_F,    COMBO_END};  /* df ∷ NUMB */

const uint16_t PROGMEM cmb_caps_word[]   = {KC_Z,    KC_X,    COMBO_END};  /* zx  ∷ CW_TOGG*/
const uint16_t PROGMEM cmb_caps[]        = {KC_Z, KC_X, KC_C, COMBO_END};  /* zxc ∷ KC_CAPS */

/* const uint16_t PROGMEM cmb_lyr_sym_lft[] = {KC_J,    KC_K,    COMBO_END};  [> jk ∷ SYM <] */
/* const uint16_t PROGMEM cmb_lyr_num_rgt[] = {KC_C,    KC_V,    COMBO_END};  [> cv ∷ NUM  <] */

combo_t key_combos[] = {
  /* COMBO(cmb_shift_lft,   OSM(MOD_LSFT)), */
  /* COMBO(cmb_shift_rgt,   OSM(MOD_RSFT)), */
  COMBO(cmb_prn_opn,     KC_LPRN),
  COMBO(cmb_prn_clo,     KC_RPRN),
  COMBO(cmb_brk_sqr_opn, KC_LBRC),
  COMBO(cmb_brk_sqr_clo, KC_RBRC),
  COMBO(cmb_brk_crl_opn, KC_LCBR),
  COMBO(cmb_brk_crl_clo, KC_RCBR),
  COMBO(cmb_brk_ang_opn, KC_LABK),
  COMBO(cmb_brk_ang_clo, KC_RABK),
  COMBO(cmb_tilde,       KC_TILD),
  COMBO(cmb_backtick,    KC_GRV),
  COMBO(cmb_sgl_quote,   KC_QUOT),
  COMBO(cmb_dbl_quote,   KC_DQUO),
  COMBO(cmb_backslash,   KC_BSLS),
  COMBO(cmb_plus,        KC_PLUS),
  COMBO(cmb_equal,       KC_EQL),
  COMBO(cmb_pipe,        KC_PIPE),
  COMBO(cmb_dash,        KC_MINS),
  COMBO(cmb_underscore,  KC_UNDS),
  /* COMBO(cmb_lyr_lowr,    OSL(LY_LOWR)), */
  /* COMBO(cmb_lyr_rais,    OSL(LY_RAIS)), */
  /* COMBO(cmb_lyr_numb,    OSL(LY_NUMB)), */
  /* COMBO(cmb_lyr_lowr,    MO_LOWR), */
  COMBO(cmb_lyr_rais,    MO_RAIS),
  COMBO(cmb_lyr_numb,    MO_NUMB),
  COMBO(cmb_caps_word,   CW_TOGG),
  COMBO(cmb_caps,        KC_CAPS),
};

/* TAP DANCE */
typedef enum {
  TD_NONE,
  TD_UNKNOWN,
  TD_SINGLE_TAP,
  TD_SINGLE_HOLD,
  TD_DOUBLE_TAP,
  TD_DOUBLE_HOLD,
  TD_DOUBLE_SINGLE_TAP,  /* SENDS TWO SINGLE TAPS */
  TD_TRIPLE_TAP,
  TD_TRIPLE_HOLD,
} td_state_t;

typedef struct {
  bool is_press_action;
  td_state_t state;
} td_tap_t;

enum {
  TD_SSPC,
  TD_SSYM,
};

td_state_t cur_dance(tap_dance_state_t *state);

void spc_finished(tap_dance_state_t *state, void *user_data);
void spc_reset(tap_dance_state_t *state, void *user_data);

/* tap_dance_action_t tap_dance_actions[] = { */
  /* [TD_SSPC] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, ), */
/* }; */
/* TAP DANCE */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LY_QWER] = LAYOUT(  /* [> BASE QWERTY LAYER <] */
    KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                KC_Y  ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,
    KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                KC_H  ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,
    KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_TAB ,KC_BSPC,KC_N  ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,
    QK_GESC,MO_NUMB,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,MO_RAIS,KC_SPC,MO_LOWR,KC_RALT,MO_MOUS,KC_ENT 
  ),
  [LY_CLMK] = LAYOUT(  /* [> BASE COLEMAK LAYER <] */
    /* KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_B   ,                KC_J  ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN, */
    /* KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_G   ,                KC_M  ,KC_N   ,KC_E   ,KC_I   ,KC_O   , */
    /* KC_Z   ,KC_X   ,KC_C   ,KC_D   ,KC_V   ,KC_TAB ,KC_BSPC,KC_K  ,KC_H   ,KC_COMM,KC_DOT ,KC_SLSH, */
    /* TO_QWER,MO_NUMB,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,MO_RAIS,KC_SPC,MO_LOWR,KC_RALT,MO_MOUS,KC_ENT */
    KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_B   ,                KC_K  ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN,
    KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_G   ,                KC_M  ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,
    KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_D   ,KC_TAB ,KC_BSPC,KC_J  ,KC_H   ,KC_COMM,KC_DOT ,KC_SLSH,
    TO_QWER,MO_NUMB,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,MO_RAIS,KC_SPC,MO_LOWR,KC_RALT,MO_MOUS,KC_ENT
  ),
  [LY_RAIS] = LAYOUT(  /* [> LHS SYMBOL & NAVIGATION LAYER <] */
    /* KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_DEL , */
    /* KC_MINS,KC_PLUS,KC_EQL ,KC_DLR ,KC_TAB ,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,CW_TOGG, */
    /* KC_SLSH,KC_LABK,KC_ASTR,KC_RABK,KC_BSLS,KC_TAB ,KC_DEL ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_CAPS, */
    /* QK_LLCK,XXXXXXX,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,_______,TAB_NXT,TAB_PRV,XXXXXXX,XXXXXXX,XXXXXXX */
    KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_DEL ,
    KC_LABK,KC_LCBR,KC_LBRC,KC_LPRN,KC_QUOT,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,CW_TOGG,
    KC_RABK,KC_RCBR,KC_RBRC,KC_RPRN,KC_DQUO,KC_TAB ,KC_DEL ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_CAPS,
    QK_LLCK,XXXXXXX,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,_______,TAB_NXT,TAB_PRV,XXXXXXX,XXXXXXX,XXXXXXX
  ),
  [LY_LOWR] = LAYOUT(  /* [> RHS NUMBER & SYMBOL LAYER <] */
    KC_PERC,KC_7  ,KC_8   ,KC_9   ,KC_DLR ,                KC_DLR ,KC_7   ,KC_8   ,KC_9  ,KC_PERC,
    KC_0   ,KC_4  ,KC_5   ,KC_6   ,KC_HASH,                KC_MINS,KC_4   ,KC_5   ,KC_6  ,KC_0   ,
    KC_DOT ,KC_1  ,KC_2   ,KC_3   ,KC_COMM,KC_TAB ,KC_BSPC,KC_COMM,KC_1   ,KC_2   ,KC_3  ,KC_DOT ,
    QK_LLCK,KC_DOT,KC_LALT,KC_LCMD,KC_LSFT,KC_LCTL,_______,KC_0   ,_______,KC_COMM,KC_DOT,XXXXXXX
  ),
  [LY_NUMB] = LAYOUT(  /* [> NUMBER LAYER <] */
    KC_BRID,KC_BRIU,SCRN_S3,SCRN_S4,SCRN_S5,                KC_DLR ,KC_7   ,KC_8   ,KC_9  ,KC_PERC,
    XXXXXXX,XXXXXXX,KC_MUTE,KC_VOLD,KC_VOLU,                KC_MINS,KC_4   ,KC_5   ,KC_6  ,KC_0   ,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_TAB ,KC_BSPC,KC_COMM,KC_1   ,KC_2   ,KC_3  ,KC_DOT ,
    QK_LLCK,XXXXXXX,KC_LALT,TAB_PRV,TAB_NXT,_______,_______,KC_0   ,XXXXXXX,KC_COMM,KC_DOT,XXXXXXX
  ),
  [LY_MOUS] = LAYOUT(  /* [> NAVIGATION LAYER <] */
    KC_BRID,KC_BRIU,SCRN_S3,SCRN_S4,SCRN_S5,                XXXXXXX,XXXXXXX,KC_MUTE,KC_VOLD,KC_VOLU,
    XXXXXXX,XXXXXXX,KC_MUTE,KC_VOLD,KC_VOLU,                MS_LEFT,MS_DOWN,MS_UP  ,MS_RGHT,XXXXXXX,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    QK_LLCK,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,MO_SCRL,MS_BTN1,MS_BTN2,XXXXXXX,XXXXXXX,XXXXXXX
  ),
  [LY_SCRL] = LAYOUT(  /* [> NAVIGATION LAYER <] */
    TO_CLMK,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                MS_WHLR,MS_WHLU,MS_WHLD,MS_WHLL,XXXXXXX,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO_QWER,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______,MS_BTN1,MS_BTN2,XXXXXXX,XXXXXXX,XXXXXXX
  ),
};

/* TAP DANCE */
td_state_t cur_dance(tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->interrupted || !state->pressed) {
      return TD_SINGLE_TAP;
    } else {
      return TD_SINGLE_HOLD;
    }
  } else if (state->count == 2) {
    if (state->interrupted) {
      return TD_DOUBLE_SINGLE_TAP;
    } else if (state->pressed) {
      return TD_DOUBLE_HOLD;
    } else {
      return TD_DOUBLE_TAP;
    }
  }

  if (state->count == 3) {
    if (state->interrupted || !state->pressed) {
      return TD_TRIPLE_TAP;
    } else {
      return TD_TRIPLE_HOLD;
    }
  } else {
    return TD_UNKNOWN;
  }
}

static td_tap_t spc_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void spc_finished(tap_dance_state_t *state, void *user_data) {
  spc_tap_state.state = cur_dance(state);
  switch (spc_tap_state.state) {
    case TD_SINGLE_TAP: register_code(KC_SPC); break;
    case TD_SINGLE_HOLD: register_code(KC_SPC); break;
    case TD_DOUBLE_TAP: tap_code(KC_SPC); register_code(KC_SPC); break;
    case TD_DOUBLE_HOLD: register_code(KC_RSFT); break;
    case TD_DOUBLE_SINGLE_TAP: tap_code(KC_SPC); register_code(KC_SPC); break;
    default: break;
  }
}

void spc_reset(tap_dance_state_t *state, void *user_data) {
  switch (spc_tap_state.state) {
    case TD_SINGLE_TAP: unregister_code(KC_SPC); break;
    case TD_SINGLE_HOLD: unregister_code(KC_SPC); break;
    case TD_DOUBLE_TAP: unregister_code(KC_SPC); break;
    case TD_DOUBLE_HOLD: unregister_code(KC_RSFT); break;
    case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_SPC); break;
    default: break;
  }
  spc_tap_state.state = TD_NONE;
}

tap_dance_action_t tap_dance_actions[] = {
  [TD_SSPC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, spc_finished, spc_reset)
};
/* TAP DANCE */
