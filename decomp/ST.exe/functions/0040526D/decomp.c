
undefined4
thunk_FUN_00696eb0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  ushort uStack_1c;
  ushort uStack_1a;
  undefined2 uStack_18;
  char cStack_17;
  ushort uStack_14;
  ushort uStack_12;
  undefined2 uStack_10;
  char cStack_f;
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_c = 0;
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < *param_1 && ((-1 < param_5 && (param_5 < param_1[1])))))) {
    iVar2 = thunk_FUN_006a1370(param_1,param_2,param_3,param_6,(undefined4 *)&uStack_14);
    iVar3 = thunk_FUN_006a1370(param_1,param_4,param_5,param_6,(undefined4 *)&uStack_1c);
    if (uStack_12 != 0) {
      pbVar5 = (byte *)(*(int *)(iStack_8 + 0x5833) * param_3 + *(int *)(iStack_8 + 0x584b) +
                       param_2);
      *pbVar5 = *pbVar5 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if (uStack_1a != 0) {
      pbVar5 = (byte *)(*(int *)(iStack_8 + 0x5833) * param_5 + *(int *)(iStack_8 + 0x584b) +
                       param_4);
      *pbVar5 = *pbVar5 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if ((((cStack_17 == cStack_f) && ((short)iVar2 == (short)iVar3)) &&
        (((-(uint)((uStack_12 & 0x2000) != 0) & 0xffffff01) + 0xffff & (uint)uStack_12) ==
         ((-(uint)((uStack_1a & 0x2000) != 0) & 0xffffff01) + 0xffff & (uint)uStack_1a))) &&
       (uVar1 = CONCAT22(uStack_1a,uStack_1c),
       ((-(ushort)((uStack_14 & 0x2000) != 0) & 0xff01) - 1 & uStack_14) ==
       ((-(ushort)((uStack_1c & 0x2000) != 0) & 0xff01) - 1 & uStack_1c))) {
      if (param_7 == 1) {
        uVar1 = (uint)uStack_1a;
      }
      iVar2 = 0;
      piVar4 = &DAT_007df82c;
      while ((piVar4[-1] != param_4 - param_2 || (*piVar4 != param_5 - param_3))) {
        piVar4 = piVar4 + 2;
        iVar2 = iVar2 + 1;
        if (0x7df86b < (int)piVar4) {
          return uStack_c;
        }
      }
      if ((iVar2 != -1) && (*(short *)(&DAT_007df898 + (iVar2 + (uVar1 & 0xf) * 8) * 2) != 0)) {
        uStack_c = 1;
      }
    }
    return uStack_c;
  }
  return 0;
}

