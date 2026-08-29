#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=21; adopt_untyped_existing_thiscall
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00427F20 @ 00428605 -> read as EAX on
   every CFG path | 00427F20 @ 00428639 -> read as EAX on every CFG path | 00427F20 @ 00428671 ->
   read as EAX on every CFG path | 00427F20 @ 00428687 -> read as EAX on every CFG path | 00427F20 @
   004286B1 -> read as EAX on every CFG path */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::FUN_00427bb0
          (RecoveredReceiver_004248D0 *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  RecoveredRecordView_004248D0_552B02F1 *pRVar3;
  RuntimeRecord_007F4D74_0010 *pRVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_8;

  pRVar4 = g_runtimeRecords_007F4D74 + param_1;
  iVar7 = (DAT_007f4d80 + param_1) * this->field_037C + this->field_038C;
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar5 = param_1;
      local_14 = pRVar4->field_0000;
      auto param_1_after_write = pRVar4->field_000C; /* compiler stack-slot lifetime split */
      if (param_3 == -1) {
        param_1_after_write = pRVar4->field_0004;
      }
      else if (param_3 == 1) {
        local_14 = pRVar4->field_0008;
      }
      if (param_1_after_write < local_14) {
        if (local_8 != 0x7fffffff) {
          /* ST_CALLSITE[00427C48]: CALL 0x00401e06; direct=00401E06 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::sub_00427090 */
          sub_00427090(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar6 = *(byte *)(local_14 + DAT_007f4d7c + iVar7);
        iVar8 = local_14 + 1;
        if (iVar8 <= param_1_after_write) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 <= param_1_after_write);
        }
        if ((local_8 != 0x7fffffff) && ((iVar8 <= param_1_after_write || (bVar6 != bVar1)))) {
          /* ST_CALLSITE[00427CAD]: CALL 0x00401e06; direct=00401E06 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::sub_00427090 */
          sub_00427090(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1_after_write < iVar8) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar5;
            bVar1 = bVar6;
          }
        }
        else {
LAB_00427cca:
          iVar9 = iVar8;
          if (DAT_007f4d84 <= DAT_007f4d78) {

            puVar2 = Library::DKW::LIB::MemRealloc(PTR_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (puVar2 == nullptr) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            PTR_007f4d6c = puVar2;
          }
          /* ST_CALLSITE[00427D09]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_004248D0_552B02F1; source view only; no Ghidra override */
          pRVar3 = Library::DKW::LIB::MemAlloc(0x20);
          if (pRVar3 == nullptr) {
            return 0;
          }
          PTR_007f4d6c[DAT_007f4d78 * 3 + 2] = pRVar3;
          /* ST_CALLSITE[00427D4A]: CALL 0x00405010; direct=00405010 sub_004248D0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_004248D0_552B02F1; source view only; no Ghidra override */
          iVar8 = sub_004248D0(this,pRVar3,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar5,CASE_0,
                               CASE_1);
          /* ST_CALLSITE[00427D6F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar8 = sub_004248D0(this,pRVar3,iVar8,DAT_007f4d7c + -1 + iVar9,DAT_007f4d80 + iVar5,
                               CASE_3,CASE_2);
          PTR_007f4d6c[DAT_007f4d78 * 3 + 1] = iVar8;
          if ((bVar6 & 0x80) == 0) {
            PTR_007f4d6c[DAT_007f4d78 * 3] = 0;
          }
          else {
            PTR_007f4d6c[DAT_007f4d78 * 3] = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar9 <= param_1_after_write) {
            iVar8 = iVar9 + 1;
            bVar6 = *(byte *)(DAT_007f4d7c + iVar9 + iVar7);
            local_14 = iVar9;
            if (iVar8 <= param_1_after_write) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
                iVar8 = iVar8 + 1;
              } while (iVar8 <= param_1_after_write);
            }
            goto LAB_00427cca;
          }
        }
      }
      pRVar4 = pRVar4 + 1;
      iVar7 = iVar7 + this->field_037C;
      param_1_after_write = iVar5 + 1;
    } while (iVar5 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      /* ST_CALLSITE[00427E5C]: CALL 0x00401e06; direct=00401E06 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004248D0::sub_00427090 */
      sub_00427090(this,local_8,iVar5,param_3);
    }
  }
  return 0;
}

