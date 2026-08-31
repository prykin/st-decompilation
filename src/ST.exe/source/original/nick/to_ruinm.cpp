#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_ruinm.cpp

// 00630430 STManRuinC::GetMessage
#line 4 "decomp/ST.exe/functions/00630430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_ruinm.cpp
   STManRuinC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004055A1|00630430; family_names=STManRuinC::GetMessage; ret4=5;
   direct_offsets={10:1,14:2,18:2,1c:4} */

int __thiscall st::fn_00630430(STManRuinC *this,STMessage *message)

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

  iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_ruinm.cpp"),0x94,0,iVar5,st::mutable_c_string("%s"),
                               "STManRuinC::GetMessage");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\nick\\to_ruinm.cpp"),0x96);
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
    /* ST_CALLSITE[006306E6]: CALL 0x004052ea; direct=004052EA STManRuinC::sub_00631220; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    local_14 = (byte *)st::fn_004052EA(local_c,reinterpret_cast<int *>(&local_10));
    /* ST_CALLSITE[00630702]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
    st::fn_00401078(g_playSystem_00802A38,reinterpret_cast<char *>(PTR_DAT_0079d198),local_14,local_10,0xc);
    st::fn_006AB060(&local_14);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    /* ST_CALLSITE[006306BF]: CALL 0x004012f3; direct=004012F3 STManRuinC::sub_00631560 */
    st::fn_004012F3(local_c);
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
          if ((element_003c->state == 1) && (element_003c->statusFlag == 0)) {

            iVar8 = st::fn_004050A6();
            element_003c->statusFlag = iVar8;
            if (iVar8 != 0) {
              /* ST_CALLSITE[00630604]: CALL 0x00405c9f; direct=00405C9F STManRuinC::sub_00630C50 */
              puVar6 = st::fn_00405C9F(this_00,STPiece<0,4>(*element_003c),element_003c->variant,1,1,0);
              if (puVar6 == nullptr) {
                element_003c->statusFlag = 0;
              }
              else {
                element_003c->state = 2;
              }
            }
          }
          iVar8 = element_003c->state;
          if ((iVar8 == 2) || (iVar8 == 1)) {
            if ((element_003c->statusFlag != 0) || (iVar8 == 2)) {
              st::fn_006E9350
                        (g_sT3DSMAPContext_00807598,element_003c->spriteHandle,
                         PTR_00806724->entries[element_003c->maskIndex],(int)PTR_00806724->field_002C
                        );
            }
            if (g_playSystem_00802A38->field_00E4 % 6 == 0) {
              element_003c->maskIndex = element_003c->maskIndex + '\x01';
            }
            if (PTR_00806724->entryCount <= (short)(ushort)element_003c->maskIndex) {
              st::fn_006E8BA0
                        (g_sT3DSMAPContext_00807598,element_003c->spriteHandle);

              st::fn_006B0C70(reinterpret_cast<DArrayTy *>(this_00->field_003C),uVar2);
            }
          }
        }
      }
    }
    /* ST_CALLSITE[006306A3]: CALL 0x00403bbb; direct=00403BBB STManRuinC::sub_00631010 */
    st::fn_00403BBB(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  local_c->field_0071 = local_c->field_0018 * DAT_00808754;
  if (g_cMf32_00806754 != nullptr) {
    local_8 = reinterpret_cast<AnonShape_00630430_7FBC9B9C *>(st::fn_006F2D90(g_cMf32_00806754,reinterpret_cast<char *>(PTR_DAT_0079d198),0,0));
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
      st::fn_00402176(this_00,reinterpret_cast<undefined4 *>(local_8));
      this_00->field_0071 = this_00->field_0065;
      /* ST_CALLSITE[006304DC]: CALL 0x004013bb; direct=004013BB STManRuinC::sub_00631450 */
      st::fn_004013BB(this_00);
      goto LAB_00630558;
    }
    if (local_8 == nullptr) goto LAB_006304e7;
    puVar10 = reinterpret_cast<byte *>(((message->arg0).ptr));
    puVar11 = reinterpret_cast<byte *>((&this_00->field_001C));
    memmove(puVar11, puVar10, 0x14); /* compiler REP MOVS byte copy */
  }
  if (this_00->field_0034 == nullptr) {
    uVar2 = (int)g_worldGrid.sizeX * (int)g_worldGrid.sizeY * 5;

    pbVar5 = (byte *)st::fn_006AAC70(uVar2);
    this_00->field_0034 = pbVar5;
    if (pbVar5 == nullptr) {

      st::fn_00404B24(reinterpret_cast<RecoveredRecord_006308B0_717D06CB *>(this_00));
    }
    else {
      memset(pbVar5, 0, uVar2); /* compiler bulk-zero initialization */
      this_00->field_0030 = uVar2;
    }
  }
LAB_00630558:
  if ((local_8 != nullptr) && (g_cMf32_00806754 != nullptr)) {
    st::fn_006F20E0(g_cMf32_00806754,reinterpret_cast<uint *>(&local_8));
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}
