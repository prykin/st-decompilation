
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::InitData */

int __thiscall AiFltClassTy::InitData(AiFltClassTy *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  AiFltClassTy *pAVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  int *piVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  InternalExceptionFrame local_50;
  AiFltClassTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_c;
  if (iVar4 == 0) {
    if (local_c == (AiFltClassTy *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)&local_c->field_0x20;
    }
    puVar7 = param_1;
    for (iVar4 = 0x98; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar1 = &local_c->field_0x20b;
    *(undefined4 *)&local_c->field_0x20 = 900;
    local_c->field_0x38 = 1;
    local_8 = 7;
    piVar8 = (int *)puVar1;
    do {
      if (*piVar8 != 0) {
        iVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar8[1] + 0x25f + (int)param_1));
        *piVar8 = iVar4;
      }
      piVar8 = piVar8 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(int *)puVar1 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      *(uint **)puVar1 = puVar5;
    }
    if (*(int *)&pAVar3->field_0x217 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x34,10);
      *(uint **)&pAVar3->field_0x217 = puVar5;
    }
    if (*(int *)&pAVar3->field_0x223 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)&pAVar3->field_0x223 = puVar5;
    }
    if (*(int *)&pAVar3->field_0x22f == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)&pAVar3->field_0x22f = puVar5;
    }
    if (*(int *)&pAVar3->field_0x23b == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)&pAVar3->field_0x23b = puVar5;
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  thunk_FUN_0065d480((int)local_c);
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x31,0,iVar4,&DAT_007a4ccc,
                             s_AiFltClassTy__InitData_007d2ba0);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x32);
  return iVar4;
}

