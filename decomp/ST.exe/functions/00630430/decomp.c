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
  STManRuinC_field_003CDArray *pSVar3;
  code *pcVar4;
  STManRuinC *this_00;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  int iVar8;
  byte *puVar11;
  STManRuinC_field_003CElement *element_003c;
  byte *puVar12;
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
    if ((local_c->field_003C != (STManRuinC_field_003CDArray *)0x0) &&
       (uVar2 = local_c->field_003C->count, uVar2 != 0)) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        pSVar3 = this_00->field_003C;
        if (uVar2 < pSVar3->count) {
          element_003c = DArrayAt<STManRuinC_field_003CElement>(pSVar3, uVar2);
        }
        else {
          element_003c = (STManRuinC_field_003CElement *)0x0;
        }
        if (element_003c != (STManRuinC_field_003CElement *)0x0) {
          if ((element_003c->state == 1) && (element_003c->statusFlag == 0)) {
            iVar5 = thunk_FUN_00630ff0();
            element_003c->statusFlag = iVar5;
            if (iVar5 != 0) {
              puVar7 = sub_00630C50(this_00,element_003c->field_0000,element_003c->variant,1,1,0);
              if (puVar7 == (ushort *)0x0) {
                element_003c->statusFlag = 0;
              }
              else {
                element_003c->state = 2;
              }
            }
          }
          iVar5 = element_003c->state;
          if ((iVar5 == 2) || (iVar5 == 1)) {
            if ((element_003c->statusFlag != 0) || (iVar5 == 2)) {
              Library::Ourlib::ST3DSMAP::SprSetMask
                        (g_sT3DSMAPContext_00807598,element_003c->spriteHandle,
                         PTR_00806724->entries[element_003c->maskIndex],(int)PTR_00806724->field_002C);
            }
            if (g_playSystem_00802A38->field_00E4 % 6 == 0) {
              element_003c->maskIndex = element_003c->maskIndex + 1;
            }
            if (PTR_00806724->entryCount <= (short)(ushort)element_003c->maskIndex) {
              Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,element_003c->spriteHandle);
              DArrayRemoveAt((DArrayTy *)this_00->field_003C,uVar2);
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
    puVar11 = (byte *)((message->arg0).ptr);
    puVar12 = (byte *)(&this_00->field_001C);
    memmove(puVar12, puVar11, 0x14); /* compiler REP MOVS byte copy */
  }
  if (this_00->field_0034 == (byte *)0x0) {
    uVar2 = (int)g_worldGrid.sizeX * (int)g_worldGrid.sizeY * 5;
    pbVar6 = (byte *)Library::DKW::LIB::FUN_006aac70(uVar2);
    this_00->field_0034 = pbVar6;
    if (pbVar6 == (byte *)0x0) {
      thunk_FUN_006308b0(this_00);
    }
    else {
      memset(pbVar6, 0, uVar2); /* compiler bulk-zero initialization */
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

