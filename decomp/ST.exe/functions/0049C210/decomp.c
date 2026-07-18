
undefined4 FUN_0049c210(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  void *this;
  undefined3 extraout_var;
  short *psVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar10;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 unaff_ESI;
  uint uVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  uint uVar13;
  short *psVar14;
  char cVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  undefined4 local_100 [17];
  undefined4 local_bc;
  undefined4 local_b8 [16];
  short local_78 [3];
  int local_72;
  short local_6e;
  short local_6c;
  short local_6a;
  int local_68;
  int local_3e;
  int local_34 [6];
  int local_1c;
  undefined1 local_18 [4];
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_bc = DAT_00858df8;
  DAT_00858df8 = &local_bc;
  iVar3 = __setjmp3(local_b8,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_bc;
    if (iVar3 == -0x5001fff7) {
      if (*(byte **)(local_34[5] + 0x10f) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_34[5] + 0x10f));
        *(undefined4 *)(local_34[5] + 0x10f) = 0;
      }
      if (*(byte **)(local_34[5] + 0x127) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_34[5] + 0x127));
        *(undefined4 *)(local_34[5] + 0x127) = 0;
      }
      if (*(byte **)(local_34[5] + 0x24e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_34[5] + 0x24e));
        *(undefined4 *)(local_34[5] + 0x24e) = 0;
      }
      if (*(byte **)(local_34[5] + 0x266) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_34[5] + 0x266));
        *(undefined4 *)(local_34[5] + 0x266) = 0;
      }
      return 0;
    }
    iVar9 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x8ee,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7abe3c,0x8ef);
      return local_34[4];
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar12 = (undefined4 *)(local_34[5] + 0x89);
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)(local_34[5] + 0x65) = 0;
    if (*(byte **)(local_34[5] + 0x24e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_34[5] + 0x24e));
    }
    if (*(byte **)(local_34[5] + 0x266) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_34[5] + 0x266));
    }
    piVar5 = (int *)(local_34[5] + 0x10b);
    piVar10 = (int *)(local_34[5] + 0x24a);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar10 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar10 = piVar10 + 1;
    }
    *(undefined4 *)(local_34[5] + 0x24e) = 0;
    *(undefined4 *)(local_34[5] + 0x266) = 0;
    if (*(int *)(local_34[5] + 0x10b) == 0) {
      if ((*(int *)(local_34[5] + 0x10f) == 0) ||
         (local_c = *(uint *)(*(int *)(local_34[5] + 0x10f) + 0xc), local_c == 0)) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x81d);
      }
      puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
      *(uint **)(local_34[5] + 0x24e) = puVar4;
      uVar13 = 0;
      if (0 < (int)local_c) {
        do {
          FUN_006acc70(*(int *)(local_34[5] + 0x10f),uVar13,&local_8);
          if (((short)local_8 != -1) &&
             (piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                          *(undefined1 *)(local_34[5] + 0x24)),
                                                 local_8,1), piVar5 != (int *)0x0)) {
            iVar3 = (**(code **)(*piVar5 + 0x2c))();
            iVar9 = 0;
            if (0 < local_14) {
              piVar10 = local_34;
              do {
                if (iVar3 == *piVar10) break;
                iVar9 = iVar9 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar9 < local_14);
            }
            if (((iVar9 != local_14) && (iVar3 == *(int *)(local_34[5] + 0x25e))) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(local_18), 0 < iVar3)) {
              FUN_006ae1c0(*(uint **)(local_34[5] + 0x24e),&local_8);
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_c);
      }
      FUN_006ae110(*(byte **)(local_34[5] + 0x10f));
      *(undefined4 *)(local_34[5] + 0x10f) = 0;
      if (*(int *)(*(int *)(local_34[5] + 0x24e) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x834);
      }
    }
    else {
      puVar4 = thunk_FUN_0043ec20(*(char *)(local_34[5] + 0x24),*(int *)(local_34[5] + 0x25e),
                                  *(short *)(local_34[5] + 0x252),*(short *)(local_34[5] + 0x254),
                                  *(short *)(local_34[5] + 0x256),*(short *)(local_34[5] + 600),
                                  *(short *)(local_34[5] + 0x25a),*(short *)(local_34[5] + 0x25c),1,
                                  -1);
      if (puVar4 == (uint *)0x0) {
        puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(local_34[5] + 0x24e) = puVar4;
        local_8 = 0xffff;
        FUN_006ae1c0(puVar4,&local_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(local_34[5] + 0x24e) = puVar6;
        local_c = puVar4[3];
        uVar13 = 0;
        if (0 < (int)local_c) {
          do {
            FUN_006acc70((int)puVar4,uVar13,&local_8);
            piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                        *(undefined1 *)(local_34[5] + 0x24)),local_8
                                               ,1);
            if ((piVar5 != (int *)0x0) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(local_18), 0 < iVar3)) {
              FUN_006ae1c0(*(uint **)(local_34[5] + 0x24e),&local_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_c);
        }
        if ((*(uint **)(local_34[5] + 0x24e))[3] == 0) {
          local_8 = 0xffff;
          FUN_006ae1c0(*(uint **)(local_34[5] + 0x24e),&local_8);
        }
        FUN_006ae110((byte *)puVar4);
      }
    }
    if (*(int *)(local_34[5] + 0x262) == 0) {
      if ((*(int *)(local_34[5] + 0x127) == 0) ||
         (uVar13 = *(uint *)(*(int *)(local_34[5] + 0x127) + 0xc), local_c = uVar13, uVar13 == 0)) {
        uVar13 = local_c;
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x855);
      }
      puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
      uVar11 = 0;
      *(uint **)(local_34[5] + 0x266) = puVar4;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70(*(int *)(local_34[5] + 0x127),uVar11,&local_8);
          if ((((short)local_8 != -1) &&
              (piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                           *(undefined1 *)(local_34[5] + 0x24)),
                                                  local_8,1), piVar5 != (int *)0x0)) &&
             ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3b || (iVar3 == 0x60)))) {
            FUN_006ae1c0(*(uint **)(local_34[5] + 0x266),&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar13);
      }
      FUN_006ae110(*(byte **)(local_34[5] + 0x127));
      *(undefined4 *)(local_34[5] + 0x127) = 0;
      if (*(int *)(*(int *)(local_34[5] + 0x266) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x866);
      }
    }
    if (*(int *)(local_34[5] + 0x262) == 2) {
      iVar3 = thunk_FUN_004406c0(*(char *)(local_34[5] + 0x24));
      if ((char)iVar3 == '\x03') {
        sVar21 = *(short *)(local_34[5] + 0x274);
        sVar20 = *(short *)(local_34[5] + 0x272);
        sVar19 = *(short *)(local_34[5] + 0x270);
        sVar18 = *(short *)(local_34[5] + 0x26e);
        sVar17 = *(short *)(local_34[5] + 0x26c);
        sVar16 = *(short *)(local_34[5] + 0x26a);
        cVar15 = *(char *)(local_34[5] + 0x24);
        iVar3 = 0x60;
      }
      else {
        sVar21 = *(short *)(local_34[5] + 0x274);
        sVar20 = *(short *)(local_34[5] + 0x272);
        sVar19 = *(short *)(local_34[5] + 0x270);
        sVar18 = *(short *)(local_34[5] + 0x26e);
        sVar17 = *(short *)(local_34[5] + 0x26c);
        sVar16 = *(short *)(local_34[5] + 0x26a);
        cVar15 = *(char *)(local_34[5] + 0x24);
        iVar3 = 0x3b;
      }
      puVar4 = thunk_FUN_0043ec20(cVar15,iVar3,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,0,-1);
      if (puVar4 == (uint *)0x0) {
        puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(local_34[5] + 0x266) = puVar4;
        local_8 = 0xffff;
        FUN_006ae1c0(puVar4,&local_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(local_34[5] + 0x266) = puVar6;
        local_c = puVar4[3];
        uVar13 = 0;
        if (0 < (int)local_c) {
          do {
            FUN_006acc70((int)puVar4,uVar13,&local_8);
            uVar11 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                                 *(undefined1 *)(local_34[5] + 0x24)),local_8,1);
            if (uVar11 != 0) {
              FUN_006ae1c0(*(uint **)(local_34[5] + 0x266),&local_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_c);
        }
        FUN_006ae110((byte *)puVar4);
      }
    }
    if (*(int *)(local_34[5] + 0x262) == 1) {
      iVar3 = thunk_FUN_004406c0(*(char *)(local_34[5] + 0x24));
      if ((char)iVar3 == '\x03') {
        cVar15 = *(char *)(local_34[5] + 0x24);
        iVar3 = 0x60;
      }
      else {
        cVar15 = *(char *)(local_34[5] + 0x24);
        iVar3 = 0x3b;
      }
      puVar4 = thunk_FUN_0043e780(cVar15,iVar3,0,-1);
      if (puVar4[3] == 0) {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(local_34[5] + 0x266) = puVar6;
        local_8 = 0xffff;
        FUN_006ae1c0(puVar6,&local_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(local_34[5] + 0x266) = puVar6;
        local_c = puVar4[3];
        uVar13 = 0;
        if (0 < (int)local_c) {
          do {
            FUN_006acc70((int)puVar4,uVar13,&local_8);
            uVar11 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_02 >> 8),
                                                 *(undefined1 *)(local_34[5] + 0x24)),local_8,1);
            if (uVar11 != 0) {
              FUN_006ae1c0(*(uint **)(local_34[5] + 0x266),&local_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_c);
        }
      }
      FUN_006ae110((byte *)puVar4);
    }
    thunk_FUN_004a3430(1,*(int *)(local_34[5] + 0x24e),*(int *)(local_34[5] + 0x266),
                       *(int *)(local_34[5] + 0x29));
  }
  local_34[4] = 2;
  if ((*(uint *)(DAT_00802a38 + 0xe4) % 100 == 0) &&
     ((*(int *)(local_34[5] + 0x24a) == 0 || (*(int *)(local_34[5] + 0x262) == 0)))) {
    local_10 = 0;
    local_c = *(uint *)(*(int *)(local_34[5] + 0x29) + 0xc);
    if (0 < (int)local_c) {
      do {
        FUN_006acc70(*(int *)(local_34[5] + 0x29),local_10,&local_8);
        this = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                   *(undefined1 *)(local_34[5] + 0x24)),local_8,1);
        if ((this != (void *)0x0) && (iVar3 = thunk_FUN_0045ff10((int)this), iVar3 == 0xc)) {
          bVar2 = thunk_FUN_0048d440((int)this);
          local_1c = CONCAT31(extraout_var,bVar2);
          if (local_1c != 0) {
            psVar7 = (short *)thunk_FUN_0048dc90(this,local_100);
            psVar14 = local_78;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)psVar14 = *(undefined4 *)psVar7;
              psVar7 = psVar7 + 2;
              psVar14 = psVar14 + 2;
            }
            *psVar14 = *psVar7;
            if ((local_3e == 6) || (local_3e == 0xe)) break;
            if (local_1c == 1) {
              if (local_72 != -1) {
                if ((((local_78[0] < 0) || (DAT_007fb240 <= local_78[0])) || (local_78[1] < 0)) ||
                   (((DAT_007fb242 <= local_78[1] || (local_78[2] < 0)) ||
                    (DAT_007fb244 <= local_78[2])))) {
                  piVar5 = (int *)0x0;
                }
                else {
                  piVar5 = *(int **)(DAT_007fb248 +
                                    ((int)local_78[2] * (int)DAT_007fb246 +
                                     (int)local_78[1] * (int)DAT_007fb240 + (int)local_78[0]) * 8);
                }
                if (((piVar5 != (int *)0x0) && (piVar5[6] == local_72)) &&
                   (iVar3 = (**(code **)(*piVar5 + 0x88))(&local_1c), 0 < iVar3)) break;
              }
            }
            else if (local_68 != -1) {
              if (((((local_6e < 0) || (DAT_007fb240 <= local_6e)) || (local_6c < 0)) ||
                  ((DAT_007fb242 <= local_6c || (local_6a < 0)))) || (DAT_007fb244 <= local_6a)) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(DAT_007fb248 +
                                ((int)local_6a * (int)DAT_007fb246 +
                                 (int)local_6c * (int)DAT_007fb240 + (int)local_6e) * 8);
              }
              if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == local_68)) break;
            }
          }
        }
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)local_c);
    }
    if (local_10 == local_c) {
      local_34[4] = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_bc;
  return local_34[4];
}

