/* 
 * Jickel's personal keymap based off HelgeN
 */
#include "keymap_common.h"

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
static const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Fn10  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn2|Fn3|Enter   |
     * |-----------------------------------------------------------|
     * |Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|/  |Shift  |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |        Space          |Fn8  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           FN10,A,   S,   D,  F,   G,   H,   J,   K,   L,  FN2, FN3,ENT, \
            LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT ,FN1, \
                LALT,LGUI,          SPC,                FN8 ,RALT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|Play|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |Prev|Next|   |  +|  -|End|PgD|Dow|Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */ 
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           LCTL,VOLD,VOLU,MUTE,MPLY,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           LSFT,NO,  NO,  NO,MPRV,MNXT,  PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 2: Vi mode (Slash)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |Hom|PgD|Up |PgU|End|Hom|PgU|   lEnd|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |Lef|PgD|   |   |Lef|Dow|Up |Rig|Fn0|   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |Hom|PgD|PgUlEnd|   |Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |          Space        |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB, HOME,PGDN,UP,  PGUP,END, HOME,PGUP,NO,END, NO,  NO,  NO,  BSPC, \
           LCTL,NO,  LEFT,PGDN, NO, NO,  LEFT,DOWN,UP,  RGHT, TRNS, NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,  HOME,PGDN,PGUP,END, NO,RSFT,NO, \
                LALT,LGUI,          SPC,                RGUI,RALT),

    //  Layer 2: Vi mode (Slash)
    //  * ,-----------------------------------------------------------.
    //  * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
    //  * |-----------------------------------------------------------|
    //  * |Tab  |Hom|PgD|Up |PgU|End|Hom|PgD|PgUlEnd|   |   |   |Backs|
    //  * |-----------------------------------------------------------|
    //  * |Contro|   |Lef|Dow|Rig|   |Lef|Dow|Up |Rig|   |   |Return  |
    //  * |-----------------------------------------------------------|
    //  * |Shift   |   |   |   |   |   |Hom|PgD|PgUlEnd|Fn0|Shift |   |
    //  * `-----------------------------------------------------------'
    //  *       |Alt|Gui  |          Space        |Gui  |Alt|
    //  *       `-------------------------------------------'
     
    // KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
    //        TAB, HOME,PGDN,UP,  PGUP,END, HOME,PGDN,PGUP,END, NO,  NO,  NO,  BSPC, \
    //        LCTL,NO,  LEFT,DOWN,RGHT,NO,  LEFT,DOWN,UP,  RGHT,NO,  NO,  ENT, \
    //        LSFT,NO,  NO,  NO,  NO,  NO,  HOME,PGDN,PGUP,END, TRNS,RSFT,NO, \
    //             LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 3: Mouse mode (Semicolon)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwU|   |MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |MwD|   |   |McL|McD|McU|McR|   |Fn0|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Mb1          |Gui  |Fn0|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel 
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB, NO,  NO,  NO,  NO,  NO,  WH_L,WH_U, NO,WH_R,NO,  NO,  NO,  BSPC, \
           LCTL,NO,  ACL0,WH_D,ACL2,NO,  MS_L,MS_D,MS_U,MS_R,NO,TRNS,ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,BTN4,BTN5,SLSH,RSFT,NO, \
                LALT,LGUI,          BTN1,               RALT,TRNS),
};



/* id for user defined functions */
enum function_id {
    LSHIFT_LPAREN,
    RSHIFT_RPAREN,
};

enum macro_id {
    LSHIFT_PAREN,
    RSHIFT_PAREN,
    HELLO,
    VOLUP,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
static const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),                              // Default layer(not used)
    [1] = ACTION_LAYER_TAP_TOGGLE(1),                               // HHKB layer(toggle with 5 taps)
    [2] = ACTION_LAYER_TAP_KEY(2, KC_SCLN),                        // Cursor layer with Semicolon*
    [3] = ACTION_LAYER_TAP_KEY(3, KC_QUOT),                         // Mousekey layer with quote*
