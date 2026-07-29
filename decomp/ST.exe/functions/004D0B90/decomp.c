#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_dock.cpp
   TLOFakeTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401C62|004D0B90; family_names=TLOFakeTy::GetMessage; ret4=4;
   direct_offsets={10:1,14:1,18:2,1c:4} */

int __thiscall TLOFakeTy::GetMessage(TLOFakeTy *this,STMessage *message)

{
  short *psVar1;
  STMessageId SVar2;
  code *pcVar3;
  STSprGameObjC *pSVar4;
  int iVar5;
  int exceptionCode;
  uint uVar6;
  STSprGameObjC_field_0231State *pSVar7;
  int iVar8;
  STSprGameObjC_field_0231State *pSVar9;
  InternalExceptionFrame local_50;
  STSprGameObjC *local_c;
  STSprGameObjC_field_0231State *local_8;

  pSVar9 = (STSprGameObjC_field_0231State *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (STSprGameObjC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_dock.cpp",0x341,0,iVar5,"%s"
                               ,"TLOFakeTy::GetMessage error");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Artem\\TLO_dock.cpp",0x342);
    return iVar5;
  }
  STSprGameObjC::GetMessage(local_c,message);
  SVar2 = message->id;
  if (SVar2 == MESS_ID_CREATE) {
    DAT_00800bcc = pSVar4;
    pSVar4->field_0020 = 0x3ea;
    *(undefined4 *)&pSVar4->field_0x28 = 2;
    local_8 = (message->arg0).ptr;
    if (pSVar4 != (STSprGameObjC *)0x0) {
      pSVar9 = &pSVar4->field_0231;
    }
    pSVar7 = local_8;
    memmove(pSVar9, pSVar7, 0x1c); /* compiler REP MOVS byte copy */
    if (*(int *)&pSVar4->field_0x23d == 2) {
      if (*(int *)&pSVar4->field_0x249 != 0) {
        iVar5 = Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar4->field_0x249 * 0xc);
        *(int *)&pSVar4->field_0x24d = iVar5;
      }
      if (*(int *)&pSVar4->field_0x245 != 0) {
        pSVar9 = local_8 + 7;
        pSVar7 = *(STSprGameObjC_field_0231State **)&pSVar4->field_0x24d;
        for (uVar6 = *(int *)&pSVar4->field_0x245 * 3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pSVar7 = *pSVar9;
          pSVar9 = pSVar9 + 1;
          pSVar7 = pSVar7 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)pSVar7 = (char)*pSVar9;
          pSVar9 = (STSprGameObjC_field_0231State *)((int)pSVar9 + 1);
          pSVar7 = (STSprGameObjC_field_0231State *)((int)pSVar7 + 1);
        }
        iVar5 = 0;
        if (0 < *(int *)&pSVar4->field_0x245) {
          iVar8 = 0;
          do {
            psVar1 = (short *)(*(int *)&pSVar4->field_0x24d + iVar8);
            exceptionCode =
                 DumpClassC::WritePtr
                           (*psVar1,*(short *)(*(int *)&pSVar4->field_0x24d + 4 + iVar8),psVar1[4],0
                            ,(RecoveredRecord_DumpClassC_00495EC0 *)pSVar4);
            if (exceptionCode != 0) {
              RaiseInternalException
                        (exceptionCode,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_dock.cpp",0x326);
            }
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar5 < *(int *)&pSVar4->field_0x245);
        }
      }
    }
  }
  else if (SVar2 == MESS_SHARED_0003) {
    DAT_00800bcc = (STSprGameObjC *)0x0;
    thunk_FUN_004ad310((STT3DSprC *)&pSVar4->field_01D5);
    if (*(int *)&pSVar4->field_0x24d != 0) {
      FreeAndNull((void **)&pSVar4->field_0x24d);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_8 = (STSprGameObjC_field_0231State *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar4->field_0x245 * 0xc + 0x1c);
    if (pSVar4 == (STSprGameObjC *)0x0) {
      pSVar9 = (STSprGameObjC_field_0231State *)0x0;
    }
    else {
      pSVar9 = &pSVar4->field_0231;
    }
    pSVar7 = local_8;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pSVar7 = *pSVar9;
      pSVar9 = pSVar9 + 1;
      pSVar7 = pSVar7 + 1;
    }
    local_8[3] = CASE_2;
    if (*(int *)&pSVar4->field_0x245 != 0) {
      pSVar9 = *(STSprGameObjC_field_0231State **)&pSVar4->field_0x24d;
      pSVar7 = local_8 + 7;
      for (uVar6 = *(int *)&pSVar4->field_0x245 * 3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pSVar7 = *pSVar9;
        pSVar9 = pSVar9 + 1;
        pSVar7 = pSVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(char *)pSVar7 = (char)*pSVar9;
        pSVar9 = (STSprGameObjC_field_0231State *)((int)pSVar9 + 1);
        pSVar7 = (STSprGameObjC_field_0231State *)((int)pSVar7 + 1);
      }
    }
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,(int *)pSVar4->field_0018,(byte *)local_8,
               (AnonShape_0060EA30_DCEB68AD *)(*(int *)&pSVar4->field_0x245 * 0xc + 0x1c));
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

