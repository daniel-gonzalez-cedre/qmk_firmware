#include QMK_KEYBOARD_H
#include "defines.h"

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
  LY_CLMK_DH,
  LY_CLMK_VIM,
  LY_RAIS,
  LY_LOWR,
  LY_MOUS,
  LY_SCRL,
};

enum custom_keycodes {
  ENT_TO0 = SAFE_RANGE,
  /* SMTD_KEYCODES_BEGIN = SAFE_RANGE, */
  /* CKC_F, */
  /* CKC_J, */
  /* SMTD_KEYCODES_END, */
};

enum tapdance_keycodes {
  TD_RAIS,
  TD_LOWR,
  TD_CAPS,
};


const uint16_t PROGMEM cmb_prn_opn[]      = {KC_J,    KC_K,    COMBO_END};  /* jk ∷ ( */
const uint16_t PROGMEM cmb_brk_sqr_opn[]  = {KC_M,    KC_COMM, COMBO_END};  /* m, ∷ [ */
const uint16_t PROGMEM cmb_brk_crl_opn[]  = {KC_U,    KC_I,    COMBO_END};  /* ui ∷ { */
/* const uint16_t PROGMEM cmb_brk_ang_opn[]  = {KC_V,    KC_B,    COMBO_END};  [> vb ∷ < <] */

const uint16_t PROGMEM cmb_prn_clo[]      = {KC_J,    KC_L,    COMBO_END};  /* jl ∷ ) */
const uint16_t PROGMEM cmb_brk_sqr_clo[]  = {KC_M,    KC_DOT,  COMBO_END};  /* m. ∷ ] */
const uint16_t PROGMEM cmb_brk_crl_clo[]  = {KC_U,    KC_O,    COMBO_END};  /* uo ∷ } */
/* const uint16_t PROGMEM cmb_brk_ang_clo[]  = {KC_N,    KC_M,    COMBO_END};  [> nm ∷ > <] */

const uint16_t PROGMEM cmb_lt[]           = {KC_N,    KC_M,    COMBO_END};  /* nm ∷ > */
const uint16_t PROGMEM cmb_gt[]           = {KC_V,    KC_B,    COMBO_END};  /* vb ∷ < */

const uint16_t PROGMEM cmb_quo_sgl[]      = {KC_L,    KC_SCLN, COMBO_END};  /* l; ∷ ' */
const uint16_t PROGMEM cmb_quo_dbl[]      = {KC_S,    KC_D,    COMBO_END};  /* sd ∷ " */
const uint16_t PROGMEM cmb_grave[]        = {KC_Q,    KC_W,    COMBO_END};  /* qw ∷ ` */
const uint16_t PROGMEM cmb_bslash[]       = {KC_DOT,  KC_SLSH, COMBO_END};  /* ./ ∷ \ */
/* const uint16_t PROGMEM cmb_pipe[]         = {KC_Z,    KC_X,    COMBO_END};  [> zx ∷ | <] */
const uint16_t PROGMEM cmb_equal[]        = {KC_D,    KC_F,    COMBO_END};  /* df ∷ = */
const uint16_t PROGMEM cmb_plus[]         = {KC_C,    KC_V,    COMBO_END};  /* cv ∷ + */
const uint16_t PROGMEM cmb_dash[]         = {KC_K,    KC_L,    COMBO_END};  /* kl ∷ - */
const uint16_t PROGMEM cmb_under[]        = {KC_COMM, KC_DOT,  COMBO_END};  /* ,. ∷ _ */

const uint16_t PROGMEM cmb_tab[]          = {KC_F,    KC_G,    COMBO_END};  /* fg ∷ tab */
const uint16_t PROGMEM cmb_bsp[]          = {KC_H,    KC_J,    COMBO_END};  /* hj ∷ bsp */
/* const uint16_t PROGMEM cmb_del[]          = {KC_H,    KC_J,    COMBO_END};  [> hj ∷ del <] */

const uint16_t PROGMEM cmb_mod_cmd[]      = {KC_LCTL  , KC_LSFT, COMBO_END};  /* ctl sft ∷ cmd */
/* const uint16_t PROGMEM cmb_mod_capsword[] = {KC_RSFT, KC_SPC,  COMBO_END};  [> sft spc ∷ cw <] */
/* const uint16_t PROGMEM cmb_mod_capsword[] = {TD(TD_RAIS), KC_SPC,  COMBO_END};  [> sft spc ∷ cw <] */

