#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::LoadNextLight */

undefined4 __thiscall STLightC::LoadNextLight(STLightC *this)

{
  int iVar1;
  STLightC *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  STLightC_field_00A3DArray *pSVar5;
  int iVar6;
  undefined4 uVar6;
  int iVar7;
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
                       (PTR_00806774,CASE_0,(&PTR_s_light01_007d0164)[local_c->field_003C],
                        0xffffffff,0,1,0,nullptr);
    /* ST_CALLSITE[0061DBE3]: CALL 0x004050d3; direct=004050D3 STLightC::sub_0061D9C0 */
    sub_0061D9C0(this_00,puVar3,(int *)&local_8,0);
    puVar4 = Library::DKW::LIB::MemAlloc(this_00->field_0093 << 4);
    this_00->field_0057 = puVar4;
    for (iVar7 = (this_00->field_0093 & 0xfffffffU) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar7 = 0;
    if (0 < this_00->field_0093) {
      do {
        *(undefined4 *)((int)this_00->field_0057 + iVar7 * 4) = 0xffffffff;
        iVar1 = iVar7 + this_00->field_0093 * 3;
        iVar7 = iVar7 + 1;
        *(undefined4 *)((int)this_00->field_0057 + iVar1 * 4) = 0xffffffff;
      } while (iVar7 < this_00->field_0093);
    }
    *(undefined4 *)this_00->field_0057 = 0;
    *(undefined4 *)((int)this_00->field_0057 + this_00->field_0093 * 0xc) = 0;
    pSVar5 = (STLightC_field_00A3DArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,local_8,0x30,10);
    this_00->field_00A3 = pSVar5;
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

