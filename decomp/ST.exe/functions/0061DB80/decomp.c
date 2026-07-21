#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::LoadNextLight */

undefined4 __thiscall STLightC::LoadNextLight(STLightC *this)

{
  code *pcVar1;
  STLightC *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_50;
  STLightC *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 == 0) {
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806774,CASE_0,(&PTR_s_light01_007d0164)[local_c->field_003C],
                        0xffffffff,0,1,0,(undefined4 *)0x0);
    thunk_FUN_0061d9c0(this_00,puVar3,(int *)&local_8,0);
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(this_00->field_0093 << 4);
    this_00->field_0057 = puVar4;
    for (iVar2 = (this_00->field_0093 & 0xfffffffU) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar2 = 0;
    if (0 < this_00->field_0093) {
      do {
        *(undefined4 *)(this_00->field_0057 + iVar2 * 4) = 0xffffffff;
        iVar6 = iVar2 + this_00->field_0093 * 3;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(this_00->field_0057 + iVar6 * 4) = 0xffffffff;
      } while (iVar2 < this_00->field_0093);
    }
    *(undefined4 *)this_00->field_0057 = 0;
    *(undefined4 *)(this_00->field_0057 + this_00->field_0093 * 0xc) = 0;
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_8,0x30,10);
    this_00->field_00A3 = puVar5;
    g_currentExceptionFrame = local_50.previous;
    return 1;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_light.Cpp",0x13b,0,iVar2,"%s",
                             "STLightC::LoadNextLight");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\nick\\to_light.Cpp",0x13d);
  return 0xffff;
}