/* const uint16_t PROGMEM cmb_lyr_rais[]     = {KC_C,    KC_V,    COMBO_END}; */
/* const uint16_t PROGMEM cmb_lyr_lowr[]     = {KC_C,    KC_V,    COMBO_END}; [> cv ∷ ly_lowr <] */

combo_t key_combos[] = {
  COMBO(cmb_prn_opn,      KC_LPRN),
  COMBO(cmb_prn_clo,      KC_RPRN),
  COMBO(cmb_brk_sqr_opn,  KC_LBRC),
  COMBO(cmb_brk_sqr_clo,  KC_RBRC),
  COMBO(cmb_brk_crl_opn,  KC_LCBR),
  COMBO(cmb_brk_crl_clo,  KC_RCBR),
  /* COMBO(cmb_brk_ang_opn,  KC_LABK), */
  /* COMBO(cmb_brk_ang_clo,  KC_RABK), */
  COMBO(cmb_lt,           KC_LABK),
  COMBO(cmb_gt,           KC_RABK),
  COMBO(cmb_quo_sgl,      KC_QUOT),
  COMBO(cmb_quo_dbl,      KC_DQUO),
  COMBO(cmb_grave,        KC_GRV),
  COMBO(cmb_bslash,       KC_BSLS),
  /* COMBO(cmb_pipe,         KC_PIPE), */
  COMBO(cmb_equal,        KC_EQL),
  COMBO(cmb_plus,         KC_PLUS),
  COMBO(cmb_dash,         KC_MINS),
  COMBO(cmb_under,        KC_UNDS),
  COMBO(cmb_tab,          KC_TAB),
  COMBO(cmb_bsp,          KC_BSPC),
  /* COMBO(cmb_del,          KC_DEL), */
  COMBO(cmb_mod_cmd,      KC_LCMD),
  /* COMBO(cmb_mod_capsword, CW_TOGG), */
  /* COMBO(cmb_lyr_rais,     MO_RAIS), */
  /* COMBO(cmb_lyr_lowr,     MO_LOWR), */
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ENT_TO0:
      if (record->event.pressed) {
        register_code(KC_ENT);
      } else {
        unregister_code(KC_ENT);
        layer_move(LY_QWER);
      }
      break;
  }
  return true;
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
    // KEYCODES THAT CONTINUE CAPS WORD WITH SHIFT APPLIED.
    case KC_A ... KC_Z:
    /* case KC_MINS: */
      add_weak_mods(MOD_BIT(KC_LSFT));  // APPLY SHIFT TO NEXT KEY.
      return true;

    // KEYCODES THAT CONTINUE CAPS WORD, WITHOUT SHIFTING.
    case KC_1 ... KC_0:
    case KC_BSPC:
    case KC_DEL:
    case KC_MINS:
    case KC_UNDS:
      return true;

    default:
      return false;  // DEACTIVATE CAPS WORD.
  }
}

