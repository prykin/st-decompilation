#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0051FBA0; family_names=HelpStringTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:1,1c:0} */

int __thiscall HelpStringTy::GetMessage(HelpStringTy *this,STMessage *message)

{
  code *pcVar1;
  HelpStringTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  uint uVar4;
  AnonPointee_HelpStringTy_012A *pAVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int iVar8;
  ccFntTy *this_01;
  uint uVar9;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      if ((local_8->field_012E != 0) &&
         (DVar7 = FUN_006e51b0(local_8->field_0010),
         this_00->field_0126 <= DVar7 - this_00->field_0122)) {
        puVar6 = (undefined4 *)&this_00->field_0018;
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        OutStr(this_00);
        this_00->field_011C = 0;
        this_00->field_012E = 0;
      }
      break;
    case MESS_ID_CREATE:
      pcVar3 = (ccFntTy *)ccFntTy::operator(PTR_00802a28,0x19d,*(int *)&PTR_00802a28->field_0x30);
      this_00->field_011E = pcVar3;
      pcVar3->field_0058 = 0;
      pcVar3->field_005C = 0;
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar2 = 1;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      pAVar5 = (AnonPointee_HelpStringTy_012A *)
               FUN_006b50c0((g_nWidth_00806730 -
                            ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e)) + -0x87,0x12,
                            (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar6,iVar2);
      this_00->field_012A = pAVar5;
      uVar4 = pAVar5->field_0014;
      if (uVar4 == 0) {
        uVar4 = ((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar5->field_0008;
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int)pAVar5);
      for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      DAT_00801694 = this_00;
      break;
    case MESS_SHARED_0003:
      DAT_00801694 = (HelpStringTy *)0x0;
      if (local_8->field_011E != (ccFntTy *)0x0) {
        ccFntTy::operator(this_01,(uint *)local_8->field_011E);
        this_00->field_011E = (ccFntTy *)0x0;
      }
      if (this_00->field_012A != (AnonPointee_HelpStringTy_012A *)0x0) {
        FreeAndNull(&this_00->field_012A);
      }
      break;
    case MESS_SHARED_0005:
      OutStr(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = FUN_006e5fd0(this_00,message);
    return iVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\helpstr.cpp",0x4d,0,iVar2,"%s",
                             "HelpStringTy::GetMessage");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\helpstr.cpp",0x4d);
  return 0xffff;
}

