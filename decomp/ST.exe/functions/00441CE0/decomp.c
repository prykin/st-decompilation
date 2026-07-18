
void FUN_00441ce0(char param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int iVar7;
  undefined4 *puVar8;
  void *unaff_EDI;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_e8;
  undefined4 local_e4 [16];
  undefined4 local_a4;
  undefined2 local_9e;
  undefined2 local_96;
  int local_80 [5];
  uint local_6c;
  int local_68;
  uint local_64;
  int local_60 [5];
  undefined1 local_4c [4];
  short local_48;
  short local_46;
  short local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  undefined4 *local_14;
  uint *local_10;
  uint local_c;
  int *local_8;
  
  local_24 = 4;
  local_80[0] = 0x38;
  local_80[1] = 0x39;
  local_80[2] = 0x4f;
  local_80[3] = 0x5e;
  local_e8 = DAT_00858df8;
  DAT_00858df8 = &local_e8;
  iVar3 = __setjmp3(local_e4,0,unaff_EDI,unaff_ESI);
  uVar6 = local_24;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_e8;
    iVar7 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x23c5,0,iVar3,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar3,0,0x7a6004,0x23c6);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < (int)local_24) {
    local_c = local_24;
    puVar8 = (undefined4 *)((int)&DAT_007f4e2f + param_1 * 0xa62);
    do {
      if ((byte *)*puVar8 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  local_60[3] = 0;
  local_60[2] = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_10 = (uint *)0x0;
  local_20 = param_1 * 0xa62;
  if ((&DAT_007f4e20)[local_20] != '\0') {
    if (0 < (int)uVar6) {
      puVar8 = (undefined4 *)((int)&DAT_007f4e2f + local_20);
      uVar9 = uVar6;
      do {
        puVar4 = FUN_006ae290((uint *)0x0,0,0x24,1);
        *puVar8 = puVar4;
        puVar8 = puVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_18 = *(uint *)((int)&DAT_007f4e29 + local_20);
    if ((local_18 != 0) && (local_c = *(uint *)(local_18 + 0xc), local_c != 0)) {
      local_10 = FUN_006ae290((uint *)0x0,0,4,1);
      if (0 < (int)uVar6) {
        piVar5 = local_60;
        uVar9 = uVar6;
        do {
          puVar4 = FUN_006ae290((uint *)0x0,0,4,1);
          *piVar5 = (int)puVar4;
          piVar5 = piVar5 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      if (0 < (int)local_c) {
        do {
          FUN_006acc70(local_18,uVar9,&local_8);
          if (local_8 != (int *)0x0) {
            iVar3 = (**(code **)(*local_8 + 0x2c))();
            puVar4 = local_10;
            if ((iVar3 == 0x3b) || (iVar3 == 0x60)) {
LAB_00441e92:
              FUN_006ae1c0(puVar4,&local_8);
            }
            else {
              iVar7 = 0;
              if (0 < (int)uVar6) {
                piVar5 = local_80;
                do {
                  if (iVar3 == *piVar5) {
                    iVar3 = (**(code **)(*local_8 + 0x88))(local_4c);
                    if (0 < iVar3) {
                      puVar4 = (uint *)local_60[iVar7];
                      goto LAB_00441e92;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  piVar5 = piVar5 + 1;
                } while (iVar7 < (int)uVar6);
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_c);
      }
    }
    if ((local_10 == (uint *)0x0) || (local_64 = local_10[3], local_64 == 0)) {
      local_3a = 0xffff;
      local_42 = 0xffff;
      if (0 < (int)uVar6) {
        puVar8 = (undefined4 *)((int)&DAT_007f4e2f + local_20);
        uVar9 = uVar6;
        do {
          FUN_006ae1c0((uint *)*puVar8,(undefined4 *)&local_48);
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      local_c = 0;
      if (0 < (int)local_64) {
        do {
          FUN_006acc70((int)local_10,local_c,&local_8);
          thunk_FUN_004162b0(local_8,&local_40,&local_3e,&local_3c);
          local_3a = *(undefined2 *)((int)local_8 + 0x32);
          uVar6 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
          puVar8 = DAT_007fb280;
          puVar10 = DAT_007fb238;
          for (uVar9 = (uVar6 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                       (int)local_40,(int)local_3e,(int)local_3c,-1,-1,-1);
          if (0 < (int)local_24) {
            local_1c = local_60;
            local_18 = local_24;
            local_14 = (undefined4 *)((int)&DAT_007f4e2f + local_20);
            do {
              iVar3 = *local_1c;
              local_68 = iVar3;
              if ((iVar3 == 0) || (local_80[4] = *(int *)(iVar3 + 0xc), local_80[4] == 0)) {
                if (((uint *)*local_14)[3] == 0) {
                  local_96 = 0xffff;
                  local_9e = 0xffff;
                  FUN_006ae1c0((uint *)*local_14,&local_a4);
                }
              }
              else {
                uVar6 = 0;
                if (0 < local_80[4]) {
                  do {
                    FUN_006acc70(iVar3,uVar6,&local_8);
                    thunk_FUN_004162b0(local_8,&local_48,&local_46,&local_44);
                    local_42 = *(undefined2 *)((int)local_8 + 0x32);
                    local_38 = (int)*(short *)((int)DAT_007fb238 +
                                              ((local_44 + 1) * (int)DAT_007fb27e +
                                               (int)local_46 * (int)DAT_007fb278 + (int)local_48) *
                                              2);
                    if (local_38 == 0) {
                      local_38 = 1000000;
                      local_30 = 100;
                    }
                    else {
                      bVar2 = thunk_FUN_00430750(8);
                      local_6c = (uint)bVar2;
                      local_38 = ((((local_38 * 0xc9) / 3) / (int)local_6c) * 0xc) / 10 + 800;
                      local_30 = (undefined4)(40000 / (longlong)local_38);
                      iVar3 = local_68;
                    }
                    local_34 = local_30;
                    FUN_006ae1c0((uint *)*local_14,(undefined4 *)&local_48);
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < local_80[4]);
                }
              }
              local_1c = local_1c + 1;
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            } while (local_18 != 0);
          }
          local_c = local_c + 1;
          uVar6 = local_24;
        } while ((int)local_c < (int)local_64);
      }
    }
    FUN_006ae110((byte *)local_10);
    if (0 < (int)uVar6) {
      piVar5 = local_60;
      do {
        FUN_006ae110((byte *)*piVar5);
        piVar5 = piVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  DAT_00858df8 = (undefined4 *)local_e8;
  return;
}

