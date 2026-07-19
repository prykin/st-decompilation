
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetAiMess */

int __thiscall AiFltClassTy::GetAiMess(AiFltClassTy *this,uint *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  Global_sub_004E80F0_param_2Enum GVar5;
  code *pcVar6;
  AiFltClassTy *this_00;
  undefined2 uVar7;
  int iVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar11;
  uint *puVar12;
  void *pvVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar17;
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
  undefined4 *puVar18;
  void *unaff_EDI;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  short *psVar23;
  InternalExceptionFrame local_74;
  short local_30 [2];
  short local_2c [2];
  uint local_28;
  void *local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  uint *local_10;
  AiFltClassTy *local_c;
  undefined4 local_8;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar17 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x98a,0,iVar8,&DAT_007a4ccc,
                                s_AiFltClassTy__GetAiMess_007d2c60);
    if (iVar17 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x98b);
      return iVar8;
    }
    pcVar6 = (code *)swi(3);
    iVar8 = (*pcVar6)();
    return iVar8;
  }
  if (*param_1 < 100) {
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)&local_c->field_0x217,param_1);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  switch(*param_1) {
  case 100:
    if (((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
       (local_c->field_0x152 != '\0')) {
      uVar3 = *(ushort *)((int)param_1 + 0xe);
      if ((((uint)uVar3 & *(uint *)&local_c->field_0x153) != 0) &&
         (*(int *)&local_c->field_0xb3 == 0)) {
        if (uVar3 == 1) {
          uVar21 = *(uint *)&local_c->field_0x9b;
          if ((uVar21 < 0x8c) || (0x95 < uVar21)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar21 < 100) || (0x6d < uVar21)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
        }
        else {
          uVar21 = *(uint *)&local_c->field_0x9b;
          if ((uVar21 < 0x8c) || (0x95 < uVar21)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar21 < 100) || (0x6d < uVar21)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar21 < 0x6e) || (0x77 < uVar21)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar21 < 0x82) || (0x8b < uVar21)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar21 == 0x23) || ((0xb < uVar21 && (uVar21 < 0x14)))) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if (bVar22) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
        }
        if (0 < *(short *)&local_c->field_0x157) {
          uVar7 = thunk_FUN_0065d9c0((int)local_c,(uint)uVar3);
          if ((int)*(short *)&this_00->field_0x157 <= CONCAT22(extraout_var_02,uVar7)) {
            *(undefined1 *)(param_1 + 2) = 1;
            if (*(char *)((int)param_1 + 9) != '\0') {
              if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                pvVar13 = (void *)0x0;
              }
              else {
                pvVar13 = (void *)STAllPlayersC::GetObjPtr
                                            (DAT_007fa174,
                                             CONCAT31((int3)((uint)CONCAT22(extraout_var_02,uVar7)
                                                            >> 8),
                                                      *(undefined1 *)((int)param_1 + 0x12)),
                                             CONCAT22(extraout_var_03,(short)param_1[4]),CASE_1);
              }
              if (pvVar13 != (void *)0x0) {
                thunk_FUN_004162b0(pvVar13,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
                *(short *)&this_00->field_0x195 = local_2c[0] + -2;
                *(short *)&this_00->field_0x197 = local_30[0] + -2;
                *(undefined2 *)&this_00->field_0x199 = 0;
                *(undefined2 *)&this_00->field_0x19b = 5;
                *(undefined2 *)&this_00->field_0x19d = 3;
                *(undefined2 *)&this_00->field_0x19f = 5;
                thunk_FUN_006756d0((short *)&this_00->field_0x195,(short *)&this_00->field_0x197,
                                   (short *)&this_00->field_0x19b,(short *)&this_00->field_0x19d);
              }
              *(undefined4 *)&this_00->field_0x9b = 0x8c;
              goto LAB_00663af0;
            }
          }
        }
      }
    }
    break;
  case 0x66:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        ((local_c->field_0x187 != '\0' &&
         (((*(uint *)&local_c->field_0x9b < 0x82 || (0x8b < *(uint *)&local_c->field_0x9b)) &&
          (*(int *)&local_c->field_0xb3 == 0)))))) &&
       (uVar7 = thunk_FUN_0065d9c0((int)local_c,extraout_EDX),
       (int)*(short *)&this_00->field_0x18c <= CONCAT22(extraout_var_01,uVar7))) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar7;
      uVar11 = *(undefined4 *)&this_00->field_0x188;
      *(undefined4 *)((int)param_1 + 0xf) = uVar11;
      iVar8 = thunk_FUN_0065e3b0((int)this_00,uVar11);
      *(int *)((int)param_1 + 0xb) = iVar8;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0x187 != '\0')) && (*(int *)&local_c->field_0xb3 == 0)) {
      pvVar13 = (void *)thunk_FUN_004357f0(local_c->field_0x24);
      if ((char)param_1[2] == '\0') {
        *(undefined4 *)&this_00->field_0xfb = *(undefined4 *)((int)param_1 + 9);
        *(undefined4 *)&this_00->field_0xf7 = *(undefined4 *)((int)param_1 + 0xd);
        *(int *)&this_00->field_0xef = (int)*(short *)((int)param_1 + 0x11);
        *(undefined4 *)&this_00->field_0x195 = *(undefined4 *)((int)param_1 + 0x13);
        *(undefined4 *)&this_00->field_0x199 = *(undefined4 *)((int)param_1 + 0x17);
        *(undefined4 *)&this_00->field_0x19d = *(undefined4 *)((int)param_1 + 0x1b);
        *(undefined4 *)&this_00->field_0x9b = 0x82;
        *(undefined4 *)&this_00->field_0x9f = 0;
        *(undefined4 *)&this_00->field_0xa3 = 0;
        *(undefined4 *)&this_00->field_0xa7 = 0;
        if (pvVar13 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar13,'\0',*(uint *)&this_00->field_0xf7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < *(uint *)&this_00->field_0x9b) && (*(uint *)&this_00->field_0x9b < 0x8c)) {
        if (pvVar13 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar13,'\x01',*(uint *)&this_00->field_0xf7);
        }
        *(undefined4 *)&this_00->field_0x9b = 0;
LAB_00663af0:
        *(undefined4 *)&this_00->field_0x9f = 0;
        *(undefined4 *)&this_00->field_0xa3 = 0;
        *(undefined4 *)&this_00->field_0xa7 = 0;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    break;
  case 0x68:
    if (local_c->field_0x194 == '\0') {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
    if ((0x53 < GVar5) && (GVar5 < 0x5b)) {
      uVar21 = thunk_FUN_00674fb0(GVar5);
      if ((*(uint *)&this_00->field_0x25f & uVar21) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar17 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar5);
        iVar8 = extraout_EDX_00;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar17 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar5);
          iVar8 = extraout_EDX_01;
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
          if ((iVar8 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar22 = true;
            }
            else {
              bVar22 = false;
            }
            if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar17 = 1;
            }
            else {
              iVar17 = 0;
            }
          }
          else {
            iVar17 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar5);
            iVar8 = extraout_EDX_02;
          }
        }
      }
      if (iVar17 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = thunk_FUN_0065e360((int)this_00,iVar8,0x53);
      if ((local_8 != (uint *)0x0) && (local_8[3] != 0)) {
        iVar8 = *(int *)((int)param_1 + 10);
        puVar14 = param_1;
        if (*(char *)(iVar8 + 0x3e) == '\0') {
          if ((*(int *)&this_00->field_0x9b == 0xc) || (*(int *)&this_00->field_0xb3 != 0))
          goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar8 + 0x16) < 0) || (*(short *)(iVar8 + 0x18) < 0)) ||
                 (*(short *)(iVar8 + 0x1a) < 0)) && (this_00->field_0284 != 0)) {
          *(undefined2 *)(iVar8 + 0x16) = *(undefined2 *)(this_00->field_0284 + 0x82);
          *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
               *(undefined2 *)(this_00->field_0284 + 0x84);
          puVar14 = *(uint **)((int)param_1 + 10);
          *(undefined2 *)((int)puVar14 + 0x1a) = *(undefined2 *)(this_00->field_0284 + 0x86);
        }
        local_10 = (uint *)0x0;
        if (0 < (int)local_8[3]) {
          bVar22 = local_8[3] != 0;
          do {
            puVar12 = local_10;
            if (bVar22) {
              puVar14 = (uint *)local_8[7];
              puVar15 = (uint *)(local_8[2] * (int)local_10 + (int)puVar14);
            }
            else {
              puVar15 = (uint *)0x0;
            }
            uVar21 = *puVar15;
            if (DAT_007fa174 == (STAllPlayersC *)0x0) {
              local_14 = (void *)0x0;
            }
            else {
              local_14 = (void *)STAllPlayersC::GetObjPtr
                                           (DAT_007fa174,
                                            CONCAT31((int3)((uint)puVar14 >> 8),this_00->field_0x24)
                                            ,(uint)(ushort)uVar21,CASE_1);
              puVar14 = extraout_EDX_03;
            }
            if (local_14 != (void *)0x0) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = (ushort)uVar21;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar18 = *(undefined4 **)((int)param_1 + 10);
                puVar19 = (undefined4 *)&this_00->field_0x1ad;
                for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar19 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar19 = puVar19 + 1;
                }
                *(undefined2 *)puVar19 = *(undefined2 *)puVar18;
                if ((this_00->field_0x1eb != '\0') &&
                   (iVar8 = thunk_FUN_004ae0b0((int)*(short *)&this_00->field_0x1c3,
                                               (int)*(short *)&this_00->field_0x1c5,
                                               (int)*(short *)&this_00->field_0x1c7,
                                               *(Global_sub_004AE0B0_param_4Enum *)
                                                &this_00->field_0x1ad,*(int *)&this_00->field_0x24,
                                               (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,(int *)0x0)
                   , iVar8 == 0)) {
                  local_18 = (int)*(short *)&this_00->field_0x1c3;
                  local_1c = (int)*(short *)&this_00->field_0x1c5;
                  local_20 = (int)*(short *)&this_00->field_0x1c7;
                  iVar8 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,
                                             *(int *)&this_00->field_0x1ad,&local_18,&local_1c,
                                             &local_20,(int)*(short *)&this_00->field_0x1c3,
                                             (int)*(short *)&this_00->field_0x1c5,
                                             (int)*(short *)&this_00->field_0x1c7,(int)local_14);
                  if (iVar8 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    puVar14 = extraout_EDX_04;
                    puVar12 = local_10;
                    goto LAB_006625c2;
                  }
                  *(undefined2 *)&this_00->field_0x1c3 = (undefined2)local_18;
                  *(undefined2 *)&this_00->field_0x1c5 = (undefined2)local_1c;
                  *(undefined2 *)&this_00->field_0x1c7 = (undefined2)local_20;
                }
                thunk_FUN_004cdfd0(local_14,*(int *)&this_00->field_0x1ad,
                                   (int)*(short *)&this_00->field_0x1c3,
                                   (int)*(short *)&this_00->field_0x1c5,
                                   (int)*(short *)&this_00->field_0x1c7);
                if (*(int *)&this_00->field_0xb3 != 0) {
                  thunk_FUN_0065f980((int)this_00);
                }
                *(undefined4 *)&this_00->field_0x9b = 0xc;
                *(undefined4 *)&this_00->field_0x9f = 0;
                *(undefined4 *)&this_00->field_0xa3 = 0;
                *(undefined4 *)&this_00->field_0xa7 = 0;
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  *(undefined4 *)&this_00->field_0xb3 = 0xc;
                }
              }
              break;
            }
