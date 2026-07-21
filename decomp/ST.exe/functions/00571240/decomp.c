
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004EEA40 -> 00571240 @ 004EEB34 | 004EEA40 -> 00571240 @ 004EEBCA | 004F05C0 ->
   00571240 @ 004F068A | 004F05C0 -> 00571240 @ 004F0702 | 004F5690 -> 00571240 @ 004F5DF2 |
   004F5690 -> 00571240 @ 004F6195 | 00503450 -> 00571240 @ 00503908 | 005107C0 -> 00571240 @
   00510A5F | 00539280 -> 00571240 @ 00539388 | 005397F0 -> 00571240 @ 00539960 | 0053EF20 ->
   00571240 @ 0053F04A | 005400F0 -> 00571240 @ 0054026C | 005400F0 -> 00571240 @ 005402B3 */

LPSTR __cdecl FUN_00571240(char *text,int param_2)

{
  undefined1 *puVar1;
  LPSTR pCVar2;
  char *text_00;

  if (param_2 == 0) {
    if (DAT_0080874e == 2) {
      puVar1 = &DAT_007ca248;
    }
    else if (DAT_0080874e == 3) {
      puVar1 = &DAT_007ca24c;
    }
    else {
      puVar1 = &DAT_007ca250;
    }
    text_00 = "%s_%s";
  }
  else {
    if (DAT_0080874e == 0) {
      puVar1 = (undefined1 *)0x1;
    }
    else {
      puVar1 = (undefined1 *)(uint)DAT_0080874e;
    }
    text_00 = "%s%d";
  }
  pCVar2 = &DAT_00803520 + (uint)DAT_008067a1 * 0x200;
  wsprintfA(pCVar2,text_00,text,puVar1);
  if (DAT_008067a1 == 0x18) {
    DAT_008067a1 = 0;
    return pCVar2;
  }
  DAT_008067a1 = DAT_008067a1 + 1;
  return pCVar2;
}

