
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::InitData */

int __thiscall AiFltClassTy::InitData(AiFltClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiFltClassTy *pAVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int *piVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_50;
  AiFltClassTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c == (AiFltClassTy *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = &local_c->field_0020;
    }
    puVar6 = param_1;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar8 = &local_c->field_020B;
    local_c->field_0020 = 900;
    local_c->field_0038 = 1;
    local_8 = 7;
    piVar7 = puVar8;
    do {
      if (*piVar7 != 0) {
        iVar3 = FUN_006b0060((uint *)0x0,(uint *)(piVar7[1] + 0x25f + (int)param_1));
        *piVar7 = iVar3;
      }
      piVar7 = piVar7 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*puVar8 == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      *puVar8 = puVar4;
    }
    if (pAVar2->field_0217 == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x34,10);
      pAVar2->field_0217 = puVar4;
    }
    if (pAVar2->field_0223 == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      pAVar2->field_0223 = puVar4;
    }
    if (pAVar2->field_022F == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      pAVar2->field_022F = puVar4;
    }
    if (pAVar2->field_023B == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      pAVar2->field_023B = puVar4;
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  thunk_FUN_0065d480((int)local_c);
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x31,0,iVar3,&DAT_007a4ccc,
                             s_AiFltClassTy__InitData_007d2ba0);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x32);
  return iVar3;
}

