
undefined4 FUN_00442b40(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  int *this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  int local_2c [4];
  short local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  short local_8;
  short local_6;
  
  local_2c[0] = 0x38;
  local_2c[1] = 0x39;
  local_2c[2] = 0x4f;
  local_2c[3] = 0x5e;
  this = (int *)thunk_FUN_0042b620((uint)param_1,param_2,1);
  local_14 = this;
  uVar4 = (**(code **)(*this + 0x2c))();
  local_c = 0;
  local_18 = uVar4;
  if (this == (int *)0x0) {
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x246d,0,0,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x246e);
  }
  if ((uVar4 != 0x3b) && (uVar4 != 0x60)) {
    local_10 = 0;
    do {
      if (uVar4 == *(int *)((int)local_2c + local_10)) {
        puVar2 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + local_10);
        uVar1 = (ushort)puVar2[3];
        if (uVar1 != 0) {
          thunk_FUN_004162b0(this,(undefined2 *)((int)&param_2 + 2),&local_6,&local_8);
          uVar4 = 0;
          local_1c = *(short *)((int)this + 0x32);
          this = local_14;
          if (uVar1 != 0) {
            do {
              FUN_006acc70((int)puVar2,uVar4,(undefined4 *)&local_50);
              if ((((local_4a != -1) && (local_42 != -1)) && (local_50 == param_2._2_2_)) &&
                 (((local_4e == local_6 && (local_4c == local_8)) && (local_4a == local_1c)))) {
                local_42 = -1;
                local_4a = -1;
                FUN_006ae140(puVar2,uVar4,(undefined4 *)&local_50);
                local_c = 1;
              }
              uVar4 = uVar4 + 1;
              this = local_14;
            } while ((int)uVar4 < (int)(uint)uVar1);
          }
        }
      }
      local_10 = local_10 + 4;
      uVar4 = local_18;
    } while (local_10 < 0x10);
    return local_c;
  }
  thunk_FUN_004162b0(this,(undefined2 *)((int)&param_2 + 2),&local_6,&local_8);
  local_1c = *(short *)((int)this + 0x32);
  local_14 = (int *)0x4;
  param_1 = (undefined4 *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62);
  do {
    puVar2 = (uint *)*param_1;
    if ((puVar2 != (uint *)0x0) && (uVar1 = (ushort)puVar2[3], uVar1 != 0)) {
      uVar4 = 0;
      local_18 = (uint)uVar1;
      if (uVar1 != 0) {
        do {
          FUN_006acc70((int)puVar2,uVar4,(undefined4 *)&local_50);
          if (((((local_4a != -1) && (local_42 != -1)) && (local_48 == param_2._2_2_)) &&
              ((local_46 == local_6 && (local_44 == local_8)))) && (local_42 == local_1c)) {
            local_42 = -1;
            local_4a = -1;
            FUN_006ae140(puVar2,uVar4,(undefined4 *)&local_50);
            local_c = 1;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)local_18);
      }
    }
    param_1 = param_1 + 1;
    local_14 = (int *)((int)local_14 + -1);
  } while (local_14 != (int *)0x0);
  return local_c;
}