LAB_006625c2:
            local_10 = (uint *)((int)puVar12 + 1);
            bVar22 = local_10 < (uint *)local_8[3];
          } while ((int)local_10 < (int)local_8[3]);
        }
      }
LAB_0066263e:
      if (local_8 == (uint *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 < 0x32) || (0x73 < GVar5)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (bVar22) {
      uVar21 = thunk_FUN_00674fb0(GVar5);
      if ((*(uint *)&this_00->field_0x25f & uVar21) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar8 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar5);
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar8 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar5);
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
            iVar8 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar5);
          }
          else {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar22 = true;
            }
            else {
              bVar22 = false;
            }
            if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar8 = 1;
            }
            else {
              iVar8 = 0;
            }
          }
        }
      }
      if (iVar8 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = *(short *)&this_00->field_0x39;
      if (sVar4 == 1) {
        iVar8 = 0xc;
      }
      else if (sVar4 == 2) {
        iVar8 = 0x18;
      }
      else if (sVar4 == 3) {
        iVar8 = 0x19;
      }
      else {
        iVar8 = 0;
      }
      uVar21 = thunk_FUN_0065da50(this_00,iVar8,-1);
      if ((int)uVar21 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar8 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar8 + 0x3e) == '\0') {
        if (*(int *)&this_00->field_0x9b == 0x23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (*(int *)&this_00->field_0x9b == 0x78) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (*(int *)&this_00->field_0xb3 != 0) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
      if (*(char *)((int)param_1 + 9) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if ((*(char *)(iVar8 + 0x3e) != '\0') &&
         ((((*(short *)(iVar8 + 0x16) < 0 || (*(short *)(iVar8 + 0x18) < 0)) ||
           (*(short *)(iVar8 + 0x1a) < 0)) && (this_00->field_0284 != 0)))) {
        *(undefined2 *)(iVar8 + 0x16) = *(undefined2 *)(this_00->field_0284 + 0x82);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
             *(undefined2 *)(this_00->field_0284 + 0x84);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x1a) =
             *(undefined2 *)(this_00->field_0284 + 0x86);
      }
      puVar18 = *(undefined4 **)((int)param_1 + 10);
      puVar19 = (undefined4 *)&this_00->field_0x1ad;
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined2 *)puVar19 = *(undefined2 *)puVar18;
      if ((this_00->field_0x1eb != '\0') &&
         (iVar8 = thunk_FUN_004ae0b0((int)*(short *)&this_00->field_0x1c3,
                                     (int)*(short *)&this_00->field_0x1c5,
                                     (int)*(short *)&this_00->field_0x1c7,
                                     *(Global_sub_004AE0B0_param_4Enum *)&this_00->field_0x1ad,
                                     *(int *)&this_00->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                     (int *)0x0,0,(int *)0x0), iVar8 == 0)) {
        local_14 = (void *)(int)*(short *)&this_00->field_0x1c3;
        local_10 = (uint *)(int)*(short *)&this_00->field_0x1c5;
        local_24 = (void *)(int)*(short *)&this_00->field_0x1c7;
        iVar8 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,*(int *)&this_00->field_0x1ad,
                                   (int *)&local_14,(int *)&local_10,(int *)&local_24,
                                   (int)*(short *)&this_00->field_0x1c3,
                                   (int)*(short *)&this_00->field_0x1c5,
                                   (int)*(short *)&this_00->field_0x1c7,0);
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          *(undefined2 *)((int)param_1 + 0xe) = 0;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x1c3 = local_14._0_2_;
        *(undefined2 *)&this_00->field_0x1c5 = local_10._0_2_;
        *(undefined2 *)&this_00->field_0x1c7 = local_24._0_2_;
      }
      if (*(int *)&this_00->field_0xb3 != 0) {
        thunk_FUN_0065f980((int)this_00);
      }
      *(undefined4 *)&this_00->field_0x9b = 0x23;
      *(undefined4 *)&this_00->field_0x9f = 0;
      *(undefined4 *)&this_00->field_0xa3 = 0;
      *(undefined4 *)&this_00->field_0xa7 = 0;
      if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0xb3 = 0x23;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 == 0) || (0x28 < GVar5)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (bVar22) {
      uVar21 = thunk_FUN_00674fb0(GVar5);
      if ((*(uint *)&this_00->field_0x25f & uVar21) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar17 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar5);
        iVar8 = extraout_EDX_05;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar17 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar5);
          iVar8 = extraout_EDX_06;
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
          if ((iVar8 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar22 = true;
            }
            else {
              bVar22 = false;
            }
            if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar17 = 1;
            }
            else {
              iVar17 = 0;
            }
          }
          else {
            iVar17 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar5);
            iVar8 = extraout_EDX_07;
          }
        }
      }
      if (iVar17 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = *(short *)&this_00->field_0x39;
      if (sVar4 == 1) {
        iVar17 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar4 == 2) {
        iVar17 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar4 == 3) {
        iVar17 = 0x5c;
      }
      else {
        iVar17 = 0;
      }
      local_8 = thunk_FUN_0065e360((int)this_00,iVar8,iVar17);
      if ((((local_8 != (uint *)0x0) && (uVar21 = local_8[3], uVar21 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((*(int *)&this_00->field_0x9b != 0xe && (*(int *)&this_00->field_0xb3 == 0)))))) &&
         (uVar20 = 0, 0 < (int)uVar21)) {
        do {
          if (uVar20 < uVar21) {
            puVar9 = (ushort *)(local_8[2] * uVar20 + local_8[7]);
          }
          else {
            puVar9 = (ushort *)0x0;
          }
          uVar3 = *puVar9;
          if (DAT_007fa174 == (STAllPlayersC *)0x0) {
            local_24 = (void *)0x0;
          }
          else {
            local_24 = (void *)STAllPlayersC::GetObjPtr
                                         (DAT_007fa174,
                                          CONCAT31((int3)((uint)puVar9 >> 8),this_00->field_0x24),
                                          (uint)uVar3,CASE_1);
          }
          if ((local_24 != (void *)0x0) && (iVar8 = thunk_FUN_004c93e0(local_24,1), iVar8 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar3;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar18 = *(undefined4 **)((int)param_1 + 10);
              puVar19 = (undefined4 *)&this_00->field_0x1ad;
              for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar19 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar19 = puVar19 + 1;
              }
              *(undefined2 *)puVar19 = *(undefined2 *)puVar18;
              puVar14 = *(uint **)((int)param_1 + 10);
              thunk_FUN_004c7cc0(local_24,1,*puVar14,1,1,(uint)(ushort)puVar14[3],puVar14[2],
                                 (int)(char)puVar14[7],(char *)((int)puVar14 + 0x1d));
              if (*(int *)&this_00->field_0xb3 != 0) {
                thunk_FUN_0065f980((int)this_00);
              }
              *(undefined4 *)&this_00->field_0x9f = 0;
              *(undefined4 *)&this_00->field_0xa3 = 0;
              *(undefined4 *)&this_00->field_0xa7 = 0;
              *(undefined4 *)&this_00->field_0x9b = 0xe;
              if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                *(undefined4 *)&this_00->field_0xb3 = 0xe;
              }
            }
            break;
          }
          uVar20 = uVar20 + 1;
          uVar21 = local_8[3];
        } while ((int)uVar20 < (int)uVar21);
      }
      if (local_8 == (uint *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar5 == CASE_A3) || (GVar5 == CASE_A8)) || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if (!bVar22) {
      if (((GVar5 == 0xdd) || (GVar5 == 0xde)) || ((GVar5 == 0xe2 || (GVar5 == 0xdc)))) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      if (!bVar22) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar17 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar5);
        iVar8 = extraout_EDX_11;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar17 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar5);
          iVar8 = extraout_EDX_12;
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
          if ((iVar8 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar22 = true;
            }
            else {
              bVar22 = false;
            }
            if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar17 = 1;
            }
            else {
              iVar17 = 0;
            }
          }
          else {
            iVar17 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar5);
            iVar8 = extraout_EDX_13;
          }
        }
      }
      if (iVar17 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = *(short *)&this_00->field_0x39;
      if (0 < sVar4) {
        if (sVar4 < 3) {
          iVar17 = 0x52;
          goto LAB_00663076;
        }
        if (sVar4 == 3) {
          iVar17 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar17 = 0;
LAB_00663076:
      local_8 = thunk_FUN_0065e360((int)this_00,iVar8,iVar17);
      if ((((local_8 != (uint *)0x0) && (pvVar13 = (void *)local_8[3], pvVar13 != (void *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((*(int *)&this_00->field_0x9b != 0x10 && (*(int *)&this_00->field_0xb3 == 0)))))) &&
         (local_14 = (void *)0x0, puVar14 = param_1, 0 < (int)pvVar13)) {
        do {
          if (local_14 < pvVar13) {
            puVar10 = (undefined2 *)(local_8[2] * (int)local_14 + local_8[7]);
          }
          else {
            puVar10 = (undefined2 *)0x0;
          }
          uVar7 = *puVar10;
          puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar7);
          if (DAT_007fa174 == (STAllPlayersC *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (void *)STAllPlayersC::GetObjPtr
                                        (DAT_007fa174,
                                         CONCAT31((int3)((uint)puVar10 >> 8),this_00->field_0x24),
                                         (uint)puVar14,CASE_1);
          }
          local_24 = pvVar13;
          if (pvVar13 != (void *)0x0) {
            iVar8 = thunk_FUN_004e1490((int)pvVar13);
            if ((iVar8 == 0) || (DAT_007fb244 + -1 <= *(int *)((int)pvVar13 + 0x5b8))) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
            if (bVar22) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(undefined2 *)((int)param_1 + 0xe) = uVar7;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar18 = *(undefined4 **)((int)param_1 + 10);
                puVar19 = (undefined4 *)&this_00->field_0x1ad;
                for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar19 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar19 = puVar19 + 1;
                }
                *(undefined2 *)puVar19 = *(undefined2 *)puVar18;
                thunk_FUN_004ebab0(local_24,**(int **)((int)param_1 + 10),
                                   (*(int **)((int)param_1 + 10))[0xb]);
                if (*(int *)&this_00->field_0xb3 != 0) {
                  thunk_FUN_0065f980((int)this_00);
                }
                *(undefined4 *)&this_00->field_0x9f = 0;
                *(undefined4 *)&this_00->field_0xa3 = 0;
                *(undefined4 *)&this_00->field_0xa7 = 0;
                *(undefined4 *)&this_00->field_0x9b = 0x12;
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  *(undefined4 *)&this_00->field_0xb3 = 0x12;
                }
              }
              break;
            }
          }
          local_14 = (void *)((int)local_14 + 1);
          pvVar13 = (void *)local_8[3];
        } while ((int)local_14 < (int)pvVar13);
      }
      if (local_8 == (uint *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
      iVar8 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar5);
      uVar21 = extraout_EDX_08;
    }
    else {
      if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar8 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar5);
        uVar21 = extraout_EDX_09;
      }
      else {
        if ((GVar5 == CASE_A3) || (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))
           ) {
          uVar21 = 1;
        }
        else {
          uVar21 = 0;
        }
        if ((uVar21 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
          if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if ((bVar22) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
        }
        else {
          iVar8 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar5);
          uVar21 = extraout_EDX_10;
        }
      }
    }
    if (iVar8 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar8 = **(int **)((int)param_1 + 10);
    if (iVar8 - 0xa3U < 0x1c) {
      uVar21 = (uint)*(byte *)(iVar8 + 0x663d51);
      switch(iVar8) {
      case 0xa3:
        iVar8 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar8 = 0x44;
        break;
      case 0xb2:
        iVar8 = 0x70;
        break;
      case 0xbe:
        iVar8 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar8 = 0;
    }
    local_8 = thunk_FUN_0065e360((int)this_00,uVar21,iVar8);
    if ((((local_8 != (uint *)0x0) && (uVar21 = local_8[3], uVar21 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((*(int *)&this_00->field_0x9b != 0x12 && (*(int *)&this_00->field_0xb3 == 0)))))) &&
       (local_24 = (void *)0x0, 0 < (int)uVar21)) {
      bVar22 = uVar21 != 0;
      puVar14 = param_1;
LAB_00662dbb:
      if (bVar22) {
        puVar10 = (undefined2 *)(local_8[2] * (int)local_24 + local_8[7]);
      }
      else {
        puVar10 = (undefined2 *)0x0;
      }
      uVar7 = *puVar10;
      puVar14 = (uint *)CONCAT22((short)((uint)puVar14 >> 0x10),uVar7);
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        local_10 = (uint *)0x0;
      }
      else {
        local_10 = (uint *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,
                                      CONCAT31((int3)((uint)puVar10 >> 8),this_00->field_0x24),
                                      (uint)puVar14,CASE_1);
      }
      if (local_10 == (uint *)0x0) goto LAB_00662e52;
      switch(**(undefined4 **)((int)param_1 + 10)) {
      case 0xa3:
        iVar8 = thunk_FUN_004c7860(local_10,4,0,1,1,1);
        break;
      default:
        iVar8 = 0;
        break;
      case 0xa8:
        iVar8 = thunk_FUN_004c7860(local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar8 = 1;
        break;
      case 0xbe:
        iVar8 = thunk_FUN_004c7860(local_10,8,0,1,1,1);
      }
      if (iVar8 == 0) goto LAB_00662e52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = uVar7;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar18 = *(undefined4 **)((int)param_1 + 10);
        puVar19 = (undefined4 *)&this_00->field_0x1ad;
        for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        *(undefined2 *)puVar19 = *(undefined2 *)puVar18;
        iVar8 = **(int **)((int)param_1 + 10);
        if (iVar8 == 0xa3) {
          iVar8 = 4;
LAB_00662ee7:
          thunk_FUN_004c7cc0(local_10,iVar8,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2],0xff,
                             (char *)0x0);
        }
        else {
          if (iVar8 == 0xa8) {
            iVar8 = 6;
            goto LAB_00662ee7;
          }
          if (iVar8 == 0xbe) {
            iVar8 = 8;
            goto LAB_00662ee7;
          }
        }
        if (*(int *)&this_00->field_0xb3 != 0) {
          thunk_FUN_0065f980((int)this_00);
        }
        *(undefined4 *)&this_00->field_0x9f = 0;
        *(undefined4 *)&this_00->field_0xa3 = 0;
        *(undefined4 *)&this_00->field_0xa7 = 0;
        *(undefined4 *)&this_00->field_0x9b = 0x12;
        if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
          *(undefined4 *)&this_00->field_0xb3 = 0x12;
        }
      }
    }
