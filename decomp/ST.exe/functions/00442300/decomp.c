
undefined4 FUN_00442300(uint param_1,uint param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  undefined4 local_d4;
  undefined4 local_d0 [16];
  undefined4 local_90;
  short local_8a;
  short local_82;
  int local_6c [5];
  int local_58;
  undefined1 local_54 [4];
  uint local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  short local_38;
  short local_36;
  short local_34;
  undefined2 local_32;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  uint *local_c;
  uint *local_8;
  
  local_4c = 4;
  local_6c[0] = 0x38;
  local_6c[1] = 0x39;
  local_6c[2] = 0x4f;
  local_6c[3] = 0x5e;
  local_44 = (int *)thunk_FUN_0042b620(param_1,param_2,1);
  local_58 = (**(code **)(*local_44 + 0x2c))();
  local_10 = 0;
  local_d4 = DAT_00858df8;
  DAT_00858df8 = &local_d4;
  iVar3 = __setjmp3(local_d0,0,unaff_EDI,unaff_ESI);
  iVar6 = local_4c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_d4;
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2454,0,iVar3,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      FUN_006a5e40(iVar3,0,0x7a6004,0x2455);
    }
    return local_10;
  }
  if (0 < local_4c) {
    piVar5 = (int *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62);
    iVar3 = local_4c;
    do {
      if (*piVar5 == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x23dd);
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  piVar5 = local_44;
  if ((local_58 == 0x3b) || (local_58 == 0x60)) {
    thunk_FUN_004162b0(local_44,&local_38,&local_36,&local_34);
    local_32 = *(undefined2 *)((int)piVar5 + 0x32);
    uVar8 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
    puVar10 = DAT_007fb280;
    puVar11 = DAT_007fb238;
    for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                 (int)local_38,(int)local_36,(int)local_34,-1,-1,-1);
    local_14 = 0;
    if (0 < iVar6) {
      do {
        iVar6 = local_14 * 4;
        local_c = thunk_FUN_0043e780((char)param_1,local_6c[local_14],0,-1);
        local_48 = local_c[3];
        if (local_48 != 0) {
          local_8 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iVar6);
          local_18 = 0;
          if (0 < (int)local_48) {
            do {
              FUN_006acc70((int)local_c,local_18,&local_1c);
              piVar5 = (int *)thunk_FUN_0042b620(param_1,local_1c,1);
              local_44 = piVar5;
              iVar6 = (**(code **)(*piVar5 + 0x88))(local_54);
              if (0 < iVar6) {
                thunk_FUN_004162b0(piVar5,&local_40,&local_3e,&local_3c);
                local_3a = *(undefined2 *)((int)piVar5 + 0x32);
                local_30 = (int)*(short *)((int)DAT_007fb238 +
                                          ((local_3c + 1) * (int)DAT_007fb27e +
                                           (int)local_3e * (int)DAT_007fb278 + (int)local_40) * 2);
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar2 = thunk_FUN_00430750(8);
                  local_50 = (uint)bVar2;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8[3];
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70((int)local_8,uVar9,&local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      FUN_006ae140(local_8,uVar9,(undefined4 *)&local_40);
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  FUN_006ae1c0(local_8,(undefined4 *)&local_40);
                  local_10 = 1;
                }
              }
              local_18 = local_18 + 1;
            } while ((int)local_18 < (int)local_48);
          }
        }
        FUN_006ae110((byte *)local_c);
        local_14 = local_14 + 1;
      } while (local_14 < local_4c);
    }
  }
  else {
    local_14 = 0;
    iVar3 = local_58;
    if (0 < iVar6) {
      do {
        iVar6 = local_14;
        if (iVar3 == local_6c[local_14]) {
          iVar4 = thunk_FUN_004406c0((char)param_1);
          if ((char)iVar4 == '\x03') {
            iVar4 = 0x60;
          }
          else {
            iVar4 = 0x3b;
          }
          local_c = thunk_FUN_0043e780((char)param_1,iVar4,0,-1);
          piVar5 = local_44;
          local_48 = local_c[3];
          if (local_48 != 0) {
            thunk_FUN_004162b0(local_44,&local_40,&local_3e,&local_3c);
            local_3a = *(undefined2 *)((int)piVar5 + 0x32);
            uVar8 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
            puVar10 = DAT_007fb280;
            puVar11 = DAT_007fb238;
            for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                         (int)local_40,(int)local_3e,(int)local_3c,-1,-1,-1);
            local_18 = 0;
            local_8 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + local_14 * 4);
            iVar6 = local_14;
            iVar3 = local_58;
            if (0 < (int)local_48) {
              do {
                FUN_006acc70((int)local_c,local_18,&local_1c);
                piVar5 = (int *)thunk_FUN_0042b620(param_1,local_1c,1);
                local_44 = piVar5;
                thunk_FUN_004162b0(piVar5,&local_38,&local_36,&local_34);
                local_32 = *(undefined2 *)((int)piVar5 + 0x32);
                local_30 = (int)*(short *)((int)DAT_007fb238 +
                                          ((local_34 + 1) * (int)DAT_007fb27e +
                                           (int)DAT_007fb278 * (int)local_36 + (int)local_38) * 2);
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar2 = thunk_FUN_00430750(8);
                  local_50 = (uint)bVar2;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8[3];
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70((int)local_8,uVar9,&local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      FUN_006ae140(local_8,uVar9,(undefined4 *)&local_40);
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  FUN_006ae1c0(local_8,(undefined4 *)&local_40);
                  local_10 = 1;
                }
                local_18 = local_18 + 1;
                iVar6 = local_14;
                iVar3 = local_58;
              } while ((int)local_18 < (int)local_48);
            }
          }
          FUN_006ae110((byte *)local_c);
        }
        local_14 = iVar6 + 1;
        if (local_4c <= iVar6 + 1) {
          DAT_00858df8 = (undefined4 *)local_d4;
          return local_10;
        }
      } while( true );
    }
  }
  DAT_00858df8 = (undefined4 *)local_d4;
  return local_10;
}

