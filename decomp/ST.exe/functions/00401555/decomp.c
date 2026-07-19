
int __thiscall AiFltClassTy::GetAiMess(AiFltClassTy *this,uint *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  code *pcVar5;
  AiFltClassTy *this_00;
  undefined2 uVar6;
  int iVar7;
  ushort *puVar8;
  undefined2 *puVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar10;
  uint *puVar11;
  void *pvVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar16;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *extraout_ECX_02;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint *extraout_EDX_03;
  uint *extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  uint *extraout_EDX_15;
  uint *extraout_EDX_16;
  undefined4 extraout_EDX_17;
  undefined4 extraout_EDX_18;
  undefined4 extraout_EDX_19;
  undefined2 extraout_var_03;
  undefined4 unaff_ESI;
  undefined4 *puVar17;
  void *unaff_EDI;
  AiFltClassTy *pAVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  short *psVar22;
  InternalExceptionFrame IStack_74;
  short asStack_30 [2];
  short asStack_2c [2];
  uint uStack_28;
  void *pvStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  void *pvStack_14;
  uint *puStack_10;
  AiFltClassTy *pAStack_c;
  undefined4 uStack_8;
  
  IStack_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_74;
  pAStack_c = this;
  iVar7 = __setjmp3(IStack_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pAStack_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_74.previous;
    iVar16 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x98a,0,iVar7,&DAT_007a4ccc,
                                s_AiFltClassTy__GetAiMess_007d2c60);
    if (iVar16 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x98b);
      return iVar7;
    }
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  if (*param_1 < 100) {
    FUN_006ae1c0(*(uint **)(pAStack_c + 0x217),param_1);
    g_currentExceptionFrame = IStack_74.previous;
    return 0;
  }
  switch(*param_1) {
  case 100:
    if (((*(short *)(pAStack_c + 0x7b) != -0x8000) && (*(short *)(pAStack_c + 0x7b) != 1)) &&
       (pAStack_c[0x152] != (AiFltClassTy)0x0)) {
      uVar3 = *(ushort *)((int)param_1 + 0xe);
      if ((((uint)uVar3 & *(uint *)(pAStack_c + 0x153)) != 0) && (*(int *)(pAStack_c + 0xb3) == 0))
      {
        if (uVar3 == 1) {
          uVar20 = *(uint *)(pAStack_c + 0x9b);
          if ((uVar20 < 0x8c) || (0x95 < uVar20)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          if ((uVar20 < 100) || (0x6d < uVar20)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
        }
        else {
          uVar20 = *(uint *)(pAStack_c + 0x9b);
          if ((uVar20 < 0x8c) || (0x95 < uVar20)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          if ((uVar20 < 100) || (0x6d < uVar20)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          if ((uVar20 < 0x6e) || (0x77 < uVar20)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          if ((uVar20 < 0x82) || (0x8b < uVar20)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          if ((uVar20 == 0x23) || ((0xb < uVar20 && (uVar20 < 0x14)))) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if (bVar21) {
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
        }
        if (0 < *(short *)(pAStack_c + 0x157)) {
          uVar6 = thunk_FUN_0065d9c0((int)pAStack_c,(uint)uVar3);
          if ((int)*(short *)(this_00 + 0x157) <= CONCAT22(extraout_var_02,uVar6)) {
            *(undefined1 *)(param_1 + 2) = 1;
            if (*(char *)((int)param_1 + 9) != '\0') {
              if (DAT_007fa174 == 0) {
                pvVar12 = (void *)0x0;
              }
              else {
                pvVar12 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)CONCAT22(extraout_var_02,
                                                                                    uVar6) >> 8),
                                                              *(undefined1 *)((int)param_1 + 0x12)),
                                                     CONCAT22(extraout_var_03,(short)param_1[4]),1);
              }
              if (pvVar12 != (void *)0x0) {
                thunk_FUN_004162b0(pvVar12,asStack_2c,asStack_30,(undefined2 *)((int)&uStack_8 + 2))
                ;
                *(short *)(this_00 + 0x195) = asStack_2c[0] + -2;
                *(short *)(this_00 + 0x197) = asStack_30[0] + -2;
                *(undefined2 *)(this_00 + 0x199) = 0;
                *(short *)(this_00 + 0x19b) = 5;
                *(short *)(this_00 + 0x19d) = 3;
                *(undefined2 *)(this_00 + 0x19f) = 5;
                thunk_FUN_006756d0((short *)(this_00 + 0x195),(short *)(this_00 + 0x197),
                                   (short *)(this_00 + 0x19b),(short *)(this_00 + 0x19d));
              }
              *(undefined4 *)(this_00 + 0x9b) = 0x8c;
              goto LAB_00663af0;
            }
          }
        }
      }
    }
    break;
  case 0x66:
    if ((((*(short *)(pAStack_c + 0x7b) != -0x8000) && (*(short *)(pAStack_c + 0x7b) != 1)) &&
        ((pAStack_c[0x187] != (AiFltClassTy)0x0 &&
         (((*(uint *)(pAStack_c + 0x9b) < 0x82 || (0x8b < *(uint *)(pAStack_c + 0x9b))) &&
          (*(int *)(pAStack_c + 0xb3) == 0)))))) &&
       (uVar6 = thunk_FUN_0065d9c0((int)pAStack_c,extraout_EDX),
       (int)*(short *)(this_00 + 0x18c) <= CONCAT22(extraout_var_01,uVar6))) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar6;
      uVar10 = *(undefined4 *)(this_00 + 0x188);
      *(undefined4 *)((int)param_1 + 0xf) = uVar10;
      iVar7 = thunk_FUN_0065e3b0((int)this_00,uVar10);
      *(int *)((int)param_1 + 0xb) = iVar7;
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((*(short *)(pAStack_c + 0x7b) != -0x8000) && (*(short *)(pAStack_c + 0x7b) != 1)) &&
        (pAStack_c[0x187] != (AiFltClassTy)0x0)) && (*(int *)(pAStack_c + 0xb3) == 0)) {
      pvVar12 = (void *)thunk_FUN_004357f0((char)pAStack_c[0x24]);
      if ((char)param_1[2] == '\0') {
        *(undefined4 *)(this_00 + 0xfb) = *(undefined4 *)((int)param_1 + 9);
        *(undefined4 *)(this_00 + 0xf7) = *(undefined4 *)((int)param_1 + 0xd);
        *(int *)(this_00 + 0xef) = (int)*(short *)((int)param_1 + 0x11);
        *(undefined4 *)(this_00 + 0x195) = *(undefined4 *)((int)param_1 + 0x13);
        *(undefined4 *)(this_00 + 0x199) = *(undefined4 *)((int)param_1 + 0x17);
        *(undefined4 *)(this_00 + 0x19d) = *(undefined4 *)((int)param_1 + 0x1b);
        *(undefined4 *)(this_00 + 0x9b) = 0x82;
        *(undefined4 *)(this_00 + 0x9f) = 0;
        *(undefined4 *)(this_00 + 0xa3) = 0;
        *(undefined4 *)(this_00 + 0xa7) = 0;
        if (pvVar12 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar12,'\0',*(uint *)(this_00 + 0xf7));
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
      }
      else if ((0x81 < *(uint *)(this_00 + 0x9b)) && (*(uint *)(this_00 + 0x9b) < 0x8c)) {
        if (pvVar12 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar12,'\x01',*(uint *)(this_00 + 0xf7));
        }
        *(undefined4 *)(this_00 + 0x9b) = 0;
LAB_00663af0:
        *(undefined4 *)(this_00 + 0x9f) = 0;
        *(undefined4 *)(this_00 + 0xa3) = 0;
        *(undefined4 *)(this_00 + 0xa7) = 0;
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
    }
    break;
  case 0x68:
    if (pAStack_c[0x194] == (AiFltClassTy)0x0) {
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    uVar20 = **(uint **)((int)param_1 + 10);
    if ((0x53 < uVar20) && (uVar20 < 0x5b)) {
      uVar20 = thunk_FUN_00674fb0(uVar20);
      if ((*(uint *)(this_00 + 0x25f) & uVar20) == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      iVar7 = **(int **)((int)param_1 + 10);
      if ((iVar7 < 1) || (0x28 < iVar7)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if ((bVar21) && (DAT_007fa174 != 0)) {
        iVar7 = thunk_FUN_004e6a80(*(int *)(this_00 + 0x24),iVar7);
        iVar16 = extraout_EDX_00;
      }
      else {
        if ((iVar7 < 0x32) || (0x73 < iVar7)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        if ((bVar21) && (DAT_007fa174 != 0)) {
          iVar7 = thunk_FUN_004e6c20(*(int *)(this_00 + 0x24),iVar7);
          iVar16 = extraout_EDX_01;
        }
        else {
          if ((iVar7 == 0xa3) || (((iVar7 == 0xa8 || (iVar7 == 0xb2)) || (iVar7 == 0xbe)))) {
            iVar16 = 1;
          }
          else {
            iVar16 = 0;
          }
          if ((iVar16 == 0) || (DAT_007fa174 == 0)) {
            if (((iVar7 == 0xdd) || ((iVar7 == 0xde || (iVar7 == 0xe2)))) || (iVar7 == 0xdc)) {
              bVar21 = true;
            }
            else {
              bVar21 = false;
            }
            if ((bVar21) && (DAT_007fa174 != 0)) {
              iVar7 = 1;
            }
            else {
              iVar7 = 0;
            }
          }
          else {
            iVar7 = thunk_FUN_004e80f0(*(int *)(this_00 + 0x24),iVar7);
            iVar16 = extraout_EDX_02;
          }
        }
      }
      if (iVar7 == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      uStack_8 = thunk_FUN_0065e360((int)this_00,iVar16,0x53);
      if ((uStack_8 != (uint *)0x0) && (uStack_8[3] != 0)) {
        iVar7 = *(int *)((int)param_1 + 10);
        puVar13 = param_1;
        if (*(char *)(iVar7 + 0x3e) == '\0') {
          if ((*(int *)(this_00 + 0x9b) == 0xc) || (*(int *)(this_00 + 0xb3) != 0))
          goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar7 + 0x16) < 0) || (*(short *)(iVar7 + 0x18) < 0)) ||
                 (*(short *)(iVar7 + 0x1a) < 0)) && (*(int *)(this_00 + 0x284) != 0)) {
          *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)(*(int *)(this_00 + 0x284) + 0x82);
          *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
               *(undefined2 *)(*(int *)(this_00 + 0x284) + 0x84);
          puVar13 = *(uint **)((int)param_1 + 10);
          *(undefined2 *)((int)puVar13 + 0x1a) = *(undefined2 *)(*(int *)(this_00 + 0x284) + 0x86);
        }
        puStack_10 = (uint *)0x0;
        if (0 < (int)uStack_8[3]) {
          bVar21 = uStack_8[3] != 0;
          do {
            puVar11 = puStack_10;
            if (bVar21) {
              puVar13 = (uint *)uStack_8[7];
              puVar14 = (uint *)(uStack_8[2] * (int)puStack_10 + (int)puVar13);
            }
            else {
              puVar14 = (uint *)0x0;
            }
            uVar20 = *puVar14;
            if (DAT_007fa174 == 0) {
              pvStack_14 = (void *)0x0;
            }
            else {
              pvStack_14 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)puVar13 >> 8),
                                                               this_00[0x24]),(uint)(ushort)uVar20,1
                                                     );
              puVar13 = extraout_EDX_03;
            }
            if (pvStack_14 != (void *)0x0) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = (ushort)uVar20;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar17 = *(undefined4 **)((int)param_1 + 10);
                pAVar18 = this_00 + 0x1ad;
                for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined4 *)pAVar18 = *puVar17;
                  puVar17 = puVar17 + 1;
                  pAVar18 = pAVar18 + 4;
                }
                *(undefined2 *)pAVar18 = *(undefined2 *)puVar17;
                if ((this_00[0x1eb] != (AiFltClassTy)0x0) &&
                   (iVar7 = thunk_FUN_004ae0b0((int)*(short *)(this_00 + 0x1c3),
                                               (int)*(short *)(this_00 + 0x1c5),
                                               (int)*(short *)(this_00 + 0x1c7),
                                               *(int *)(this_00 + 0x1ad),*(int *)(this_00 + 0x24),
                                               (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,(int *)0x0)
                   , iVar7 == 0)) {
                  iStack_18 = (int)*(short *)(this_00 + 0x1c3);
                  iStack_1c = (int)*(short *)(this_00 + 0x1c5);
                  iStack_20 = (int)*(short *)(this_00 + 0x1c7);
                  iVar7 = thunk_FUN_004b0d10(*(uint *)(this_00 + 0x24),*(int *)(this_00 + 0x1ad),
                                             &iStack_18,&iStack_1c,&iStack_20,
                                             (int)*(short *)(this_00 + 0x1c3),
                                             (int)*(short *)(this_00 + 0x1c5),
                                             (int)*(short *)(this_00 + 0x1c7),(int)pvStack_14);
                  if (iVar7 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    puVar13 = extraout_EDX_04;
                    puVar11 = puStack_10;
                    goto LAB_006625c2;
                  }
                  *(undefined2 *)(this_00 + 0x1c3) = (undefined2)iStack_18;
                  *(undefined2 *)(this_00 + 0x1c5) = (undefined2)iStack_1c;
                  *(undefined2 *)(this_00 + 0x1c7) = (undefined2)iStack_20;
                }
                thunk_FUN_004cdfd0(pvStack_14,*(int *)(this_00 + 0x1ad),
                                   (int)*(short *)(this_00 + 0x1c3),(int)*(short *)(this_00 + 0x1c5)
                                   ,(int)*(short *)(this_00 + 0x1c7));
                if (*(int *)(this_00 + 0xb3) != 0) {
                  thunk_FUN_0065f980((int)this_00);
                }
                *(undefined4 *)(this_00 + 0x9b) = 0xc;
                *(undefined4 *)(this_00 + 0x9f) = 0;
                *(undefined4 *)(this_00 + 0xa3) = 0;
                *(undefined4 *)(this_00 + 0xa7) = 0;
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  *(undefined4 *)(this_00 + 0xb3) = 0xc;
                }
              }
              break;
            }
