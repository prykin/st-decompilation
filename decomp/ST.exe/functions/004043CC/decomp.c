
undefined4 __thiscall thunk_FUN_0063cc50(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 auStack_48 [5];
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  short sStack_2e;
  short sStack_2c;
  undefined2 uStack_2a;
  uint uStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  puVar8 = auStack_48;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  uStack_34 = *(undefined2 *)((int)this + 0x266);
  auStack_48[3] = 1;
  auStack_48[2] = 1;
  auStack_48[1] = *(undefined4 *)((int)this + 0x235);
  uStack_32 = *(undefined2 *)((int)this + 0x26a);
  uStack_30 = *(undefined2 *)((int)this + 0x26e);
  auStack_48[0] = 0x6e;
  if (3 < param_1) {
    return 0;
  }
  sStack_2e = uStack_34;
  sStack_2c = uStack_32;
  if (param_1 == 0) {
    uStack_2a = 0;
    (**(code **)(*DAT_00802a38 + 8))(0x10c,0,0,auStack_48,0);
    return 1;
  }
  iStack_10 = *(int *)((int)this + 0x286) - param_1;
  if (iStack_10 < 0) {
    iStack_10 = 0;
  }
  iVar5 = iStack_10;
  iStack_8 = *(int *)((int)this + 0x286) + 1 + param_1;
  if (DAT_007fb240 <= iStack_8) {
    iStack_8 = DAT_007fb240 + -1;
  }
  iStack_c = *(int *)((int)this + 0x28a) - param_1;
  if (iStack_c < 0) {
    iStack_c = 0;
  }
  iStack_14 = *(int *)((int)this + 0x28a) + 1 + param_1;
  if (DAT_007fb240 <= iStack_14) {
    iStack_14 = DAT_007fb242 + -1;
  }
  uStack_2a = 0;
  (**(code **)(*DAT_00802a38 + 8))(0x10c,0,0,auStack_48,0);
  iVar7 = iVar5;
  if (iVar5 < iStack_8) {
    do {
      if ((iVar5 == iVar7) || (iStack_18 = 0, iVar5 == iStack_8 + -1)) {
        iStack_18 = 1;
      }
      iVar7 = iStack_c;
      if (iStack_c < iStack_14) {
        do {
          if (((iStack_18 != 0) || (iVar7 == iStack_c)) || (iVar7 == iStack_14 + -1)) {
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
            uStack_28 = (uVar2 >> 0x10) % 0xb;
            sVar3 = (short)iVar5 * 0xc9;
            sStack_2e = sVar3 + 100;
            sVar4 = (short)iVar7 * 0xc9;
            sStack_2c = sVar4 + 100;
            if (param_1 == 1) {
              iVar1 = *(int *)((int)this + 0x286) + -1;
              if ((iVar5 == iVar1) && (iVar7 == *(int *)((int)this + 0x28a) + -1)) {
                sStack_2e = sVar3 + 0x7d;
                sStack_2c = sVar4 + 0x7d;
              }
              iVar6 = *(int *)((int)this + 0x286) + 1;
              if ((iVar5 == iVar6) && (iVar7 == *(int *)((int)this + 0x28a) + -1)) {
                sStack_2e = sStack_2e + -0x19;
                sStack_2c = sStack_2c + 0x19;
              }
              if ((iVar5 == iVar1) && (iVar7 == *(int *)((int)this + 0x28a) + 1)) {
                sStack_2e = sStack_2e + 0x19;
                sStack_2c = sStack_2c + -0x19;
              }
              if ((iVar5 == iVar6) && (iVar7 == *(int *)((int)this + 0x28a) + 1)) {
                sStack_2e = sStack_2e + -0x19;
                sStack_2c = sStack_2c + -0x19;
              }
            }
            uStack_2a = 0;
            (**(code **)(*DAT_00802a38 + 8))(0x10c,0,0,auStack_48,0);
          }
LAB_0063cf09:
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_14);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iStack_10;
    } while (iVar5 < iStack_8);
  }
  return 1;
}

