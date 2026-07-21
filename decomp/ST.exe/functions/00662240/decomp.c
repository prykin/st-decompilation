
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
  dword dVar7;
  undefined4 uVar8;
  code *pcVar9;
  AiFltClassTy *this_00;
  undefined2 uVar10;
  int iVar11;
  IMAGE_DOS_HEADER *pIVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  void *pvVar15;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  dword *pdVar16;
  DArrayTy *pDVar17;
  uint *puVar18;
  STGameObjC *pSVar19;
  undefined2 extraout_var_01;
  AiPlrClassTy *this_01;
  undefined2 extraout_var_02;
  STFishC *this_02;
  int iVar20;
  uint uVar21;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *extraout_ECX_02;
  uint *puVar22;
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
  DArrayTy *extraout_EDX_15;
  DArrayTy *extraout_EDX_16;
  undefined2 extraout_var_03;
  undefined4 unaff_ESI;
  undefined4 *puVar23;
  STWorldObject *this_03;
  void *unaff_EDI;
  undefined4 *puVar24;
  uint uVar25;
  bool bVar26;
  short *psVar27;
  InternalExceptionFrame local_74;
  short local_30 [2];
  short local_2c [2];
  uint local_28;
  STGameObjC *local_24;
  int local_20;
  int local_1c;
  int local_18;
  STGameObjC *local_14;
  DArrayTy *local_10;
  AiFltClassTy *local_c;
  DArrayTy *local_8;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar11 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar20 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x98a,0,iVar11,&DAT_007a4ccc,
                                s_AiFltClassTy__GetAiMess_007d2c60);
    if (iVar20 == 0) {
      RaiseInternalException(iVar11,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x98b);
      return iVar11;
    }
    pcVar9 = (code *)swi(3);
    iVar11 = (*pcVar9)();
    return iVar11;
  }
  if (*param_1 < 100) {
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_c->field_0217,param_1);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  switch(*param_1) {
  case 100:
    if (((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
       ((local_c->field_0152 != '\0' &&
        ((((uint)*(ushort *)((int)param_1 + 0xe) & local_c->field_0153) != 0 &&
         (local_c->field_00B3 == 0)))))) {
      if (*(ushort *)((int)param_1 + 0xe) == 1) {
        uVar25 = local_c->field_009B;
        if ((uVar25 < 0x8c) || (0x95 < uVar25)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar25 < 100) || (0x6d < uVar25)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        uVar25 = local_c->field_009B;
        if ((uVar25 < 0x8c) || (0x95 < uVar25)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar25 < 100) || (0x6d < uVar25)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar25 < 0x6e) || (0x77 < uVar25)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar25 < 0x82) || (0x8b < uVar25)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar25 == 0x23) || ((0xb < uVar25 && (uVar25 < 0x14)))) {
          bVar26 = true;
        }
        else {
          bVar26 = false;
        }
        if (bVar26) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      if (0 < *(short *)&local_c->field_0x157) {
        uVar10 = sub_0065D9C0(local_c);
        if ((int)*(short *)&this_00->field_0x157 <= CONCAT22(extraout_var_02,uVar10)) {
          *(undefined1 *)(param_1 + 2) = 1;
          if (*(char *)((int)param_1 + 9) != '\0') {
            if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
              this_02 = (STFishC *)0x0;
            }
            else {
              this_02 = (STFishC *)
                        STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,
                                   CONCAT31((int3)((uint)CONCAT22(extraout_var_02,uVar10) >> 8),
                                            *(undefined1 *)((int)param_1 + 0x12)),
                                   CONCAT22(extraout_var_03,(short)param_1[4]),CASE_1);
            }
            if (this_02 != (STFishC *)0x0) {
              STFishC::sub_004162B0(this_02,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
              psVar27 = (short *)((int)&this_00->field_0195 + 2);
              *(short *)&this_00->field_0195 = local_2c[0] + -2;
              *psVar27 = local_30[0] + -2;
              psVar1 = (short *)((int)&this_00->field_0199 + 2);
              *(undefined2 *)&this_00->field_0199 = 0;
              *psVar1 = 5;
              *(undefined2 *)&this_00->field_019D = 3;
              *(undefined2 *)((int)&this_00->field_019D + 2) = 5;
              thunk_FUN_006756d0((short *)&this_00->field_0195,psVar27,psVar1,
                                 (short *)&this_00->field_019D);
            }
            this_00->field_009B = 0x8c;
            goto LAB_00663af0;
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
       (uVar10 = sub_0065D9C0(local_c), (int)this_00->field_018C <= CONCAT22(extraout_var_01,uVar10)
       )) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar10;
      uVar8 = this_00->field_0188;
      *(undefined4 *)((int)param_1 + 0xf) = uVar8;
      iVar11 = thunk_FUN_0065e3b0((AnonShape_0065DA10_8B0AA883 *)this_00,uVar8);
      *(int *)((int)param_1 + 0xb) = iVar11;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0187 != '\0')) && (local_c->field_00B3 == 0)) {
      this_01 = thunk_FUN_004357f0(local_c->field_0x24);
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
        if (this_01 != (AiPlrClassTy *)0x0) {
          thunk_FUN_0067bf60(this_01,'\0',this_00->field_00F7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < (uint)this_00->field_009B) && ((uint)this_00->field_009B < 0x8c)) {
        if (this_01 != (AiPlrClassTy *)0x0) {
          thunk_FUN_0067bf60(this_01,'\x01',this_00->field_00F7);
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
      pIVar12 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & (uint)pIVar12) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar20 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
        iVar11 = extraout_EDX_00;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar20 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
          iVar11 = extraout_EDX_01;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((iVar11 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar26 = true;
            }
            else {
              bVar26 = false;
            }
            if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar20 = 1;
            }
            else {
              iVar20 = 0;
            }
          }
          else {
            iVar20 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
            iVar11 = extraout_EDX_02;
          }
        }
      }
      if (iVar20 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this_00,iVar11,0x53);
      if ((local_8 != (DArrayTy *)0x0) && (local_8->count != 0)) {
        iVar11 = *(int *)((int)param_1 + 10);
        puVar22 = param_1;
        if (*(char *)(iVar11 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar11 + 0x16) < 0) || (*(short *)(iVar11 + 0x18) < 0)) ||
                 (*(short *)(iVar11 + 0x1a) < 0)) &&
                (this_00->field_0284 != (AnonPointee_AiFltClassTy_0284 *)0x0)) {
          *(undefined2 *)(iVar11 + 0x16) = this_00->field_0284->field_0082;
          *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) = this_00->field_0284->field_0084;
          puVar22 = *(uint **)((int)param_1 + 10);
          *(undefined2 *)((int)puVar22 + 0x1a) = this_00->field_0284->field_0086;
        }
        local_10 = (DArrayTy *)0x0;
        if (0 < (int)local_8->count) {
          bVar26 = local_8->count != 0;
          do {
            pDVar17 = local_10;
            if (bVar26) {
              puVar22 = local_8->data;
              puVar18 = (uint *)(local_8->elementSize * (int)local_10 + (int)puVar22);
            }
            else {
              puVar18 = (uint *)0x0;
            }
            uVar25 = *puVar18;
            if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
              local_14 = (STGameObjC *)0x0;
            }
            else {
              local_14 = STAllPlayersC::GetObjPtr
                                   (g_sTAllPlayers_007FA174,
                                    CONCAT31((int3)((uint)puVar22 >> 8),this_00->field_0x24),
                                    (uint)(ushort)uVar25,CASE_1);
              puVar22 = extraout_EDX_03;
            }
            if (local_14 != (STGameObjC *)0x0) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = (ushort)uVar25;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar23 = *(undefined4 **)((int)param_1 + 10);
                puVar24 = &this_00->field_01AD;
                for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar24 = *puVar23;
                  puVar23 = puVar23 + 1;
                  puVar24 = puVar24 + 1;
                }
                *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
                if ((this_00->field_01EB != '\0') &&
                   (iVar11 = thunk_FUN_004ae0b0((int)this_00->field_01C3,(int)this_00->field_01C5,
                                                (int)this_00->field_01C7,this_00->field_01AD,
                                                *(int *)&this_00->field_0x24,(undefined4 *)0x0,
                                                (int *)0x0,(int *)0x0,0,(int *)0x0), iVar11 == 0)) {
                  local_18 = (int)this_00->field_01C3;
                  local_1c = (int)this_00->field_01C5;
                  local_20 = (int)this_00->field_01C7;
                  iVar11 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,this_00->field_01AD,
                                              &local_18,&local_1c,&local_20,(int)this_00->field_01C3
                                              ,(int)this_00->field_01C5,(int)this_00->field_01C7,
                                              (int)local_14);
                  if (iVar11 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    puVar22 = extraout_EDX_04;
                    pDVar17 = local_10;
                    goto LAB_006625c2;
                  }
                  this_00->field_01C3 = (short)local_18;
                  this_00->field_01C5 = (short)local_1c;
                  this_00->field_01C7 = (short)local_20;
                }
                thunk_FUN_004cdfd0(local_14,this_00->field_01AD,(int)this_00->field_01C3,
                                   (int)this_00->field_01C5,(int)this_00->field_01C7);
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
            local_10 = (DArrayTy *)((int)&pDVar17->flags + 1);
            bVar26 = local_10 < (DArrayTy *)local_8->count;
          } while ((int)local_10 < (int)local_8->count);
        }
      }
