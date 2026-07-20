
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::ExecTech */

void __thiscall AiPlrClassTy::ExecTech(AiPlrClassTy *this,void *param_1)

{
  short sVar1;
  code *pcVar2;
  AiPlrClassTy *this_00;
  undefined1 uVar3;
  int iVar4;
  DArrayTy *pDVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint uVar9;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  undefined4 unaff_ESI;
  void *pvVar10;
  void *unaff_EDI;
  AiTactClassTy *pAVar11;
  AnonShape_0068FD00_A5257008 *pAVar12;
  bool bVar13;
  int local_c8 [7];
  int local_ac [7];
  InternalExceptionFrame local_90;
  AnonShape_0068FD00_A5257008 local_4c [3];
  AiPlrClassTy *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  AiTactClassTy *local_8;
  
  if (((this->field_0695 != (DArrayTy *)0x0) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
     && ((this->field_066E == 0 ||
         ((uint)(this->field_0672 + this->field_066E) <= (uint)this->field_06FE)))) {
    this->field_0672 = this->field_06FE;
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    local_18 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_18;
    if (iVar4 == 0) {
      local_10 = 0;
      pDVar5 = local_18->field_06A1;
      if (0 < (int)pDVar5->count) {
        bVar13 = pDVar5->count != 0;
        uVar9 = extraout_EDX;
        do {
          uVar6 = local_10;
          if (bVar13) {
            pvVar10 = (void *)(pDVar5->elementSize * local_10 + (int)pDVar5->data);
          }
          else {
            pvVar10 = (void *)0x0;
          }
          switch(*(undefined1 *)((int)pvVar10 + 7)) {
          case 0:
            sVar1 = *(short *)((int)pvVar10 + 3);
            iVar4 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x5d7,
                                       (int)*(short *)((int)pvVar10 + 1));
            if (iVar4 < sVar1) {
              bVar13 = thunk_FUN_004e5f90(*(int *)&this_00->field_0x5d7,
                                          (int)*(short *)((int)pvVar10 + 1));
              uVar9 = extraout_EDX_01;
              if (CONCAT31(extraout_var,bVar13) == 0) {
                pAVar11 = (AiTactClassTy *)(int)*(short *)((int)pvVar10 + 1);
                local_14 = (int)*(short *)((int)pvVar10 + 3);
                local_8 = pAVar11;
                bVar13 = thunk_FUN_004e5910(*(int *)&this_00->field_0x5d7,(uint)pAVar11);
                uVar9 = extraout_EDX_02;
                if ((CONCAT31(extraout_var_00,bVar13) == 0) ||
                   (bVar13 = thunk_FUN_004e5c40(*(int *)&this_00->field_0x5d7,(uint)pAVar11),
                   uVar9 = extraout_EDX_03, CONCAT31(extraout_var_01,bVar13) == 0)) {
LAB_0067b6db:
                  bVar13 = false;
                }
                else {
                  uVar3 = thunk_FUN_004e6140(*(int *)&this_00->field_0x5d7,(int)pAVar11);
                  local_c = CONCAT31(extraout_var_02,uVar3);
                  iVar4 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x5d7,(int)pAVar11);
                  uVar9 = local_c;
                  if (((int)local_c <= iVar4) ||
                     ((iVar4 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x5d7,(int)pAVar11),
                      uVar9 = extraout_EDX_04, iVar4 != local_14 + -1 ||
                      (bVar13 = thunk_FUN_004e5f90(*(int *)&this_00->field_0x5d7,(uint)pAVar11),
                      uVar9 = extraout_EDX_05, CONCAT31(extraout_var_03,bVar13) != 0))))
                  goto LAB_0067b6db;
                  bVar13 = true;
                }
                if (bVar13) {
                  pDVar5 = this_00->field_0695;
                  uVar9 = 0;
                  local_c = 0;
                  uVar6 = pDVar5->count;
                  if (0 < (int)uVar6) {
                    do {
                      uVar9 = local_c;
                      if (((pDVar5 == (DArrayTy *)0x0) || ((int)local_c < 0)) ||
                         ((int)uVar6 <= (int)local_c)) {
LAB_0067b724:
                        local_8 = (AiTactClassTy *)0x0;
                      }
                      else {
                        if (local_c < uVar6) {
                          puVar7 = (uint *)(pDVar5->elementSize * local_c + (int)pDVar5->data);
                        }
                        else {
                          puVar7 = (uint *)0x0;
                        }
                        if (puVar7[1] == 0) goto LAB_0067b724;
                        local_8 = (AiTactClassTy *)*puVar7;
                      }
                      if (local_8 != (AiTactClassTy *)0x0) {
                        pAVar12 = local_4c;
                        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                          *(undefined4 *)pAVar12 = 0;
                          pAVar12 = (AnonShape_0068FD00_A5257008 *)&pAVar12->field_0x4;
                        }
                        local_4c[0]._4_4_ = this_00->field_06FE;
                        local_4c[0]._0_4_ = 0x73;
                        local_4c[0].field_0009 = 1;
                        local_4c[0].field_000A = pvVar10;
                        if (&stack0x00000000 != (undefined1 *)0x4c) {
                          AiTactClassTy::GetAiMess(local_8,local_4c);
                          uVar9 = local_c;
                        }
                        if ('\0' < (char)local_4c[0]._8_1_) {
                          *(undefined1 *)((int)pvVar10 + 7) = 1;
                          uVar9 = CONCAT22((short)(uVar9 >> 0x10),local_4c[0]._14_2_);
                          *(undefined2 *)((int)pvVar10 + 8) = local_4c[0]._14_2_;
                          break;
                        }
                      }
                      pDVar5 = this_00->field_0695;
                      uVar9 = uVar9 + 1;
                      uVar6 = pDVar5->count;
                      local_c = uVar9;
                    } while ((int)uVar9 < (int)uVar6);
                  }
                }
              }
            }
            else {
              *(undefined1 *)((int)pvVar10 + 7) = 2;
              uVar9 = extraout_EDX_00;
            }
            break;
          case 1:
            if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
              local_8 = (AiTactClassTy *)0x0;
            }
            else {
              local_8 = (AiTactClassTy *)
                        STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,
                                   CONCAT31((int3)(uVar9 >> 8),this_00->field_0x5d7),
                                   CONCAT22((short)((uint)pDVar5 >> 0x10),
                                            *(undefined2 *)((int)pvVar10 + 8)),CASE_1);
              uVar9 = extraout_EDX_06;
            }
            if (local_8 == (AiTactClassTy *)0x0) {
              *(undefined1 *)((int)pvVar10 + 7) = 0;
              *(undefined2 *)((int)pvVar10 + 8) = 0;
            }
            else {
              sVar1 = *(short *)((int)pvVar10 + 3);
              iVar4 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x5d7,
                                         (int)*(short *)((int)pvVar10 + 1));
              if (iVar4 < sVar1) {
                iVar4 = thunk_FUN_004e3800(local_8,(int)*(short *)((int)pvVar10 + 1),
                                           (int)*(short *)((int)pvVar10 + 3));
                uVar9 = extraout_EDX_08;
                if (iVar4 == 0) {
                  *(undefined1 *)((int)pvVar10 + 7) = 0;
                  *(undefined2 *)((int)pvVar10 + 8) = 0;
                }
              }
              else {
                *(undefined1 *)((int)pvVar10 + 7) = 2;
                uVar9 = extraout_EDX_07;
              }
            }
            break;
          case 2:
          case 3:
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pDVar5,local_10);
            local_10 = uVar6 - 1;
            uVar9 = extraout_EDX_09;
          }
          pDVar5 = this_00->field_06A1;
          local_10 = local_10 + 1;
          bVar13 = local_10 < pDVar5->count;
        } while ((int)local_10 < (int)pDVar5->count);
      }
      if (((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (this_00->field_0662 == '\x01')) &&
         (iVar4 = thunk_FUN_0067b1a0(this_00,(int)this_00->field_0660),
         iVar4 < (int)((-(uint)(this_00->field_05EC != 3) & 0xfffffffc) + 5))) {
        thunk_FUN_004e7230(*(int *)&this_00->field_0x5d7,(int)this_00->field_0660,local_c8,local_ac)
        ;
        iVar4 = 0;
        do {
          if (*(int *)((int)local_c8 + iVar4) == 0) {
            g_currentExceptionFrame = local_90.previous;
            return;
          }
          SetTech(this_00,*(int *)((int)local_c8 + iVar4),*(int *)((int)local_ac + iVar4),
                  (int)this_00->field_0663,(char)this_00->field_0660);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x1c);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;
    iVar8 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x40d,0,iVar4,&DAT_007a4ccc,
                               s_AiPlrClassTy__ExecTech_007d2f10);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x40e);
  }
  return;
}

