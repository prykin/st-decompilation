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
  STManRuinC *this_00;
  int iVar5;
  byte *pbVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  byte *puVar10;
  STManRuinC_field_003CElement *element_003c;
  byte *puVar11;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STManRuinC *local_c;
  AnonShape_00630430_7FBC9B9C *local_8;

  local_8 = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_ruinm.cpp",0x94,0,iVar5,"%s",
                               "STManRuinC::GetMessage");
    if (iVar7 == 0) {
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
    /* ST_CALLSITE[006306E6]: CALL 0x004052ea; direct=004052EA STManRuinC::sub_00631220 */
    local_14 = (byte *)sub_00631220(local_c,(int *)&local_10);
    /* ST_CALLSITE[00630702]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_DAT_0079d198,local_14,local_10,0xc);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    /* ST_CALLSITE[006306BF]: CALL 0x004012f3; direct=004012F3 STManRuinC::sub_00631560 */
    sub_00631560(local_c);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    if ((local_c->field_003C != nullptr) &&
       (uVar2 = local_c->field_003C->count, uVar2 != 0)) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        pSVar3 = this_00->field_003C;
        if (uVar2 < pSVar3->count) {
          element_003c = DArrayAt<STManRuinC_field_003CElement>(pSVar3, uVar2);
        }
        else {
          element_003c = nullptr;
        }
        if (element_003c != nullptr) {
          if ((element_003c[1] == 1) && (element_003c[2] == 0)) {
            iVar8 = thunk_FUN_00630ff0();
            element_003c[2] = iVar8;
            if (iVar8 != 0) {
              /* ST_CALLSITE[00630604]: CALL 0x00405c9f; direct=00405C9F STManRuinC::sub_00630C50 */
              puVar6 = sub_00630C50(this_00,*element_003c,element_003c[3],1,1,0);
              if (puVar6 == nullptr) {
                element_003c[2] = 0;
              }
              else {
                element_003c[1] = 2;
              }
            }
          }
          iVar8 = element_003c[1];
          if ((iVar8 == 2) || (iVar8 == 1)) {
            if ((element_003c[2] != 0) || (iVar8 == 2)) {
              Library::Ourlib::ST3DSMAP::SprSetMask
                        (g_sT3DSMAPContext_00807598,element_003c->spriteHandle,
                         PTR_00806724->entries[((byte *)element_003c)[8]],(int)PTR_00806724->field_002C
                        );
            }
            if (g_playSystem_00802A38->field_00E4 % 6 == 0) {
              ((char *)element_003c)[8] = ((char *)element_003c)[8] + '\x01';
            }
            if (PTR_00806724->entryCount <= (short)(ushort)((byte *)element_003c)[8]) {
              Library::Ourlib::ST3DSMAP::SprClose
                        (g_sT3DSMAPContext_00807598,element_003c->spriteHandle);
              DArrayRemoveAt((DArrayTy *)this_00->field_003C,uVar2);
            }
          }
        }
      }
    }
    /* ST_CALLSITE[006306A3]: CALL 0x00403bbb; direct=00403BBB STManRuinC::sub_00631010 */
    sub_00631010(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_c->field_0071 = local_c->field_0018 * DAT_00808754;
  if (g_cMf32_00806754 != nullptr) {
    local_8 = (AnonShape_00630430_7FBC9B9C *)
              Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_DAT_0079d198,0,0);
  }
  if (local_8 == nullptr) {
LAB_006304e7:
    this_00->field_001C = 0;
    this_00->field_0020 = 0xff;
    this_00->field_0024 = 1;
    this_00->field_0028 = 1;
  }
  else {
    if (local_8->field_000C == 2) {
      /* ST_CALLSITE[006304CF]: CALL 0x00402176; direct=00402176 STManRuinC::sub_00631390 */
      sub_00631390(this_00,(undefined4 *)local_8);
      this_00->field_0071 = this_00->field_0065;
      /* ST_CALLSITE[006304DC]: CALL 0x004013bb; direct=004013BB STManRuinC::sub_00631450 */
      sub_00631450(this_00);
      goto LAB_00630558;
    }
    if (local_8 == nullptr) goto LAB_006304e7;
    puVar10 = (byte *)((message->arg0).ptr);
    puVar11 = (byte *)(&this_00->field_001C);
    memmove(puVar11, puVar10, 0x14); /* compiler REP MOVS byte copy */
  }
  if (this_00->field_0034 == nullptr) {
    uVar2 = (int)g_worldGrid.sizeX * (int)g_worldGrid.sizeY * 5;
    pbVar5 = Library::DKW::LIB::MemAlloc(uVar2);
    this_00->field_0034 = pbVar5;
    if (pbVar5 == nullptr) {
      thunk_FUN_006308b0(this_00);
    }
    else {
      memset(pbVar5, 0, uVar2); /* compiler bulk-zero initialization */
      this_00->field_0030 = uVar2;
    }
  }
LAB_00630558:
  if ((local_8 != nullptr) && (g_cMf32_00806754 != nullptr)) {
    cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

