#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_ruinm.cpp
   STManRuinC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004055A1|00630430; family_names=STManRuinC::GetMessage; ret4=5;
   direct_offsets={10:1,14:2,18:2,1c:4} */

int __thiscall STManRuinC::GetMessage(STManRuinC *this,STMessage *message)

{
  STMessageId SVar1;
  uint uVar2;
  DArrayTy *pDVar3;
  code *pcVar4;
  STManRuinC *this_00;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STManRuinC *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_ruinm.cpp",0x94,0,iVar5,"%s",
                               "STManRuinC::GetMessage");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_ruinm.cpp",0x96);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    local_14 = (byte *)sub_00631220(local_c,(int *)&local_10);
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_DAT_0079d198,local_14,local_10,0xc);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    sub_00631560(local_c);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    if ((local_c->field_003C != (DArrayTy *)0x0) && (uVar2 = local_c->field_003C->count, uVar2 != 0)
       ) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        pDVar3 = this_00->field_003C;
        if (uVar2 < pDVar3->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar2) (runtime stride) */
          puVar6 = (undefined4 *)(pDVar3->elementSize * uVar2 + (int)pDVar3->data);
        }
        else {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 != (undefined4 *)0x0) {
          if ((puVar6[1] == 1) && (puVar6[2] == 0)) {
            iVar5 = thunk_FUN_00630ff0();
            puVar6[2] = iVar5;
            if (iVar5 != 0) {
              puVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006308F0::sub_00630C50
                                 ((AnonReceiver_006308F0 *)this_00,*puVar6,puVar6[3],1,1,0);
              if (puVar7 == (ushort *)0x0) {
                puVar6[2] = 0;
              }
              else {
                puVar6[1] = 2;
              }
            }
          }
          iVar5 = puVar6[1];
          if ((iVar5 == 2) || (iVar5 == 1)) {
            if ((puVar6[2] != 0) || (iVar5 == 2)) {
              FUN_006e9350(PTR_00807598,*(uint *)((int)puVar6 + 0x21),
                           *(uint *)(DAT_00806724 + 0x30 + (uint)*(byte *)(puVar6 + 8) * 4),
                           (int)*(short *)(DAT_00806724 + 0x2c));
            }
            if (g_playSystem_00802A38->field_00E4 % 6 == 0) {
              *(char *)(puVar6 + 8) = *(char *)(puVar6 + 8) + '\x01';
            }
            if (*(short *)(DAT_00806724 + 0x23) <= (short)(ushort)*(byte *)(puVar6 + 8)) {
              FUN_006e8ba0(PTR_00807598,*(uint *)((int)puVar6 + 0x21));
              FUN_006b0c70(this_00->field_003C,uVar2);
            }
          }
        }
      }
    }
    sub_00631010(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_c->field_0071 = local_c->field_0018 * DAT_00808754;
  if (g_cMf32_00806754 != (cMf32 *)0x0) {
    local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_DAT_0079d198,0,0);
  }
  if (local_8 == (ushort *)0x0) {
LAB_006304e7:
    this_00->field_001C = 0;
    this_00->field_0020 = 0xff;
    this_00->field_0024 = 1;
    this_00->field_0028 = 1;
  }
  else {
    if (*(int *)(local_8 + 6) == 2) {
      sub_00631390(this_00,(undefined4 *)local_8);
      this_00->field_0071 = this_00->field_0065;
      sub_00631450(this_00);
      goto LAB_00630558;
    }
    if (local_8 == (ushort *)0x0) goto LAB_006304e7;
    puVar6 = (message->arg0).ptr;
    puVar10 = &this_00->field_001C;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if (this_00->field_0034 == 0) {
    uVar2 = (int)g_worldGrid.sizeX * (int)g_worldGrid.sizeY * 5;
    puVar6 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar2);
    this_00->field_0034 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      thunk_FUN_006308b0(this_00);
    }
    else {
      for (uVar9 = uVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      this_00->field_0030 = uVar2;
    }
  }
LAB_00630558:
  if ((local_8 != (ushort *)0x0) && (g_cMf32_00806754 != (cMf32 *)0x0)) {
    cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

