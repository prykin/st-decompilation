#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::PaintMMsg */

void __thiscall MMsgTy::PaintMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_1CFB != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)local_8->field_1D3F,local_8->field_1CFB,local_8->field_1CFF,
                 local_8->field_1D13,local_8->field_1D17);
    }
    if (pMVar2->field_1D8C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)pMVar2->field_1DD0,pMVar2->field_1D8C,pMVar2->field_1D90,pMVar2->field_1DA4
                 ,pMVar2->field_1DA8);
    }
    iVar3 = 0;
    if (pMVar2->field_009A != '\0') {
      puVar5 = &pMVar2->field_00FF;
      do {
        if (puVar5[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar5[0xb],puVar5[-6],puVar5[-5],*puVar5,puVar5[1]);
        }
        if (*(uint *)((int)puVar5 + 0x79) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar5 + 0xbd),*(uint *)((int)puVar5 + 0x79),
                     *(uint *)((int)puVar5 + 0x7d),*(uint *)((int)puVar5 + 0x91),
                     *(uint *)((int)puVar5 + 0x95));
        }
        if ((*(char *)((int)puVar5 + -0x1d) != '\0') &&
           (*(uint *)((int)puVar5 + 0x10a) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar5 + 0x14e),*(uint *)((int)puVar5 + 0x10a),
                     *(uint *)((int)puVar5 + 0x10e),*(uint *)((int)puVar5 + 0x122),
                     *(uint *)((int)puVar5 + 0x126));
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)(byte)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x59,0,iVar3,&DAT_007a4ccc,
                             s_MMsgTy__PaintMMsg_007ccc60);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x59);
  return;
}

