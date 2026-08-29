#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0051FBA0; family_names=HelpStringTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:1,1c:0} */

int __thiscall HelpStringTy::GetMessage(HelpStringTy *this,STMessage *message)

{
  HelpStringTy *this_00;
  int local_EAX_36;
  ccFntTy *pcVar2;
  int uVar4;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar3;
  byte *puVar4;
  int iVar2;
  int iVar6;
  int iVar5;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  local_EAX_36 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_36 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      if ((local_8->field_012E != 0) &&

         (iVar5 = STAppC::sub_006E51B0(local_8->field_0010),
         this_00->field_0126 <= (uint)(iVar5 - this_00->field_0122))) {
        memset(&this_00->field_0018, 0, 0x104); /* compiler bulk-zero initialization */
        /* ST_CALLSITE[0051FD19]: CALL 0x004015fa; direct=004015FA HelpStringTy::OutStr */
        OutStr(this_00);
        this_00->field_011C = 0;
        this_00->field_012E = 0;
      }
      break;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[0051FBFE]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
      pcVar2 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
      this_00->field_011E = pcVar2;
      pcVar2->field_0058 = 0;
      pcVar2->field_005C = 0;
      puVar9 = PTR_0080679c + 0x14;
      iVar5 = 1;

      uVar4 = FUN_006b4fe0(PTR_0080679c);
      pRVar3 = (RecoveredRecord_006B4FA0_DAC3A217 *)

               FUN_006b50c0((g_nWidth_00806730 -
                            ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e)) + -0x87,0x12,
                            (uint)PTR_0080679c[7],uVar4,(undefined4 *)puVar9,iVar5);
      this_00->field_012A = (ushort *)pRVar3;
      uVar7 = *(uint *)&pRVar3[1].field_0x4;
      if (uVar7 == 0) {
        uVar7 = ((uint)pRVar3->field_000E * *(int *)&pRVar3->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)&pRVar3->field_0x8;
      }

      puVar4 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar3));
      memset(puVar4, 0, uVar7); /* compiler bulk-zero initialization */
      g_helpString_00801694 = this_00;
      break;
    case MESS_SHARED_0003:
      g_helpString_00801694 = nullptr;
      if (local_8->field_011E != nullptr) {
        ccFntTy::operator_delete((uint *)local_8->field_011E);
        this_00->field_011E = nullptr;
      }
      if (this_00->field_012A != nullptr) {
        FreeAndNull(&this_00->field_012A);
      }
      break;
    case MESS_SHARED_0005:
      /* ST_CALLSITE[0051FCE2]: CALL 0x004015fa; direct=004015FA HelpStringTy::OutStr */
      OutStr(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar2 = FUN_006e5fd0(this_00,message);
    return iVar2;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\helpstr.cpp",0x4d,0,local_EAX_36,
                             "%s","HelpStringTy::GetMessage");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_36,0,"E:\\__titans\\Andrey\\helpstr.cpp",0x4d);
  return 0xffff;
}

