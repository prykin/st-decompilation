#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004EEA40 -> 00571240 @ 004EEB34 | 004EEA40 -> 00571240 @ 004EEBCA | 004F05C0 ->
   00571240 @ 004F068A | 004F05C0 -> 00571240 @ 004F0702 | 004F5690 -> 00571240 @ 004F5DF2 |
   004F5690 -> 00571240 @ 004F6195 | 00503450 -> 00571240 @ 00503908 | 005107C0 -> 00571240 @
   00510A5F | 00539280 -> 00571240 @ 00539388 | 005397F0 -> 00571240 @ 00539960 | 0053EF20 ->
   00571240 @ 0053F04A | 005400F0 -> 00571240 @ 0054026C | 005400F0 -> 00571240 @ 005402B3 */

LPSTR __cdecl FUN_00571240(char *text,int param_2)

{
  char *pcVar1;
  LPSTR pCVar2;
  char *text_00;

  if (param_2 == 0) {
    if (DAT_0080874e == 2) {
      pcVar1 = &CHAR_B_007ca248;
    }
    else if (DAT_0080874e == 3) {
      pcVar1 = &CHAR_S_007ca24c;
    }
    else {
      pcVar1 = &CHAR_W_007ca250;
    }
    text_00 = "%s_%s";
  }
  else {
    if (DAT_0080874e == 0) {
      pcVar1 = (char *)0x1;
    }
    else {
      pcVar1 = (char *)(uint)DAT_0080874e;
    }
    text_00 = "%s%d";
  }
  pCVar2 = &DAT_00803520 + (uint)DAT_008067a1 * 0x200;
  /* ST_CALLSITE[005712BC]: CALL dword ptr [0x0085bde8] */
  wsprintfA(pCVar2,text_00,text,pcVar1);
  if (DAT_008067a1 == 0x18) {
    DAT_008067a1 = 0;
    return pCVar2;
  }
  DAT_008067a1 = DAT_008067a1 + 1;
  return pCVar2;
}

