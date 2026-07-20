
int __thiscall FUN_0063e700(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_3c [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = param_1 - param_3;
  iVar3 = param_2 - param_3;
  local_14 = param_2 + 1 + param_3;
  local_10 = param_1 + 1 + param_3;
  local_c = 0;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (local_1c < 0) {
    local_1c = 0;
  }
  if (SHORT_007fb242 < local_14) {
    local_14 = (int)SHORT_007fb242;
  }
  if (SHORT_007fb240 < local_10) {
    local_10 = (int)SHORT_007fb240;
  }
  iVar5 = local_1c;
  sVar4 = SHORT_007fb240;
  local_8 = iVar3;
  if (iVar3 < local_14) {
    do {
      iVar7 = iVar5;
      local_18 = iVar5;
      local_8 = iVar3;
      if (iVar5 < local_10) {
        do {
          iVar7 = 0;
          local_18 = iVar5;
          do {
            if (-1 < (short)iVar5) {
              sVar6 = (short)iVar7;
              if (((((short)iVar5 < sVar4) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
                  (sVar2 < SHORT_007fb242)) &&
                 (((-1 < sVar6 && (sVar6 < SHORT_007fb244)) &&
                  (iVar1 = *(int *)(DAT_007fb248 + 4 +
                                   ((int)sVar2 * (int)sVar4 + (int)sVar6 * (int)SHORT_007fb246 +
                                   (int)(short)local_18) * 8), iVar3 = local_8, iVar5 = local_18,
                  iVar1 != 0)))) {
                local_c = local_c + 1;
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),0,iVar1,
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x128);
                iVar3 = local_8;
                sVar4 = SHORT_007fb240;
              }
              if (((-1 < (short)iVar5) && ((short)iVar5 < sVar4)) &&
                 (((sVar2 = (short)iVar3, -1 < sVar2 &&
                   (((sVar2 < SHORT_007fb242 && (-1 < sVar6)) && (sVar6 < SHORT_007fb244)))) &&
                  (iVar1 = *(int *)(DAT_007fb248 +
                                   ((int)sVar2 * (int)sVar4 + (int)sVar6 * (int)SHORT_007fb246 +
                                   (int)(short)local_18) * 8), iVar3 = local_8, iVar5 = local_18,
                  iVar1 != 0)))) {
                local_c = local_c + 1;
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),0,iVar1,
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x128);
                iVar3 = local_8;
                sVar4 = SHORT_007fb240;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          iVar5 = iVar5 + 1;
          iVar7 = local_1c;
          local_18 = iVar5;
        } while (iVar5 < local_10);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar7;
      local_8 = iVar3;
    } while (iVar3 < local_14);
  }
  puVar8 = local_3c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_3c[3] = 2;
  local_3c[4] = 0x128;
  thunk_FUN_0058d480(param_1,param_2,param_3,local_3c,1);
  return local_c;
}

