
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByClaim
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0068F7E0 -> 0068F020 @ 0068F82E */

void __thiscall AiTactClassTy::GiveObjByClaim(AiTactClassTy *this,uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  AiTactClassTy *this_00;
  int iVar4;
  undefined2 *puVar5;
  int *objPtr;
  int iVar6;
  AiFltClassTy *this_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_ESI;
  uint uVar8;
  void *unaff_EDI;
  bool bVar9;
  undefined8 uVar10;
  InternalExceptionFrame local_50;
  uint local_c;
  AiTactClassTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 == 0) {
    if ((param_1 != (uint *)0x0) && (param_1[3] != 0)) {
      ClaimSave(local_8);
      iVar4 = this_00->field_00A5;
      if (0 < *(int *)(iVar4 + 0xc)) {
        bVar9 = *(int *)(iVar4 + 0xc) != 0;
        uVar8 = 0;
        do {
          if (bVar9) {
            iVar4 = *(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          if ((iVar4 != 0) &&
             (*(AnonShape_00660D40_E58DF1E6 **)(iVar4 + 4) != (AnonShape_00660D40_E58DF1E6 *)0x0)) {
            thunk_FUN_00660d40(*(AnonShape_00660D40_E58DF1E6 **)(iVar4 + 4));
          }
          iVar4 = this_00->field_00A5;
          uVar8 = uVar8 + 1;
          bVar9 = uVar8 < *(uint *)(iVar4 + 0xc);
        } while ((int)uVar8 < (int)*(uint *)(iVar4 + 0xc));
      }
      thunk_FUN_00676c40((AnonShape_00676C40_253791B9 *)this_00->field_00BD,&LAB_0040242d);
      local_c = param_1[3];
      uVar7 = extraout_EDX;
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < param_1[3]) {
          puVar5 = (undefined2 *)(param_1[2] * local_c + param_1[7]);
        }
        else {
          puVar5 = (undefined2 *)0x0;
        }
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (int *)0x0;
        }
        else {
          objPtr = (int *)STAllPlayersC::GetObjPtr
                                    (g_sTAllPlayers_007FA174,
                                     CONCAT31((int3)((uint)uVar7 >> 8),this_00->field_0x24),
                                     CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5),CASE_1);
          uVar7 = extraout_EDX_00;
        }
        if (objPtr != (int *)0x0) {
          iVar4 = (**(code **)(*objPtr + 0x2c))();
          if (iVar4 == 0x78) {
            uVar10 = (**(code **)(*objPtr + 0x2c))();
            uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if ((int)uVar10 == 0x78) {
              iVar4 = *(int *)((int)objPtr + 0x259);
            }
            else {
              iVar4 = 0;
            }
            if ((iVar4 != 0) &&
               (uVar8 = thunk_FUN_0068e8c0(this_00,iVar4), uVar7 = extraout_EDX_01,
               this_00 = local_8, -1 < (int)uVar8)) {
              iVar4 = local_8->field_00BD;
              if (uVar8 < *(uint *)(iVar4 + 0xc)) {
                iVar4 = *(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c);
              }
              else {
                iVar4 = 0;
              }
              if ((iVar4 != 0) && (-1 < *(int *)(iVar4 + 0x30))) {
                uVar1 = *(ushort *)(iVar4 + 0xc);
                iVar4 = (**(code **)(*objPtr + 0x2c))();
                if (iVar4 == 0x78) {
                  *(uint *)((int)objPtr + 0x269) = (uint)uVar1;
                }
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_1,local_c);
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8->field_00BD,uVar8);
              uVar7 = extraout_EDX_02;
              this_00 = local_8;
            }
          }
          else {
            uVar8 = thunk_FUN_0068e8c0(this_00,iVar4);
            uVar7 = extraout_EDX_03;
            if (-1 < (int)uVar8) {
              iVar4 = this_00->field_00BD;
              if (uVar8 < *(uint *)(iVar4 + 0xc)) {
                iVar4 = *(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c);
              }
              else {
                iVar4 = 0;
              }
              if ((iVar4 != 0) && (uVar2 = *(uint *)(iVar4 + 0x30), -1 < (int)uVar2)) {
                iVar4 = this_00->field_00A5;
                if ((iVar4 == 0) ||
                   (((int)uVar2 < 0 || ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar2)))) {
                  this_01 = (AiFltClassTy *)0x0;
                }
                else {
                  this_01 = pARam00000004;
                  if (uVar2 < *(uint *)(iVar4 + 0xc)) {
                    this_01 = *(AiFltClassTy **)
                               (*(int *)(iVar4 + 8) * uVar2 + *(int *)(iVar4 + 0x1c) + 4);
                  }
                }
                AiFltClassTy::_AddObjFlt(this_01,(uint)objPtr,0);
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_1,local_c);
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)this_00->field_00BD,uVar8);
              uVar7 = extraout_EDX_04;
            }
          }
        }
      }
      ClaimRestore(this_00);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x242,0,iVar4,&DAT_007a4ccc,
                             s_AiTactClassTy__GiveObjByClaim_007d57b8);
  if (iVar6 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x243);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

