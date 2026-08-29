#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::LoadImagJMine
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00618C00 @ 00618DA4 -> killed on
   every CFG path | 00618C00 @ 00618DF5 -> killed on every CFG path | 00618C00 @ 00618E7B -> killed
   on every CFG path | 00619A20 @ 00619A3C -> killed on every CFG path | 00619C70 @ 00619FEB -> read
   as EAX on every CFG path | 00619C70 @ 0061AB87 -> read as EAX on every CFG path | 0061C910 @
   0061C999 -> read as EAX on every CFG path */

int __thiscall STJumpMineC::LoadImagJMine(STJumpMineC *this,int param_1)

{
  int iVar2;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  STJumpMineC *pSVar6;
  InternalExceptionFrame local_4c;
  STJumpMineC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar6 = local_8;
  if (iVar2 == 0) {
    if (param_1 == 1) {
      /* ST_CALLSITE[00619633]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"jmpmine",0xffffffff,0,1,0,nullptr
                         );
      pSVar6 = local_8;
      piVar5 = &local_8->field_0097;

      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,piVar5,1,0,STField<uint>(puVar2,9),
                 STField<uint>(puVar2,0xd),0x5a,0x45,0);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*piVar5,0,*(int *)puVar2,STField<int>(puVar2,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*piVar5,0,pSVar6->field_00AB);
      iVar4 = *(int *)puVar2;
      pSVar6->field_009B = puVar2;
      pSVar6->field_00AF = iVar4;
      if (DAT_00807326 != '\0') {
        Library::Ourlib::ST3DSMAP::SprSetShadow
                  (g_sT3DSMAPContext_00807598,*piVar5,0,0x401109,(uint)&pSVar6->field_0x4d);
      }
    }
    else {
      piVar5 = &local_8->field_0097;
      if (-1 < local_8->field_0097) {
        Library::Ourlib::ST3DSMAP::SprSetShadow
                  (g_sT3DSMAPContext_00807598,local_8->field_0097,0,0,(uint)local_8);
        Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,*piVar5);
      }
      /* ST_CALLSITE[00619716]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"exptme",0xffffffff,0,1,0,nullptr);

      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,piVar5,3,0,STField<uint>(puVar2,9),
                 STField<uint>(puVar2,0xd),0x5a,0x45,0);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*piVar5,0,*(int *)puVar2,STField<int>(puVar2,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*piVar5,0,pSVar6->field_00AB);
      pSVar6->field_00AF = *(int *)puVar2;
      /* ST_CALLSITE[0061978D]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806774,CASE_1D,"expmask2",0xffffffff,0,1,0,
                          nullptr);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*piVar5,1,*(int *)puVar2,STField<int>(puVar2,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*piVar5,1,pSVar6->field_00BC);
      ST3DSMAPContext::sub_006EA800(g_sT3DSMAPContext_00807598,*piVar5,1,1);
      Library::Ourlib::ST3DSMAP::SprSetMShadowTbl
                (g_sT3DSMAPContext_00807598,*piVar5,PTR_008032b8,0x10);
      pSVar6->field_00C0 = *(undefined4 *)puVar2;
      pSVar6->field_00BB = 1;
      /* ST_CALLSITE[00619817]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,"bulb_n4",0xffffffff,0,1,0,nullptr
                         );

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,*piVar5,2,*(int *)puVar2,STField<int>(puVar2,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*piVar5,2,pSVar6->field_00B7);
      ST3DSMAPContext::sub_006E9D40(g_sT3DSMAPContext_00807598,(uint *)*piVar5,2);
      pSVar6->field_00B3 = *(int *)puVar2;
    }
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,*piVar5,
               (float)pSVar6->field_009F * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar6->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
               (float)pSVar6->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*piVar5,0);
    pSVar6->field_00C4 = 1;
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\nick\\to_jump_mine.cpp",0x151,0,iVar2,"%s"
                             ,"STJumpMineC::LoadImagJMine");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\nick\\to_jump_mine.cpp",0x153);
  return 0xffff;
}

