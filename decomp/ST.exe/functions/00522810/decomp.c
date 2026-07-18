
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522810(char *param_1)

{
  char *_Str1;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  char *pcVar5;
  void *unaff_EDI;
  char *pcVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  uVar3 = 0xffffffff;
  _Str1 = (char *)(local_8 + 0x6c);
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = _Str1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_006b77e0(_Str1,(byte *)_Str1);
  FUN_006b7780(_Str1,_Str1);
  if (_DAT_008087a1 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (DAT_008087a5 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (DAT_00808783 == '\x03') {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (DAT_0080874e == '\0') {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (DAT_0080874d == 0xff) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  iVar2 = _strncmp(_Str1,s_EXITON_007c416c,6);
  if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
    thunk_FUN_004d88f0(DAT_0080874d,5000);
    if (DAT_0080874e == '\x03') {
      thunk_FUN_004e4380((uint)DAT_0080874d,10000);
    }
    else {
      thunk_FUN_004d87b0(DAT_0080874d,1000);
      thunk_FUN_004d8a30(DAT_0080874d,10000);
    }
    thunk_FUN_004d8b70(DAT_0080874d);
    thunk_FUN_004d78e0(DAT_0080874d);
  }
  iVar2 = _strncmp(_Str1,s_CORIUM_007c4164,6);
  if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
    thunk_FUN_004d88f0(DAT_0080874d,5000);
    thunk_FUN_004d8b70(DAT_0080874d);
    thunk_FUN_004d78e0(DAT_0080874d);
  }
  if (DAT_0080874e == '\x03') {
LAB_00522a79:
    iVar2 = _strncmp(_Str1,s_SILICON_007c4148,7);
    if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
      thunk_FUN_004e4380((uint)DAT_0080874d,10000);
      thunk_FUN_004d8b70(DAT_0080874d);
      thunk_FUN_004d78e0(DAT_0080874d);
    }
    if (DAT_0080874e != '\x03') goto LAB_00522ad4;
  }
  else {
    iVar2 = _strncmp(_Str1,&DAT_007c415c,4);
    if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
      thunk_FUN_004d87b0(DAT_0080874d,1000);
      thunk_FUN_004d8b70(DAT_0080874d);
      thunk_FUN_004d78e0(DAT_0080874d);
    }
    if (DAT_0080874e == '\x03') goto LAB_00522a79;
    iVar2 = _strncmp(_Str1,s_METAL_007c4154,5);
    if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
      thunk_FUN_004d8a30(DAT_0080874d,1000);
      thunk_FUN_004d8b70(DAT_0080874d);
      thunk_FUN_004d78e0(DAT_0080874d);
    }
    if (DAT_0080874e == '\x03') goto LAB_00522a79;
LAB_00522ad4:
    iVar2 = _strncmp(_Str1,&DAT_007c4144,3);
    if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
      thunk_FUN_004b7080((uint)DAT_0080874d,100);
      thunk_FUN_004d8b70(DAT_0080874d);
    }
    if (DAT_0080874e != '\x03') goto LAB_00522b59;
  }
  iVar2 = _strncmp(_Str1,s_ENERGY_007c413c,6);
  if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
    thunk_FUN_004e4270((uint)DAT_0080874d,100);
    thunk_FUN_004d8b70(DAT_0080874d);
  }
LAB_00522b59:
  iVar2 = _strncmp(_Str1,&DAT_007c4134,4);
  if ((iVar2 == 0) && (DAT_007fa174 != 0)) {
    thunk_FUN_004e75f0((uint)DAT_0080874d);
  }
  iVar2 = _strncmp(_Str1,&DAT_007c4130,3);
  if ((iVar2 == 0) && (DAT_00802a88 != 0)) {
    if (*(int *)(DAT_00802a88 + 0x114) == 0) {
      *(undefined4 *)(DAT_00802a88 + 0xf8) = 0;
    }
    else {
      uVar3 = (uint)(*(int *)(DAT_00802a88 + 0xf8) == 0);
      *(uint *)(DAT_00802a88 + 0xf8) = uVar3;
      iVar2 = DAT_00807598;
      if (uVar3 != 0) {
        *(undefined4 *)(DAT_00807598 + 0x466) = 1;
        *(undefined4 *)(iVar2 + 0x2d8) = 1;
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      }
    }
    iVar2 = DAT_00807598;
    *(undefined4 *)(DAT_00807598 + 0x466) = 0;
    *(undefined4 *)(iVar2 + 0x2d8) = 1;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

