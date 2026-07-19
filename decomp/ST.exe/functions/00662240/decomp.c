
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetAiMess */

int __thiscall AiFltClassTy::GetAiMess(AiFltClassTy *this,uint *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  Global_sub_004E80F0_param_2Enum GVar6;
  code *pcVar7;
  AiFltClassTy *this_00;
  undefined2 uVar8;
  int iVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar12;
  uint *puVar13;
  void *pvVar14;
  uint *puVar15;
  uint *puVar16;
  int *piVar17;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar18;
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
  undefined4 *puVar19;
  void *unaff_EDI;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  short *psVar24;
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
  iVar9 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar18 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x98a,0,iVar9,&DAT_007a4ccc,
                                s_AiFltClassTy__GetAiMess_007d2c60);
    if (iVar18 == 0) {
      RaiseInternalException(iVar9,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x98b);
      return iVar9;
    }
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  if (*param_1 < 100) {
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_c->field_0217,param_1);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  switch(*param_1) {
  case 100:
    if (((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
       (local_c->field_0152 != '\0')) {
      uVar4 = *(ushort *)((int)param_1 + 0xe);
      if ((((uint)uVar4 & local_c->field_0153) != 0) && (local_c->field_00B3 == 0)) {
        if (uVar4 == 1) {
          uVar22 = local_c->field_009B;
          if ((uVar22 < 0x8c) || (0x95 < uVar22)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar22 < 100) || (0x6d < uVar22)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
        }
        else {
          uVar22 = local_c->field_009B;
          if ((uVar22 < 0x8c) || (0x95 < uVar22)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar22 < 100) || (0x6d < uVar22)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar22 < 0x6e) || (0x77 < uVar22)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar22 < 0x82) || (0x8b < uVar22)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          if ((uVar22 == 0x23) || ((0xb < uVar22 && (uVar22 < 0x14)))) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          if (bVar23) {
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
        }
        if (0 < *(short *)&local_c->field_0x157) {
          uVar8 = thunk_FUN_0065d9c0((int)local_c,(uint)uVar4);
          if ((int)*(short *)&this_00->field_0x157 <= CONCAT22(extraout_var_02,uVar8)) {
            *(undefined1 *)(param_1 + 2) = 1;
            if (*(char *)((int)param_1 + 9) != '\0') {
              if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                pvVar14 = (void *)0x0;
              }
              else {
                pvVar14 = (void *)STAllPlayersC::GetObjPtr
                                            (DAT_007fa174,
                                             CONCAT31((int3)((uint)CONCAT22(extraout_var_02,uVar8)
                                                            >> 8),
                                                      *(undefined1 *)((int)param_1 + 0x12)),
                                             CONCAT22(extraout_var_03,(short)param_1[4]),CASE_1);
              }
              if (pvVar14 != (void *)0x0) {
                thunk_FUN_004162b0(pvVar14,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
                psVar24 = (short *)((int)&this_00->field_0195 + 2);
                *(short *)&this_00->field_0195 = local_2c[0] + -2;
                *psVar24 = local_30[0] + -2;
                psVar1 = (short *)((int)&this_00->field_0199 + 2);
                *(undefined2 *)&this_00->field_0199 = 0;
                *psVar1 = 5;
                *(undefined2 *)&this_00->field_019D = 3;
                *(undefined2 *)((int)&this_00->field_019D + 2) = 5;
                thunk_FUN_006756d0((short *)&this_00->field_0195,psVar24,psVar1,
                                   (short *)&this_00->field_019D);
              }
              this_00->field_009B = 0x8c;
              goto LAB_00663af0;
            }
          }
        }
      }
    }
    break;
  case 0x66:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        ((local_c->field_0187 != '\0' &&
         ((((uint)local_c->field_009B < 0x82 || (0x8b < (uint)local_c->field_009B)) &&
          (local_c->field_00B3 == 0)))))) &&
       (uVar8 = thunk_FUN_0065d9c0((int)local_c,extraout_EDX),
       (int)(short)this_00->field_018C <= CONCAT22(extraout_var_01,uVar8))) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar8;
      uVar12 = this_00->field_0188;
      *(undefined4 *)((int)param_1 + 0xf) = uVar12;
      iVar9 = thunk_FUN_0065e3b0((int)this_00,uVar12);
      *(int *)((int)param_1 + 0xb) = iVar9;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0187 != '\0')) && (local_c->field_00B3 == 0)) {
      pvVar14 = (void *)thunk_FUN_004357f0(local_c->field_0x24);
      if ((char)param_1[2] == '\0') {
        this_00->field_00FB = *(undefined4 *)((int)param_1 + 9);
        this_00->field_00F7 = *(undefined4 *)((int)param_1 + 0xd);
        this_00->field_00EF = (int)*(short *)((int)param_1 + 0x11);
        this_00->field_0195 = *(undefined4 *)((int)param_1 + 0x13);
        this_00->field_0199 = *(undefined4 *)((int)param_1 + 0x17);
        this_00->field_019D = *(undefined4 *)((int)param_1 + 0x1b);
        this_00->field_009B = 0x82;
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        if (pvVar14 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar14,'\0',this_00->field_00F7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < (uint)this_00->field_009B) && ((uint)this_00->field_009B < 0x8c)) {
        if (pvVar14 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar14,'\x01',this_00->field_00F7);
        }
        this_00->field_009B = 0;
LAB_00663af0:
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    break;
  case 0x68:
    if (local_c->field_0194 == '\0') {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
    if ((0x53 < GVar6) && (GVar6 < 0x5b)) {
      uVar22 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & uVar22) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar18 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
        iVar9 = extraout_EDX_00;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar18 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
          iVar9 = extraout_EDX_01;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar9 = 1;
          }
          else {
            iVar9 = 0;
          }
          if ((iVar9 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar18 = 1;
            }
            else {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
            iVar9 = extraout_EDX_02;
          }
        }
      }
      if (iVar18 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = thunk_FUN_0065e360((int)this_00,iVar9,0x53);
      if ((local_8 != (uint *)0x0) && (local_8[3] != 0)) {
        iVar9 = *(int *)((int)param_1 + 10);
        puVar15 = param_1;
        if (*(char *)(iVar9 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar9 + 0x16) < 0) || (*(short *)(iVar9 + 0x18) < 0)) ||
                 (*(short *)(iVar9 + 0x1a) < 0)) && (this_00->field_0284 != 0)) {
          *(undefined2 *)(iVar9 + 0x16) = *(undefined2 *)(this_00->field_0284 + 0x82);
          *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
               *(undefined2 *)(this_00->field_0284 + 0x84);
          puVar15 = *(uint **)((int)param_1 + 10);
          *(undefined2 *)((int)puVar15 + 0x1a) = *(undefined2 *)(this_00->field_0284 + 0x86);
        }
        local_10 = (uint *)0x0;
        if (0 < (int)local_8[3]) {
          bVar23 = local_8[3] != 0;
          do {
            puVar13 = local_10;
            if (bVar23) {
              puVar15 = (uint *)local_8[7];
              puVar16 = (uint *)(local_8[2] * (int)local_10 + (int)puVar15);
            }
            else {
              puVar16 = (uint *)0x0;
            }
            uVar22 = *puVar16;
            if (DAT_007fa174 == (STAllPlayersC *)0x0) {
              local_14 = (void *)0x0;
            }
            else {
              local_14 = (void *)STAllPlayersC::GetObjPtr
                                           (DAT_007fa174,
                                            CONCAT31((int3)((uint)puVar15 >> 8),this_00->field_0x24)
                                            ,(uint)(ushort)uVar22,CASE_1);
              puVar15 = extraout_EDX_03;
            }
            if (local_14 != (void *)0x0) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = (ushort)uVar22;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar19 = *(undefined4 **)((int)param_1 + 10);
                puVar20 = &this_00->field_01AD;
                for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar20 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = *(undefined2 *)puVar19;
                if ((this_00->field_01EB != '\0') &&
                   (iVar9 = thunk_FUN_004ae0b0((int)(short)this_00->field_01C3,
                                               (int)(short)this_00->field_01C5,
                                               (int)(short)this_00->field_01C7,this_00->field_01AD,
                                               *(int *)&this_00->field_0x24,(undefined4 *)0x0,
                                               (int *)0x0,(int *)0x0,0,(int *)0x0), iVar9 == 0)) {
                  local_18 = (int)(short)this_00->field_01C3;
                  local_1c = (int)(short)this_00->field_01C5;
                  local_20 = (int)(short)this_00->field_01C7;
                  iVar9 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,this_00->field_01AD,
                                             &local_18,&local_1c,&local_20,
                                             (int)(short)this_00->field_01C3,
                                             (int)(short)this_00->field_01C5,
                                             (int)(short)this_00->field_01C7,(int)local_14);
                  if (iVar9 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    puVar15 = extraout_EDX_04;
                    puVar13 = local_10;
                    goto LAB_006625c2;
                  }
                  this_00->field_01C3 = (undefined2)local_18;
                  this_00->field_01C5 = (undefined2)local_1c;
                  this_00->field_01C7 = (undefined2)local_20;
                }
                thunk_FUN_004cdfd0(local_14,this_00->field_01AD,(int)(short)this_00->field_01C3,
                                   (int)(short)this_00->field_01C5,(int)(short)this_00->field_01C7);
                if (this_00->field_00B3 != 0) {
                  thunk_FUN_0065f980((int)this_00);
                }
                this_00->field_009B = 0xc;
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0xc;
                }
              }
              break;
            }
