
void __cdecl
thunk_FUN_00627850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,int param_6,int param_7,undefined4 param_8,char *param_9,
                  undefined4 param_10)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  char acStack_2c [14];
  undefined1 uStack_1e;
  undefined4 uStack_1d;
  undefined4 uStack_19;
  undefined4 uStack_15;
  undefined4 uStack_11;
  int iStack_c;
  int iStack_8;
  
  sVar7 = (short)(param_5 >> 0x1f);
  if (param_5 < 0) {
    iStack_8 = (short)(((short)(param_5 / 0xc9) + sVar7) -
                      (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_8 = (int)(short)(((short)(param_5 / 0xc9) + sVar7) -
                           (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
  }
  sVar7 = (short)iStack_8;
  sVar6 = (short)(param_6 >> 0x1f);
  if (param_6 < 0) {
    sVar6 = (((short)(param_6 / 0xc9) + sVar6) - (short)((longlong)param_6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = ((short)(param_6 / 0xc9) + sVar6) - (short)((longlong)param_6 * 0x28c1979 >> 0x3f);
  }
  sVar2 = (short)(param_7 >> 0x1f);
  if (param_7 < 0) {
    iStack_c = (short)(((short)(param_7 / 200) + sVar2) -
                      (short)((longlong)param_7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_c = (int)(short)(((short)(param_7 / 200) + sVar2) -
                           (short)((longlong)param_7 * 0x51eb851f >> 0x3f));
  }
  puVar9 = &uStack_5c;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = 0;
  *(undefined1 *)((int)puVar9 + 2) = 0;
  uStack_19 = param_3;
  uStack_54 = 1;
  uStack_50 = 1;
  uStack_1d = param_8;
  uStack_58 = param_2;
  uStack_15 = param_4;
  uStack_5c = 0x1ae;
  uStack_48 = param_1;
  uStack_11 = param_10;
  if (param_9 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar8 = param_9;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0xf) {
      uVar4 = 0xffffffff;
      do {
        pcVar8 = param_9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = param_9 + 1;
        cVar1 = *param_9;
        param_9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar8 + -uVar4;
      pcVar10 = acStack_2c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      sVar7 = (short)iStack_8;
    }
    else {
      _strncpy(acStack_2c,param_9,0xe);
      uStack_1e = 0;
    }
  }
  iStack_40 = param_6;
  iStack_44 = param_5;
  iStack_3c = param_7;
  iStack_38 = (int)(short)(sVar7 * 0xc9 + 100);
  iStack_34 = (int)(short)(sVar6 * 0xc9 + 100);
  iStack_30 = (int)(short)((short)iStack_c * 200 + 100);
  (**(code **)(*DAT_00802a38 + 8))(0x158,0,0,&uStack_5c,0);
  return;
}

