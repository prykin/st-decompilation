#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STFieldC::CreateField */

undefined4 * __thiscall STFieldC::CreateField(STFieldC *this,int param_1,int param_2)

{
  STFieldC *pSVar2;
  int iVar3;
  ushort *puVar4;
  RecoveredRecordView_006E6540_42B9D3AB *pRVar5;
  uint *puVar6;
  char *text;
  InternalExceptionFrame local_50;
  STFieldC *local_c;
  RecoveredRecordView_006E6540_42B9D3AB *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x414,0,iVar3,"%s",
                               "STFieldC::CreateField");
    if (iVar3 == 0) {
      return (undefined4 *)local_8;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_0255 == 0xdd) {
    text = "ResSmall";
  }
  else if (local_c->field_0255 == 0xde) {
    text = "ResSmallM";
  }
  else {
    text = "ResSmall";
  }
  /* ST_CALLSITE[00580BED]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  if ((puVar4 != nullptr) && ((void *)pSVar2->field_0211 != nullptr)) {
    pRVar5 = FUN_006e6460((void *)pSVar2->field_0211,STField<undefined4>(puVar4,0x21),
                          *(int *)puVar4,(short)(STField<int>(puVar4,9) / 2),
                          (short)(STField<int>(puVar4,0xd) / 2),1,1);
    local_8 = nullptr;
    if (pRVar5 != nullptr) {
      local_8 = pRVar5;
      FUN_006e6540(pRVar5,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                   (float)param_2 * _DAT_007904f8 + _DAT_007904f4,-1);
      g_currentExceptionFrame = local_50.previous;
      return (undefined4 *)pRVar5;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return (undefined4 *)local_8;
}

