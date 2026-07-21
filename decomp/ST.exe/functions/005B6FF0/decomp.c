#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HideSprites */

void __thiscall MMsgTy::HideSprites(MMsgTy *this)

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
    iVar3 = 0xd;
    puVar5 = &local_8->field_0066;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pMVar2->field_000C,*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pMVar2->field_1CFF = 0;
    if (pMVar2->field_1CFB != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)pMVar2->field_1D3F,pMVar2->field_1CFB,pMVar2->field_1CFF,pMVar2->field_1D13
                 ,pMVar2->field_1D17);
    }
    if (pMVar2->field_1CFB != 0xffffffff) {
      FUN_006b3af0((int *)pMVar2->field_1D3F,pMVar2->field_1CFB);
    }
    if (pMVar2->field_1D8C != 0xffffffff) {
      FUN_006b3af0((int *)pMVar2->field_1DD0,pMVar2->field_1D8C);
    }
    iVar3 = 0;
    if (pMVar2->field_009A != 0) {
      puVar5 = &pMVar2->field_00E7;
      do {
        puVar5[1] = 0;
        if (*puVar5 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar5[0x11],*puVar5,puVar5[1],puVar5[6],puVar5[7]);
        }
        if (*puVar5 != 0xffffffff) {
          FUN_006b3af0((int *)puVar5[0x11],*puVar5);
        }
        if (*(uint *)((int)puVar5 + 0x91) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)puVar5 + 0xd5),*(uint *)((int)puVar5 + 0x91));
        }
        if ((*(char *)((int)puVar5 + -5) != '\0') && (*(uint *)((int)puVar5 + 0x122) != 0xffffffff))
        {
          FUN_006b3af0(*(int **)((int)puVar5 + 0x166),*(uint *)((int)puVar5 + 0x122));
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)pMVar2->field_009A);
    }
    pMVar2->field_0065 = 2;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x41,0,iVar3,"%s",
                             "MMsgTy::HideSprites");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x41);
  return;
}

