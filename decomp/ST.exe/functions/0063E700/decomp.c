
int __thiscall FUN_0063e700(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_3c [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = param_1 - param_3;
  iVar2 = param_2 - param_3;
  local_14 = param_2 + 1 + param_3;
  local_10 = param_1 + 1 + param_3;
  local_c = 0;
  if (iVar2 < 0) {
    iVar2 = 0;
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
  iVar4 = local_1c;
  sVar3 = SHORT_007fb240;
  local_8 = iVar2;
  if (iVar2 < local_14) {
    do {
      iVar6 = iVar4;
      local_18 = iVar4;
      local_8 = iVar2;
      if (iVar4 < local_10) {
        do {
          iVar6 = 0;
          local_18 = iVar4;
          do {
            if (-1 < (short)iVar4) {
              sVar5 = (short)iVar6;
              if (((((short)iVar4 < sVar3) && (sVar1 = (short)iVar2, -1 < sVar1)) &&
                  (sVar1 < SHORT_007fb242)) &&
                 (((-1 < sVar5 && (sVar5 < SHORT_007fb244)) &&
                  (iVar2 = local_8, iVar4 = local_18,
                  g_worldCells
                  [(int)sVar1 * (int)sVar3 + (int)sVar5 * (int)SHORT_007fb246 + (int)(short)local_18
                  ].objects[1] != (STWorldObject *)0x0)))) {
                local_c = local_c + 1;
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),0,
                                   (int)g_worldCells
                                        [(int)sVar1 * (int)sVar3 + (int)sVar5 * (int)SHORT_007fb246
                                         + (int)(short)local_18].objects[1],
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x128);
                iVar2 = local_8;
                sVar3 = SHORT_007fb240;
              }
              if (((-1 < (short)iVar4) && ((short)iVar4 < sVar3)) &&
                 (((sVar1 = (short)iVar2, -1 < sVar1 &&
                   (((sVar1 < SHORT_007fb242 && (-1 < sVar5)) && (sVar5 < SHORT_007fb244)))) &&
                  (iVar2 = local_8, iVar4 = local_18,
                  g_worldCells
                  [(int)sVar1 * (int)sVar3 + (int)sVar5 * (int)SHORT_007fb246 + (int)(short)local_18
                  ].objects[0] != (STWorldObject *)0x0)))) {
                local_c = local_c + 1;
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),0,
                                   (int)g_worldCells
                                        [(int)sVar1 * (int)sVar3 + (int)sVar5 * (int)SHORT_007fb246
                                         + (int)(short)local_18].objects[0],
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x128);
                iVar2 = local_8;
                sVar3 = SHORT_007fb240;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 5);
          iVar4 = iVar4 + 1;
          iVar6 = local_1c;
          local_18 = iVar4;
        } while (iVar4 < local_10);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar6;
      local_8 = iVar2;
    } while (iVar2 < local_14);
  }
  puVar7 = local_3c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_3c[3] = 2;
  local_3c[4] = 0x128;
  thunk_FUN_0058d480(param_1,param_2,param_3,local_3c,1);
  return local_c;
}

