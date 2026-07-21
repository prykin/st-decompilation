
undefined4 __thiscall FUN_0063cc50(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_48 [5];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  short local_2e;
  short local_2c;
  undefined2 local_2a;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puVar8 = local_48;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_34 = *(undefined2 *)((int)this + 0x266);
  local_48[3] = 1;
  local_48[2] = 1;
  local_48[1] = *(undefined4 *)((int)this + 0x235);
  local_32 = *(undefined2 *)((int)this + 0x26a);
  local_30 = *(undefined2 *)((int)this + 0x26e);
  local_48[0] = 0x6e;
  if (3 < param_1) {
    return 0;
  }
  local_2e = local_34;
  local_2c = local_32;
  if (param_1 == 0) {
    local_2a = 0;
    (*PTR_00802a38->vtable->vfunc_08)(0x10c,0,0,local_48,0);
    return 1;
  }
  local_10 = *(int *)((int)this + 0x286) - param_1;
  if (local_10 < 0) {
    local_10 = 0;
  }
  iVar5 = local_10;
  local_8 = *(int *)((int)this + 0x286) + 1 + param_1;
  if (g_worldGrid.sizeX <= local_8) {
    local_8 = g_worldGrid.sizeX + -1;
  }
  local_c = *(int *)((int)this + 0x28a) - param_1;
  if (local_c < 0) {
    local_c = 0;
  }
  local_14 = *(int *)((int)this + 0x28a) + 1 + param_1;
  if (g_worldGrid.sizeX <= local_14) {
    local_14 = g_worldGrid.sizeY + -1;
  }
  local_2a = 0;
  (*PTR_00802a38->vtable->vfunc_08)(0x10c,0,0,local_48,0);
  iVar7 = iVar5;
  if (iVar5 < local_8) {
    do {
      if ((iVar5 == iVar7) || (local_18 = 0, iVar5 == local_8 + -1)) {
        local_18 = 1;
      }
      iVar7 = local_c;
      if (local_c < local_14) {
        do {
          if (((local_18 != 0) || (iVar7 == local_c)) || (iVar7 == local_14 + -1)) {
            if (param_1 == 2) {
              iVar1 = *(int *)((int)this + 0x286) + -2;
              if (((((iVar5 == iVar1) && (iVar7 == *(int *)((int)this + 0x28a) + -2)) ||
                   ((iVar6 = *(int *)((int)this + 0x286) + 2, iVar5 == iVar6 &&
                    (iVar7 == *(int *)((int)this + 0x28a) + -2)))) ||
                  ((iVar5 == iVar1 && (iVar7 == *(int *)((int)this + 0x28a) + 2)))) ||
                 ((iVar5 == iVar6 && (iVar7 == *(int *)((int)this + 0x28a) + 2))))
              goto LAB_0063cf09;
            }
            uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar2;
            local_28 = (uVar2 >> 0x10) % 0xb;
            sVar3 = (short)iVar5 * 0xc9;
            local_2e = sVar3 + 100;
            sVar4 = (short)iVar7 * 0xc9;
            local_2c = sVar4 + 100;
            if (param_1 == 1) {
              iVar1 = *(int *)((int)this + 0x286) + -1;
              if ((iVar5 == iVar1) && (iVar7 == *(int *)((int)this + 0x28a) + -1)) {
                local_2e = sVar3 + 0x7d;
                local_2c = sVar4 + 0x7d;
              }
              iVar6 = *(int *)((int)this + 0x286) + 1;
              if ((iVar5 == iVar6) && (iVar7 == *(int *)((int)this + 0x28a) + -1)) {
                local_2e = local_2e + -0x19;
                local_2c = local_2c + 0x19;
              }
              if ((iVar5 == iVar1) && (iVar7 == *(int *)((int)this + 0x28a) + 1)) {
                local_2e = local_2e + 0x19;
                local_2c = local_2c + -0x19;
              }
              if ((iVar5 == iVar6) && (iVar7 == *(int *)((int)this + 0x28a) + 1)) {
                local_2e = local_2e + -0x19;
                local_2c = local_2c + -0x19;
              }
            }
            local_2a = 0;
            (*PTR_00802a38->vtable->vfunc_08)(0x10c,0,0,local_48,0);
          }
LAB_0063cf09:
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_14);
      }
      iVar5 = iVar5 + 1;
      iVar7 = local_10;
    } while (iVar5 < local_8);
  }
  return 1;
}

