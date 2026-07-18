
void __cdecl thunk_FUN_00648dd0(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  
  if ((((DAT_007fa174 != 0) && (DAT_00802a38 != (void *)0x0)) && (param_1 < 8)) &&
     ((byte)(&DAT_008087e9)[param_1 * 0x51] < 8)) {
    puVar1 = (undefined4 *)thunk_FUN_004357f0((char)param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = auStack_24;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      uStack_14 = 0x5d97;
      (**(code **)*puVar1)(auStack_24);
      thunk_FUN_0054cf70(DAT_00802a38,puVar1[2]);
    }
  }
  return;
}

