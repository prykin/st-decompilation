
undefined4 __thiscall STGroupBoatC::GrpLoadRC(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  void *this_01;
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
  STGroupBoatC *pSVar11;
  uint uVar12;
  void *unaff_EDI;
  STGroupBoatC *pSVar13;
  uint uVar14;
  short *psVar15;
  STGroupBoatC SVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined4 auStack_100 [17];
  InternalExceptionFrame IStack_bc;
  short asStack_78 [3];
  int iStack_72;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  int iStack_68;
  int iStack_3e;
  int aiStack_34 [5];
  STGroupBoatC *pSStack_20;
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
  IStack_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_bc;
  pSStack_20 = this;
  iVar3 = __setjmp3(IStack_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_bc.previous;
    if (iVar3 == -0x5001fff7) {
      if (*(byte **)(pSStack_20 + 0x10f) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(pSStack_20 + 0x10f));
        *(undefined4 *)(this_00 + 0x10f) = 0;
      }
      if (*(byte **)(this_00 + 0x127) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this_00 + 0x127));
        *(undefined4 *)(this_00 + 0x127) = 0;
      }
      if (*(byte **)(this_00 + 0x24e) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this_00 + 0x24e));
        *(undefined4 *)(this_00 + 0x24e) = 0;
      }
      if (*(byte **)(this_00 + 0x266) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this_00 + 0x266));
        *(undefined4 *)(this_00 + 0x266) = 0;
      }
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x8ee,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpLoadRC_007abfc0);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x8ef);
      return aiStack_34[4];
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    pSVar11 = pSStack_20 + 0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar11 = 0;
      pSVar11 = pSVar11 + 4;
    }
    *(undefined4 *)(pSStack_20 + 0x65) = 0;
    if (*(byte **)(pSStack_20 + 0x24e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSStack_20 + 0x24e));
    }
    if (*(byte **)(this_00 + 0x266) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x266));
    }
    pSVar11 = this_00 + 0x10b;
    pSVar13 = this_00 + 0x24a;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar13 = *(int *)pSVar11;
      pSVar11 = pSVar11 + 4;
      pSVar13 = pSVar13 + 4;
    }
    *(undefined4 *)(this_00 + 0x24e) = 0;
    *(undefined4 *)(this_00 + 0x266) = 0;
    if (*(int *)(this_00 + 0x10b) == 0) {
      if ((*(int *)(this_00 + 0x10f) == 0) ||
         (uStack_c = *(uint *)(*(int *)(this_00 + 0x10f) + 0xc), uStack_c == 0)) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x81d);
      }
      puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
      *(uint **)(this_00 + 0x24e) = puVar4;
      uVar14 = 0;
      if (0 < (int)uStack_c) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x10f),uVar14,&uStack_8);
          if (((short)uStack_8 != -1) &&
             (piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                          this_00[0x24]),uStack_8,1),
             piVar5 != (int *)0x0)) {
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
            if (((iVar9 != iStack_14) && (iVar3 == *(int *)(this_00 + 0x25e))) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(auStack_18), 0 < iVar3)) {
              FUN_006ae1c0(*(uint **)(this_00 + 0x24e),&uStack_8);
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uStack_c);
      }
      FUN_006ae110(*(byte **)(this_00 + 0x10f));
      *(undefined4 *)(this_00 + 0x10f) = 0;
      if (*(int *)(*(int *)(this_00 + 0x24e) + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x834);
      }
    }
    else {
      puVar4 = thunk_FUN_0043ec20((char)this_00[0x24],*(int *)(this_00 + 0x25e),
                                  *(short *)(this_00 + 0x252),*(short *)(this_00 + 0x254),
                                  *(short *)(this_00 + 0x256),*(short *)(this_00 + 600),
                                  *(short *)(this_00 + 0x25a),*(short *)(this_00 + 0x25c),1,-1);
      if (puVar4 == (uint *)0x0) {
        puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(this_00 + 0x24e) = puVar4;
        uStack_8 = 0xffff;
        FUN_006ae1c0(puVar4,&uStack_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(this_00 + 0x24e) = puVar6;
        uStack_c = puVar4[3];
        uVar14 = 0;
        if (0 < (int)uStack_c) {
          do {
            FUN_006acc70((int)puVar4,uVar14,&uStack_8);
            piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                        this_00[0x24]),uStack_8,1);
            if ((piVar5 != (int *)0x0) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(auStack_18), 0 < iVar3)) {
              FUN_006ae1c0(*(uint **)(this_00 + 0x24e),&uStack_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uStack_c);
        }
        if ((*(uint **)(this_00 + 0x24e))[3] == 0) {
          uStack_8 = 0xffff;
          FUN_006ae1c0(*(uint **)(this_00 + 0x24e),&uStack_8);
        }
        FUN_006ae110((byte *)puVar4);
      }
    }
    if (*(int *)(this_00 + 0x262) == 0) {
      if ((*(int *)(this_00 + 0x127) == 0) ||
         (uVar14 = *(uint *)(*(int *)(this_00 + 0x127) + 0xc), uStack_c = uVar14, uVar14 == 0)) {
        uVar14 = uStack_c;
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x855);
      }
      puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
      uVar12 = 0;
      *(uint **)(this_00 + 0x266) = puVar4;
      if (0 < (int)uVar14) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x127),uVar12,&uStack_8);
          if ((((short)uStack_8 != -1) &&
              (piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                           this_00[0x24]),uStack_8,1),
              piVar5 != (int *)0x0)) &&
             ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3b || (iVar3 == 0x60)))) {
            FUN_006ae1c0(*(uint **)(this_00 + 0x266),&uStack_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar14);
      }
      FUN_006ae110(*(byte **)(this_00 + 0x127));
      *(undefined4 *)(this_00 + 0x127) = 0;
      if (*(int *)(*(int *)(this_00 + 0x266) + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x866);
      }
    }
    if (*(int *)(this_00 + 0x262) == 2) {
      iVar3 = thunk_FUN_004406c0((char)this_00[0x24]);
      if ((char)iVar3 == '\x03') {
        sVar22 = *(short *)(this_00 + 0x274);
        sVar21 = *(short *)(this_00 + 0x272);
        sVar20 = *(short *)(this_00 + 0x270);
        sVar19 = *(short *)(this_00 + 0x26e);
        sVar18 = *(short *)(this_00 + 0x26c);
        sVar17 = *(short *)(this_00 + 0x26a);
        SVar16 = this_00[0x24];
        iVar3 = 0x60;
      }
      else {
        sVar22 = *(short *)(this_00 + 0x274);
        sVar21 = *(short *)(this_00 + 0x272);
        sVar20 = *(short *)(this_00 + 0x270);
        sVar19 = *(short *)(this_00 + 0x26e);
        sVar18 = *(short *)(this_00 + 0x26c);
        sVar17 = *(short *)(this_00 + 0x26a);
        SVar16 = this_00[0x24];
        iVar3 = 0x3b;
      }
      puVar4 = thunk_FUN_0043ec20((char)SVar16,iVar3,sVar17,sVar18,sVar19,sVar20,sVar21,sVar22,0,-1)
      ;
      if (puVar4 == (uint *)0x0) {
        puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(this_00 + 0x266) = puVar4;
        uStack_8 = 0xffff;
        FUN_006ae1c0(puVar4,&uStack_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(this_00 + 0x266) = puVar6;
        uStack_c = puVar4[3];
        uVar14 = 0;
        if (0 < (int)uStack_c) {
          do {
            FUN_006acc70((int)puVar4,uVar14,&uStack_8);
            uVar12 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this_00[0x24]),
                                        uStack_8,1);
            if (uVar12 != 0) {
              FUN_006ae1c0(*(uint **)(this_00 + 0x266),&uStack_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uStack_c);
        }
        FUN_006ae110((byte *)puVar4);
      }
    }
    if (*(int *)(this_00 + 0x262) == 1) {
      iVar3 = thunk_FUN_004406c0((char)this_00[0x24]);
      if ((char)iVar3 == '\x03') {
        SVar16 = this_00[0x24];
        iVar3 = 0x60;
      }
      else {
        SVar16 = this_00[0x24];
        iVar3 = 0x3b;
      }
      puVar4 = STAllPlayersC::GetTOBJList(DAT_007fa174,(char)SVar16,iVar3,0,-1);
      if (puVar4[3] == 0) {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(this_00 + 0x266) = puVar6;
        uStack_8 = 0xffff;
        FUN_006ae1c0(puVar6,&uStack_8);
      }
      else {
        puVar6 = FUN_006ae290((uint *)0x0,0,2,1);
        *(uint **)(this_00 + 0x266) = puVar6;
        uStack_c = puVar4[3];
        uVar14 = 0;
        if (0 < (int)uStack_c) {
          do {
            FUN_006acc70((int)puVar4,uVar14,&uStack_8);
            uVar12 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_02 >> 8),this_00[0x24]),
                                        uStack_8,1);
            if (uVar12 != 0) {
              FUN_006ae1c0(*(uint **)(this_00 + 0x266),&uStack_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uStack_c);
        }
      }
      FUN_006ae110((byte *)puVar4);
    }
    DistributeMD(this_00,1,*(int *)(this_00 + 0x24e),*(int *)(this_00 + 0x266),
                 *(int *)(this_00 + 0x29));
  }
  aiStack_34[4] = 2;
  if ((*(uint *)(DAT_00802a38 + 0xe4) % 100 == 0) &&
     ((*(int *)(this_00 + 0x24a) == 0 || (*(int *)(this_00 + 0x262) == 0)))) {
    uStack_10 = 0;
    uStack_c = *(uint *)(*(int *)(this_00 + 0x29) + 0xc);
    if (0 < (int)uStack_c) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x29),uStack_10,&uStack_8);
        this_01 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                      this_00[0x24]),uStack_8,1);
        if ((this_01 != (void *)0x0) && (iVar3 = thunk_FUN_0045ff10((int)this_01), iVar3 == 0xc)) {
          bVar2 = thunk_FUN_0048d440((int)this_01);
          iStack_1c = CONCAT31(extraout_var,bVar2);
          if (iStack_1c != 0) {
            psVar7 = (short *)thunk_FUN_0048dc90(this_01,auStack_100);
            psVar15 = asStack_78;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)psVar15 = *(undefined4 *)psVar7;
              psVar7 = psVar7 + 2;
              psVar15 = psVar15 + 2;
            }
            *psVar15 = *psVar7;
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
  g_currentExceptionFrame = IStack_bc.previous;
  return aiStack_34[4];
}