/* KEYMAP */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LY_QWER] = LAYOUT(  /* [> BASE QWERTY LAYER <] */
    KC_Q   ,KC_W  ,KC_E   ,KC_R   ,KC_T   ,                    KC_Y  ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,
    KC_A   ,KC_S  ,KC_D   ,KC_F   ,KC_G   ,                    KC_H  ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,
    KC_Z   ,KC_X  ,KC_C   ,KC_V   ,KC_B   ,KC_TAB ,KC_BSPC    ,KC_N  ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,
    QK_GESC,KC_TAB,MO_MOUS,MO_LOWR,KC_LCTL,KC_LSFT,TD(TD_RAIS),KC_SPC,MO_LOWR,MO_MOUS,KC_BSPC,KC_ENT 
  ),
  [LY_CLMK] = LAYOUT(  /* [> BASE COLEMAK LAYER <] */
    KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_G   ,                KC_J  ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN,
    KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_D   ,                KC_H  ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,
    KC_Z   ,KC_X   ,KC_C   ,KC_D   ,KC_V   ,KC_TAB ,KC_BSPC,KC_K  ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,
    TO_QWER,MO_MOUS,MO_LOWR,KC_LCMD,KC_LCTL,KC_LSFT,KC_LSFT,KC_SPC,MO_RAIS,MO_LOWR,MO_MOUS,KC_ENT
  ),
  [LY_CLMK_DH] = LAYOUT(  /* [> COLEMAK-DH MOD <] */
    KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_B   ,                KC_J  ,KC_L   ,KC_U   ,KC_Y   ,KC_SCLN,
    KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_G   ,                KC_M  ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,
    KC_Z   ,KC_X   ,KC_C   ,KC_D   ,KC_V   ,KC_TAB ,KC_BSPC,KC_K  ,KC_H   ,KC_COMM,KC_DOT ,KC_SLSH,
    TO_QWER,MO_MOUS,MO_LOWR,KC_LCMD,KC_LCTL,KC_LSFT,KC_LSFT,KC_SPC,MO_RAIS,MO_LOWR,MO_MOUS,KC_ENT
  ),
  [LY_CLMK_VIM] = LAYOUT(  /* [> COLEMAK-VIM MOD <] */
    KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_G   ,                KC_DOT,KC_COMM,KC_U   ,KC_Y   ,KC_SCLN,
    KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_D   ,                KC_M  ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,
    KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_TAB ,KC_BSPC,KC_H  ,KC_J   ,KC_K   ,KC_L   ,KC_SLSH,
    TO_QWER,MO_MOUS,MO_LOWR,KC_LCMD,KC_LCTL,KC_LSFT,KC_LSFT,KC_SPC,MO_RAIS,MO_LOWR,MO_MOUS,KC_ENT
  ),
  [LY_RAIS] = LAYOUT(  /* [> LHS SYMBOL & NAVIGATION LAYER <] */
    KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_EQL ,KC_DQUO,
    KC_TAB ,KC_PLUS,KC_MINS,KC_EQL ,KC_BSPC,                KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,KC_QUOT,
    KC_SLSH,KC_UNDS,KC_UNDS,KC_ASTR,KC_BSLS,KC_TAB ,KC_BSPC,KC_DEL ,TAB_NXT,TAB_PRV,KC_PIPE,KC_BSLS,
    TO_QWER,XXXXXXX,XXXXXXX,KC_LCMD,KC_LCTL,KC_LSFT,_______,KC_SPC ,XXXXXXX,XXXXXXX,XXXXXXX,KC_CAPS
  ),
  [LY_LOWR] = LAYOUT(  /* [> RHS NUMBER & SYMBOL LAYER <] */
    KC_PERC,KC_7,KC_8   ,KC_9   ,KC_DLR ,                KC_DLR ,KC_7   ,KC_8   ,KC_9,KC_PERC,
    KC_0   ,KC_4,KC_5   ,KC_6   ,KC_MINS,                KC_MINS,KC_4   ,KC_5   ,KC_6,KC_0   ,
    KC_SLSH,KC_1,KC_2   ,KC_3   ,KC_HASH,_______,KC_BSPC,KC_HASH,KC_1   ,KC_2   ,KC_3,KC_SLSH,
    TO_QWER,KC_0,_______,KC_LCMD,KC_LCTL,KC_LSFT,XXXXXXX,KC_SPC ,_______,XXXXXXX,KC_0,TO_QWER
  ),
  [LY_MOUS] = LAYOUT(  /* [> NAVIGATION LAYER <] */
    KC_BRID,KC_BRIU,SCRN_S3,SCRN_S4,SCRN_S5,                XXXXXXX,KC_MPLY,KC_MUTE,KC_VOLD,KC_VOLU,
    XXXXXXX,XXXXXXX,KC_MUTE,KC_VOLD,KC_VOLU,                MS_LEFT,MS_DOWN,MS_UP  ,MS_RGHT,XXXXXXX,
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,TAB_NXT,TAB_PRV,XXXXXXX,XXXXXXX,
    QK_LLCK,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,MO_SCRL,MS_BTN1,MS_BTN2,XXXXXXX,XXXXXXX,KC_MPLY
  ),
  [LY_SCRL] = LAYOUT(  /* [> NAVIGATION LAYER <] */
    TO_CLMK,TO(LY_CLMK_DH),TO(LY_CLMK_VIM),XXXXXXX,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    XXXXXXX,XXXXXXX       ,XXXXXXX        ,XXXXXXX,XXXXXXX,                MS_WHLR,MS_WHLU,MS_WHLD,MS_WHLL,XXXXXXX,
    XXXXXXX,XXXXXXX       ,XXXXXXX        ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    TO_QWER,XXXXXXX       ,XXXXXXX        ,XXXXXXX,XXXXXXX,XXXXXXX,_______,MS_BTN1,MS_BTN2,XXXXXXX,XXXXXXX,XXXXXXX
  ),
};