LAB_00662f34:
    if (local_8 != (uint *)0x0) {
      FUN_006ae110((byte *)local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x69:
    puVar14 = *(uint **)((int)param_1 + 9);
    uVar21 = *puVar14;
    if ((uVar21 < 0x32) || (0x73 < uVar21)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (bVar22) {
      if (*(uint *)&local_c->field_0x1b5 != puVar14[2]) {
        sVar4 = *(short *)((int)puVar14 + 0x1a);
        sVar1 = (short)puVar14[6];
        sVar2 = *(short *)((int)puVar14 + 0x16);
        if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar1 < 0)) ||
            ((DAT_007fb242 <= sVar1 || (sVar4 < 0)))) || (DAT_007fb244 <= sVar4)) {
          piVar16 = (int *)0x0;
        }
        else {
          piVar16 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar1 +
                             (int)sVar2) * 8);
        }
        if ((piVar16 != (int *)0x0) && (piVar16[9] == *(int *)&local_c->field_0x24)) {
          iVar8 = (**(code **)(*piVar16 + 0x2c))();
          if (iVar8 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar8 = (**(code **)(*piVar16 + 0x2c))();
          if (iVar8 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar8 = (**(code **)(*piVar16 + 0x2c))();
          if (iVar8 == 0x78) {
            iVar8 = *(int *)((int)piVar16 + 0x259);
          }
          else {
            iVar8 = 0;
          }
          if (iVar8 == **(int **)((int)param_1 + 9)) {
            iVar8 = (**(code **)(*piVar16 + 0x2c))();
            if (iVar8 == 0x78) {
              uVar21 = *(uint *)((int)piVar16 + 0x269);
            }
            else {
              uVar21 = 0xffffffff;
            }
            if (uVar21 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
              g_currentExceptionFrame = local_74.previous;
              return 0;
            }
          }
        }
LAB_00663325:
        *(undefined1 *)(param_1 + 2) = 0xff;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    else {
      if ((uVar21 == 0) || (0x28 < uVar21)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if (bVar22) {
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = (void *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       (uint)CONCAT11((char)((ushort)puVar14[0xe] >> 8),
                                                      local_c->field_0x24),
                                       (uint)(ushort)puVar14[0xe],CASE_1);
        }
        if (pvVar13 == (void *)0x0) goto LAB_00663325;
        iVar8 = thunk_FUN_004c9430(pvVar13,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 2) = 1;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    break;
  case 0x6a:
    *(uint *)&local_c->field_0x97 = param_1[2];
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x6b:
    uVar20 = 0;
    iVar8 = *(int *)&local_c->field_0x20b;
    uVar21 = *(uint *)(iVar8 + 0xc);
    if (0 < (int)uVar21) {
      bVar22 = uVar21 != 0;
      while( true ) {
        if (bVar22) {
          iVar17 = *(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar17 = 0;
        }
        if (*(int *)(param_1[2] + 8) == *(int *)(iVar17 + 0x24)) break;
        uVar20 = uVar20 + 1;
        bVar22 = uVar20 < uVar21;
        if ((int)uVar21 <= (int)uVar20) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined4 *)(iVar17 + 0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0x163 == '\x01') {
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        if ((local_c->field_007B == 0x10) &&
           (uVar7 = thunk_FUN_0065d9c0((int)local_c,extraout_EDX), 4 < CONCAT22(extraout_var,uVar7))
           ) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar23 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar23);
        }
      }
      else if (*(uint *)(*(int *)&local_c->field_0x22f + 0xc) < 10) {
        if ((local_c->field_007B == 0x10) &&
           (uVar7 = thunk_FUN_0065d9c0((int)local_c,*(int *)&local_c->field_0x22f),
           4 < CONCAT22(extraout_var_00,uVar7))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar23 = *(short **)((int)param_1 + 0xe);
          goto LAB_0066348c;
        }
      }
    }
    if ((this_00->field_0x122 == '\x01') && ((char)param_1[3] != '\0')) {
      AppendPoint(this_00,*(short **)((int)param_1 + 0xe),5);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6e:
    if (*(int *)&local_c->field_0x9b != 0x19) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    sVar4 = *(short *)&local_c->field_0x39;
    if (0 < sVar4) {
      if (sVar4 < 3) {
        uVar21 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar4 == 3) {
        uVar21 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar21 = 0;
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar21) {
      iVar8 = *(int *)&local_c->field_0x116;
      if (iVar8 == 0xdd) {
        uVar21 = (-(uint)(sVar4 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar8 == 0xde) {
        uVar21 = -(uint)(sVar4 != 3) & 0x4f;
      }
      else if (iVar8 == 0xe0) {
        uVar21 = (sVar4 != 3) - 1 & 0x61;
      }
      else {
        uVar21 = 0;
      }
      if (*(uint *)((int)param_1 + 0xb) != uVar21) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    *(undefined4 *)&local_c->field_0x9b = 0x19;
    *(undefined4 *)&local_c->field_0x9f = 0;
    *(undefined4 *)&local_c->field_0xa3 = 0;
    *(undefined4 *)&local_c->field_0xa7 = 0;
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x70:
    if (((local_c->field_0xff != '\0') &&
        (uVar11 = thunk_FUN_006755e0(*(int *)param_1[3]), this_00->field_007B == (short)uVar11)) &&
       (thunk_FUN_00660f70(this_00,(uint *)param_1[3],0xffff), *(int *)(param_1[3] + 0x24) != 0)) {
      param_1[2] = 1;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x71:
    uVar3 = local_c->field_007B;
    if (uVar3 < 0x21) {
      if (uVar3 != 0x20) {
        if (uVar3 == 2) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (uVar3 != 0x10) {
          thunk_FUN_0065e6c0((int)local_c,extraout_EDX);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    else if (uVar3 != 0x8000) {
      thunk_FUN_0065e6c0((int)local_c,extraout_EDX);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    thunk_FUN_0065fd00((int)local_c,extraout_EDX);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x73:
    iVar8 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar4 = *(short *)&local_c->field_0x39;
    if (sVar4 < 1) {
LAB_006636da:
      iVar17 = 0;
    }
    else if (sVar4 < 3) {
      iVar17 = 0x35;
    }
    else {
      if (sVar4 != 3) goto LAB_006636da;
      iVar17 = thunk_FUN_004e7fc0(iVar8);
      iVar8 = extraout_EDX_14;
    }
    puVar14 = thunk_FUN_0065e360((int)this_00,iVar8,iVar17);
    local_10 = puVar14;
    if (((puVar14 != (uint *)0x0) && (uVar21 = puVar14[3], uVar21 != 0)) &&
       (uVar20 = 0, 0 < (int)uVar21)) {
      bVar22 = uVar21 != 0;
      do {
        if (bVar22) {
          puVar14 = (uint *)local_10[7];
          puVar12 = (uint *)(local_10[2] * uVar20 + (int)puVar14);
        }
        else {
          puVar12 = (uint *)0x0;
        }
        uVar21 = *puVar12;
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = (void *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)puVar14 >> 8),local_c->field_0x24),
                                       (uint)(ushort)uVar21,CASE_1);
          puVar14 = extraout_EDX_15;
        }
        if ((pvVar13 != (void *)0x0) &&
           (iVar8 = thunk_FUN_004e3790(pvVar13,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                       (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           puVar14 = extraout_EDX_16, iVar8 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = (ushort)uVar21;
          if (*(char *)((int)param_1 + 9) != '\0') {
            thunk_FUN_004c7cc0(pvVar13,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                               0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar20 = uVar20 + 1;
        bVar22 = uVar20 < local_10[3];
      } while ((int)uVar20 < (int)local_10[3]);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x74:
    if ((local_c->field_007B == -0x8000) && (*(int *)&local_c->field_0x9b == 0x78)) {
      *(undefined4 *)&local_c->field_0x9b = 0x33;
      *(undefined4 *)&local_c->field_0x9f = 0;
      *(undefined4 *)&local_c->field_0xa3 = 0;
      *(undefined4 *)&local_c->field_0xa7 = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x75:
    *(undefined1 *)(param_1 + 2) = 0;
    if (local_c->field_007B != -0x8000) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (*(int *)&local_c->field_0x9b == 0x34) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    uVar11 = extraout_EDX;
    if ((char)param_1[2] == '\0') {
      sVar4 = *(short *)&local_c->field_0x39;
      if (sVar4 < 1) {
LAB_0066380d:
        iVar8 = 0;
      }
      else if (sVar4 < 3) {
        iVar8 = 0x33;
      }
      else {
        if (sVar4 != 3) goto LAB_0066380d;
        iVar8 = 0x62;
      }
      puVar14 = thunk_FUN_0065fa60(iVar8,(sVar4 != 3) - 1 & 2,(short *)0x0);
      uVar11 = extraout_EDX_17;
      if (puVar14 != (uint *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_006ae110((byte *)puVar14);
        uVar11 = extraout_EDX_18;
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) && (*(int *)((int)param_1 + 10) != 0)) {
        thunk_FUN_0065d940(this_00,*(int *)((int)param_1 + 10),1);
        uVar11 = extraout_EDX_19;
      }
      uVar7 = thunk_FUN_0065d9c0((int)this_00,uVar11);
      *(undefined2 *)((int)param_1 + 0xe) = uVar7;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      puVar14 = thunk_FUN_0065da10((int)local_c,extraout_EDX);
      if (puVar14 != (uint *)0x0) {
        uVar21 = 0;
        if (0 < (int)puVar14[3]) {
          bVar22 = puVar14[3] != 0;
          puVar12 = extraout_ECX;
          do {
            if (bVar22) {
              puVar12 = (uint *)puVar14[7];
              puVar15 = (uint *)(puVar14[2] * uVar21 + (int)puVar12);
            }
            else {
              puVar15 = (uint *)0x0;
            }
            local_28 = CONCAT22((short)((uint)puVar15 >> 0x10),(short)*puVar15);
            piVar16 = (int *)STAllPlayersC::GetObjPtr
                                       (DAT_007fa174,
                                        CONCAT31((int3)((uint)puVar12 >> 8),local_c->field_0x24),
                                        local_28,CASE_1);
            puVar12 = extraout_ECX_00;
            if (piVar16 != (int *)0x0) {
              iVar8 = (**(code **)(*piVar16 + 0x2c))();
              if ((iVar8 < 1) || (0x28 < iVar8)) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              puVar12 = extraout_ECX_01;
              if (((bVar22) &&
                  ((puVar12 = param_1, *(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == (short)piVar16[0x207])))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar8 = (**(code **)(*piVar16 + 0x2c))(), *(int *)((int)param_1 + 0xb) == iVar8))
                 )) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&local_28);
                  puVar12 = extraout_ECX_02;
                }
              }
            }
            uVar21 = uVar21 + 1;
            bVar22 = uVar21 < puVar14[3];
          } while ((int)uVar21 < (int)puVar14[3]);
        }
        FUN_006ae110((byte *)puVar14);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
LAB_00662e52:
  local_24 = (void *)((int)local_24 + 1);
  bVar22 = local_24 < (void *)local_8[3];
  if ((int)local_8[3] <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

