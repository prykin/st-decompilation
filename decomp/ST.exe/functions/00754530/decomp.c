
int FUN_00754530(int param_1,uint *param_2,int param_3,uint param_4,undefined4 param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  bool bVar7;
  undefined4 local_258;
  undefined4 local_254 [16];
  uint local_214;
  ushort *local_210;
  uint local_20c;
  int local_208;
  int local_204;
  undefined4 *local_200 [3];
  uint local_1f4;
  uint local_1ec;
  uint local_1e8;
  uint *local_1e0;
  int local_1dc [9];
  int local_1b8;
  int local_174;
  uint local_170;
  int local_168;
  uint local_160;
  int *local_15c;
  uint local_158;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_007a1e78;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffd8c;
  local_1e8 = 0;
  local_1e0 = (uint *)0x0;
  local_204 = 0;
  local_1ec = (uint)(*(ushort *)(param_1 + 0xe) >> 3);
  ExceptionList = &local_14;
  FUN_00756200(local_1dc,0x3d,0x1be);
  local_258 = DAT_00858df8;
  DAT_00858df8 = &local_258;
  uVar1 = __setjmp3(local_254,2,FUN_0072da21,local_8);
  local_1c = &stack0xfffffd8c;
  puVar4 = &stack0xfffffd8c;
  if (uVar1 == 0) {
    FUN_00757280(local_1dc,param_5);
    FUN_00756340(local_1dc,1);
    FUN_00754af0((int)local_1dc,param_1,param_6);
    FUN_00756b20((int)local_1dc);
    uVar1 = local_168 * local_174;
    local_214 = uVar1;
    if (param_3 == 0) {
      local_1f4 = uVar1;
      if (local_1ec == 1) {
        uVar1 = *(uint *)(param_1 + 0x20);
        if (uVar1 == 0) {
          uVar1 = 0x100;
        }
        if (param_2 != (uint *)0x0) {
          local_15c = (int *)(**(code **)(local_1dc[0] + 8))(local_1dc,1,0x100,3);
          iVar2 = 0;
          local_160 = uVar1;
          if (0 < (int)uVar1) {
            puVar4 = (undefined1 *)((int)param_2 + 1);
            do {
              *(undefined1 *)(local_15c[2] + iVar2) = puVar4[1];
              *(undefined1 *)(local_15c[1] + iVar2) = *puVar4;
              *(undefined1 *)(*local_15c + iVar2) = puVar4[-1];
              iVar2 = iVar2 + 1;
              puVar4 = puVar4 + 4;
            } while (iVar2 < (int)uVar1);
          }
        }
        local_204 = FUN_006b50c0(local_174,local_170,8,uVar1,param_2,1);
        uVar1 = local_214;
      }
      else {
        uVar3 = 3;
        if (*(int *)(param_1 + 0x10) == 3) {
          local_1e0 = param_2;
        }
        else {
          uVar3 = (local_1ec != 2) - 1 & 3;
        }
        local_204 = FUN_006b50c0(local_174,local_170,(uint)*(ushort *)(param_1 + 0xe),uVar3,
                                 local_1e0,1);
      }
      iVar2 = FUN_006b4fa0(local_204);
      param_4 = (uint)*(ushort *)(local_204 + 0xe) * *(int *)(local_204 + 4) + 0x1f >> 3 &
                0x1ffffffc;
      local_20c = local_170;
    }
    else {
      local_204 = param_1;
      local_1f4 = *(int *)(param_1 + 4) * local_1ec;
      local_20c = (int)*(uint *)(param_1 + 8) >> 0x1f;
      local_20c = (*(uint *)(param_1 + 8) ^ local_20c) - local_20c;
      iVar2 = param_3;
    }
    if (0 < *(int *)(local_204 + 8)) {
      local_210 = (ushort *)
                  (((param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f)) * (local_20c - 1) +
                  iVar2);
    }
    FUN_00756720(local_1dc);
    bVar7 = (int)local_1f4 < (int)uVar1;
    if (!bVar7) {
      local_1f4 = uVar1;
    }
    if (((local_1ec == 1) || (local_1ec == 3)) &&
       ((local_1ec != 3 || (*(int *)(local_204 + 0x10) != 3)))) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    local_208 = iVar2;
    if ((bVar7) || (iVar2 != 0)) {
      local_8 = 0;
      FUN_0072da40();
      local_8 = 0xffffffff;
      if (iVar2 == 0) {
        local_200[0] = (undefined4 *)&stack0xfffffd8c;
        puVar5 = (undefined4 *)&stack0xfffffd8c;
        local_1c = &stack0xfffffd8c;
        puVar4 = &stack0xfffffd8c;
        if (local_158 < local_170) {
          do {
            local_1c = puVar4;
            local_200[0] = puVar5;
            uVar1 = local_20c - 1;
            bVar7 = local_20c == 0;
            local_20c = uVar1;
            if (bVar7) break;
            FUN_007568d0((int)local_1dc,local_200,1);
            puVar5 = local_200[0];
            puVar6 = local_210;
            for (uVar1 = local_1f4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
              *(undefined4 *)puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 2;
            }
            for (uVar1 = local_1f4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar6 = (ushort *)((int)puVar6 + 1);
            }
            local_210 = (ushort *)((int)local_210 - param_4);
            puVar5 = local_200[0];
            puVar4 = local_1c;
          } while (local_158 < local_170);
        }
      }
      else if (local_1ec == 2) {
        local_200[0] = (undefined4 *)&stack0xfffffd8c;
        local_1c = &stack0xfffffd8c;
        FUN_00754b80((int)local_1dc,local_210,param_4,(int *)local_200,local_1f4,local_20c,local_1e0
                    );
      }
      else {
        local_200[0] = (undefined4 *)&stack0xfffffd8c;
        local_1c = &stack0xfffffd8c;
        FUN_006a5e40(-0x30,DAT_007ed77c,0x7f2cb8,0x109);
      }
    }
    else if (local_158 < local_170) {
      do {
        uVar1 = local_20c - 1;
        bVar7 = local_20c == 0;
        local_20c = uVar1;
        if (bVar7) break;
        FUN_007568d0((int)local_1dc,&local_210,1);
        local_210 = (ushort *)((int)local_210 - param_4);
      } while (local_158 < local_170);
    }
    if (local_1ec == 1) {
      if (local_1b8 == 1) {
        iVar2 = 0;
        if (0 < (int)local_160) {
          do {
            *(undefined1 *)(local_204 + 0x28 + iVar2 * 4) = *(undefined1 *)(local_15c[2] + iVar2);
            *(undefined1 *)(local_204 + 0x29 + iVar2 * 4) =
                 *(undefined1 *)(local_204 + 0x28 + iVar2 * 4);
            *(undefined1 *)(local_204 + 0x2a + iVar2 * 4) =
                 *(undefined1 *)(local_204 + 0x29 + iVar2 * 4);
            *(undefined1 *)(local_204 + 0x2b + iVar2 * 4) = 0;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)local_160);
        }
      }
      else {
        iVar2 = 0;
        if (0 < (int)local_160) {
          do {
            *(undefined1 *)(local_204 + 0x2a + iVar2 * 4) = *(undefined1 *)(local_15c[2] + iVar2);
            *(undefined1 *)(local_204 + 0x29 + iVar2 * 4) = *(undefined1 *)(local_15c[1] + iVar2);
            *(undefined1 *)(local_204 + 0x28 + iVar2 * 4) = *(undefined1 *)(*local_15c + iVar2);
            *(undefined1 *)(local_204 + 0x2b + iVar2 * 4) = 0;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)local_160);
        }
      }
    }
    FUN_00756650(local_1dc);
    uVar1 = local_1e8;
    puVar4 = local_1c;
  }
  local_1c = puVar4;
  local_1e8 = uVar1;
  uVar1 = local_1e8;
  DAT_00858df8 = (undefined4 *)local_258;
  if ((local_1e8 != 0) && (param_3 == 0)) {
    FUN_006ab060(&local_204);
  }
  FUN_007562c0(local_1dc);
  if (uVar1 != 0) {
    FUN_006a5e40(uVar1 | 0x8fff0000,DAT_007ed77c,0x7f2cb8,0x136);
    local_204 = 0;
  }
  ExceptionList = local_14;
  return local_204;
}

