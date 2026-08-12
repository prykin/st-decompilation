#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HideSprites */

void __thiscall MMsgTy::HideSprites(MMsgTy *this)

{
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 0xd;
    puVar6 = local_8->field_0066;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pMVar2->field_000C,*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
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
    iVar5 = 0;
    if (pMVar2->field_009A != 0) {
      puVar6 = &pMVar2->array_00BC[0].field_0027.field_0004;
      do {
        puVar6[1] = 0;
        if (*puVar6 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar6[0x11],*puVar6,puVar6[1],puVar6[6],puVar6[7]);
        }
        if (*puVar6 != 0xffffffff) {
          FUN_006b3af0((int *)puVar6[0x11],*puVar6);
        }
        if (STField<uint>(puVar6,0x91) != 0xffffffff) {
          FUN_006b3af0(STField<int *>(puVar6,0xd5),STField<uint>(puVar6,0x91));
        }
        if ((*(char *)((int)puVar6 + -5) != '\0') && (STField<uint>(puVar6,0x122) != 0xffffffff))
        {
          FUN_006b3af0(STField<int *>(puVar6,0x166),STField<uint>(puVar6,0x122));
        }
        iVar5 = iVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + 0x1fb);
      } while (iVar5 < (int)(uint)pMVar2->field_009A);
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

