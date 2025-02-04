// unused? #define SE_CURR  LS(N4)    // ¤

// Done:
#define SE_AUOO LBKT // Å
#define SE_OUEE SEMI // Ö
#define SE_AUEE SQT  // Ä            single quote

#define SE_EXCL  LS(N1)     // !
#define SE_DQT   LS(N2)     // "
#define SE_HASH  LS(N3)     // #
#define SE_PRCNT LS(N5)     // %
#define SE_AMPS  LS(N6)     // &
#define SE_SLASH LS(N7)     // /
#define SE_LPAR  LS(N8)     // (
#define SE_RPAR  LS(N9)     // )
#define SE_LBRC RA(SE_7)    // {
#define SE_RBRC RA(SE_0)    // }
#define SE_LBKT RA(SE_8)    // [
#define SE_RBKT RA(SE_9)    // ]
#define SE_EQUAL LS(N0)     // =
#define SE_AT    RA(N2)     // @
#define SE_SEMI LS(SE_COMM) // ;
#define SE_PIPE RA(LT)      // |
#define SE_EQUAL LS(N0)     // =
#define SE_QMARK LS(PLUS)   // ?
#define SE_LT NUBS          // <
#define SE_GT LS(SE_LT)     // >
#define SE_COLON LS(DOT)    // :
#define SE_CARET LS(RBKT)   // ^ (dead)
#define SE_GRAVE LS(EQUAL)  // ` (dead)
#define SE_STAR LS(SE_APOS) // *
#define SE_MINUS SLASH      // -
#define SE_DOLLAR  RA(N4)   // $
#define SE_BSLH EQUAL       // ´ (dead)
#define SE_PLUS MINS       // +
#define SE_APOS NUHS       // '
#define SE_TILDE2 TILDE2
// TILDE2


// #define SE_UNDS S(SE_MINS) // _
// #define SE_ACUT KC_EQL  // ´ (dead)

// Aliases
// #define SE_SECT KC_GRV  // §
// #define SE_DIAE  // ¨ (dead)
// #define SE_HALF S(SE_SECT) // ½
// #define SE_EXLM S(SE_1)    // !
// #define SE_DQUO S(SE_2)    // "
// #define SE_HASH S(SE_3)    // #
// #define SE_CURR S(SE_4)    // ¤
// #define SE_PERC S(SE_5)    // %
// #define SE_AMPR S(SE_6)    // &
// #define SE_SLSH S(SE_7)    // /
// #define SE_LPRN S(SE_8)    // (
// #define SE_RPRN S(SE_9)    // )
// #define SE_PND  ALGR(SE_3)    // £
// #define SE_EURO ALGR(SE_5)    // €
// #define SE_BSLS ALGR(SE_PLUS) // (backslash)
// #define SE_TILD ALGR(SE_DIAE) // ~ (dead)
// #define SE_MICR ALGR(SE_M)    // µ


// Skip these
// 
// === Numbers ===
// #define SE_1    KC_1    // 1
// #define SE_2    KC_2    // 2
// #define SE_3    KC_3    // 3
// #define SE_4    KC_4    // 4
// #define SE_5    KC_5    // 5
// #define SE_6    KC_6    // 6
// #define SE_7    KC_7    // 7
// #define SE_8    KC_8    // 8
// #define SE_9    KC_9    // 9
// #define SE_0    KC_0    // 0
//
// === Letters ===
// #define SE_Q    KC_Q    // Q
// #define SE_W    KC_W    // W
// #define SE_E    KC_E    // E
// #define SE_R    KC_R    // R
// #define SE_T    KC_T    // T
// #define SE_Y    KC_Y    // Y
// #define SE_U    KC_U    // U
// #define SE_I    KC_I    // I
// #define SE_O    KC_O    // O
// #define SE_P    KC_P    // P
// #define SE_A    KC_A    // A
// #define SE_S    KC_S    // S
// #define SE_D    KC_D    // D
// #define SE_F    KC_F    // F
// #define SE_G    KC_G    // G
// #define SE_H    KC_H    // H
// #define SE_J    KC_J    // J
// #define SE_K    KC_K    // K
// #define SE_L    KC_L    // L
// #define SE_Z    KC_Z    // Z
// #define SE_X    KC_X    // X
// #define SE_C    KC_C    // C
// #define SE_V    KC_V    // V
// #define SE_B    KC_B    // B
// #define SE_N    KC_N    // N
// #define SE_M    KC_M    // M
// #define SE_COMM KC_COMM // ,
// #define SE_DOT  KC_DOT  // .
