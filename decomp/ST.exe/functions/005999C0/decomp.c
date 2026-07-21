
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PrepBkgMess */

void __thiscall FSGSTy::PrepBkgMess(FSGSTy *this,char param_1)

{
  AnonPointee_FSGSTy_1AC0 **value;
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  uint uVar4;
  AnonPointee_FSGSTy_1AC0 *pAVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar2 = local_10;
  if (iVar3 == 0) {
    value = &local_10->field_1AC0;
    if (local_10->field_1AC0 != (AnonPointee_FSGSTy_1AC0 *)0x0) {
      FreeAndNull(value);
    }
    if (param_1 == '\0') {
      local_8 = 0x106;
      local_c = 0x1b8;
    }
    else {
      local_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      local_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar3 = 1;
    puVar7 = (undefined4 *)(pFVar2->field_005D + 0x28);
    uVar4 = FUN_006b4fe0(pFVar2->field_005D);
    pAVar5 = (AnonPointee_FSGSTy_1AC0 *)
             FUN_006b50c0(local_c,local_8,(uint)*(ushort *)(pFVar2->field_005D + 0xe),uVar4,puVar7,
                          iVar3);
    uVar4 = pFVar2->field_1ABC;
    *value = pAVar5;
    FUN_006b2410((int)DAT_008075a8,uVar4,(uint)pAVar5);
    FUN_006b2800((int)DAT_008075a8,pFVar2->field_1ABC,(*value)->field_0004,(*value)->field_0008);
    if (param_1 == '\0') {
      uVar4 = 0xb4;
    }
    else {
      uVar4 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pFVar2->field_1ABC,0xffffffff,uVar4,
               (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    FUN_006b3af0(DAT_008075a8,pFVar2->field_1ABC);
    pFVar2->field_1ABB = param_1;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8,0,iVar3,&DAT_007a4ccc,
                             s_FSGSTy__PrepBkgMess_007cc1cc);
  if (iVar6 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

