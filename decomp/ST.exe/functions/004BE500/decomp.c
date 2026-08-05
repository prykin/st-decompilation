#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bcomm.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  TLOBaseTyVTable *pTVar1;
  TLOBaseTy *this_00;
  dword dVar3;
  int iVar4;
  int local_EAX_123;
  int uVar5;
  int iVar5;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_8 = this;
  if ((param_1 != 0) && (dVar3 = this->slot_F8(), dVar3 == 0)) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    iVar4 = local_8->field_021D;
    thunk_FUN_0041dd00(local_8,param_1);
    if ((((this_00->field_021D != 0) && (iVar4 == 0)) &&
        (local_EAX_123 = LookupRecordByte(*(char *)&this_00->field_023D),
        *(int *)(&DAT_00795c00 + ((uint)(byte)local_EAX_123 + this_00->field_0235 * 3) * 4) != 0))
       && (this_00->field_0024 == (byte *)(uint)(byte)this_00->field_0010->field_112D)) {
      pTVar1 = this_00->vtable;
      uVar5 = LookupRecordByte(*(char *)&this_00->field_023D);
      (*pTVar1->vfunc_90)(this_00,4,
                          (short)*(undefined4 *)
                                  (&DAT_00795c00 + ((uint)(byte)uVar5 + this_00->field_0235 * 3) * 4
                                  ));
    }
    if (*(int *)(&DAT_00794d94 + this_00->field_0235 * 4) != 0) {
      sub_004C2F70(this_00);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bcomm.cpp",0x2f,0,iVar4,"%s",
                             "TLOBaseTy::SetActivity");
  if (iVar5 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Artem\\TLO_bcomm.cpp",0x30);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

