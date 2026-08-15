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
  TLOFakeTy *pTVar4;
  int iVar5;
  ushort *puVar5;
  int exceptionCode;
  int iVar9;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar10;
  byte *puVar11;
  InternalExceptionFrame local_50;
  TLOFakeTy *local_c;
  byte *local_8;

  puVar11 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pTVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_dock.cpp",0x341,0,iVar5,"%s"
                               ,"TLOFakeTy::GetMessage error");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Artem\\TLO_dock.cpp",0x342);
    return iVar5;
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_c,message);
  SVar2 = message->id;
  if (SVar2 == MESS_ID_CREATE) {
    g_tLOFake_00800BCC = pTVar4;
    pTVar4->field_0020 = 0x3ea;
    pTVar4->field_0028 = 2;
    local_8 = (message->arg0).ptr;
    if (pTVar4 != nullptr) {
      puVar11 = (byte *)&pTVar4->field_0x231;
    }
    pbVar8 = local_8;
    memmove(puVar11, pbVar8, 0x1c); /* compiler REP MOVS byte copy */
    iVar6 = 0;
    if (pTVar4->field_023D == 2) {
      if (pTVar4->field_0249 != 0) {
        puVar5 = Library::DKW::LIB::MemAlloc(pTVar4->field_0249 * 0xc);
        pTVar4->field_024D = puVar5;
      }
      if (pTVar4->field_0245 != 0) {
        pbVar8 = local_8 + 0x1c;
        puVar5 = pTVar4->field_024D;
        for (uVar7 = pTVar4->field_0245 * 3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)puVar5 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          puVar5 = puVar5 + 2;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(byte *)puVar5 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          puVar5 = (ushort *)((int)puVar5 + 1);
        }
        iVar6 = 0;
        if (0 < pTVar4->field_0245) {
          iVar10 = 0;
          do {
            psVar1 = (short *)((int)pTVar4->field_024D + iVar10);
            exceptionCode =
                 DumpClassC::WritePtr
                           (*psVar1,*(short *)((int)pTVar4->field_024D + iVar10 + 4),psVar1[4],0,
                            (RecoveredRecord_DumpClassC_00495EC0 *)pTVar4);
            if (exceptionCode != 0) {
              RaiseInternalException
                        (exceptionCode,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_dock.cpp",0x326);
            }
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 0xc;
          } while (iVar6 < pTVar4->field_0245);
        }
      }
    }
  }
  else if (SVar2 == MESS_SHARED_0003) {
    g_tLOFake_00800BCC = nullptr;
    thunk_FUN_004ad310((STT3DSprC *)&pTVar4->field_01D5);
    if (pTVar4->field_024D != nullptr) {
      FreeAndNull(&pTVar4->field_024D);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_8 = Library::DKW::LIB::MemAlloc(pTVar4->field_0245 * 0xc + 0x1c);
    if (pTVar4 == nullptr) {
      puVar11 = nullptr;
    }
    else {
      puVar11 = (byte *)&pTVar4->field_0x231;
    }
    pbVar8 = local_8;
    memmove(pbVar8, puVar11, 0x1c); /* compiler REP MOVS byte copy */
    iVar6 = 0;
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    if (pTVar4->field_0245 != 0) {
      puVar5 = pTVar4->field_024D;
      pbVar8 = local_8 + 0x1c;
      for (uVar7 = pTVar4->field_0245 * 3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)puVar5;
        puVar5 = puVar5 + 2;
        pbVar8 = pbVar8 + 4;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar8 = (byte)*puVar5;
        puVar5 = (ushort *)((int)puVar5 + 1);
        pbVar8 = pbVar8 + 1;
      }
    }
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,pTVar4->field_0018,local_8,pTVar4->field_0245 * 0xc + 0x1c);
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