LAB_0066263e:
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar6 < 0x32) || (0x73 < GVar6)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (bVar26) {
      pIVar12 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & (uint)pIVar12) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar11 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar11 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            bVar26 = true;
          }
          else {
            bVar26 = false;
          }
          if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar11 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
          }
          else {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar26 = true;
            }
            else {
              bVar26 = false;
            }
            if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar11 = 1;
            }
            else {
              iVar11 = 0;
            }
          }
        }
      }
      if (iVar11 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (sVar5 == 1) {
        iVar11 = 0xc;
      }
      else if (sVar5 == 2) {
        iVar11 = 0x18;
      }
      else if (sVar5 == 3) {
        iVar11 = 0x19;
      }
      else {
        iVar11 = 0;
      }
      uVar25 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::thunk_FUN_0065da50
                         ((AnonReceiver_0065DA50 *)this_00,iVar11,-1);
      if ((int)uVar25 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar11 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar11 + 0x3e) == '\0') {
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
      if ((*(char *)(iVar11 + 0x3e) != '\0') &&
         ((((*(short *)(iVar11 + 0x16) < 0 || (*(short *)(iVar11 + 0x18) < 0)) ||
           (*(short *)(iVar11 + 0x1a) < 0)) &&
          (this_00->field_0284 != (AnonPointee_AiFltClassTy_0284 *)0x0)))) {
        *(undefined2 *)(iVar11 + 0x16) = this_00->field_0284->field_0082;
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) = this_00->field_0284->field_0084;
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x1a) = this_00->field_0284->field_0086;
      }
      puVar23 = *(undefined4 **)((int)param_1 + 10);
      puVar24 = &this_00->field_01AD;
      for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar24 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar24 = puVar24 + 1;
      }
      *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
      if ((this_00->field_01EB != '\0') &&
         (iVar11 = thunk_FUN_004ae0b0((int)this_00->field_01C3,(int)this_00->field_01C5,
                                      (int)this_00->field_01C7,this_00->field_01AD,
                                      *(int *)&this_00->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                      (int *)0x0,0,(int *)0x0), iVar11 == 0)) {
        local_14 = (STGameObjC *)(int)this_00->field_01C3;
        local_10 = (DArrayTy *)(int)this_00->field_01C5;
        local_24 = (STGameObjC *)(int)this_00->field_01C7;
        iVar11 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,this_00->field_01AD,
                                    (int *)&local_14,(int *)&local_10,(int *)&local_24,
                                    (int)this_00->field_01C3,(int)this_00->field_01C5,
                                    (int)this_00->field_01C7,0);
        if (iVar11 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          *(undefined2 *)((int)param_1 + 0xe) = 0;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        this_00->field_01C3 = (short)local_14;
        this_00->field_01C5 = (short)local_10;
        this_00->field_01C7 = (short)local_24;
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
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (bVar26) {
      pIVar12 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & (uint)pIVar12) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar20 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
        iVar11 = extraout_EDX_05;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar20 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
          iVar11 = extraout_EDX_06;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((iVar11 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar26 = true;
            }
            else {
              bVar26 = false;
            }
            if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar20 = 1;
            }
            else {
              iVar20 = 0;
            }
          }
          else {
            iVar20 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
            iVar11 = extraout_EDX_07;
          }
        }
      }
      if (iVar20 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (sVar5 == 1) {
        iVar20 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar5 == 2) {
        iVar20 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar5 == 3) {
        iVar20 = 0x5c;
      }
      else {
        iVar20 = 0;
      }
      local_8 = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this_00,iVar11,iVar20)
      ;
      if ((((local_8 != (DArrayTy *)0x0) && (uVar25 = local_8->count, uVar25 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar21 = 0, 0 < (int)uVar25)) {
        do {
          if (uVar21 < uVar25) {
            puVar13 = (ushort *)(local_8->elementSize * uVar21 + (int)local_8->data);
          }
          else {
            puVar13 = (ushort *)0x0;
          }
          uVar4 = *puVar13;
          if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
            local_24 = (STGameObjC *)0x0;
          }
          else {
            local_24 = STAllPlayersC::GetObjPtr
                                 (g_sTAllPlayers_007FA174,
                                  CONCAT31((int3)((uint)puVar13 >> 8),this_00->field_0x24),
                                  (uint)uVar4,CASE_1);
          }
          if ((local_24 != (STGameObjC *)0x0) &&
             (iVar11 = thunk_FUN_004c93e0(local_24,1), iVar11 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar4;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar23 = *(undefined4 **)((int)param_1 + 10);
              puVar24 = &this_00->field_01AD;
              for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar24 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar24 = puVar24 + 1;
              }
              *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
              puVar22 = *(uint **)((int)param_1 + 10);
              thunk_FUN_004c7cc0(local_24,1,*puVar22,1,1,(uint)(ushort)puVar22[3],puVar22[2],
                                 (int)(char)puVar22[7],(char *)((int)puVar22 + 0x1d));
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
          uVar25 = local_8->count;
        } while ((int)uVar21 < (int)uVar25);
      }
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar6 == CASE_A3) || (GVar6 == CASE_A8)) || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)) {
      bVar26 = true;
    }
    else {
      bVar26 = false;
    }
    if (!bVar26) {
      if (((GVar6 == 0xdd) || (GVar6 == 0xde)) || ((GVar6 == 0xe2 || (GVar6 == 0xdc)))) {
        bVar26 = true;
      }
      else {
        bVar26 = false;
      }
      if (!bVar26) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar20 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar6);
        iVar11 = extraout_EDX_11;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar20 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar6);
          iVar11 = extraout_EDX_12;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((iVar11 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar26 = true;
            }
            else {
              bVar26 = false;
            }
            if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar20 = 1;
            }
            else {
              iVar20 = 0;
            }
          }
          else {
            iVar20 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar6);
            iVar11 = extraout_EDX_13;
          }
        }
      }
      if (iVar20 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (0 < sVar5) {
        if (sVar5 < 3) {
          iVar20 = 0x52;
          goto LAB_00663076;
        }
        if (sVar5 == 3) {
          iVar20 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar20 = 0;
LAB_00663076:
      local_8 = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this_00,iVar11,iVar20)
      ;
      if ((((local_8 != (DArrayTy *)0x0) &&
           (pSVar19 = (STGameObjC *)local_8->count, pSVar19 != (STGameObjC *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = (STGameObjC *)0x0, puVar22 = param_1, 0 < (int)pSVar19)) {
        do {
          if (local_14 < pSVar19) {
            puVar14 = (undefined2 *)(local_8->elementSize * (int)local_14 + (int)local_8->data);
          }
          else {
            puVar14 = (undefined2 *)0x0;
          }
          uVar10 = *puVar14;
          puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),uVar10);
          if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
            pSVar19 = (STGameObjC *)0x0;
          }
          else {
            pSVar19 = STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)((uint)puVar14 >> 8),this_00->field_0x24),
                                 (uint)puVar22,CASE_1);
          }
          local_24 = pSVar19;
          if (pSVar19 != (STGameObjC *)0x0) {
            iVar11 = thunk_FUN_004e1490((int)pSVar19);
            if ((iVar11 == 0) || (g_worldGrid.sizeZ + -1 <= *(int *)&pSVar19[3].field_0x45)) {
              bVar26 = false;
            }
            else {
              bVar26 = true;
            }
            if (bVar26) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(undefined2 *)((int)param_1 + 0xe) = uVar10;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar23 = *(undefined4 **)((int)param_1 + 10);
                puVar24 = &this_00->field_01AD;
                for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar24 = *puVar23;
                  puVar23 = puVar23 + 1;
                  puVar24 = puVar24 + 1;
                }
                *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
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
          local_14 = (STGameObjC *)((int)&local_14->vtable + 1);
          pSVar19 = (STGameObjC *)local_8->count;
        } while ((int)local_14 < (int)pSVar19);
      }
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      iVar11 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar6);
      uVar25 = extraout_EDX_08;
    }
    else {
      if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar11 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar6);
        uVar25 = extraout_EDX_09;
      }
      else {
        if ((GVar6 == CASE_A3) || (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))
           ) {
          uVar25 = 1;
        }
        else {
          uVar25 = 0;
        }
        if ((uVar25 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
          if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
            bVar26 = true;
          }
          else {
            bVar26 = false;
          }
          if ((bVar26) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
        }
        else {
          iVar11 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar6);
          uVar25 = extraout_EDX_10;
        }
      }
    }
    if (iVar11 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar11 = **(int **)((int)param_1 + 10);
    if (iVar11 - 0xa3U < 0x1c) {
      uVar25 = (uint)*(byte *)(iVar11 + 0x663d51);
      switch(iVar11) {
      case 0xa3:
        iVar11 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar11 = 0x44;
        break;
      case 0xb2:
        iVar11 = 0x70;
        break;
      case 0xbe:
        iVar11 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar11 = 0;
    }
    local_8 = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this_00,uVar25,iVar11);
    if ((((local_8 != (DArrayTy *)0x0) && (dVar7 = local_8->count, dVar7 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = (STGameObjC *)0x0, 0 < (int)dVar7)) {
      bVar26 = dVar7 != 0;
      puVar22 = param_1;
LAB_00662dbb:
      if (bVar26) {
        puVar14 = (undefined2 *)(local_8->elementSize * (int)local_24 + (int)local_8->data);
      }
      else {
        puVar14 = (undefined2 *)0x0;
      }
      uVar10 = *puVar14;
      puVar22 = (uint *)CONCAT22((short)((uint)puVar22 >> 0x10),uVar10);
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        local_10 = (DArrayTy *)0x0;
      }
      else {
        local_10 = (DArrayTy *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)puVar14 >> 8),this_00->field_0x24),(uint)puVar22
                              ,CASE_1);
      }
      if ((STGameObjC *)local_10 == (STGameObjC *)0x0) goto cf_continue_loop_00662E52;
      switch(**(undefined4 **)((int)param_1 + 10)) {
      case 0xa3:
        iVar11 = thunk_FUN_004c7860(local_10,4,0,1,1,1);
        break;
      default:
        iVar11 = 0;
        break;
      case 0xa8:
        iVar11 = thunk_FUN_004c7860(local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar11 = 1;
        break;
      case 0xbe:
        iVar11 = thunk_FUN_004c7860(local_10,8,0,1,1,1);
      }
      if (iVar11 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = uVar10;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar23 = *(undefined4 **)((int)param_1 + 10);
        puVar24 = &this_00->field_01AD;
        for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar24 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar24 = puVar24 + 1;
        }
        *(undefined2 *)puVar24 = *(undefined2 *)puVar23;
        iVar11 = **(int **)((int)param_1 + 10);
        if (iVar11 == 0xa3) {
          iVar11 = 4;
LAB_00662ee7:
          thunk_FUN_004c7cc0(local_10,iVar11,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2],0xff
                             ,(char *)0x0);
        }
        else {
          if (iVar11 == 0xa8) {
            iVar11 = 6;
            goto LAB_00662ee7;
          }
          if (iVar11 == 0xbe) {
            iVar11 = 8;
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
    if (local_8 != (DArrayTy *)0x0) {
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x69:
    puVar22 = *(uint **)((int)param_1 + 9);
    uVar25 = *puVar22;
    if ((uVar25 < 0x32) || (0x73 < uVar25)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (bVar26) {
      if (local_c->field_01B5 != puVar22[2]) {
        sVar5 = *(short *)((int)puVar22 + 0x1a);
        sVar2 = (short)puVar22[6];
        sVar3 = *(short *)((int)puVar22 + 0x16);
        if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar2 < 0)) ||
            ((g_worldGrid.sizeY <= sVar2 || (sVar5 < 0)))) || (g_worldGrid.sizeZ <= sVar5)) {
          this_03 = (STWorldObject *)0x0;
        }
        else {
          this_03 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar5 + (int)g_worldGrid.sizeX * (int)sVar2
                     + (int)sVar3].objects[0];
        }
        if ((this_03 != (STWorldObject *)0x0) &&
           (this_03[1].vtable == *(STWorldObjectVTable **)&local_c->field_0x24)) {
          iVar11 = (*this_03->vtable->GetObjectTypeId)(this_03);
          if (iVar11 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar11 = (*this_03->vtable->GetObjectTypeId)(this_03);
          if (iVar11 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar11 = (*this_03->vtable->GetObjectTypeId)(this_03);
          if (iVar11 == 0x78) {
            iVar11 = *(int *)&this_03[0x10].field_0x19;
          }
          else {
            iVar11 = 0;
          }
          if (iVar11 == **(int **)((int)param_1 + 9)) {
            iVar11 = (*this_03->vtable->GetObjectTypeId)(this_03);
            if (iVar11 == 0x78) {
              uVar25 = *(uint *)&this_03[0x11].field_0x5;
            }
            else {
              uVar25 = 0xffffffff;
            }
            if (uVar25 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
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
      if ((uVar25 == 0) || (0x28 < uVar25)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if (bVar26) {
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar19 = (STGameObjC *)0x0;
        }
        else {
          pSVar19 = STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               (uint)CONCAT11((char)((ushort)puVar22[0xe] >> 8),local_c->field_0x24)
                               ,(uint)(ushort)puVar22[0xe],CASE_1);
        }
        if (pSVar19 == (STGameObjC *)0x0) goto LAB_00663325;
        iVar11 = thunk_FUN_004c9430(pSVar19,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar11 == 0) {
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
    pDVar17 = local_c->field_020B;
    uVar25 = pDVar17->count;
    if (0 < (int)uVar25) {
      bVar26 = uVar25 != 0;
      while( true ) {
        if (bVar26) {
          pvVar15 = (void *)(pDVar17->elementSize * uVar21 + (int)pDVar17->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        if (*(int *)(param_1[2] + 8) == *(int *)((int)pvVar15 + 0x24)) break;
        uVar21 = uVar21 + 1;
        bVar26 = uVar21 < uVar25;
        if ((int)uVar25 <= (int)uVar21) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined4 *)((int)pvVar15 + 0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0163 == '\x01') {
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        if ((local_c->field_007B == 0x10) &&
           (uVar10 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var,uVar10))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar27 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar27);
        }
      }
      else if (*(uint *)&local_c->field_022F->field_0xc < 10) {
        if ((local_c->field_007B == 0x10) &&
           (uVar10 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var_00,uVar10))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar27 = *(short **)((int)param_1 + 0xe);
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
        uVar25 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar5 == 3) {
        uVar25 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar25 = 0;
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar25) {
      iVar11 = local_c->field_0116;
      if (iVar11 == 0xdd) {
        uVar25 = (-(uint)(sVar5 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar11 == 0xde) {
        uVar25 = -(uint)(sVar5 != 3) & 0x4f;
      }
      else if (iVar11 == 0xe0) {
        uVar25 = (sVar5 != 3) - 1 & 0x61;
      }
      else {
        uVar25 = 0;
      }
      if (*(uint *)((int)param_1 + 0xb) != uVar25) {
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
        (uVar25 = thunk_FUN_006755e0(*(int *)param_1[3]), this_00->field_007B == (short)uVar25)) &&
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
          thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    else if (uVar4 != 0x8000) {
      thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)local_c,extraout_EDX);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x73:
    iVar11 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar5 = local_c->field_0039;
    if (sVar5 < 1) {
LAB_006636da:
      iVar20 = 0;
    }
    else if (sVar5 < 3) {
      iVar20 = 0x35;
    }
    else {
      if (sVar5 != 3) goto LAB_006636da;
      iVar20 = thunk_FUN_004e7fc0(iVar11);
      iVar11 = extraout_EDX_14;
    }
    pDVar17 = (DArrayTy *)thunk_FUN_0065e360((AnonShape_0065E360_B94C37CB *)this_00,iVar11,iVar20);
    local_10 = pDVar17;
    if (((pDVar17 != (DArrayTy *)0x0) && (dVar7 = pDVar17->count, dVar7 != 0)) &&
       (uVar25 = 0, 0 < (int)dVar7)) {
      bVar26 = dVar7 != 0;
      do {
        if (bVar26) {
          pDVar17 = local_10->data;
          pdVar16 = (dword *)((int)&pDVar17->flags + local_10->elementSize * uVar25);
        }
        else {
          pdVar16 = (dword *)0x0;
        }
        dVar7 = *pdVar16;
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar19 = (STGameObjC *)0x0;
        }
        else {
          pSVar19 = STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)pDVar17 >> 8),local_c->field_0x24),
                               (uint)(ushort)dVar7,CASE_1);
          pDVar17 = extraout_EDX_15;
        }
        if ((pSVar19 != (STGameObjC *)0x0) &&
           (iVar11 = thunk_FUN_004e3790(pSVar19,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                        (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           pDVar17 = extraout_EDX_16, iVar11 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = (ushort)dVar7;
          if (*(char *)((int)param_1 + 9) != '\0') {
            thunk_FUN_004c7cc0(pSVar19,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                               0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar25 = uVar25 + 1;
        bVar26 = uVar25 < local_10->count;
      } while ((int)uVar25 < (int)local_10->count);
    }
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
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
    if ((char)param_1[2] == '\0') {
      sVar5 = local_c->field_0039;
      if (sVar5 < 1) {
LAB_0066380d:
        iVar11 = 0;
      }
      else if (sVar5 < 3) {
        iVar11 = 0x33;
      }
      else {
        if (sVar5 != 3) goto LAB_0066380d;
        iVar11 = 0x62;
      }
      pDVar17 = (DArrayTy *)
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065FA60::thunk_FUN_0065fa60
                          ((AnonReceiver_0065FA60 *)local_c,iVar11,(sVar5 != 3) - 1 & 2,(short *)0x0
                          );
      if (pDVar17 != (DArrayTy *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        DArrayDestroy(pDVar17);
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) && (*(uint **)((int)param_1 + 10) != (uint *)0x0)) {
        thunk_FUN_0065d940(this_00,*(uint **)((int)param_1 + 10),1);
      }
      uVar10 = sub_0065D9C0(this_00);
      *(undefined2 *)((int)param_1 + 0xe) = uVar10;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      pDVar17 = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
      if (pDVar17 != (DArrayTy *)0x0) {
        uVar25 = 0;
        if (0 < (int)pDVar17->count) {
          bVar26 = pDVar17->count != 0;
          puVar22 = extraout_ECX;
          do {
            if (bVar26) {
              puVar22 = pDVar17->data;
              puVar18 = (uint *)(pDVar17->elementSize * uVar25 + (int)puVar22);
            }
            else {
              puVar18 = (uint *)0x0;
            }
            local_28 = CONCAT22((short)((uint)puVar18 >> 0x10),(short)*puVar18);
            pSVar19 = STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)((uint)puVar22 >> 8),local_c->field_0x24),local_28,
                                 CASE_1);
            puVar22 = extraout_ECX_00;
            if (pSVar19 != (STGameObjC *)0x0) {
              iVar11 = (*pSVar19->vtable->vfunc_2C)();
              if ((iVar11 < 1) || (0x28 < iVar11)) {
                bVar26 = false;
              }
              else {
                bVar26 = true;
              }
              puVar22 = extraout_ECX_01;
              if (((bVar26) &&
                  ((puVar22 = param_1, *(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == *(short *)&pSVar19[4].field_0xd8)))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar11 = (*pSVar19->vtable->vfunc_2C)(), *(int *)((int)param_1 + 0xb) == iVar11))
                 )) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&local_28);
                  puVar22 = extraout_ECX_02;
                }
              }
            }
            uVar25 = uVar25 + 1;
            bVar26 = uVar25 < pDVar17->count;
          } while ((int)uVar25 < (int)pDVar17->count);
        }
        DArrayDestroy(pDVar17);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (STGameObjC *)((int)&local_24->vtable + 1);
  bVar26 = local_24 < (STGameObjC *)local_8->count;
  if ((int)local_8->count <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

