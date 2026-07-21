#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_dock.cpp
   TLOFakeTy::GetMessage */

int __thiscall TLOFakeTy::GetMessage(TLOFakeTy *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  short *psVar1;
  code *pcVar2;
  STSprGameObjC *pSVar3;
  int iVar4;
  int exceptionCode;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  InternalExceptionFrame local_50;
  STSprGameObjC *local_c;
  byte *local_8;

  puVar8 = (undefined4 *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (STSprGameObjC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x341,0,iVar4,&DAT_007a4ccc
                               ,s_TLOFakeTy__GetMessage_error_007bf3c4);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x342);
    return iVar4;
  }
  STSprGameObjC::GetMessage(local_c,param_1);
  iVar4 = param_1->field_0010;
  if (iVar4 == 2) {
    DAT_00800bcc = pSVar3;
    pSVar3->field_0020 = 0x3ea;
    *(undefined4 *)&pSVar3->field_0x28 = 2;
    local_8 = (byte *)param_1->field_0014;
    if (pSVar3 != (STSprGameObjC *)0x0) {
      puVar8 = (undefined4 *)&pSVar3->field_0x231;
    }
    pbVar6 = local_8;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      puVar8 = puVar8 + 1;
    }
    if (*(int *)&pSVar3->field_0x23d == 2) {
      if (*(int *)&pSVar3->field_0x249 != 0) {
        iVar4 = Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar3->field_0x249 * 0xc);
        *(int *)&pSVar3->field_0x24d = iVar4;
      }
      if (*(int *)&pSVar3->field_0x245 != 0) {
        pbVar6 = local_8 + 0x1c;
        pbVar9 = *(byte **)&pSVar3->field_0x24d;
        for (uVar5 = *(int *)&pSVar3->field_0x245 * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pbVar9 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar9 = pbVar9 + 1;
        }
        iVar4 = 0;
        if (0 < *(int *)&pSVar3->field_0x245) {
          iVar7 = 0;
          do {
            psVar1 = (short *)(*(int *)&pSVar3->field_0x24d + iVar7);
            exceptionCode =
                 DumpClassC::WritePtr
                           (*psVar1,*(short *)(*(int *)&pSVar3->field_0x24d + 4 + iVar7),psVar1[4],0
                            ,(AnonShape_00495EC0_95A268C6 *)pSVar3);
            if (exceptionCode != 0) {
              RaiseInternalException
                        (exceptionCode,g_overwriteContext_007ED77C,
                         s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x326);
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar4 < *(int *)&pSVar3->field_0x245);
        }
      }
    }
  }
  else if (iVar4 == 3) {
    DAT_00800bcc = (STSprGameObjC *)0x0;
    thunk_FUN_004ad310((STT3DSprC *)&pSVar3->field_01D5);
    if (*(int *)&pSVar3->field_0x24d != 0) {
      FreeAndNull((void **)&pSVar3->field_0x24d);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (iVar4 == 0x10f) {
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar3->field_0x245 * 0xc + 0x1c);
    if (pSVar3 == (STSprGameObjC *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)&pSVar3->field_0x231;
    }
    pbVar6 = local_8;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      pbVar6 = pbVar6 + 4;
    }
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    if (*(int *)&pSVar3->field_0x245 != 0) {
      pbVar6 = *(byte **)&pSVar3->field_0x24d;
      pbVar9 = local_8 + 0x1c;
      for (uVar5 = *(int *)&pSVar3->field_0x245 * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar9 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
    STPlaySystemC::SaveObjData
              (PTR_00802a38,pSVar3->field_0018,local_8,
               (AnonShape_0060EA30_DCEB68AD *)(*(int *)&pSVar3->field_0x245 * 0xc + 0x1c));
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

