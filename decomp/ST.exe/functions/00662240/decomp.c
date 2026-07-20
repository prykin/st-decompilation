
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
  undefined4 uVar7;
  code *pcVar8;
  AiFltClassTy *this_00;
  undefined2 uVar9;
  int iVar10;
  IMAGE_DOS_HEADER *pIVar11;
  ushort *puVar12;
  undefined2 *puVar13;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint *puVar14;
  void *pvVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  STFishC *this_01;
  int iVar19;
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
  undefined2 extraout_var_03;
  undefined4 unaff_ESI;
  undefined4 *puVar20;
  void *unaff_EDI;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  short *psVar25;
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
  iVar10 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar19 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x98a,0,iVar10,&DAT_007a4ccc,
                                s_AiFltClassTy__GetAiMess_007d2c60);
    if (iVar19 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x98b);
      return iVar10;
    }
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
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
        uVar23 = local_c->field_009B;
        if ((uVar23 < 0x8c) || (0x95 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 100) || (0x6d < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        uVar23 = local_c->field_009B;
        if ((uVar23 < 0x8c) || (0x95 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 100) || (0x6d < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 0x6e) || (0x77 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 0x82) || (0x8b < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 == 0x23) || ((0xb < uVar23 && (uVar23 < 0x14)))) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      if (0 < *(short *)&local_c->field_0x157) {
        uVar9 = sub_0065D9C0(local_c);
        if ((int)*(short *)&this_00->field_0x157 <= CONCAT22(extraout_var_02,uVar9)) {
          *(undefined1 *)(param_1 + 2) = 1;
          if (*(char *)((int)param_1 + 9) != '\0') {
            if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
              this_01 = (STFishC *)0x0;
            }
            else {
              this_01 = (STFishC *)
                        STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,
                                   CONCAT31((int3)((uint)CONCAT22(extraout_var_02,uVar9) >> 8),
                                            *(undefined1 *)((int)param_1 + 0x12)),
                                   CONCAT22(extraout_var_03,(short)param_1[4]),CASE_1);
            }
            if (this_01 != (STFishC *)0x0) {
              STFishC::sub_004162B0(this_01,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
              psVar25 = (short *)((int)&this_00->field_0195 + 2);
              *(short *)&this_00->field_0195 = local_2c[0] + -2;
              *psVar25 = local_30[0] + -2;
              psVar1 = (short *)((int)&this_00->field_0199 + 2);
              *(undefined2 *)&this_00->field_0199 = 0;
              *psVar1 = 5;
              *(undefined2 *)&this_00->field_019D = 3;
              *(undefined2 *)((int)&this_00->field_019D + 2) = 5;
              thunk_FUN_006756d0((short *)&this_00->field_0195,psVar25,psVar1,
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
       (uVar9 = sub_0065D9C0(local_c), (int)this_00->field_018C <= CONCAT22(extraout_var_01,uVar9)))
    {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar9;
      uVar7 = this_00->field_0188;
      *(undefined4 *)((int)param_1 + 0xf) = uVar7;
      iVar10 = thunk_FUN_0065e3b0((int)this_00,uVar7);
      *(int *)((int)param_1 + 0xb) = iVar10;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0187 != '\0')) && (local_c->field_00B3 == 0)) {
      pvVar15 = (void *)thunk_FUN_004357f0(local_c->field_0x24);
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
        if (pvVar15 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar15,'\0',this_00->field_00F7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < (uint)this_00->field_009B) && ((uint)this_00->field_009B < 0x8c)) {
        if (pvVar15 != (void *)0x0) {
          thunk_FUN_0067bf60(pvVar15,'\x01',this_00->field_00F7);
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
      pIVar11 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & (uint)pIVar11) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar19 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
        iVar10 = extraout_EDX_00;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar19 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
          iVar10 = extraout_EDX_01;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
          if ((iVar10 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
            iVar10 = extraout_EDX_02;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = thunk_FUN_0065e360((int)this_00,iVar10,0x53);
      if ((local_8 != (uint *)0x0) && (local_8[3] != 0)) {
        iVar10 = *(int *)((int)param_1 + 10);
        puVar16 = param_1;
        if (*(char *)(iVar10 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar10 + 0x16) < 0) || (*(short *)(iVar10 + 0x18) < 0)) ||
                 (*(short *)(iVar10 + 0x1a) < 0)) && (this_00->field_0284 != 0)) {
          *(undefined2 *)(iVar10 + 0x16) = *(undefined2 *)(this_00->field_0284 + 0x82);
          *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
               *(undefined2 *)(this_00->field_0284 + 0x84);
          puVar16 = *(uint **)((int)param_1 + 10);
          *(undefined2 *)((int)puVar16 + 0x1a) = *(undefined2 *)(this_00->field_0284 + 0x86);
        }
        local_10 = (uint *)0x0;
        if (0 < (int)local_8[3]) {
          bVar24 = local_8[3] != 0;
          do {
            puVar14 = local_10;
            if (bVar24) {
              puVar16 = (uint *)local_8[7];
              puVar17 = (uint *)(local_8[2] * (int)local_10 + (int)puVar16);
            }
            else {
              puVar17 = (uint *)0x0;
            }
            uVar23 = *puVar17;
            if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
              local_14 = (void *)0x0;
            }
            else {
              local_14 = (void *)STAllPlayersC::GetObjPtr
                                           (g_sTAllPlayers_007FA174,
                                            CONCAT31((int3)((uint)puVar16 >> 8),this_00->field_0x24)
                                            ,(uint)(ushort)uVar23,CASE_1);
              puVar16 = extraout_EDX_03;
            }
            if (local_14 != (void *)0x0) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = (ushort)uVar23;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar20 = *(undefined4 **)((int)param_1 + 10);
                puVar21 = &this_00->field_01AD;
                for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar21 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar21 = puVar21 + 1;
                }
                *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
                if ((this_00->field_01EB != '\0') &&
                   (iVar10 = thunk_FUN_004ae0b0((int)this_00->field_01C3,(int)this_00->field_01C5,
                                                (int)this_00->field_01C7,this_00->field_01AD,
                                                *(int *)&this_00->field_0x24,(undefined4 *)0x0,
                                                (int *)0x0,(int *)0x0,0,(int *)0x0), iVar10 == 0)) {
                  local_18 = (int)this_00->field_01C3;
                  local_1c = (int)this_00->field_01C5;
                  local_20 = (int)this_00->field_01C7;
                  iVar10 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,this_00->field_01AD,
                                              &local_18,&local_1c,&local_20,(int)this_00->field_01C3
                                              ,(int)this_00->field_01C5,(int)this_00->field_01C7,
                                              (int)local_14);
                  if (iVar10 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    puVar16 = extraout_EDX_04;
                    puVar14 = local_10;
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
            local_10 = (uint *)((int)puVar14 + 1);
            bVar24 = local_10 < (uint *)local_8[3];
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
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      pIVar11 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & (uint)pIVar11) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar10 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar10 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar10 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
          }
          else {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar10 = 1;
            }
            else {
              iVar10 = 0;
            }
          }
        }
      }
      if (iVar10 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (sVar5 == 1) {
        iVar10 = 0xc;
      }
      else if (sVar5 == 2) {
        iVar10 = 0x18;
      }
      else if (sVar5 == 3) {
        iVar10 = 0x19;
      }
      else {
        iVar10 = 0;
      }
      uVar23 = thunk_FUN_0065da50(this_00,iVar10,-1);
      if ((int)uVar23 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar10 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar10 + 0x3e) == '\0') {
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
      if ((*(char *)(iVar10 + 0x3e) != '\0') &&
         ((((*(short *)(iVar10 + 0x16) < 0 || (*(short *)(iVar10 + 0x18) < 0)) ||
           (*(short *)(iVar10 + 0x1a) < 0)) && (this_00->field_0284 != 0)))) {
        *(undefined2 *)(iVar10 + 0x16) = *(undefined2 *)(this_00->field_0284 + 0x82);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x18) =
             *(undefined2 *)(this_00->field_0284 + 0x84);
        *(undefined2 *)(*(int *)((int)param_1 + 10) + 0x1a) =
             *(undefined2 *)(this_00->field_0284 + 0x86);
      }
      puVar20 = *(undefined4 **)((int)param_1 + 10);
      puVar21 = &this_00->field_01AD;
      for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar21 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar21 = puVar21 + 1;
      }
      *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
      if ((this_00->field_01EB != '\0') &&
         (iVar10 = thunk_FUN_004ae0b0((int)this_00->field_01C3,(int)this_00->field_01C5,
                                      (int)this_00->field_01C7,this_00->field_01AD,
                                      *(int *)&this_00->field_0x24,(undefined4 *)0x0,(int *)0x0,
                                      (int *)0x0,0,(int *)0x0), iVar10 == 0)) {
        local_14 = (void *)(int)this_00->field_01C3;
        local_10 = (uint *)(int)this_00->field_01C5;
        local_24 = (void *)(int)this_00->field_01C7;
        iVar10 = thunk_FUN_004b0d10(*(uint *)&this_00->field_0x24,this_00->field_01AD,
                                    (int *)&local_14,(int *)&local_10,(int *)&local_24,
                                    (int)this_00->field_01C3,(int)this_00->field_01C5,
                                    (int)this_00->field_01C7,0);
        if (iVar10 == 0) {
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
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      pIVar11 = thunk_FUN_00674fb0(GVar6);
      if ((this_00->field_025F & (uint)pIVar11) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar19 = thunk_FUN_004e6a80(*(int *)&this_00->field_0x24,GVar6);
        iVar10 = extraout_EDX_05;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar19 = thunk_FUN_004e6c20(*(int *)&this_00->field_0x24,GVar6);
          iVar10 = extraout_EDX_06;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
          if ((iVar10 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = thunk_FUN_004e80f0(*(int *)&this_00->field_0x24,GVar6);
            iVar10 = extraout_EDX_07;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (sVar5 == 1) {
        iVar19 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar5 == 2) {
        iVar19 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar5 == 3) {
        iVar19 = 0x5c;
      }
      else {
        iVar19 = 0;
      }
      local_8 = thunk_FUN_0065e360((int)this_00,iVar10,iVar19);
      if ((((local_8 != (uint *)0x0) && (uVar23 = local_8[3], uVar23 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar22 = 0, 0 < (int)uVar23)) {
        do {
          if (uVar22 < uVar23) {
            puVar12 = (ushort *)(local_8[2] * uVar22 + local_8[7]);
          }
          else {
            puVar12 = (ushort *)0x0;
          }
          uVar4 = *puVar12;
          if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
            local_24 = (void *)0x0;
          }
          else {
            local_24 = (void *)STAllPlayersC::GetObjPtr
                                         (g_sTAllPlayers_007FA174,
                                          CONCAT31((int3)((uint)puVar12 >> 8),this_00->field_0x24),
                                          (uint)uVar4,CASE_1);
          }
          if ((local_24 != (void *)0x0) && (iVar10 = thunk_FUN_004c93e0(local_24,1), iVar10 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar4;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar20 = *(undefined4 **)((int)param_1 + 10);
              puVar21 = &this_00->field_01AD;
              for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar21 = *puVar20;
                puVar20 = puVar20 + 1;
                puVar21 = puVar21 + 1;
              }
              *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
              puVar16 = *(uint **)((int)param_1 + 10);
              thunk_FUN_004c7cc0(local_24,1,*puVar16,1,1,(uint)(ushort)puVar16[3],puVar16[2],
                                 (int)(char)puVar16[7],(char *)((int)puVar16 + 0x1d));
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
          uVar22 = uVar22 + 1;
          uVar23 = local_8[3];
        } while ((int)uVar22 < (int)uVar23);
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
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    if (!bVar24) {
      if (((GVar6 == 0xdd) || (GVar6 == 0xde)) || ((GVar6 == 0xe2 || (GVar6 == 0xdc)))) {
        bVar24 = true;
      }
      else {
        bVar24 = false;
      }
      if (!bVar24) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar19 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar6);
        iVar10 = extraout_EDX_11;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar19 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar6);
          iVar10 = extraout_EDX_12;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
          if ((iVar10 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar6);
            iVar10 = extraout_EDX_13;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar5 = this_00->field_0039;
      if (0 < sVar5) {
        if (sVar5 < 3) {
          iVar19 = 0x52;
          goto LAB_00663076;
        }
        if (sVar5 == 3) {
          iVar19 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar19 = 0;
LAB_00663076:
      local_8 = thunk_FUN_0065e360((int)this_00,iVar10,iVar19);
      if ((((local_8 != (uint *)0x0) && (pvVar15 = (void *)local_8[3], pvVar15 != (void *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = (void *)0x0, puVar16 = param_1, 0 < (int)pvVar15)) {
        do {
          if (local_14 < pvVar15) {
            puVar13 = (undefined2 *)(local_8[2] * (int)local_14 + local_8[7]);
          }
          else {
            puVar13 = (undefined2 *)0x0;
          }
          uVar9 = *puVar13;
          puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),uVar9);
          if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
            pvVar15 = (void *)0x0;
          }
          else {
            pvVar15 = (void *)STAllPlayersC::GetObjPtr
                                        (g_sTAllPlayers_007FA174,
                                         CONCAT31((int3)((uint)puVar13 >> 8),this_00->field_0x24),
                                         (uint)puVar16,CASE_1);
          }
          local_24 = pvVar15;
          if (pvVar15 != (void *)0x0) {
            iVar10 = thunk_FUN_004e1490((int)pvVar15);
            if ((iVar10 == 0) || (SHORT_007fb244 + -1 <= *(int *)((int)pvVar15 + 0x5b8))) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (bVar24) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(undefined2 *)((int)param_1 + 0xe) = uVar9;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar20 = *(undefined4 **)((int)param_1 + 10);
                puVar21 = &this_00->field_01AD;
                for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar21 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar21 = puVar21 + 1;
                }
                *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
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
          pvVar15 = (void *)local_8[3];
        } while ((int)local_14 < (int)pvVar15);
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
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      iVar10 = thunk_FUN_004e6a80(*(int *)&local_c->field_0x24,GVar6);
      uVar23 = extraout_EDX_08;
    }
    else {
      if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar10 = thunk_FUN_004e6c20(*(int *)&local_c->field_0x24,GVar6);
        uVar23 = extraout_EDX_09;
      }
      else {
        if ((GVar6 == CASE_A3) || (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))
           ) {
          uVar23 = 1;
        }
        else {
          uVar23 = 0;
        }
        if ((uVar23 == 0) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
          if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if ((bVar24) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = thunk_FUN_004e80f0(*(int *)&local_c->field_0x24,GVar6);
          uVar23 = extraout_EDX_10;
        }
      }
    }
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar10 = **(int **)((int)param_1 + 10);
    if (iVar10 - 0xa3U < 0x1c) {
      uVar23 = (uint)*(byte *)(iVar10 + 0x663d51);
      switch(iVar10) {
      case 0xa3:
        iVar10 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar10 = 0x44;
        break;
      case 0xb2:
        iVar10 = 0x70;
        break;
      case 0xbe:
        iVar10 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar10 = 0;
    }
    local_8 = thunk_FUN_0065e360((int)this_00,uVar23,iVar10);
    if ((((local_8 != (uint *)0x0) && (uVar23 = local_8[3], uVar23 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = (void *)0x0, 0 < (int)uVar23)) {
      bVar24 = uVar23 != 0;
      puVar16 = param_1;
LAB_00662dbb:
      if (bVar24) {
        puVar13 = (undefined2 *)(local_8[2] * (int)local_24 + local_8[7]);
      }
      else {
        puVar13 = (undefined2 *)0x0;
      }
      uVar9 = *puVar13;
      puVar16 = (uint *)CONCAT22((short)((uint)puVar16 >> 0x10),uVar9);
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        local_10 = (uint *)0x0;
      }
      else {
        local_10 = (uint *)STAllPlayersC::GetObjPtr
                                     (g_sTAllPlayers_007FA174,
                                      CONCAT31((int3)((uint)puVar13 >> 8),this_00->field_0x24),
                                      (uint)puVar16,CASE_1);
      }
      if (local_10 == (uint *)0x0) goto cf_continue_loop_00662E52;
      switch(**(undefined4 **)((int)param_1 + 10)) {
      case 0xa3:
        iVar10 = thunk_FUN_004c7860(local_10,4,0,1,1,1);
        break;
      default:
        iVar10 = 0;
        break;
      case 0xa8:
        iVar10 = thunk_FUN_004c7860(local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar10 = 1;
        break;
      case 0xbe:
        iVar10 = thunk_FUN_004c7860(local_10,8,0,1,1,1);
      }
      if (iVar10 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = uVar9;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar20 = *(undefined4 **)((int)param_1 + 10);
        puVar21 = &this_00->field_01AD;
        for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar21 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 1;
        }
        *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
        iVar10 = **(int **)((int)param_1 + 10);
        if (iVar10 == 0xa3) {
          iVar10 = 4;
LAB_00662ee7:
          thunk_FUN_004c7cc0(local_10,iVar10,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2],0xff
                             ,(char *)0x0);
        }
        else {
          if (iVar10 == 0xa8) {
            iVar10 = 6;
            goto LAB_00662ee7;
          }
          if (iVar10 == 0xbe) {
            iVar10 = 8;
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
    puVar16 = *(uint **)((int)param_1 + 9);
    uVar23 = *puVar16;
    if ((uVar23 < 0x32) || (0x73 < uVar23)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      if (local_c->field_01B5 != puVar16[2]) {
        sVar5 = *(short *)((int)puVar16 + 0x1a);
        sVar2 = (short)puVar16[6];
        sVar3 = *(short *)((int)puVar16 + 0x16);
        if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar2 < 0)) ||
            ((SHORT_007fb242 <= sVar2 || (sVar5 < 0)))) || (SHORT_007fb244 <= sVar5)) {
          piVar18 = (int *)0x0;
        }
        else {
          piVar18 = *(int **)(DAT_007fb248 +
                             ((int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)sVar2 +
                             (int)sVar3) * 8);
        }
        if ((piVar18 != (int *)0x0) && (piVar18[9] == *(int *)&local_c->field_0x24)) {
          iVar10 = (**(code **)(*piVar18 + 0x2c))();
          if (iVar10 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar10 = (**(code **)(*piVar18 + 0x2c))();
          if (iVar10 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar10 = (**(code **)(*piVar18 + 0x2c))();
          if (iVar10 == 0x78) {
            iVar10 = *(int *)((int)piVar18 + 0x259);
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 == **(int **)((int)param_1 + 9)) {
            iVar10 = (**(code **)(*piVar18 + 0x2c))();
            if (iVar10 == 0x78) {
              uVar23 = *(uint *)((int)piVar18 + 0x269);
            }
            else {
              uVar23 = 0xffffffff;
            }
            if (uVar23 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
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
      if ((uVar23 == 0) || (0x28 < uVar23)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pvVar15 = (void *)0x0;
        }
        else {
          pvVar15 = (void *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,
                                       (uint)CONCAT11((char)((ushort)puVar16[0xe] >> 8),
                                                      local_c->field_0x24),
                                       (uint)(ushort)puVar16[0xe],CASE_1);
        }
        if (pvVar15 == (void *)0x0) goto LAB_00663325;
        iVar10 = thunk_FUN_004c9430(pvVar15,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar10 == 0) {
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
    uVar22 = 0;
    iVar10 = local_c->field_020B;
    uVar23 = *(uint *)(iVar10 + 0xc);
    if (0 < (int)uVar23) {
      bVar24 = uVar23 != 0;
      while( true ) {
        if (bVar24) {
          iVar19 = *(int *)(iVar10 + 8) * uVar22 + *(int *)(iVar10 + 0x1c);
        }
        else {
          iVar19 = 0;
        }
        if (*(int *)(param_1[2] + 8) == *(int *)(iVar19 + 0x24)) break;
        uVar22 = uVar22 + 1;
        bVar24 = uVar22 < uVar23;
        if ((int)uVar23 <= (int)uVar22) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined4 *)(iVar19 + 0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0163 == '\x01') {
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        if ((local_c->field_007B == 0x10) &&
           (uVar9 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var,uVar9))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar25 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar25);
        }
      }
      else if (*(uint *)(local_c->field_022F + 0xc) < 10) {
        if ((local_c->field_007B == 0x10) &&
           (uVar9 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var_00,uVar9))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar25 = *(short **)((int)param_1 + 0xe);
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
        uVar23 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar5 == 3) {
        uVar23 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar23 = 0;
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar23) {
      iVar10 = local_c->field_0116;
      if (iVar10 == 0xdd) {
        uVar23 = (-(uint)(sVar5 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar10 == 0xde) {
        uVar23 = -(uint)(sVar5 != 3) & 0x4f;
      }
      else if (iVar10 == 0xe0) {
        uVar23 = (sVar5 != 3) - 1 & 0x61;
      }
      else {
        uVar23 = 0;
      }
      if (*(uint *)((int)param_1 + 0xb) != uVar23) {
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
        (uVar23 = thunk_FUN_006755e0(*(int *)param_1[3]), this_00->field_007B == (short)uVar23)) &&
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
    iVar10 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar5 = local_c->field_0039;
    if (sVar5 < 1) {
LAB_006636da:
      iVar19 = 0;
    }
    else if (sVar5 < 3) {
      iVar19 = 0x35;
    }
    else {
      if (sVar5 != 3) goto LAB_006636da;
      iVar19 = thunk_FUN_004e7fc0(iVar10);
      iVar10 = extraout_EDX_14;
    }
    puVar16 = thunk_FUN_0065e360((int)this_00,iVar10,iVar19);
    local_10 = puVar16;
    if (((puVar16 != (uint *)0x0) && (uVar23 = puVar16[3], uVar23 != 0)) &&
       (uVar22 = 0, 0 < (int)uVar23)) {
      bVar24 = uVar23 != 0;
      do {
        if (bVar24) {
          puVar16 = (uint *)local_10[7];
          puVar14 = (uint *)(local_10[2] * uVar22 + (int)puVar16);
        }
        else {
          puVar14 = (uint *)0x0;
        }
        uVar23 = *puVar14;
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pvVar15 = (void *)0x0;
        }
        else {
          pvVar15 = (void *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,
                                       CONCAT31((int3)((uint)puVar16 >> 8),local_c->field_0x24),
                                       (uint)(ushort)uVar23,CASE_1);
          puVar16 = extraout_EDX_15;
        }
        if ((pvVar15 != (void *)0x0) &&
           (iVar10 = thunk_FUN_004e3790(pvVar15,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                        (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           puVar16 = extraout_EDX_16, iVar10 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = (ushort)uVar23;
          if (*(char *)((int)param_1 + 9) != '\0') {
            thunk_FUN_004c7cc0(pvVar15,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                               0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar22 = uVar22 + 1;
        bVar24 = uVar22 < local_10[3];
      } while ((int)uVar22 < (int)local_10[3]);
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
    if ((char)param_1[2] == '\0') {
      sVar5 = local_c->field_0039;
      if (sVar5 < 1) {
LAB_0066380d:
        iVar10 = 0;
      }
      else if (sVar5 < 3) {
        iVar10 = 0x33;
      }
      else {
        if (sVar5 != 3) goto LAB_0066380d;
        iVar10 = 0x62;
      }
      puVar16 = thunk_FUN_0065fa60(iVar10,(sVar5 != 3) - 1 & 2,(short *)0x0);
      if (puVar16 != (uint *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_006ae110((byte *)puVar16);
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) && (*(uint **)((int)param_1 + 10) != (uint *)0x0)) {
        thunk_FUN_0065d940(this_00,*(uint **)((int)param_1 + 10),1);
      }
      uVar9 = sub_0065D9C0(this_00);
      *(undefined2 *)((int)param_1 + 0xe) = uVar9;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      puVar16 = thunk_FUN_0065da10((int)local_c,extraout_EDX);
      if (puVar16 != (uint *)0x0) {
        uVar23 = 0;
        if (0 < (int)puVar16[3]) {
          bVar24 = puVar16[3] != 0;
          puVar14 = extraout_ECX;
          do {
            if (bVar24) {
              puVar14 = (uint *)puVar16[7];
              puVar17 = (uint *)(puVar16[2] * uVar23 + (int)puVar14);
            }
            else {
              puVar17 = (uint *)0x0;
            }
            local_28 = CONCAT22((short)((uint)puVar17 >> 0x10),(short)*puVar17);
            piVar18 = (int *)STAllPlayersC::GetObjPtr
                                       (g_sTAllPlayers_007FA174,
                                        CONCAT31((int3)((uint)puVar14 >> 8),local_c->field_0x24),
                                        local_28,CASE_1);
            puVar14 = extraout_ECX_00;
            if (piVar18 != (int *)0x0) {
              iVar10 = (**(code **)(*piVar18 + 0x2c))();
              if ((iVar10 < 1) || (0x28 < iVar10)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              puVar14 = extraout_ECX_01;
              if (((bVar24) &&
                  ((puVar14 = param_1, *(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == (short)piVar18[0x207])))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar10 = (**(code **)(*piVar18 + 0x2c))(), *(int *)((int)param_1 + 0xb) == iVar10
                  )))) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&local_28);
                  puVar14 = extraout_ECX_02;
                }
              }
            }
            uVar23 = uVar23 + 1;
            bVar24 = uVar23 < puVar16[3];
          } while ((int)uVar23 < (int)puVar16[3]);
        }
        FUN_006ae110((byte *)puVar16);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (void *)((int)local_24 + 1);
  bVar24 = local_24 < (void *)local_8[3];
  if ((int)local_8[3] <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

