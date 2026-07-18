
int __thiscall thunk_FUN_0063e700(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 auStack_3c [8];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_1c = param_1 - param_3;
  iVar3 = param_2 - param_3;
  iStack_14 = param_2 + 1 + param_3;
  iStack_10 = param_1 + 1 + param_3;
  iStack_c = 0;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iStack_1c < 0) {
    iStack_1c = 0;
  }
  if (DAT_007fb242 < iStack_14) {
    iStack_14 = (int)DAT_007fb242;
  }
  if (DAT_007fb240 < iStack_10) {
    iStack_10 = (int)DAT_007fb240;
  }
  iVar5 = iStack_1c;
  sVar4 = DAT_007fb240;
  iStack_8 = iVar3;
  if (iVar3 < iStack_14) {
    do {
      iVar7 = iVar5;
      iStack_18 = iVar5;
      iStack_8 = iVar3;
      if (iVar5 < iStack_10) {
        do {
          iVar7 = 0;
          iStack_18 = iVar5;
          do {
            if (-1 < (short)iVar5) {
              sVar6 = (short)iVar7;
              if (((((short)iVar5 < sVar4) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
                  (sVar2 < DAT_007fb242)) &&
                 (((-1 < sVar6 && (sVar6 < DAT_007fb244)) &&
                  (iVar1 = *(int *)(DAT_007fb248 + 4 +
                                   ((int)sVar2 * (int)sVar4 + (int)sVar6 * (int)DAT_007fb246 +
                                   (int)(short)iStack_18) * 8), iVar3 = iStack_8, iVar5 = iStack_18,
                  iVar1 != 0)))) {
                iStack_c = iStack_c + 1;
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),0,iVar1,
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x128);
                iVar3 = iStack_8;
                sVar4 = DAT_007fb240;
              }
              if (((-1 < (short)iVar5) && ((short)iVar5 < sVar4)) &&
                 (((sVar2 = (short)iVar3, -1 < sVar2 &&
                   (((sVar2 < DAT_007fb242 && (-1 < sVar6)) && (sVar6 < DAT_007fb244)))) &&
                  (iVar1 = *(int *)(DAT_007fb248 +
                                   ((int)sVar2 * (int)sVar4 + (int)sVar6 * (int)DAT_007fb246 +
                                   (int)(short)iStack_18) * 8), iVar3 = iStack_8, iVar5 = iStack_18,
                  iVar1 != 0)))) {
                iStack_c = iStack_c + 1;
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),0,iVar1,
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x128);
                iVar3 = iStack_8;
                sVar4 = DAT_007fb240;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          iVar5 = iVar5 + 1;
          iVar7 = iStack_1c;
          iStack_18 = iVar5;
        } while (iVar5 < iStack_10);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar7;
      iStack_8 = iVar3;
    } while (iVar3 < iStack_14);
  }
  puVar8 = auStack_3c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  auStack_3c[3] = 2;
  auStack_3c[4] = 0x128;
  thunk_FUN_0058d480(param_1,param_2,param_3,auStack_3c,1);
  return iStack_c;
}