/* BEGIN TAP DANCE */
/* typedef enum { */
  /* TD_NONE, */
  /* TD_UNKNOWN, */
  /* TD_SINGLE_TAP, */
  /* TD_SINGLE_HOLD, */
  /* TD_DOUBLE_TAP, */
  /* TD_DOUBLE_HOLD, */
  /* TD_DOUBLE_SINGLE_TAP,  [> SENDS TWO SINGLE TAPS <] */
  /* TD_TRIPLE_TAP, */
  /* TD_TRIPLE_HOLD, */
/* } td_state_t; */

/* typedef struct { */
  /* bool is_press_action; */
  /* td_state_t state; */
/* } td_tap_t; */

/* td_state_t cur_dance(tap_dance_state_t *state); */

/* void td_spc_finished(tap_dance_state_t *state, void *user_data); */
/* void td_spc_reset(tap_dance_state_t *state, void *user_data); */

/* td_state_t cur_dance(tap_dance_state_t *state) { */
  /* if (state->count == 1) { */
    /* if (state->interrupted || !state->pressed) { */
      /* return TD_SINGLE_TAP; */
    /* } else { */
      /* return TD_SINGLE_HOLD; */
    /* } */
  /* } else if (state->count == 2) { */
    /* if (state->interrupted) { */
      /* return TD_DOUBLE_SINGLE_TAP; */
    /* } else if (state->pressed) { */
      /* return TD_DOUBLE_HOLD; */
    /* } else { */
      /* return TD_DOUBLE_TAP; */
    /* } */
  /* } */
  /* if (state->count == 3) { */
    /* if (state->interrupted || !state->pressed) { */
      /* return TD_TRIPLE_TAP; */
    /* } else { */
      /* return TD_TRIPLE_HOLD; */
    /* } */
  /* } else { */
    /* return TD_UNKNOWN; */
  /* } */
/* } */

/* static td_tap_t spc_tap_state = { */
  /* .is_press_action = true, */
  /* .state = TD_NONE */
/* }; */

/* void td_spc_finished(tap_dance_state_t *state, void *user_data) { */
  /* spc_tap_state.state = cur_dance(state); */
  /* switch (spc_tap_state.state) { */
    /* case TD_SINGLE_TAP: register_code(KC_SPC); break; */
    /* case TD_SINGLE_HOLD: register_code(KC_SPC); break; */
    /* case TD_DOUBLE_TAP: tap_code(KC_SPC); register_code(KC_SPC); break; */
    /* case TD_DOUBLE_HOLD: register_code(KC_RSFT); break; */
    /* case TD_DOUBLE_SINGLE_TAP: tap_code(KC_SPC); register_code(KC_SPC); break; */
    /* default: break; */
  /* } */
/* } */

/* void td_spc_reset(tap_dance_state_t *state, void *user_data) { */
  /* switch (spc_tap_state.state) { */
    /* case TD_SINGLE_TAP: unregister_code(KC_SPC); break; */
    /* case TD_SINGLE_HOLD: unregister_code(KC_SPC); break; */
    /* case TD_DOUBLE_TAP: unregister_code(KC_SPC); break; */
    /* case TD_DOUBLE_HOLD: unregister_code(KC_RSFT); break; */
    /* case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_SPC); break; */
    /* default: break; */
  /* } */
  /* spc_tap_state.state = TD_NONE; */
/* } */

void td_rais_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_on(LY_RAIS);
  } else {
    register_code(KC_LSFT);
  }
}

void td_rais_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_off(LY_RAIS);
  } else {
    unregister_code(KC_LSFT);
  }
}

void td_lowr_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_on(LY_RAIS);
  } else {
    layer_on(LY_LOWR);
  }
}

void td_lowr_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_off(LY_RAIS);
  } else {
    layer_off(LY_LOWR);
  }
}

void td_caps_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_on(LY_LOWR);
  } else {
    register_code(KC_CAPS);
  }
}

void td_caps_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    layer_off(LY_LOWR);
  } else {
    unregister_code(KC_RSFT);
  }
}

/* TAP DANCE FUNCTIONALITY */
tap_dance_action_t tap_dance_actions[] = {
  [TD_RAIS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_rais_finished, td_rais_reset),
  [TD_LOWR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_lowr_finished, td_lowr_reset),
  [TD_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_caps_finished, td_caps_reset),
};
/* END TAP DANCE */