//    [4] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),                    // RControl with tap Enter*
//    [5] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),                       // Function: LShift with tap '('
    // [6] = ACTION_LAYER_TAP_KEY(5, KC_SPC),                          // Mousekey layer with Space
    [7] = ACTION_LAYER_TOGGLE(3),                                   // Mousekey layer(toggle)
    [8] = ACTION_MODS(MOD_LALT | MOD_LSFT | MOD_LCTL | MOD_LGUI),   // Hyper
//    [9] = ACTION_FUNCTION_TAP(RSHIFT_RPAREN),                       // Function: RShift with tap ')'
    [10] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),                   // LControl with tap Esc

//  [8] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_BSPC),                    // LControl with tap Backspace
//  [9] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_ESC),                     // LControl with tap Esc
//  [11] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),                      // Function: LShift with tap '('
//  [12] = ACTION_FUNCTION_TAP(RSHIFT_RPAREN),                      // Function: RShift with tap ')'
//  [13] = ACTION_MACRO_TAP(LSHIFT_PAREN),                          // Macro: LShift with tap '('
//  [14] = ACTION_MACRO_TAP(RSHIFT_PAREN),                          // Macro: RShift with tap ')'
//  [15] = ACTION_MACRO(HELLO),                                     // Macro: say hello
//  [9] = ACTION_MACRO(VOLUP),                                      // Macro: media key
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
        case LSHIFT_PAREN:
            if (tap.count > 0 && !tap.interrupted) {
                return (event.pressed ?
                        MACRO( D(LSHIFT), D(9), U(9), U(LSHIFT), END ) : MACRO_NONE);
            } else {
                return (event.pressed ?
                        MACRO( D(LSHIFT), END ) : MACRO( U(LSHIFT), END ) );
            }
        case RSHIFT_PAREN:
            if (tap.count > 0 && !tap.interrupted) {
                return (event.pressed ?
                        MACRO( D(RSHIFT), D(0), U(0), U(RSHIFT), END ) : MACRO_NONE);
            } else {
                return (event.pressed ?
                        MACRO( D(RSHIFT), END ) : MACRO( U(RSHIFT), END ) );
            }
        case HELLO:
            return (event.pressed ?
                    MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
                    MACRO_NONE );
        case VOLUP:
            return (event.pressed ?
                    MACRO( D(VOLU), U(VOLU), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
        case LSHIFT_LPAREN:
            // LShft + tap '('
            // NOTE: cant use register_code to avoid conflicting with magic key bind
            if (event.pressed) {
                if (tap.count == 0 || tap.interrupted) {
                    add_mods(MOD_BIT(KC_LSHIFT));
                } else {
                    add_mods(MOD_BIT(KC_LSHIFT));
                    add_key(KC_9);
                    send_keyboard_report();
                    del_mods(MOD_BIT(KC_LSHIFT));
                    del_key(KC_9);
                    send_keyboard_report();
                }
            } else {
                if (tap.count == 0 || tap.interrupted) {
                    del_mods(MOD_BIT(KC_LSHIFT));
                    //layer_off(1);
                }
            }
            break;
        case RSHIFT_RPAREN:
            // RShift + tap ')'
            if (event.pressed) {
                if (tap.count == 0 || tap.interrupted) {
                    add_mods(MOD_BIT(KC_RSHIFT));
                } else {
                    add_mods(MOD_BIT(KC_RSHIFT));
                    add_key(KC_0);
                    send_keyboard_report();
                    del_mods(MOD_BIT(KC_RSHIFT));
                    del_key(KC_0);
                    send_keyboard_report();
                }
            } else {
                if (tap.count == 0 || tap.interrupted) {
                    del_mods(MOD_BIT(KC_RSHIFT));
                }
            }
            break;
    }
}