LAB_006625c2:
            local_10 = (uint *)((int)puVar13 + 1);
            bVar23 = local_10 < (uint *)local_8[3];
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
    if ((GVar6 < 0x32) || (0x73 < GVar6)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      uVar22 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & uVar22) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar9 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar9 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
            iVar9 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
          }
          else {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar9 = 1;
            }
            else {
              iVar9 = 0;
            }
          }
        }
      }
      if (iVar9 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (sVar5 == 1) {
        iVar9 = 0xc;
      }
      else if (sVar5 == 2) {
        iVar9 = 0x18;
      }
      else if (sVar5 == 3) {
        iVar9 = 0x19;
      }
      else {
        iVar9 = 0;
      }
      uVar22 = thunk_FUN_0065da50(this_00,iVar9,-1);
      if ((int)uVar22 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar9 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar9 + 0x3e) == '\0') {
        if (this_00->field_009B == 0x23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_009B == 0x78) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_00B3 != 0) {
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
      if ((*(char *)(iVar9 + 0x3e) != '\0') &&
         ((((*(short *)(iVar9 + 0x16) < 0 || (*(short *)(iVar9 + 0x18) < 0)) ||
           (*(short *)(iVar9 + 0x1a) < 0)) && (this_00->field_0284 != 0)))) {
        *(undefined2 *)(iVar9 + 0x16) = *(undefined2 *)(this_00->field_0284 + 0x82);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
             *(undefined2 *)(this_00->field_0284 + 0x84);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x1a) =
             *(undefined2 *)(this_00->field_0284 + 0x86);
      }
      puVar19 = *(undefined4 **)((int)param_1 + 10);
      puVar20 = &this_00->field_01AD;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)puVar19;
      if ((this_00->field_01EB != '\0') &&
         (iVar9 = thunk_FUN_004ae0b0((int)(short)this_00->field_01C3,(int)(short)this_00->field_01C5
                                     ,(int)(short)this_00->field_01C7,this_00->field_01AD,
                                     *(int *)&this_00->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                     (int *)0x0,0,(int *)0x0), iVar9 == 0)) {
        local_14 = (void *)(int)(short)this_00->field_01C3;
        local_10 = (uint *)(int)(short)this_00->field_01C5;
        local_24 = (void *)(int)(short)this_00->field_01C7;
        iVar9 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,this_00->field_01AD,
                                   (int *)&local_14,(int *)&local_10,(int *)&local_24,
                                   (int)(short)this_00->field_01C3,(int)(short)this_00->field_01C5,
                                   (int)(short)this_00->field_01C7,0);
        if (iVar9 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          *(undefined2 *)((int)param_1 + 0xe) = 0;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        this_00->field_01C3 = local_14._0_2_;
        this_00->field_01C5 = local_10._0_2_;
        this_00->field_01C7 = local_24._0_2_;
      }
      if (this_00->field_00B3 != 0) {
        thunk_FUN_0065f980((int)this_00);
      }
      this_00->field_009B = 0x23;
      this_00->field_009F = 0;
      this_00->field_00A3 = 0;
      this_00->field_00A7 = 0;
      if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      this_00->field_00B3 = 0x23;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar6 == 0) || (0x28 < GVar6)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      uVar22 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & uVar22) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar18 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
        iVar9 = extraout_EDX_05;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar18 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
          iVar9 = extraout_EDX_06;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar9 = 1;
          }
          else {
            iVar9 = 0;
          }
          if ((iVar9 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar18 = 1;
            }
            else {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
            iVar9 = extraout_EDX_07;
          }
        }
      }
      if (iVar18 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (sVar5 == 1) {
        iVar18 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar5 == 2) {
        iVar18 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar5 == 3) {
        iVar18 = 0x5c;
      }
      else {
        iVar18 = 0;
      }
      local_8 = thunk_FUN_0065e360((int)this_00,iVar9,iVar18);
      if ((((local_8 != (uint *)0x0) && (uVar22 = local_8[3], uVar22 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar21 = 0, 0 < (int)uVar22)) {
        do {
          if (uVar21 < uVar22) {
            puVar10 = (ushort *)(local_8[2] * uVar21 + local_8[7]);
          }
          else {
            puVar10 = (ushort *)0x0;
          }
          uVar4 = *puVar10;
          if (DAT_007fa174 == (STAllPlayersC *)0x0) {
            local_24 = (void *)0x0;
          }
          else {
            local_24 = (void *)STAllPlayersC::GetObjPtr
                                         (DAT_007fa174,
                                          CONCAT31((int3)((uint)puVar10 >> 8),this_00->field_0x24),
                                          (uint)uVar4,CASE_1);
          }
          if ((local_24 != (void *)0x0) && (iVar9 = thunk_FUN_004c93e0(local_24,1), iVar9 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar4;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar19 = *(undefined4 **)((int)param_1 + 10);
              puVar20 = &this_00->field_01AD;
              for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar20 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar20 = puVar20 + 1;
              }
              *(undefined2 *)puVar20 = *(undefined2 *)puVar19;
              puVar15 = *(uint **)((int)param_1 + 10);
              thunk_FUN_004c7cc0(local_24,1,*puVar15,1,1,(uint)(ushort)puVar15[3],puVar15[2],
                                 (int)(char)puVar15[7],(char *)((int)puVar15 + 0x1d));
              if (this_00->field_00B3 != 0) {
                thunk_FUN_0065f980((int)this_00);
              }
              this_00->field_009F = 0;
              this_00->field_00A3 = 0;
              this_00->field_00A7 = 0;
              this_00->field_009B = 0xe;
              if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                this_00->field_00B3 = 0xe;
              }
            }
            break;
          }
          uVar21 = uVar21 + 1;
          uVar22 = local_8[3];
        } while ((int)uVar21 < (int)uVar22);
      }
      if (local_8 == (uint *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar6 == CASE_A3) || (GVar6 == CASE_A8)) || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)) {
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
    if (!bVar23) {
      if (((GVar6 == 0xdd) || (GVar6 == 0xde)) || ((GVar6 == 0xe2 || (GVar6 == 0xdc)))) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if (!bVar23) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar18 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar6);
        iVar9 = extraout_EDX_11;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          iVar18 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar6);
          iVar9 = extraout_EDX_12;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar9 = 1;
          }
          else {
            iVar9 = 0;
          }
          if ((iVar9 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
              iVar18 = 1;
            }
            else {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar6);
            iVar9 = extraout_EDX_13;
          }
        }
      }
      if (iVar18 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (0 < sVar5) {
        if (sVar5 < 3) {
          iVar18 = 0x52;
          goto LAB_00663076;
        }
        if (sVar5 == 3) {
          iVar18 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar18 = 0;
LAB_00663076:
      local_8 = thunk_FUN_0065e360((int)this_00,iVar9,iVar18);
      if ((((local_8 != (uint *)0x0) && (pvVar14 = (void *)local_8[3], pvVar14 != (void *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = (void *)0x0, puVar15 = param_1, 0 < (int)pvVar14)) {
        do {
          if (local_14 < pvVar14) {
            puVar11 = (undefined2 *)(local_8[2] * (int)local_14 + local_8[7]);
          }
          else {
            puVar11 = (undefined2 *)0x0;
          }
          uVar8 = *puVar11;
          puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),uVar8);
          if (DAT_007fa174 == (STAllPlayersC *)0x0) {
            pvVar14 = (void *)0x0;
          }
          else {
            pvVar14 = (void *)STAllPlayersC::GetObjPtr
                                        (DAT_007fa174,
                                         CONCAT31((int3)((uint)puVar11 >> 8),this_00->field_0x24),
                                         (uint)puVar15,CASE_1);
          }
          local_24 = pvVar14;
          if (pvVar14 != (void *)0x0) {
            iVar9 = thunk_FUN_004e1490((int)pvVar14);
            if ((iVar9 == 0) || (DAT_007fb244 + -1 <= *(int *)((int)pvVar14 + 0x5b8))) {
              bVar23 = false;
            }
            else {
              bVar23 = true;
            }
            if (bVar23) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(undefined2 *)((int)param_1 + 0xe) = uVar8;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar19 = *(undefined4 **)((int)param_1 + 10);
                puVar20 = &this_00->field_01AD;
                for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar20 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = *(undefined2 *)puVar19;
                thunk_FUN_004ebab0(local_24,**(int **)((int)param_1 + 10),
                                   (*(int **)((int)param_1 + 10))[0xb]);
                if (this_00->field_00B3 != 0) {
                  thunk_FUN_0065f980((int)this_00);
                }
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                this_00->field_009B = 0x12;
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0x12;
                }
              }
              break;
            }
          }
          local_14 = (void *)((int)local_14 + 1);
          pvVar14 = (void *)local_8[3];
        } while ((int)local_14 < (int)pvVar14);
      }
      if (local_8 == (uint *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      FUN_006ae110((byte *)local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
      iVar9 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar6);
      uVar22 = extraout_EDX_08;
    }
    else {
      if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        iVar9 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar6);
        uVar22 = extraout_EDX_09;
      }
      else {
        if ((GVar6 == CASE_A3) || (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))
           ) {
          uVar22 = 1;
        }
        else {
          uVar22 = 0;
        }
        if ((uVar22 == 0) || (DAT_007fa174 == (STAllPlayersC *)0x0)) {
          if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          if ((bVar23) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
            iVar9 = 1;
          }
          else {
            iVar9 = 0;
          }
        }
        else {
          iVar9 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar6);
          uVar22 = extraout_EDX_10;
        }
      }
    }
    if (iVar9 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar9 = **(int **)((int)param_1 + 10);
    if (iVar9 - 0xa3U < 0x1c) {
      uVar22 = (uint)*(byte *)(iVar9 + 0x663d51);
      switch(iVar9) {
      case 0xa3:
        iVar9 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar9 = 0x44;
        break;
      case 0xb2:
        iVar9 = 0x70;
        break;
      case 0xbe:
        iVar9 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar9 = 0;
    }
    local_8 = thunk_FUN_0065e360((int)this_00,uVar22,iVar9);
    if ((((local_8 != (uint *)0x0) && (uVar22 = local_8[3], uVar22 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = (void *)0x0, 0 < (int)uVar22)) {
      bVar23 = uVar22 != 0;
      puVar15 = param_1;
LAB_00662dbb:
      if (bVar23) {
        puVar11 = (undefined2 *)(local_8[2] * (int)local_24 + local_8[7]);
      }
      else {
        puVar11 = (undefined2 *)0x0;
      }
      uVar8 = *puVar11;
      puVar15 = (uint *)CONCAT22((short)((uint)puVar15 >> 0x10),uVar8);
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        local_10 = (uint *)0x0;
      }
      else {
        local_10 = (uint *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,
                                      CONCAT31((int3)((uint)puVar11 >> 8),this_00->field_0x24),
                                      (uint)puVar15,CASE_1);
      }
      if (local_10 == (uint *)0x0) goto cf_continue_loop_00662E52;
      switch(**(undefined4 **)((int)param_1 + 10)) {
      case 0xa3:
        iVar9 = thunk_FUN_004c7860(local_10,4,0,1,1,1);
        break;
      default:
        iVar9 = 0;
        break;
      case 0xa8:
        iVar9 = thunk_FUN_004c7860(local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar9 = 1;
        break;
      case 0xbe:
        iVar9 = thunk_FUN_004c7860(local_10,8,0,1,1,1);
      }
      if (iVar9 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = uVar8;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar19 = *(undefined4 **)((int)param_1 + 10);
        puVar20 = &this_00->field_01AD;
        for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar20 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = *(undefined2 *)puVar19;
        iVar9 = **(int **)((int)param_1 + 10);
        if (iVar9 == 0xa3) {
          iVar9 = 4;
LAB_00662ee7:
          thunk_FUN_004c7cc0(local_10,iVar9,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2],0xff,
                             (char *)0x0);
        }
        else {
          if (iVar9 == 0xa8) {
            iVar9 = 6;
            goto LAB_00662ee7;
          }
          if (iVar9 == 0xbe) {
            iVar9 = 8;
            goto LAB_00662ee7;
          }
        }
        if (this_00->field_00B3 != 0) {
          thunk_FUN_0065f980((int)this_00);
        }
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        this_00->field_009B = 0x12;
        if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
          this_00->field_00B3 = 0x12;
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
    puVar15 = *(uint **)((int)param_1 + 9);
    uVar22 = *puVar15;
    if ((uVar22 < 0x32) || (0x73 < uVar22)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      if (local_c->field_01B5 != puVar15[2]) {
        sVar5 = *(short *)((int)puVar15 + 0x1a);
        sVar2 = (short)puVar15[6];
        sVar3 = *(short *)((int)puVar15 + 0x16);
        if (((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) || (sVar2 < 0)) ||
            ((DAT_007fb242 <= sVar2 || (sVar5 < 0)))) || (DAT_007fb244 <= sVar5)) {
          piVar17 = (int *)0x0;
        }
        else {
          piVar17 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar2 +
                             (int)sVar3) * 8);
        }
        if ((piVar17 != (int *)0x0) && (piVar17[9] == *(int *)&local_c->field_0x24)) {
          iVar9 = (**(code **)(*piVar17 + 0x2c))();
          if (iVar9 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar9 = (**(code **)(*piVar17 + 0x2c))();
          if (iVar9 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar9 = (**(code **)(*piVar17 + 0x2c))();
          if (iVar9 == 0x78) {
            iVar9 = *(int *)((int)piVar17 + 0x259);
          }
          else {
            iVar9 = 0;
          }
          if (iVar9 == **(int **)((int)param_1 + 9)) {
            iVar9 = (**(code **)(*piVar17 + 0x2c))();
            if (iVar9 == 0x78) {
              uVar22 = *(uint *)((int)piVar17 + 0x269);
            }
            else {
              uVar22 = 0xffffffff;
            }
            if (uVar22 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
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
      if ((uVar22 == 0) || (0x28 < uVar22)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (bVar23) {
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = (void *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       (uint)CONCAT11((char)((ushort)puVar15[0xe] >> 8),
                                                      local_c->field_0x24),
                                       (uint)(ushort)puVar15[0xe],CASE_1);
        }
        if (pvVar14 == (void *)0x0) goto LAB_00663325;
        iVar9 = thunk_FUN_004c9430(pvVar14,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar9 == 0) {
          *(undefined1 *)(param_1 + 2) = 1;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    break;
  case 0x6a:
    local_c->field_0097 = param_1[2];
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x6b:
    uVar21 = 0;
    iVar9 = local_c->field_020B;
    uVar22 = *(uint *)(iVar9 + 0xc);
    if (0 < (int)uVar22) {
      bVar23 = uVar22 != 0;
      while( true ) {
        if (bVar23) {
          iVar18 = *(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar18 = 0;
        }
        if (*(int *)(param_1[2] + 8) == *(int *)(iVar18 + 0x24)) break;
        uVar21 = uVar21 + 1;
        bVar23 = uVar21 < uVar22;
        if ((int)uVar22 <= (int)uVar21) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined4 *)(iVar18 + 0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0163 == '\x01') {
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        if ((local_c->field_007B == 0x10) &&
           (uVar8 = thunk_FUN_0065d9c0((int)local_c,extraout_EDX), 4 < CONCAT22(extraout_var,uVar8))
           ) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar24 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar24);
        }
      }
      else if (*(uint *)(local_c->field_022F + 0xc) < 10) {
        if ((local_c->field_007B == 0x10) &&
           (uVar8 = thunk_FUN_0065d9c0((int)local_c,local_c->field_022F),
           4 < CONCAT22(extraout_var_00,uVar8))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar24 = *(short **)((int)param_1 + 0xe);
          goto LAB_0066348c;
        }
      }
    }
    if ((this_00->field_0122 == '\x01') && ((char)param_1[3] != '\0')) {
      AppendPoint(this_00,*(short **)((int)param_1 + 0xe),5);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6e:
    if (local_c->field_009B != 0x19) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    sVar5 = local_c->field_0039;
    if (0 < sVar5) {
      if (sVar5 < 3) {
        uVar22 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar5 == 3) {
        uVar22 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar22 = 0;
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar22) {
      iVar9 = local_c->field_0116;
      if (iVar9 == 0xdd) {
        uVar22 = (-(uint)(sVar5 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar9 == 0xde) {
        uVar22 = -(uint)(sVar5 != 3) & 0x4f;
      }
      else if (iVar9 == 0xe0) {
        uVar22 = (sVar5 != 3) - 1 & 0x61;
      }
      else {
        uVar22 = 0;
      }
      if (*(uint *)((int)param_1 + 0xb) != uVar22) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    local_c->field_009B = 0x19;
    local_c->field_009F = 0;
    local_c->field_00A3 = 0;
    local_c->field_00A7 = 0;
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x70:
    if (((local_c->field_00FF != '\0') &&
        (uVar12 = thunk_FUN_006755e0(*(int *)param_1[3]), this_00->field_007B == (short)uVar12)) &&
       (thunk_FUN_00660f70(this_00,(uint *)param_1[3],0xffff), *(int *)(param_1[3] + 0x24) != 0)) {
      param_1[2] = 1;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x71:
    uVar4 = local_c->field_007B;
    if (uVar4 < 0x21) {
      if (uVar4 != 0x20) {
        if (uVar4 == 2) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (uVar4 != 0x10) {
          thunk_FUN_0065e6c0((int)local_c,extraout_EDX);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    else if (uVar4 != 0x8000) {
      thunk_FUN_0065e6c0((int)local_c,extraout_EDX);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    thunk_FUN_0065fd00((int)local_c,extraout_EDX);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x73:
    iVar9 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar5 = local_c->field_0039;
    if (sVar5 < 1) {
LAB_006636da:
      iVar18 = 0;
    }
    else if (sVar5 < 3) {
      iVar18 = 0x35;
    }
    else {
      if (sVar5 != 3) goto LAB_006636da;
      iVar18 = thunk_FUN_004e7fc0(iVar9);
      iVar9 = extraout_EDX_14;
    }
    puVar15 = thunk_FUN_0065e360((int)this_00,iVar9,iVar18);
    local_10 = puVar15;
    if (((puVar15 != (uint *)0x0) && (uVar22 = puVar15[3], uVar22 != 0)) &&
       (uVar21 = 0, 0 < (int)uVar22)) {
      bVar23 = uVar22 != 0;
      do {
        if (bVar23) {
          puVar15 = (uint *)local_10[7];
          puVar13 = (uint *)(local_10[2] * uVar21 + (int)puVar15);
        }
        else {
          puVar13 = (uint *)0x0;
        }
        uVar22 = *puVar13;
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = (void *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)puVar15 >> 8),local_c->field_0x24),
                                       (uint)(ushort)uVar22,CASE_1);
          puVar15 = extraout_EDX_15;
        }
        if ((pvVar14 != (void *)0x0) &&
           (iVar9 = thunk_FUN_004e3790(pvVar14,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                       (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           puVar15 = extraout_EDX_16, iVar9 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = (ushort)uVar22;
          if (*(char *)((int)param_1 + 9) != '\0') {
            thunk_FUN_004c7cc0(pvVar14,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                               0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar21 = uVar21 + 1;
        bVar23 = uVar21 < local_10[3];
      } while ((int)uVar21 < (int)local_10[3]);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x74:
    if ((local_c->field_007B == -0x8000) && (local_c->field_009B == 0x78)) {
      local_c->field_009B = 0x33;
      local_c->field_009F = 0;
      local_c->field_00A3 = 0;
      local_c->field_00A7 = 0;
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
    if (local_c->field_009B == 0x34) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    uVar12 = extraout_EDX;
    if ((char)param_1[2] == '\0') {
      sVar5 = local_c->field_0039;
      if (sVar5 < 1) {
LAB_0066380d:
        iVar9 = 0;
      }
      else if (sVar5 < 3) {
        iVar9 = 0x33;
      }
      else {
        if (sVar5 != 3) goto LAB_0066380d;
        iVar9 = 0x62;
      }
      puVar15 = thunk_FUN_0065fa60(iVar9,(sVar5 != 3) - 1 & 2,(short *)0x0);
      uVar12 = extraout_EDX_17;
      if (puVar15 != (uint *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_006ae110((byte *)puVar15);
        uVar12 = extraout_EDX_18;
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) && (*(int *)((int)param_1 + 10) != 0)) {
        thunk_FUN_0065d940(this_00,*(int *)((int)param_1 + 10),1);
        uVar12 = extraout_EDX_19;
      }
      uVar8 = thunk_FUN_0065d9c0((int)this_00,uVar12);
      *(undefined2 *)((int)param_1 + 0xe) = uVar8;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      puVar15 = thunk_FUN_0065da10((int)local_c,extraout_EDX);
      if (puVar15 != (uint *)0x0) {
        uVar22 = 0;
        if (0 < (int)puVar15[3]) {
          bVar23 = puVar15[3] != 0;
          puVar13 = extraout_ECX;
          do {
            if (bVar23) {
              puVar13 = (uint *)puVar15[7];
              puVar16 = (uint *)(puVar15[2] * uVar22 + (int)puVar13);
            }
            else {
              puVar16 = (uint *)0x0;
            }
            local_28 = CONCAT22((short)((uint)puVar16 >> 0x10),(short)*puVar16);
            piVar17 = (int *)STAllPlayersC::GetObjPtr
                                       (DAT_007fa174,
                                        CONCAT31((int3)((uint)puVar13 >> 8),local_c->field_0x24),
                                        local_28,CASE_1);
            puVar13 = extraout_ECX_00;
            if (piVar17 != (int *)0x0) {
              iVar9 = (**(code **)(*piVar17 + 0x2c))();
              if ((iVar9 < 1) || (0x28 < iVar9)) {
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
              puVar13 = extraout_ECX_01;
              if (((bVar23) &&
                  ((puVar13 = param_1, *(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == (short)piVar17[0x207])))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar9 = (**(code **)(*piVar17 + 0x2c))(), *(int *)((int)param_1 + 0xb) == iVar9))
                 )) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&local_28);
                  puVar13 = extraout_ECX_02;
                }
              }
            }
            uVar22 = uVar22 + 1;
            bVar23 = uVar22 < puVar15[3];
          } while ((int)uVar22 < (int)puVar15[3]);
        }
        FUN_006ae110((byte *)puVar15);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (void *)((int)local_24 + 1);
  bVar23 = local_24 < (void *)local_8[3];
  if ((int)local_8[3] <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

