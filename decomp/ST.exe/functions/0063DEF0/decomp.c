#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagNuclear
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00639C90 @ 0063AA64 -> read as EAX on
   every CFG path | 0063D100 @ 0063D1EF -> read as EAX on every CFG path */

int __thiscall STTmMineC::LoadImagNuclear(STTmMineC *this,int param_1)

{
  STTmMineC *pSVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  InternalExceptionFrame local_54;
  int local_10;
  STTmMineC *local_c;
  uint local_8;

  local_10 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c->field_033A == -1) {
      /* ST_CALLSITE[0063DF52]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"expl_nb0",0xffffffff,0,1,0,
                          nullptr);

      ST3DSMAPContext::sub_006E8660
                (pSVar2->field_0211,(int *)&local_8,1,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0x6f,0xf0,0);

      ST3DSMAPContext::sub_006E98E0
                (pSVar2->field_0211,local_8,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      ST3DSMAPContext::sub_006EA270(pSVar2->field_0211,local_8,0,pSVar2->field_033E);
      Library::Ourlib::ST3DSMAP::SprMove
                (pSVar2->field_0211,local_8,
                 (float)pSVar2->field_0266 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_026A * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_026E * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

      Library::Ourlib::ST3DSMAP::SprShow(pSVar2->field_0211,local_8,0);
      Library::Ourlib::ST3DSMAP::SprHide(pSVar2->field_0211,local_8);
      pSVar2->field_0346 = 0;
      pSVar2->field_033A = local_8;
      pSVar2->field_0342 = *(undefined4 *)puVar4;
    }
    if ((pSVar2->field_0353 == -1) && (param_1 != 0)) {
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"expl_fla",0xffffffff,0,1,0,
                          nullptr);
      pSVar2->field_034B = puVar4;
      pSVar2->field_034F = 0;
    }
    g_currentExceptionFrame = local_54.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_TmMin.cpp",0x5d3,0,iVar3,"%s",
                             "STTmMineC::LoadImagNuclear");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_TmMin.cpp",0x5d5);
  return 0xffff;
}

