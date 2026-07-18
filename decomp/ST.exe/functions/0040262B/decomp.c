
void thunk_FUN_00682d70(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uStack_c;
  undefined2 uStack_b;
  
  pcVar3 = DAT_00857548;
  pbVar1 = thunk_FUN_0067eca0();
  iVar2 = thunk_FUN_0067f180(pbVar1,pcVar3);
  if (iVar2 < 0) {
    FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x252);
  }
  uStack_c = 3;
  uStack_b = (undefined2)iVar2;
  thunk_FUN_00682370((undefined4 *)&uStack_c);
  thunk_FUN_006827a0();
  return;
}

