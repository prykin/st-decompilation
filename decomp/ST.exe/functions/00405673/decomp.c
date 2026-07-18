
undefined4 thunk_FUN_0049c210(int param_1)

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
  undefined4 auStack_100 [17];
  undefined4 uStack_bc;
  undefined4 auStack_b8 [16];
  short asStack_78 [3];
  int iStack_72;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  int iStack_68;
  int iStack_3e;
  int aiStack_34 [6];
  int iStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iStack_14 = 4;
  aiStack_34[0] = 0x38;
  aiStack_34[1] = 0x39;
  aiStack_34[2] = 0x4f;
  aiStack_34[3] = 0x5e;
  uStack_bc = DAT_00858df8;
  DAT_00858df8 = &uStack_bc;
  iVar3 = __setjmp3(auStack_b8,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_bc;
    if (iVar3 == -0x5001fff7) {
      if (*(byte **)(aiStack_34[5] + 0x10f) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(aiStack_34[5] + 0x10f));
        *(undefined4 *)(aiStack_34[5] + 0x10f) = 0;
      }
      if (*(byte **)(aiStack_34[5] + 0x127) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(aiStack_34[5] + 0x127));
        *(undefined4 *)(aiStack_34[5] + 0x127) = 0;
      }
      if (*(byte **)(aiStack_34[5] + 0x24e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(aiStack_34[5] + 0x24e));
        *(undefined4 *)(aiStack_34[5] + 0x24e) = 0;
      }
      if (*(byte **)(aiStack_34[5] + 0x266) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(aiStack_34[5] + 0x266));
        *(undefined4 *)(aiStack_34[5] + 0x266) = 0;
      }
      return 0;
    }
    iVar9 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x8ee,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7abe3c,0x8ef);
      return aiStack_34[4];
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar12 = (undefined4 *)(aiStack_34[5] + 0x89);
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)(aiStack_34[5] + 0x65) = 0;
    if (*(byte **)(aiStack_34[5] + 0x24e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(aiStack_34[5] + 0x24e));
    }
    if (*(byte **)(aiStack_34[5] + 0x266) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(aiStack_34[5] + 0x266));
    }
    piVar5 = (int *)(aiStack_34[5] + 0x10b);
    piVar10 = (int *)(aiStack_34[5] + 0x24a);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar10 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar10 = piVar10 + 1;
    }
    *(undefined4 *)(aiStack_34[5] + 0x24e) = 0;
    *(undefined4 *)(aiStack_34[5] + 0x266) = 0;
    if (*(int *)(aiStack_34[5] + 0x10b) == 0) {
      if ((*(int *)(aiStack_34[5] + 0x10f) == 0) ||
         (uStack_c = *(uint *)(*(int *)(aiStack_34[5] + 0x10f) + 0xc), uStack_c == 0)) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x81d);
      }
      puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
      *(uint **)(aiStack_34[5] + 0x24e) = puVar4;
      uVar13 = 0;
      if (0 < (int)uStack_c) {
        do {
          FUN_006acc70(*(int *)(aiStack_34[5] + 0x10f),uVar13,&uStack_8);
          if (((short)uStack_8 != -1) &&
             (piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                          *(undefined1 *)(aiStack_34[5] + 0x24)),
                                                 uStack_8,1), piVar5 != (int *)0x0)) {
            iVar3 = (**(code **)(*piVar5 + 0x2c))();
            iVar9 = 0;
            if (0 < iStack_14) {
              piVar10 = aiStack_34;
              do {
                if (iVar3 == *piVar10) break;
                iVar9 = iVar9 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar9 < iStack_14);
            }
            if (((iVar9 != iStack_14) && (iVar3 == *(int *)(aiStack_34[5] + 0x25e))) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(auStack_18), 0 < iVar3)) {
              FUN_006ae1c0(*(uint **)(aiStack_34[5] + 0x24e),&uStack_8);
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uStack_c);
      }
      FUN_006ae110(*(byte **)(aiStack_34[5] + 0x10f));
      *(undefined4 *)(aiStack_34[5] + 0x10f) = 0;
      if (*(int *)(*(int *)(aiStack_34[5] + 0x24e) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x834);
      }
    }
    else {
      puVar4 = thunk_FUN_0043ec20(*(char *)(aiStack_34[5] + 0x24),*(int *)(aiStack_34[5] + 0x25e),
                                  *(short *)(aiStack_34[5] + 0x252),
                                  *(short *)(aiStack_34[5] + 0x254),
                                  *(short *)(aiStack_34[5] + 0x256),*(short *)(aiStack_34[5] + 600),
                                  *(short *)(aiStack_34[5] + 0x25a),
                                  *(short *)(aiStack_34[5] + 0x25c),1,-1);
      if (puVar4 == (uint *)0x0) {
        puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(aiStack_34[5] + 0x24e) = puVar4;
        uStack_8 = 0xffff;
        FUN_006ae1c0(puVar4,&uStack_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(aiStack_34[5] + 0x24e) = puVar6;
        uStack_c = puVar4[3];
        uVar13 = 0;
        if (0 < (int)uStack_c) {
          do {
            FUN_006acc70((int)puVar4,uVar13,&uStack_8);
            piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                        *(undefined1 *)(aiStack_34[5] + 0x24)),
                                               uStack_8,1);
            if ((piVar5 != (int *)0x0) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(auStack_18), 0 < iVar3)) {
              FUN_006ae1c0(*(uint **)(aiStack_34[5] + 0x24e),&uStack_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uStack_c);
        }
        if ((*(uint **)(aiStack_34[5] + 0x24e))[3] == 0) {
          uStack_8 = 0xffff;
          FUN_006ae1c0(*(uint **)(aiStack_34[5] + 0x24e),&uStack_8);
        }
        FUN_006ae110((byte *)puVar4);
      }
    }
    if (*(int *)(aiStack_34[5] + 0x262) == 0) {
      if ((*(int *)(aiStack_34[5] + 0x127) == 0) ||
         (uVar13 = *(uint *)(*(int *)(aiStack_34[5] + 0x127) + 0xc), uStack_c = uVar13, uVar13 == 0)
         ) {
        uVar13 = uStack_c;
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x855);
      }
      puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
      uVar11 = 0;
      *(uint **)(aiStack_34[5] + 0x266) = puVar4;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70(*(int *)(aiStack_34[5] + 0x127),uVar11,&uStack_8);
          if ((((short)uStack_8 != -1) &&
              (piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                           *(undefined1 *)(aiStack_34[5] + 0x24)),
                                                  uStack_8,1), piVar5 != (int *)0x0)) &&
             ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3b || (iVar3 == 0x60)))) {
            FUN_006ae1c0(*(uint **)(aiStack_34[5] + 0x266),&uStack_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar13);
      }
      FUN_006ae110(*(byte **)(aiStack_34[5] + 0x127));
      *(undefined4 *)(aiStack_34[5] + 0x127) = 0;
      if (*(int *)(*(int *)(aiStack_34[5] + 0x266) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x866);
      }
    }
    if (*(int *)(aiStack_34[5] + 0x262) == 2) {
      iVar3 = thunk_FUN_004406c0(*(char *)(aiStack_34[5] + 0x24));
      if ((char)iVar3 == '\x03') {
        sVar21 = *(short *)(aiStack_34[5] + 0x274);
        sVar20 = *(short *)(aiStack_34[5] + 0x272);
        sVar19 = *(short *)(aiStack_34[5] + 0x270);
        sVar18 = *(short *)(aiStack_34[5] + 0x26e);
        sVar17 = *(short *)(aiStack_34[5] + 0x26c);
        sVar16 = *(short *)(aiStack_34[5] + 0x26a);
        cVar15 = *(char *)(aiStack_34[5] + 0x24);
        iVar3 = 0x60;
      }
      else {
        sVar21 = *(short *)(aiStack_34[5] + 0x274);
        sVar20 = *(short *)(aiStack_34[5] + 0x272);
        sVar19 = *(short *)(aiStack_34[5] + 0x270);
        sVar18 = *(short *)(aiStack_34[5] + 0x26e);
        sVar17 = *(short *)(aiStack_34[5] + 0x26c);
        sVar16 = *(short *)(aiStack_34[5] + 0x26a);
        cVar15 = *(char *)(aiStack_34[5] + 0x24);
        iVar3 = 0x3b;
      }
      puVar4 = thunk_FUN_0043ec20(cVar15,iVar3,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,0,-1);
      if (puVar4 == (uint *)0x0) {
        puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(aiStack_34[5] + 0x266) = puVar4;
        uStack_8 = 0xffff;
        FUN_006ae1c0(puVar4,&uStack_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(aiStack_34[5] + 0x266) = puVar6;
        uStack_c = puVar4[3];
        uVar13 = 0;
        if (0 < (int)uStack_c) {
          do {
            FUN_006acc70((int)puVar4,uVar13,&uStack_8);
            uVar11 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                                 *(undefined1 *)(aiStack_34[5] + 0x24)),uStack_8,1);
            if (uVar11 != 0) {
              FUN_006ae1c0(*(uint **)(aiStack_34[5] + 0x266),&uStack_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uStack_c);
        }
        FUN_006ae110((byte *)puVar4);
      }
    }
    if (*(int *)(aiStack_34[5] + 0x262) == 1) {
      iVar3 = thunk_FUN_004406c0(*(char *)(aiStack_34[5] + 0x24));
      if ((char)iVar3 == '\x03') {
        cVar15 = *(char *)(aiStack_34[5] + 0x24);
        iVar3 = 0x60;
      }
      else {
        cVar15 = *(char *)(aiStack_34[5] + 0x24);
        iVar3 = 0x3b;
      }
      puVar4 = thunk_FUN_0043e780(cVar15,iVar3,0,-1);
      if (puVar4[3] == 0) {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(aiStack_34[5] + 0x266) = puVar6;
        uStack_8 = 0xffff;
        FUN_006ae1c0(puVar6,&uStack_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(aiStack_34[5] + 0x266) = puVar6;
        uStack_c = puVar4[3];
        uVar13 = 0;
        if (0 < (int)uStack_c) {
          do {
            FUN_006acc70((int)puVar4,uVar13,&uStack_8);
            uVar11 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_02 >> 8),
                                                 *(undefined1 *)(aiStack_34[5] + 0x24)),uStack_8,1);
            if (uVar11 != 0) {
              FUN_006ae1c0(*(uint **)(aiStack_34[5] + 0x266),&uStack_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uStack_c);
        }
      }
      FUN_006ae110((byte *)puVar4);
    }
    thunk_FUN_004a3430(1,*(int *)(aiStack_34[5] + 0x24e),*(int *)(aiStack_34[5] + 0x266),
                       *(int *)(aiStack_34[5] + 0x29));
  }
  aiStack_34[4] = 2;
  if ((*(uint *)(DAT_00802a38 + 0xe4) % 100 == 0) &&
     ((*(int *)(aiStack_34[5] + 0x24a) == 0 || (*(int *)(aiStack_34[5] + 0x262) == 0)))) {
    uStack_10 = 0;
    uStack_c = *(uint *)(*(int *)(aiStack_34[5] + 0x29) + 0xc);
    if (0 < (int)uStack_c) {
      do {
        FUN_006acc70(*(int *)(aiStack_34[5] + 0x29),uStack_10,&uStack_8);
        this = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                   *(undefined1 *)(aiStack_34[5] + 0x24)),uStack_8,1
                                         );
        if ((this != (void *)0x0) && (iVar3 = thunk_FUN_0045ff10((int)this), iVar3 == 0xc)) {
          bVar2 = thunk_FUN_0048d440((int)this);
          iStack_1c = CONCAT31(extraout_var,bVar2);
          if (iStack_1c != 0) {
            psVar7 = (short *)thunk_FUN_0048dc90(this,auStack_100);
            psVar14 = asStack_78;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)psVar14 = *(undefined4 *)psVar7;
              psVar7 = psVar7 + 2;
              psVar14 = psVar14 + 2;
            }
            *psVar14 = *psVar7;
            if ((iStack_3e == 6) || (iStack_3e == 0xe)) break;
            if (iStack_1c == 1) {
              if (iStack_72 != -1) {
                if ((((asStack_78[0] < 0) || (DAT_007fb240 <= asStack_78[0])) || (asStack_78[1] < 0)
                    ) || (((DAT_007fb242 <= asStack_78[1] || (asStack_78[2] < 0)) ||
                          (DAT_007fb244 <= asStack_78[2])))) {
                  piVar5 = (int *)0x0;
                }
                else {
                  piVar5 = *(int **)(DAT_007fb248 +
                                    ((int)asStack_78[2] * (int)DAT_007fb246 +
                                     (int)asStack_78[1] * (int)DAT_007fb240 + (int)asStack_78[0]) *
                                    8);
                }
                if (((piVar5 != (int *)0x0) && (piVar5[6] == iStack_72)) &&
                   (iVar3 = (**(code **)(*piVar5 + 0x88))(&iStack_1c), 0 < iVar3)) break;
              }
            }
            else if (iStack_68 != -1) {
              if (((((sStack_6e < 0) || (DAT_007fb240 <= sStack_6e)) || (sStack_6c < 0)) ||
                  ((DAT_007fb242 <= sStack_6c || (sStack_6a < 0)))) || (DAT_007fb244 <= sStack_6a))
              {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(DAT_007fb248 +
                                ((int)sStack_6a * (int)DAT_007fb246 +
                                 (int)sStack_6c * (int)DAT_007fb240 + (int)sStack_6e) * 8);
              }
              if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == iStack_68)) break;
            }
          }
        }
        uStack_10 = uStack_10 + 1;
      } while ((int)uStack_10 < (int)uStack_c);
    }
    if (uStack_10 == uStack_c) {
      aiStack_34[4] = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_bc;
  return aiStack_34[4];
}

