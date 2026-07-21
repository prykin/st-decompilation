#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bcomm.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  AnonPointee_TLOBaseTy_0000 *pAVar1;
  code *pcVar2;
  TLOBaseTy *pTVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_8 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if ((param_1 != 0) && (iVar4 = (*(code *)this->vtable->field_00F8)(), iVar4 == 0)) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pTVar3 = local_8;
  if (iVar4 == 0) {
    iVar4 = local_8->field_021D;
    thunk_FUN_0041dd00(local_8,param_1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((pTVar3->field_021D != 0) && (iVar4 == 0)) &&
        (uVar5 = GetPlayerRaceId(*(char *)&pTVar3->field_023D),
        *(int *)(&DAT_00795c00 + ((uVar5 & 0xff) + pTVar3->field_0235 * 3) * 4) != 0)) &&
       (pTVar3->field_0024 == (uint)*(byte *)(pTVar3->field_0010 + 0x112d))) {
      pAVar1 = pTVar3->vtable;
      uVar5 = GetPlayerRaceId(*(char *)&pTVar3->field_023D);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar1->field_0090)
                (4,*(undefined4 *)(&DAT_00795c00 + ((uVar5 & 0xff) + pTVar3->field_0235 * 3) * 4));
    }
    if (*(int *)(&DAT_00794d94 + pTVar3->field_0235 * 4) != 0) {
      thunk_FUN_004c2f70((AnonShape_004C2F70_6CAAACC0 *)pTVar3);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bcomm.cpp",0x2f,0,iVar4,"%s",
                             "TLOBaseTy::SetActivity");
  if (iVar6 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Artem\\TLO_bcomm.cpp",0x30);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

