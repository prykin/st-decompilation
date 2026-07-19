
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PrepBkgMess */

void __thiscall FSGSTy::PrepBkgMess(FSGSTy *this,char param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar3 = local_10;
  if (iVar4 == 0) {
    puVar1 = &local_10->field_1AC0;
    if (local_10->field_1AC0 != 0) {
      FUN_006ab060(puVar1);
    }
    if (param_1 == '\0') {
      local_8 = 0x106;
      local_c = 0x1b8;
    }
    else {
      local_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      local_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar4 = 1;
    puVar8 = (undefined4 *)(*(int *)&pFVar3->field_0x5d + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)&pFVar3->field_0x5d);
    uVar6 = FUN_006b50c0(local_c,local_8,(uint)*(ushort *)(*(int *)&pFVar3->field_0x5d + 0xe),uVar5,
                         puVar8,iVar4);
    uVar5 = pFVar3->field_1ABC;
    *puVar1 = uVar6;
    FUN_006b2410((int)DAT_008075a8,uVar5,uVar6);
    FUN_006b2800((int)DAT_008075a8,pFVar3->field_1ABC,*(uint *)(*puVar1 + 4),*(uint *)(*puVar1 + 8))
    ;
    if (param_1 == '\0') {
      uVar5 = 0xb4;
    }
    else {
      uVar5 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pFVar3->field_1ABC,0xffffffff,uVar5,
               (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    FUN_006b3af0(DAT_008075a8,pFVar3->field_1ABC);
    pFVar3->field_0x1abb = param_1;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__PrepBkgMess_007cc1cc);
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

