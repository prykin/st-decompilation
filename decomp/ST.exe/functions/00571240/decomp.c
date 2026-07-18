
LPSTR __cdecl FUN_00571240(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  LPSTR pCVar2;
  char *pcVar3;
  
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
    pcVar3 = s__s__s_007ca240;
  }
  else {
    if (DAT_0080874e == 0) {
      puVar1 = (undefined1 *)0x1;
    }
    else {
      puVar1 = (undefined1 *)(uint)DAT_0080874e;
    }
    pcVar3 = &DAT_007ca254;
  }
  pCVar2 = &DAT_00803520 + (uint)DAT_008067a1 * 0x200;
  wsprintfA(pCVar2,pcVar3,param_1,puVar1);
  if (DAT_008067a1 == 0x18) {
    DAT_008067a1 = 0;
    return pCVar2;
  }
  DAT_008067a1 = DAT_008067a1 + 1;
  return pCVar2;
}