LAB_006625c2:
            puStack_10 = (uint *)((int)puVar11 + 1);
            bVar21 = puStack_10 < (uint *)uStack_8[3];
          } while ((int)puStack_10 < (int)uStack_8[3]);
        }
      }
LAB_0066263e:
      if (uStack_8 == (uint *)0x0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)uStack_8);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    if ((uVar20 < 0x32) || (0x73 < uVar20)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      uVar20 = thunk_FUN_00674fb0(uVar20);
      if ((*(uint *)(this_00 + 0x25f) & uVar20) == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      iVar7 = **(int **)((int)param_1 + 10);
      if ((iVar7 < 1) || (0x28 < iVar7)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if ((bVar21) && (DAT_007fa174 != 0)) {
        iVar7 = thunk_FUN_004e6a80(*(int *)(this_00 + 0x24),iVar7);
      }
      else {
        if ((iVar7 < 0x32) || (0x73 < iVar7)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        if ((bVar21) && (DAT_007fa174 != 0)) {
          iVar7 = thunk_FUN_004e6c20(*(int *)(this_00 + 0x24),iVar7);
        }
        else {
          if ((iVar7 == 0xa3) || (((iVar7 == 0xa8 || (iVar7 == 0xb2)) || (iVar7 == 0xbe)))) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((bVar21) && (DAT_007fa174 != 0)) {
            iVar7 = thunk_FUN_004e80f0(*(int *)(this_00 + 0x24),iVar7);
          }
          else {
            if (((iVar7 == 0xdd) || ((iVar7 == 0xde || (iVar7 == 0xe2)))) || (iVar7 == 0xdc)) {
              bVar21 = true;
            }
            else {
              bVar21 = false;
            }
            if ((bVar21) && (DAT_007fa174 != 0)) {
              iVar7 = 1;
            }
            else {
              iVar7 = 0;
            }
          }
        }
      }
      if (iVar7 == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      sVar4 = *(short *)(this_00 + 0x39);
      if (sVar4 == 1) {
        iVar7 = 0xc;
      }
      else if (sVar4 == 2) {
        iVar7 = 0x18;
      }
      else if (sVar4 == 3) {
        iVar7 = 0x19;
      }
      else {
        iVar7 = 0;
      }
      uVar20 = thunk_FUN_0065da50(this_00,iVar7,-1);
      if ((int)uVar20 < 1) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      iVar7 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar7 + 0x3e) == '\0') {
        if (*(int *)(this_00 + 0x9b) == 0x23) {
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
        if (*(int *)(this_00 + 0x9b) == 0x78) {
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
        if (*(int *)(this_00 + 0xb3) != 0) {
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
      if (*(char *)((int)param_1 + 9) == '\0') {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      if ((*(char *)(iVar7 + 0x3e) != '\0') &&
         ((((*(short *)(iVar7 + 0x16) < 0 || (*(short *)(iVar7 + 0x18) < 0)) ||
           (*(short *)(iVar7 + 0x1a) < 0)) && (*(int *)(this_00 + 0x284) != 0)))) {
        *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)(*(int *)(this_00 + 0x284) + 0x82);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
             *(undefined2 *)(*(int *)(this_00 + 0x284) + 0x84);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x1a) =
             *(undefined2 *)(*(int *)(this_00 + 0x284) + 0x86);
      }
      puVar17 = *(undefined4 **)((int)param_1 + 10);
      pAVar18 = this_00 + 0x1ad;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pAVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        pAVar18 = pAVar18 + 4;
      }
      *(undefined2 *)pAVar18 = *(undefined2 *)puVar17;
      if ((this_00[0x1eb] != (AiFltClassTy)0x0) &&
         (iVar7 = thunk_FUN_004ae0b0((int)*(short *)(this_00 + 0x1c3),
                                     (int)*(short *)(this_00 + 0x1c5),
                                     (int)*(short *)(this_00 + 0x1c7),*(int *)(this_00 + 0x1ad),
                                     *(int *)(this_00 + 0x24),(undefined4 *)0x0,(int *)0x0,
                                     (int *)0x0,0,(int *)0x0), iVar7 == 0)) {
        pvStack_14 = (void *)(int)*(short *)(this_00 + 0x1c3);
        puStack_10 = (uint *)(int)*(short *)(this_00 + 0x1c5);
        pvStack_24 = (void *)(int)*(short *)(this_00 + 0x1c7);
        iVar7 = thunk_FUN_004b0d10(*(uint *)(this_00 + 0x24),*(int *)(this_00 + 0x1ad),
                                   (int *)&pvStack_14,(int *)&puStack_10,(int *)&pvStack_24,
                                   (int)*(short *)(this_00 + 0x1c3),(int)*(short *)(this_00 + 0x1c5)
                                   ,(int)*(short *)(this_00 + 0x1c7),0);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          *(undefined2 *)((int)param_1 + 0xe) = 0;
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
        *(undefined2 *)(this_00 + 0x1c3) = pvStack_14._0_2_;
        *(undefined2 *)(this_00 + 0x1c5) = puStack_10._0_2_;
        *(undefined2 *)(this_00 + 0x1c7) = pvStack_24._0_2_;
      }
      if (*(int *)(this_00 + 0xb3) != 0) {
        thunk_FUN_0065f980((int)this_00);
      }
      *(undefined4 *)(this_00 + 0x9b) = 0x23;
      *(undefined4 *)(this_00 + 0x9f) = 0;
      *(undefined4 *)(this_00 + 0xa3) = 0;
      *(undefined4 *)(this_00 + 0xa7) = 0;
      if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) == '\0') {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      *(undefined4 *)(this_00 + 0xb3) = 0x23;
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    if ((uVar20 == 0) || (0x28 < uVar20)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      uVar20 = thunk_FUN_00674fb0(uVar20);
      if ((*(uint *)(this_00 + 0x25f) & uVar20) == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      iVar7 = **(int **)((int)param_1 + 10);
      if ((iVar7 < 1) || (0x28 < iVar7)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if ((bVar21) && (DAT_007fa174 != 0)) {
        iVar7 = thunk_FUN_004e6a80(*(int *)(this_00 + 0x24),iVar7);
        iVar16 = extraout_EDX_05;
      }
      else {
        if ((iVar7 < 0x32) || (0x73 < iVar7)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        if ((bVar21) && (DAT_007fa174 != 0)) {
          iVar7 = thunk_FUN_004e6c20(*(int *)(this_00 + 0x24),iVar7);
          iVar16 = extraout_EDX_06;
        }
        else {
          if ((iVar7 == 0xa3) || (((iVar7 == 0xa8 || (iVar7 == 0xb2)) || (iVar7 == 0xbe)))) {
            iVar16 = 1;
          }
          else {
            iVar16 = 0;
          }
          if ((iVar16 == 0) || (DAT_007fa174 == 0)) {
            if (((iVar7 == 0xdd) || ((iVar7 == 0xde || (iVar7 == 0xe2)))) || (iVar7 == 0xdc)) {
              bVar21 = true;
            }
            else {
              bVar21 = false;
            }
            if ((bVar21) && (DAT_007fa174 != 0)) {
              iVar7 = 1;
            }
            else {
              iVar7 = 0;
            }
          }
          else {
            iVar7 = thunk_FUN_004e80f0(*(int *)(this_00 + 0x24),iVar7);
            iVar16 = extraout_EDX_07;
          }
        }
      }
      if (iVar7 == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      sVar4 = *(short *)(this_00 + 0x39);
      if (sVar4 == 1) {
        iVar7 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar4 == 2) {
        iVar7 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar4 == 3) {
        iVar7 = 0x5c;
      }
      else {
        iVar7 = 0;
      }
      uStack_8 = thunk_FUN_0065e360((int)this_00,iVar16,iVar7);
      if ((((uStack_8 != (uint *)0x0) && (uVar20 = uStack_8[3], uVar20 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((*(int *)(this_00 + 0x9b) != 0xe && (*(int *)(this_00 + 0xb3) == 0)))))) &&
         (uVar19 = 0, 0 < (int)uVar20)) {
        do {
          if (uVar19 < uVar20) {
            puVar8 = (ushort *)(uStack_8[2] * uVar19 + uStack_8[7]);
          }
          else {
            puVar8 = (ushort *)0x0;
          }
          uVar3 = *puVar8;
          if (DAT_007fa174 == 0) {
            pvStack_24 = (void *)0x0;
          }
          else {
            pvStack_24 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)puVar8 >> 8),this_00[0x24]
                                                            ),(uint)uVar3,1);
          }
          if ((pvStack_24 != (void *)0x0) && (iVar7 = thunk_FUN_004c93e0(pvStack_24,1), iVar7 == 0))
          {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar3;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar17 = *(undefined4 **)((int)param_1 + 10);
              pAVar18 = this_00 + 0x1ad;
              for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)pAVar18 = *puVar17;
                puVar17 = puVar17 + 1;
                pAVar18 = pAVar18 + 4;
              }
              *(undefined2 *)pAVar18 = *(undefined2 *)puVar17;
              puVar13 = *(uint **)((int)param_1 + 10);
              thunk_FUN_004c7cc0(pvStack_24,1,*puVar13,1,1,(uint)(ushort)puVar13[3],puVar13[2],
                                 (int)(char)puVar13[7],(char *)((int)puVar13 + 0x1d));
              if (*(int *)(this_00 + 0xb3) != 0) {
                thunk_FUN_0065f980((int)this_00);
              }
              *(undefined4 *)(this_00 + 0x9f) = 0;
              *(undefined4 *)(this_00 + 0xa3) = 0;
              *(undefined4 *)(this_00 + 0xa7) = 0;
              *(undefined4 *)(this_00 + 0x9b) = 0xe;
              if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                *(undefined4 *)(this_00 + 0xb3) = 0xe;
              }
            }
            break;
          }
          uVar19 = uVar19 + 1;
          uVar20 = uStack_8[3];
        } while ((int)uVar19 < (int)uVar20);
      }
      if (uStack_8 == (uint *)0x0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)uStack_8);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    if ((((uVar20 == 0xa3) || (uVar20 == 0xa8)) || (uVar20 == 0xb2)) || (uVar20 == 0xbe)) {
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
    if (!bVar21) {
      if (((uVar20 == 0xdd) || (uVar20 == 0xde)) || ((uVar20 == 0xe2 || (uVar20 == 0xdc)))) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if (!bVar21) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      if (((int)uVar20 < 1) || (0x28 < (int)uVar20)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if ((bVar21) && (DAT_007fa174 != 0)) {
        iVar16 = thunk_FUN_004e6a80(*(int *)(pAStack_c + 0x24),uVar20);
        iVar7 = extraout_EDX_11;
      }
      else {
        if (((int)uVar20 < 0x32) || (0x73 < (int)uVar20)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        if ((bVar21) && (DAT_007fa174 != 0)) {
          iVar16 = thunk_FUN_004e6c20(*(int *)(pAStack_c + 0x24),uVar20);
          iVar7 = extraout_EDX_12;
        }
        else {
          if ((uVar20 == 0xa3) || (((uVar20 == 0xa8 || (uVar20 == 0xb2)) || (uVar20 == 0xbe)))) {
            iVar7 = 1;
          }
          else {
            iVar7 = 0;
          }
          if ((iVar7 == 0) || (DAT_007fa174 == 0)) {
            if (((uVar20 == 0xdd) || ((uVar20 == 0xde || (uVar20 == 0xe2)))) || (uVar20 == 0xdc)) {
              bVar21 = true;
            }
            else {
              bVar21 = false;
            }
            if ((bVar21) && (DAT_007fa174 != 0)) {
              iVar16 = 1;
            }
            else {
              iVar16 = 0;
            }
          }
          else {
            iVar16 = thunk_FUN_004e80f0(*(int *)(pAStack_c + 0x24),uVar20);
            iVar7 = extraout_EDX_13;
          }
        }
      }
      if (iVar16 == 0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      sVar4 = *(short *)(this_00 + 0x39);
      if (0 < sVar4) {
        if (sVar4 < 3) {
          iVar16 = 0x52;
          goto LAB_00663076;
        }
        if (sVar4 == 3) {
          iVar16 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar16 = 0;
LAB_00663076:
      uStack_8 = thunk_FUN_0065e360((int)this_00,iVar7,iVar16);
      if ((((uStack_8 != (uint *)0x0) && (pvVar12 = (void *)uStack_8[3], pvVar12 != (void *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((*(int *)(this_00 + 0x9b) != 0x10 && (*(int *)(this_00 + 0xb3) == 0)))))) &&
         (pvStack_14 = (void *)0x0, puVar13 = param_1, 0 < (int)pvVar12)) {
        do {
          if (pvStack_14 < pvVar12) {
            puVar9 = (undefined2 *)(uStack_8[2] * (int)pvStack_14 + uStack_8[7]);
          }
          else {
            puVar9 = (undefined2 *)0x0;
          }
          uVar6 = *puVar9;
          puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),uVar6);
          if (DAT_007fa174 == 0) {
            pvVar12 = (void *)0x0;
          }
          else {
            pvVar12 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)puVar9 >> 8),this_00[0x24]),
                                                 (uint)puVar13,1);
          }
          pvStack_24 = pvVar12;
          if (pvVar12 != (void *)0x0) {
            iVar7 = thunk_FUN_004e1490((int)pvVar12);
            if ((iVar7 == 0) || (DAT_007fb244 + -1 <= *(int *)((int)pvVar12 + 0x5b8))) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
            if (bVar21) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(undefined2 *)((int)param_1 + 0xe) = uVar6;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar17 = *(undefined4 **)((int)param_1 + 10);
                pAVar18 = this_00 + 0x1ad;
                for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined4 *)pAVar18 = *puVar17;
                  puVar17 = puVar17 + 1;
                  pAVar18 = pAVar18 + 4;
                }
                *(undefined2 *)pAVar18 = *(undefined2 *)puVar17;
                thunk_FUN_004ebab0(pvStack_24,**(int **)((int)param_1 + 10),
                                   (*(int **)((int)param_1 + 10))[0xb]);
                if (*(int *)(this_00 + 0xb3) != 0) {
                  thunk_FUN_0065f980((int)this_00);
                }
                *(undefined4 *)(this_00 + 0x9f) = 0;
                *(undefined4 *)(this_00 + 0xa3) = 0;
                *(undefined4 *)(this_00 + 0xa7) = 0;
                *(undefined4 *)(this_00 + 0x9b) = 0x12;
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  *(undefined4 *)(this_00 + 0xb3) = 0x12;
                }
              }
              break;
            }
          }
          pvStack_14 = (void *)((int)pvStack_14 + 1);
          pvVar12 = (void *)uStack_8[3];
        } while ((int)pvStack_14 < (int)pvVar12);
      }
      if (uStack_8 == (uint *)0x0) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)uStack_8);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    if (((int)uVar20 < 1) || (0x28 < (int)uVar20)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if ((bVar21) && (DAT_007fa174 != 0)) {
      iVar7 = thunk_FUN_004e6a80(*(int *)(pAStack_c + 0x24),uVar20);
      uVar19 = extraout_EDX_08;
    }
    else {
      if (((int)uVar20 < 0x32) || (0x73 < (int)uVar20)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if ((bVar21) && (DAT_007fa174 != 0)) {
        iVar7 = thunk_FUN_004e6c20(*(int *)(pAStack_c + 0x24),uVar20);
        uVar19 = extraout_EDX_09;
      }
      else {
        if ((uVar20 == 0xa3) || (((uVar20 == 0xa8 || (uVar20 == 0xb2)) || (uVar20 == 0xbe)))) {
          uVar19 = 1;
        }
        else {
          uVar19 = 0;
        }
        if ((uVar19 == 0) || (DAT_007fa174 == 0)) {
          if (((uVar20 == 0xdd) || ((uVar20 == 0xde || (uVar20 == 0xe2)))) || (uVar20 == 0xdc)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((bVar21) && (DAT_007fa174 != 0)) {
            iVar7 = 1;
          }
          else {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = thunk_FUN_004e80f0(*(int *)(pAStack_c + 0x24),uVar20);
          uVar19 = extraout_EDX_10;
        }
      }
    }
    if (iVar7 == 0) {
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    iVar7 = **(int **)((int)param_1 + 10);
    if (iVar7 - 0xa3U < 0x1c) {
      uVar19 = (uint)*(byte *)(iVar7 + 0x663d51);
      switch(iVar7) {
      case 0xa3:
        iVar7 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar7 = 0x44;
        break;
      case 0xb2:
        iVar7 = 0x70;
        break;
      case 0xbe:
        iVar7 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar7 = 0;
    }
    uStack_8 = thunk_FUN_0065e360((int)this_00,uVar19,iVar7);
    if ((((uStack_8 != (uint *)0x0) && (uVar20 = uStack_8[3], uVar20 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((*(int *)(this_00 + 0x9b) != 0x12 && (*(int *)(this_00 + 0xb3) == 0)))))) &&
       (pvStack_24 = (void *)0x0, 0 < (int)uVar20)) {
      bVar21 = uVar20 != 0;
      puVar13 = param_1;
LAB_00662dbb:
      if (bVar21) {
        puVar9 = (undefined2 *)(uStack_8[2] * (int)pvStack_24 + uStack_8[7]);
      }
      else {
        puVar9 = (undefined2 *)0x0;
      }
      uVar6 = *puVar9;
      puVar13 = (uint *)CONCAT22((short)((uint)puVar13 >> 0x10),uVar6);
      if (DAT_007fa174 == 0) {
        puStack_10 = (uint *)0x0;
      }
      else {
        puStack_10 = (uint *)thunk_FUN_0042b620(CONCAT31((int3)((uint)puVar9 >> 8),this_00[0x24]),
                                                (uint)puVar13,1);
      }
      if (puStack_10 == (uint *)0x0) goto LAB_00662e52;
      switch(**(undefined4 **)((int)param_1 + 10)) {
      case 0xa3:
        iVar7 = thunk_FUN_004c7860(puStack_10,4,0,1,1,1);
        break;
      default:
        iVar7 = 0;
        break;
      case 0xa8:
        iVar7 = thunk_FUN_004c7860(puStack_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar7 = 1;
        break;
      case 0xbe:
        iVar7 = thunk_FUN_004c7860(puStack_10,8,0,1,1,1);
      }
      if (iVar7 == 0) goto LAB_00662e52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = uVar6;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar17 = *(undefined4 **)((int)param_1 + 10);
        pAVar18 = this_00 + 0x1ad;
        for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pAVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          pAVar18 = pAVar18 + 4;
        }
        *(undefined2 *)pAVar18 = *(undefined2 *)puVar17;
        iVar7 = **(int **)((int)param_1 + 10);
        if (iVar7 == 0xa3) {
          iVar7 = 4;
LAB_00662ee7:
          thunk_FUN_004c7cc0(puStack_10,iVar7,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2],
                             0xff,(char *)0x0);
        }
        else {
          if (iVar7 == 0xa8) {
            iVar7 = 6;
            goto LAB_00662ee7;
          }
          if (iVar7 == 0xbe) {
            iVar7 = 8;
            goto LAB_00662ee7;
          }
        }
        if (*(int *)(this_00 + 0xb3) != 0) {
          thunk_FUN_0065f980((int)this_00);
        }
        *(undefined4 *)(this_00 + 0x9f) = 0;
        *(undefined4 *)(this_00 + 0xa3) = 0;
        *(undefined4 *)(this_00 + 0xa7) = 0;
        *(undefined4 *)(this_00 + 0x9b) = 0x12;
        if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
          *(undefined4 *)(this_00 + 0xb3) = 0x12;
        }
      }
    }
LAB_00662f34:
    if (uStack_8 != (uint *)0x0) {
      FUN_006ae110((byte *)uStack_8);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x69:
    puVar13 = *(uint **)((int)param_1 + 9);
    uVar20 = *puVar13;
    if ((uVar20 < 0x32) || (0x73 < uVar20)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      if (*(uint *)(pAStack_c + 0x1b5) != puVar13[2]) {
        sVar4 = *(short *)((int)puVar13 + 0x1a);
        sVar1 = (short)puVar13[6];
        sVar2 = *(short *)((int)puVar13 + 0x16);
        if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar1 < 0)) ||
            ((DAT_007fb242 <= sVar1 || (sVar4 < 0)))) || (DAT_007fb244 <= sVar4)) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar1 +
                             (int)sVar2) * 8);
        }
        if ((piVar15 != (int *)0x0) && (piVar15[9] == *(int *)(pAStack_c + 0x24))) {
          iVar7 = (**(code **)(*piVar15 + 0x2c))();
          if (iVar7 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          iVar7 = (**(code **)(*piVar15 + 0x2c))();
          if (iVar7 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = IStack_74.previous;
            return 0;
          }
          iVar7 = (**(code **)(*piVar15 + 0x2c))();
          if (iVar7 == 0x78) {
            iVar7 = *(int *)((int)piVar15 + 0x259);
          }
          else {
            iVar7 = 0;
          }
          if (iVar7 == **(int **)((int)param_1 + 9)) {
            iVar7 = (**(code **)(*piVar15 + 0x2c))();
            if (iVar7 == 0x78) {
              uVar20 = *(uint *)((int)piVar15 + 0x269);
            }
            else {
              uVar20 = 0xffffffff;
            }
            if (uVar20 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
              g_currentExceptionFrame = IStack_74.previous;
              return 0;
            }
          }
        }
LAB_00663325:
        *(undefined1 *)(param_1 + 2) = 0xff;
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
    }
    else {
      if ((uVar20 == 0) || (0x28 < uVar20)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (bVar21) {
        if (DAT_007fa174 == 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = (void *)thunk_FUN_0042b620((uint)CONCAT11((char)((ushort)puVar13[0xe] >> 8),
                                                              pAStack_c[0x24]),
                                               (uint)(ushort)puVar13[0xe],1);
        }
        if (pvVar12 == (void *)0x0) goto LAB_00663325;
        iVar7 = thunk_FUN_004c9430(pvVar12,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 2) = 1;
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
      }
    }
    break;
  case 0x6a:
    *(uint *)(pAStack_c + 0x97) = param_1[2];
    g_currentExceptionFrame = IStack_74.previous;
    return 0;
  case 0x6b:
    uVar19 = 0;
    iVar7 = *(int *)(pAStack_c + 0x20b);
    uVar20 = *(uint *)(iVar7 + 0xc);
    if (0 < (int)uVar20) {
      bVar21 = uVar20 != 0;
      while( true ) {
        if (bVar21) {
          iVar16 = *(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar16 = 0;
        }
        if (*(int *)(param_1[2] + 8) == *(int *)(iVar16 + 0x24)) break;
        uVar19 = uVar19 + 1;
        bVar21 = uVar19 < uVar20;
        if ((int)uVar20 <= (int)uVar19) {
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
      }
      *(undefined4 *)(iVar16 + 0x24) = 0;
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (pAStack_c[0x163] == (AiFltClassTy)0x1) {
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        if ((*(short *)(pAStack_c + 0x7b) == 0x10) &&
           (uVar6 = thunk_FUN_0065d9c0((int)pAStack_c,extraout_EDX),
           4 < CONCAT22(extraout_var,uVar6))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar22 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar22);
        }
      }
      else if (*(uint *)(*(int *)(pAStack_c + 0x22f) + 0xc) < 10) {
        if ((*(short *)(pAStack_c + 0x7b) == 0x10) &&
           (uVar6 = thunk_FUN_0065d9c0((int)pAStack_c,*(int *)(pAStack_c + 0x22f)),
           4 < CONCAT22(extraout_var_00,uVar6))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar22 = *(short **)((int)param_1 + 0xe);
          goto LAB_0066348c;
        }
      }
    }
    if ((this_00[0x122] == (AiFltClassTy)0x1) && ((char)param_1[3] != '\0')) {
      AppendPoint(this_00,*(short **)((int)param_1 + 0xe),5);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x6e:
    if (*(int *)(pAStack_c + 0x9b) != 0x19) {
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    sVar4 = *(short *)(pAStack_c + 0x39);
    if (0 < sVar4) {
      if (sVar4 < 3) {
        uVar20 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar4 == 3) {
        uVar20 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar20 = 0;
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar20) {
      iVar7 = *(int *)(pAStack_c + 0x116);
      if (iVar7 == 0xdd) {
        uVar20 = (-(uint)(sVar4 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar7 == 0xde) {
        uVar20 = -(uint)(sVar4 != 3) & 0x4f;
      }
      else if (iVar7 == 0xe0) {
        uVar20 = (sVar4 != 3) - 1 & 0x61;
      }
      else {
        uVar20 = 0;
      }
      if (*(uint *)((int)param_1 + 0xb) != uVar20) {
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
    }
    *(undefined4 *)(pAStack_c + 0x9b) = 0x19;
    *(undefined4 *)(pAStack_c + 0x9f) = 0;
    *(undefined4 *)(pAStack_c + 0xa3) = 0;
    *(undefined4 *)(pAStack_c + 0xa7) = 0;
    g_currentExceptionFrame = IStack_74.previous;
    return 0;
  case 0x70:
    if (((pAStack_c[0xff] != (AiFltClassTy)0x0) &&
        (uVar10 = thunk_FUN_006755e0(*(int *)param_1[3]),
        *(short *)(this_00 + 0x7b) == (short)uVar10)) &&
       (thunk_FUN_00660f70(this_00,(uint *)param_1[3],0xffff), *(int *)(param_1[3] + 0x24) != 0)) {
      param_1[2] = 1;
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x71:
    uVar3 = *(ushort *)(pAStack_c + 0x7b);
    if (uVar3 < 0x21) {
      if (uVar3 != 0x20) {
        if (uVar3 == 2) {
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
        if (uVar3 != 0x10) {
          thunk_FUN_0065e6c0((int)pAStack_c,extraout_EDX);
          g_currentExceptionFrame = IStack_74.previous;
          return 0;
        }
      }
    }
    else if (uVar3 != 0x8000) {
      thunk_FUN_0065e6c0((int)pAStack_c,extraout_EDX);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    thunk_FUN_0065fd00((int)pAStack_c,extraout_EDX);
    g_currentExceptionFrame = IStack_74.previous;
    return 0;
  case 0x73:
    iVar7 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar4 = *(short *)(pAStack_c + 0x39);
    if (sVar4 < 1) {
LAB_006636da:
      iVar16 = 0;
    }
    else if (sVar4 < 3) {
      iVar16 = 0x35;
    }
    else {
      if (sVar4 != 3) goto LAB_006636da;
      iVar16 = thunk_FUN_004e7fc0(iVar7);
      iVar7 = extraout_EDX_14;
    }
    puVar13 = thunk_FUN_0065e360((int)this_00,iVar7,iVar16);
    puStack_10 = puVar13;
    if (((puVar13 != (uint *)0x0) && (uVar20 = puVar13[3], uVar20 != 0)) &&
       (uVar19 = 0, 0 < (int)uVar20)) {
      bVar21 = uVar20 != 0;
      do {
        if (bVar21) {
          puVar13 = (uint *)puStack_10[7];
          puVar11 = (uint *)(puStack_10[2] * uVar19 + (int)puVar13);
        }
        else {
          puVar11 = (uint *)0x0;
        }
        uVar20 = *puVar11;
        if (DAT_007fa174 == 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)puVar13 >> 8),pAStack_c[0x24]),
                                               (uint)(ushort)uVar20,1);
          puVar13 = extraout_EDX_15;
        }
        if ((pvVar12 != (void *)0x0) &&
           (iVar7 = thunk_FUN_004e3790(pvVar12,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                       (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           puVar13 = extraout_EDX_16, iVar7 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = (ushort)uVar20;
          if (*(char *)((int)param_1 + 9) != '\0') {
            thunk_FUN_004c7cc0(pvVar12,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                               0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar19 = uVar19 + 1;
        bVar21 = uVar19 < puStack_10[3];
      } while ((int)uVar19 < (int)puStack_10[3]);
    }
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x74:
    if ((*(short *)(pAStack_c + 0x7b) == -0x8000) && (*(int *)(pAStack_c + 0x9b) == 0x78)) {
      *(undefined4 *)(pAStack_c + 0x9b) = 0x33;
      *(undefined4 *)(pAStack_c + 0x9f) = 0;
      *(undefined4 *)(pAStack_c + 0xa3) = 0;
      *(undefined4 *)(pAStack_c + 0xa7) = 0;
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x75:
    *(undefined1 *)(param_1 + 2) = 0;
    if (*(short *)(pAStack_c + 0x7b) != -0x8000) {
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    if (*(int *)(pAStack_c + 0x9b) == 0x34) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    uVar10 = extraout_EDX;
    if ((char)param_1[2] == '\0') {
      sVar4 = *(short *)(pAStack_c + 0x39);
      if (sVar4 < 1) {
LAB_0066380d:
        iVar7 = 0;
      }
      else if (sVar4 < 3) {
        iVar7 = 0x33;
      }
      else {
        if (sVar4 != 3) goto LAB_0066380d;
        iVar7 = 0x62;
      }
      puVar13 = thunk_FUN_0065fa60(iVar7,(sVar4 != 3) - 1 & 2,(short *)0x0);
      uVar10 = extraout_EDX_17;
      if (puVar13 != (uint *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_006ae110((byte *)puVar13);
        uVar10 = extraout_EDX_18;
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) && (*(int *)((int)param_1 + 10) != 0)) {
        thunk_FUN_0065d940(this_00,*(int *)((int)param_1 + 10),1);
        uVar10 = extraout_EDX_19;
      }
      uVar6 = thunk_FUN_0065d9c0((int)this_00,uVar10);
      *(undefined2 *)((int)param_1 + 0xe) = uVar6;
      g_currentExceptionFrame = IStack_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (*(short *)(pAStack_c + 0x7b) == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      puVar13 = thunk_FUN_0065da10((int)pAStack_c,extraout_EDX);
      if (puVar13 != (uint *)0x0) {
        uVar20 = 0;
        if (0 < (int)puVar13[3]) {
          bVar21 = puVar13[3] != 0;
          puVar11 = extraout_ECX;
          do {
            if (bVar21) {
              puVar11 = (uint *)puVar13[7];
              puVar14 = (uint *)(puVar13[2] * uVar20 + (int)puVar11);
            }
            else {
              puVar14 = (uint *)0x0;
            }
            uStack_28 = CONCAT22((short)((uint)puVar14 >> 0x10),(short)*puVar14);
            piVar15 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)puVar11 >> 8),pAStack_c[0x24])
                                                ,uStack_28,1);
            puVar11 = extraout_ECX_00;
            if (piVar15 != (int *)0x0) {
              iVar7 = (**(code **)(*piVar15 + 0x2c))();
              if ((iVar7 < 1) || (0x28 < iVar7)) {
                bVar21 = false;
              }
              else {
                bVar21 = true;
              }
              puVar11 = extraout_ECX_01;
              if (((bVar21) &&
                  ((puVar11 = param_1, *(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == (short)piVar15[0x207])))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar7 = (**(code **)(*piVar15 + 0x2c))(), *(int *)((int)param_1 + 0xb) == iVar7))
                 )) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&uStack_28);
                  puVar11 = extraout_ECX_02;
                }
              }
            }
            uVar20 = uVar20 + 1;
            bVar21 = uVar20 < puVar13[3];
          } while ((int)uVar20 < (int)puVar13[3]);
        }
        FUN_006ae110((byte *)puVar13);
        g_currentExceptionFrame = IStack_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = IStack_74.previous;
  return 0;
LAB_00662e52:
  pvStack_24 = (void *)((int)pvStack_24 + 1);
  bVar21 = pvStack_24 < (void *)uStack_8[3];
  if ((int)uStack_8[3] <= (int)pvStack_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

