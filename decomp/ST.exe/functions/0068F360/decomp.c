
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GiveObjByFltType */

void __thiscall AiTactClassTy::GiveObjByFltType(AiTactClassTy *this,int param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  AiTactClassTy *pAVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int *piVar10;
  AiFltClassTy *pAVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  AiTactClassTy *local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar6 = local_8;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar12 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x276,0,iVar7,&DAT_007a4ccc,
                                s_AiTactClassTy__GiveObjByFltType_007d57dc);
    if (iVar12 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x277);
    return;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  local_c = thunk_FUN_0068e480(local_8,1);
  local_10 = thunk_FUN_0068e480(pAVar6,2);
  local_14 = thunk_FUN_0068e480(pAVar6,4);
  local_18 = thunk_FUN_0068e480(pAVar6,0x10);
  uVar3 = *(uint *)(param_1 + 0xc);
joined_r0x0068f3e2:
  do {
    while( true ) {
      do {
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) {
          g_currentExceptionFrame = local_5c.previous;
          return;
        }
        if (uVar3 < *(uint *)(param_1 + 0xc)) {
          puVar8 = (undefined2 *)(*(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x1c));
        }
        else {
          puVar8 = (undefined2 *)0x0;
        }
        uVar9 = CONCAT22((short)((uint)puVar8 >> 0x10),*puVar8);
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,CONCAT31((int3)(uVar9 >> 8),pAVar6->field_0x24),
                                      uVar9,CASE_1);
        }
        pAVar6 = local_8;
      } while (piVar10 == (int *)0x0);
      iVar7 = (**(code **)(*piVar10 + 0x2c))();
      if ((iVar7 != 0x78) || ((int)local_c < 0)) break;
      iVar7 = local_8->field_00A5;
      if ((iVar7 == 0) || ((int)*(uint *)(iVar7 + 0xc) <= (int)local_c)) {
        pAVar11 = (AiFltClassTy *)0x0;
      }
      else {
        pAVar11 = pARam00000004;
        if (local_c < *(uint *)(iVar7 + 0xc)) {
          pAVar11 = *(AiFltClassTy **)(*(int *)(iVar7 + 8) * local_c + *(int *)(iVar7 + 0x1c) + 4);
        }
      }
      uVar1 = pAVar11->field_007D;
      iVar7 = (**(code **)(*piVar10 + 0x2c))();
      if (iVar7 == 0x78) {
        *(uint *)((int)piVar10 + 0x269) = (uint)uVar1;
      }
      FUN_006b0c70(param_1,uVar3);
      pAVar6 = local_8;
    }
    if ((iVar7 < 0x32) || (0x73 < iVar7)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar9 = local_c;
    pAVar6 = local_8;
    if ((bVar5) || (iVar7 == 0x78)) goto LAB_0068f509;
    sVar2 = local_8->field_0039;
    if (sVar2 == 1) {
      iVar12 = 8;
    }
    else if (sVar2 == 2) {
      iVar12 = 0x14;
    }
    else if (sVar2 == 3) {
      iVar12 = 0x1a;
    }
    else {
      iVar12 = 0;
    }
    uVar13 = local_10;
    if (iVar7 != iVar12) {
      if (sVar2 == 1) {
        iVar12 = 0xc;
      }
      else if (sVar2 == 2) {
        iVar12 = 0x18;
      }
      else if (sVar2 == 3) {
        iVar12 = 0x19;
      }
      else {
        iVar12 = 0;
      }
      uVar13 = local_18;
      uVar9 = local_14;
      if (iVar7 == iVar12) goto LAB_0068f509;
    }
  } while ((int)uVar13 < 0);
  iVar7 = local_8->field_00A5;
  uVar9 = uVar13;
  goto LAB_0068f516;
LAB_0068f509:
  if (-1 < (int)uVar9) {
    iVar7 = local_8->field_00A5;
LAB_0068f516:
    if ((iVar7 == 0) || ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar9)) {
      pAVar11 = (AiFltClassTy *)0x0;
    }
    else {
      pAVar11 = pARam00000004;
      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
        pAVar11 = *(AiFltClassTy **)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c) + 4);
      }
    }
    AiFltClassTy::_AddObjFlt(pAVar11,piVar10,0);
    FUN_006b0c70(param_1,uVar3);
    pAVar6 = local_8;
  }
  goto joined_r0x0068f3e2;
}

