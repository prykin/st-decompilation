
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
  void *pvVar5;
  undefined2 *puVar6;
  STGameObjC *objPtr;
  int iVar7;
  DArrayTy *pDVar8;
  AiFltClassTy *this_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar9;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_ESI;
  uint uVar10;
  void *unaff_EDI;
  bool bVar11;
  undefined8 uVar12;
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
      pDVar8 = this_00->field_00A5;
      if (0 < (int)pDVar8->count) {
        bVar11 = pDVar8->count != 0;
        uVar10 = 0;
        do {
          if (bVar11) {
            pvVar5 = (void *)(pDVar8->elementSize * uVar10 + (int)pDVar8->data);
          }
          else {
            pvVar5 = (void *)0x0;
          }
          if ((pvVar5 != (void *)0x0) &&
             (*(AnonShape_00660D40_E58DF1E6 **)((int)pvVar5 + 4) !=
              (AnonShape_00660D40_E58DF1E6 *)0x0)) {
            thunk_FUN_00660d40(*(AnonShape_00660D40_E58DF1E6 **)((int)pvVar5 + 4));
          }
          pDVar8 = this_00->field_00A5;
          uVar10 = uVar10 + 1;
          bVar11 = uVar10 < pDVar8->count;
        } while ((int)uVar10 < (int)pDVar8->count);
      }
      thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)this_00->field_00BD,&LAB_0040242d);
      local_c = param_1[3];
      uVar9 = extraout_EDX;
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < param_1[3]) {
          puVar6 = (undefined2 *)(param_1[2] * local_c + param_1[7]);
        }
        else {
          puVar6 = (undefined2 *)0x0;
        }
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          objPtr = (STGameObjC *)0x0;
        }
        else {
          objPtr = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)uVar9 >> 8),this_00->field_0x24),
                              CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6),CASE_1);
          uVar9 = extraout_EDX_00;
        }
        if (objPtr != (STGameObjC *)0x0) {
          iVar4 = (*objPtr->vtable->vfunc_2C)();
          if (iVar4 == 0x78) {
            uVar12 = (*objPtr->vtable->vfunc_2C)();
            uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
            if ((int)uVar12 == 0x78) {
              iVar4 = *(int *)&objPtr[1].field_0x88;
            }
            else {
              iVar4 = 0;
            }
            if ((iVar4 != 0) &&
               (uVar10 = thunk_FUN_0068e8c0(this_00,iVar4), uVar9 = extraout_EDX_01,
               this_00 = local_8, -1 < (int)uVar10)) {
              pDVar8 = local_8->field_00BD;
              if (uVar10 < pDVar8->count) {
                pvVar5 = (void *)(pDVar8->elementSize * uVar10 + (int)pDVar8->data);
              }
              else {
                pvVar5 = (void *)0x0;
              }
              if ((pvVar5 != (void *)0x0) && (-1 < *(int *)((int)pvVar5 + 0x30))) {
                uVar1 = *(ushort *)((int)pvVar5 + 0xc);
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if (iVar4 == 0x78) {
                  *(uint *)&objPtr[1].field_0x98 = (uint)uVar1;
                }
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_1,local_c);
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8->field_00BD,uVar10);
              uVar9 = extraout_EDX_02;
              this_00 = local_8;
            }
          }
          else {
            uVar10 = thunk_FUN_0068e8c0(this_00,iVar4);
            uVar9 = extraout_EDX_03;
            if (-1 < (int)uVar10) {
              pDVar8 = this_00->field_00BD;
              if (uVar10 < pDVar8->count) {
                pvVar5 = (void *)(pDVar8->elementSize * uVar10 + (int)pDVar8->data);
              }
              else {
                pvVar5 = (void *)0x0;
              }
              if ((pvVar5 != (void *)0x0) &&
                 (uVar2 = *(uint *)((int)pvVar5 + 0x30), -1 < (int)uVar2)) {
                pDVar8 = this_00->field_00A5;
                if ((pDVar8 == (DArrayTy *)0x0) ||
                   (((int)uVar2 < 0 || ((int)pDVar8->count <= (int)uVar2)))) {
                  this_01 = (AiFltClassTy *)0x0;
                }
                else {
                  this_01 = pARam00000004;
                  if (uVar2 < pDVar8->count) {
                    this_01 = *(AiFltClassTy **)
                               ((int)pDVar8->data + pDVar8->elementSize * uVar2 + 4);
                  }
                }
                AiFltClassTy::_AddObjFlt(this_01,(uint)objPtr,0);
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_1,local_c);
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)this_00->field_00BD,uVar10);
              uVar9 = extraout_EDX_04;
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
  iVar7 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x242,0,iVar4,&DAT_007a4ccc,
                             s_AiTactClassTy__GiveObjByClaim_007d57b8);
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x243);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

