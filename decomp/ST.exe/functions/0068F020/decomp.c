
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByClaim */

void __thiscall AiTactClassTy::GiveObjByClaim(AiTactClassTy *this,int param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  AiTactClassTy *this_00;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  int iVar7;
  AiFltClassTy *this_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar8;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_ESI;
  uint uVar9;
  void *unaff_EDI;
  bool bVar10;
  undefined8 uVar11;
  InternalExceptionFrame local_50;
  uint local_c;
  AiTactClassTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 == 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      ClaimSave(local_8);
      iVar4 = *(int *)(this_00 + 0xa5);
      if (0 < *(int *)(iVar4 + 0xc)) {
        bVar10 = *(int *)(iVar4 + 0xc) != 0;
        uVar9 = 0;
        do {
          if (bVar10) {
            iVar4 = *(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
            thunk_FUN_00660d40(*(int *)(iVar4 + 4));
          }
          iVar4 = *(int *)(this_00 + 0xa5);
          uVar9 = uVar9 + 1;
          bVar10 = uVar9 < *(uint *)(iVar4 + 0xc);
        } while ((int)uVar9 < (int)*(uint *)(iVar4 + 0xc));
      }
      thunk_FUN_00676c40(*(int *)(this_00 + 0xbd),&LAB_0040242d);
      local_c = *(uint *)(param_1 + 0xc);
      uVar8 = extraout_EDX;
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < *(uint *)(param_1 + 0xc)) {
          puVar5 = (undefined2 *)(*(int *)(param_1 + 8) * local_c + *(int *)(param_1 + 0x1c));
        }
        else {
          puVar5 = (undefined2 *)0x0;
        }
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,CONCAT31((int3)((uint)uVar8 >> 8),this_00[0x24]),
                                     CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5),1);
          uVar8 = extraout_EDX_00;
        }
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x2c))();
          if (iVar4 == 0x78) {
            uVar11 = (**(code **)(*piVar6 + 0x2c))();
            uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
            if ((int)uVar11 == 0x78) {
              iVar4 = *(int *)((int)piVar6 + 0x259);
            }
            else {
              iVar4 = 0;
            }
            if ((iVar4 != 0) &&
               (uVar9 = thunk_FUN_0068e8c0(this_00,iVar4), uVar8 = extraout_EDX_01,
               this_00 = local_8, -1 < (int)uVar9)) {
              iVar4 = *(int *)(local_8 + 0xbd);
              if (uVar9 < *(uint *)(iVar4 + 0xc)) {
                iVar4 = *(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c);
              }
              else {
                iVar4 = 0;
              }
              if ((iVar4 != 0) && (-1 < *(int *)(iVar4 + 0x30))) {
                uVar1 = *(ushort *)(iVar4 + 0xc);
                iVar4 = (**(code **)(*piVar6 + 0x2c))();
                if (iVar4 == 0x78) {
                  *(uint *)((int)piVar6 + 0x269) = (uint)uVar1;
                }
                FUN_006b0c70(param_1,local_c);
              }
              FUN_006b0c70(*(int *)(local_8 + 0xbd),uVar9);
              uVar8 = extraout_EDX_02;
              this_00 = local_8;
            }
          }
          else {
            uVar9 = thunk_FUN_0068e8c0(this_00,iVar4);
            uVar8 = extraout_EDX_03;
            if (-1 < (int)uVar9) {
              iVar4 = *(int *)(this_00 + 0xbd);
              if (uVar9 < *(uint *)(iVar4 + 0xc)) {
                iVar4 = *(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c);
              }
              else {
                iVar4 = 0;
              }
              if ((iVar4 != 0) && (uVar2 = *(uint *)(iVar4 + 0x30), -1 < (int)uVar2)) {
                iVar4 = *(int *)(this_00 + 0xa5);
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
                AiFltClassTy::_AddObjFlt(this_01,piVar6,0);
                FUN_006b0c70(param_1,local_c);
              }
              FUN_006b0c70(*(int *)(this_00 + 0xbd),uVar9);
              uVar8 = extraout_EDX_04;
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

