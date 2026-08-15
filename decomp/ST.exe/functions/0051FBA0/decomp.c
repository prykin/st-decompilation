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
  ushort *puVar3;
  byte *puVar4;
  DWORD DVar5;
  int iVar2;
  int iVar6;
  int iVar7;
  uint uVar9;
  char *pcVar10;
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
         (DVar5 = STAppC::sub_006E51B0(local_8->field_0010),
         this_00->field_0126 <= DVar5 - this_00->field_0122)) {
        pcVar10 = &this_00->field_0018;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pcVar10 = 0;
          pcVar10 = pcVar10 + 4;
        }
        OutStr(this_00);
        this_00->field_011C = 0;
        this_00->field_012E = 0;
      }
      break;
    case MESS_ID_CREATE:
      pcVar2 = (ccFntTy *)ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
      this_00->field_011E = pcVar2;
      pcVar2->field_0058 = 0;
      pcVar2->field_005C = 0;
      puVar3 = PTR_0080679c + 0x14;
      iVar7 = 1;
      uVar4 = FUN_006b4fe0((int)PTR_0080679c);
      puVar3 = (ushort *)
               FUN_006b50c0((g_nWidth_00806730 -
                            ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e)) + -0x87,0x12,
                            (uint)PTR_0080679c[7],uVar4,(undefined4 *)puVar3,iVar7);
      this_00->field_012A = puVar3;
      uVar9 = *(uint *)(puVar3 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar3 + 4);
      }
      puVar4 = (byte *)FUN_006b4fa0((int *)puVar3);
      memset(puVar4, 0, uVar9); /* compiler bulk-zero initialization */
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

