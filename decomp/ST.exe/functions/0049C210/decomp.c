
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadRC */

undefined4 __thiscall STGroupBoatC::GrpLoadRC(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  AnonShape_006ACC70_C8641025 *pAVar6;
  AnonShape_0048D440_9DC42AE7 *this_01;
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
  undefined4 *puVar11;
  uint uVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  uint uVar14;
  short *psVar15;
  char cVar16;
  Global_sub_0043EC20_param_2Enum GVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  STAllPlayersC_GetTOBJList_param_2Enum SVar24;
  undefined4 local_100 [17];
  InternalExceptionFrame local_bc;
  short local_78 [3];
  int local_72;
  short local_6e;
  short local_6c;
  short local_6a;
  int local_68;
  int local_3e;
  int local_34 [5];
  STGroupBoatC *local_20;
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
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    if (iVar3 == -0x5001fff7) {
      if ((byte *)local_20->field_010F != (byte *)0x0) {
        FUN_006ae110((byte *)local_20->field_010F);
        this_00->field_010F = 0;
      }
      if ((byte *)this_00->field_0127 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0127);
        this_00->field_0127 = 0;
      }
      if ((byte *)this_00->field_024E != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_024E);
        this_00->field_024E = 0;
      }
      if ((byte *)this_00->field_0266 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0266);
        this_00->field_0266 = 0;
      }
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x8ee,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpLoadRC_007abfc0);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x8ef);
      return local_34[4];
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar11 = (undefined4 *)&local_20->field_0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_20->field_0065 = 0;
    if ((byte *)local_20->field_024E != (byte *)0x0) {
      FUN_006ae110((byte *)local_20->field_024E);
    }
    if ((byte *)this_00->field_0266 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0266);
    }
    puVar11 = &this_00->field_010B;
    puVar13 = &this_00->field_024A;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    this_00->field_024E = 0;
    this_00->field_0266 = 0;
    if (this_00->field_010B == 0) {
      if ((this_00->field_010F == 0) ||
         (local_c = *(uint *)(this_00->field_010F + 0xc), local_c == 0)) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x81d);
      }
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      this_00->field_024E = puVar4;
      uVar14 = 0;
      if (0 < (int)local_c) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)this_00->field_010F,uVar14,&local_8);
          if (((short)local_8 != -1) &&
             (piVar5 = (int *)STAllPlayersC::GetObjPtr
                                        (g_sTAllPlayers_007FA174,
                                         CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                  this_00->field_0024),local_8,CASE_1),
             piVar5 != (int *)0x0)) {
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
            if (((iVar9 != local_14) && (iVar3 == this_00->field_025E)) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(local_18), 0 < iVar3)) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_024E,&local_8);
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_c);
      }
      FUN_006ae110((byte *)this_00->field_010F);
      this_00->field_010F = 0;
      if (*(int *)(this_00->field_024E + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x834);
      }
    }
    else {
      pAVar6 = (AnonShape_006ACC70_C8641025 *)
               thunk_FUN_0043ec20(this_00->field_0024,this_00->field_025E,this_00->field_0252,
                                  this_00->field_0254,this_00->field_0256,this_00->field_0258,
                                  this_00->field_025A,this_00->field_025C,1,-1);
      if (pAVar6 == (AnonShape_006ACC70_C8641025 *)0x0) {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_024E = puVar4;
        local_8 = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puVar4,&local_8);
      }
      else {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_024E = puVar4;
        local_c = pAVar6->field_000C;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {
            FUN_006acc70(pAVar6,uVar14,&local_8);
            piVar5 = (int *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,
                                       CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                this_00->field_0024),local_8,CASE_1);
            if ((piVar5 != (int *)0x0) &&
               (iVar3 = (**(code **)(*piVar5 + 0x88))(local_18), 0 < iVar3)) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_024E,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
        if (((uint *)this_00->field_024E)[3] == 0) {
          local_8 = 0xffff;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_024E,&local_8);
        }
        FUN_006ae110((byte *)pAVar6);
      }
    }
    if (this_00->field_0262 == 0) {
      if ((this_00->field_0127 == 0) ||
         (uVar14 = *(uint *)(this_00->field_0127 + 0xc), local_c = uVar14, uVar14 == 0)) {
        uVar14 = local_c;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x855);
      }
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      uVar12 = 0;
      this_00->field_0266 = puVar4;
      if (0 < (int)uVar14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)this_00->field_0127,uVar12,&local_8);
          if ((((short)local_8 != -1) &&
              (piVar5 = (int *)STAllPlayersC::GetObjPtr
                                         (g_sTAllPlayers_007FA174,
                                          CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                   this_00->field_0024),local_8,CASE_1),
              piVar5 != (int *)0x0)) &&
             ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3b || (iVar3 == 0x60)))) {
            Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0266,&local_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar14);
      }
      FUN_006ae110((byte *)this_00->field_0127);
      this_00->field_0127 = 0;
      if (*(int *)(this_00->field_0266 + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                   0x866);
      }
    }
    if (this_00->field_0262 == 2) {
      iVar3 = thunk_FUN_004406c0(this_00->field_0024);
      if ((char)iVar3 == '\x03') {
        sVar23 = this_00->field_0274;
        sVar22 = this_00->field_0272;
        sVar21 = this_00->field_0270;
        sVar20 = this_00->field_026E;
        sVar19 = this_00->field_026C;
        sVar18 = this_00->field_026A;
        cVar16 = this_00->field_0024;
        GVar17 = 0x60;
      }
      else {
        sVar23 = this_00->field_0274;
        sVar22 = this_00->field_0272;
        sVar21 = this_00->field_0270;
        sVar20 = this_00->field_026E;
        sVar19 = this_00->field_026C;
        sVar18 = this_00->field_026A;
        cVar16 = this_00->field_0024;
        GVar17 = 0x3b;
      }
      pAVar6 = (AnonShape_006ACC70_C8641025 *)
               thunk_FUN_0043ec20(cVar16,GVar17,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,0,-1);
      if (pAVar6 == (AnonShape_006ACC70_C8641025 *)0x0) {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar4;
        local_8 = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puVar4,&local_8);
      }
      else {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar4;
        local_c = pAVar6->field_000C;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {
            FUN_006acc70(pAVar6,uVar14,&local_8);
            uVar12 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this_00->field_0024),
                                local_8,CASE_1);
            if (uVar12 != 0) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0266,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
        FUN_006ae110((byte *)pAVar6);
      }
    }
    if (this_00->field_0262 == 1) {
      iVar3 = thunk_FUN_004406c0(this_00->field_0024);
      if ((char)iVar3 == '\x03') {
        cVar16 = this_00->field_0024;
        SVar24 = 0x60;
      }
      else {
        cVar16 = this_00->field_0024;
        SVar24 = 0x3b;
      }
      pAVar6 = (AnonShape_006ACC70_C8641025 *)
               STAllPlayersC::GetTOBJList(g_sTAllPlayers_007FA174,cVar16,SVar24,0,-1);
      if (pAVar6->field_000C == 0) {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar4;
        local_8 = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puVar4,&local_8);
      }
      else {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar4;
        local_c = pAVar6->field_000C;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {
            FUN_006acc70(pAVar6,uVar14,&local_8);
            uVar12 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_EDX_02 >> 8),this_00->field_0024),
                                local_8,CASE_1);
            if (uVar12 != 0) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0266,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
      }
      FUN_006ae110((byte *)pAVar6);
    }
    DistributeMD(this_00,1,(DArrayTy *)this_00->field_024E,(DArrayTy *)this_00->field_0266,
                 (DArrayTy *)this_00->field_0029);
  }
  local_34[4] = 2;
  if (((uint)PTR_00802a38->field_00E4 % 100 == 0) &&
     ((this_00->field_024A == 0 || (this_00->field_0262 == 0)))) {
    local_10 = 0;
    local_c = *(uint *)(this_00->field_0029 + 0xc);
    if (0 < (int)local_c) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)this_00->field_0029,local_10,&local_8);
        this_01 = (AnonShape_0048D440_9DC42AE7 *)
                  STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,
                             CONCAT31((int3)((uint)extraout_EDX_03 >> 8),this_00->field_0024),
                             local_8,CASE_1);
        if ((this_01 != (AnonShape_0048D440_9DC42AE7 *)0x0) &&
           (iVar3 = thunk_FUN_0045ff10((int)this_01), iVar3 == 0xc)) {
          bVar2 = thunk_FUN_0048d440(this_01);
          local_1c = CONCAT31(extraout_var,bVar2);
          if (local_1c != 0) {
            psVar7 = (short *)thunk_FUN_0048dc90(this_01,local_100);
            psVar15 = local_78;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)psVar15 = *(undefined4 *)psVar7;
              psVar7 = psVar7 + 2;
              psVar15 = psVar15 + 2;
            }
            *psVar15 = *psVar7;
            if ((local_3e == 6) || (local_3e == 0xe)) break;
            if (local_1c == 1) {
              if (local_72 != -1) {
                if ((((local_78[0] < 0) || (SHORT_007fb240 <= local_78[0])) || (local_78[1] < 0)) ||
                   (((SHORT_007fb242 <= local_78[1] || (local_78[2] < 0)) ||
                    (SHORT_007fb244 <= local_78[2])))) {
                  piVar5 = (int *)0x0;
                }
                else {
                  piVar5 = *(int **)(DAT_007fb248 +
                                    ((int)local_78[2] * (int)SHORT_007fb246 +
                                     (int)local_78[1] * (int)SHORT_007fb240 + (int)local_78[0]) * 8)
                  ;
                }
                if (((piVar5 != (int *)0x0) && (piVar5[6] == local_72)) &&
                   (iVar3 = (**(code **)(*piVar5 + 0x88))(&local_1c), 0 < iVar3)) break;
              }
            }
            else if (local_68 != -1) {
              if (((((local_6e < 0) || (SHORT_007fb240 <= local_6e)) || (local_6c < 0)) ||
                  ((SHORT_007fb242 <= local_6c || (local_6a < 0)))) || (SHORT_007fb244 <= local_6a))
              {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(DAT_007fb248 +
                                ((int)local_6a * (int)SHORT_007fb246 +
                                 (int)local_6c * (int)SHORT_007fb240 + (int)local_6e) * 8);
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
  g_currentExceptionFrame = local_bc.previous;
  return local_34[4];
}

