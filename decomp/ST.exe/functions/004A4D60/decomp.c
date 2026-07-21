#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall STGroupBoatC::ChangeMDNotify(STGroupBoatC *this,int param_1,short param_2)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint index;
  InternalExceptionFrame local_50;
  STGroupBoatC *local_c;
  short local_8 [2];

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar2 != -0x5001fff7) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1294,0,iVar2,
                                 "%s","STGroupBoatC::ChangeMDNotify");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x1295);
    }
    return;
  }
  if (param_1 == 1) {
    if (local_c->field_029B != 1) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (*(int *)&local_c->field_0x29f == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(*(int *)&local_c->field_0x29f + 0xc);
    index = 0;
    if (0 < iVar2) {
      do {
        DArrayGetElement(*(DArrayTy **)&this_00->field_0x29f,index,local_8);
        if (local_8[0] == -1) break;
        index = index + 1;
      } while ((int)index < iVar2);
    }
    psVar4 = &param_2;
LAB_004a4e27:
    Library::DKW::TBL::FUN_006ae140(*(uint **)&this_00->field_0x29f,index,(undefined4 *)psVar4);
  }
  else {
    if (*(int *)&local_c->field_0x29f == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(*(int *)&local_c->field_0x29f + 0xc);
    index = 0;
    if (0 < iVar2) {
      do {
        DArrayGetElement(*(DArrayTy **)&this_00->field_0x29f,index,local_8);
        if (local_8[0] == param_2) {
          local_8[0] = -1;
          local_8[1] = 0;
          psVar4 = local_8;
          goto LAB_004a4e27;
        }
        index = index + 1;
      } while ((int)index < iVar2);
    }
  }
  DistributeDock(this_00,0,*(DArrayTy **)&this_00->field_0x29f,(DArrayTy *)this_00->field_0029);
  g_currentExceptionFrame = local_50.previous;
  return;
}

