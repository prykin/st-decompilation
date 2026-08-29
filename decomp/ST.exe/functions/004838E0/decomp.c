#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00483caa) */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_004603B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=3; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=16; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __thiscall STBoatC::sub_004838E0(STBoatC *this,RecoveredRecord_STBoatC_004838E0 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong local_EDXEAX_136;
  longlong local_EDXEAX_163;
  longlong local_EDXEAX_197;
  ulonglong uVar24;
  longlong local_EDXEAX_321;
  longlong local_EDXEAX_330;
  longlong local_EDXEAX_355;
  longlong local_EDXEAX_374;
  longlong lVar25;
  longlong local_EDXEAX_440;
  longlong lVar26;
  longlong lVar27;
  longlong local_EDXEAX_531;
  longlong local_EDXEAX_556;
  longlong lVar23;
  longlong local_EDXEAX_611;
  longlong lVar22;
  longlong local_EDXEAX_652;
  longlong lVar28;
  longlong lVar24;
  longlong local_EDXEAX_749;
  longlong local_EDXEAX_798;
  longlong local_EDXEAX_913;
  longlong local_EDXEAX_932;
  longlong local_EDXEAX_948;
  longlong local_60;
  ulonglong local_48;
  sVar1 = param_1->field_003A;
  uVar18 = (uint)param_1->field_0034;
  uVar6 = (int)sVar1 - uVar18;
  uVar19 = (int)uVar6 >> 0x1f;
  sVar2 = param_1->field_003C;
  uVar20 = (uint)param_1->field_0036;
  uVar7 = (int)sVar2 - uVar20;
  uVar21 = (int)uVar7 >> 0x1f;
  sVar3 = param_1->field_003E;
  uVar22 = (uint)param_1->field_0038;
  uVar8 = (int)sVar3 - uVar22;
  uVar23 = (int)uVar8 >> 0x1f;
  uVar9 = (uint)this->field_0045;
  uVar10 = (uint)this->field_0043;
  uVar11 = (uint)this->field_0041;
  local_EDXEAX_136 = Library::MSVCRT::__allmul(uVar11,(int)uVar11 >> 0x1f,uVar6,uVar19);
  local_EDXEAX_163 = Library::MSVCRT::__allmul(uVar10,(int)uVar10 >> 0x1f,uVar7,uVar21);
  local_EDXEAX_197 = Library::MSVCRT::__allmul(uVar9,(int)uVar9 >> 0x1f,uVar8,uVar23);
  lVar4 = local_EDXEAX_197 + local_EDXEAX_163 + local_EDXEAX_136;
  iVar12 = (int)lVar4;
  uVar13 = -iVar12;
  uVar17 = -((int)((ulonglong)lVar4 >> 0x20) + (uint)(iVar12 != 0));
  iVar12 = (int)uVar18 >> 0x1f;
  if (uVar6 == 0) {
    uVar22 = uVar18;
    iVar16 = iVar12;
    if (uVar7 == 0) {
      local_48 = (longlong)(int)uVar20;
      if (uVar8 == 0) {
        return 0;
      }
      uVar24 = Library::MSVCRT::__alldiv(uVar13,uVar17,uVar8,uVar23);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar24 = CONCAT44(-((int)((ulonglong)uVar24 >> 0x20) + (uint)((int)uVar24 != 0)),-(int)uVar24);
    }
    else {
      local_60 = (longlong)(int)uVar20;
      local_EDXEAX_321 = Library::MSVCRT::__allmul(uVar20,(int)uVar20 >> 0x1f,uVar8,uVar23);
      local_EDXEAX_330 =
           Library::MSVCRT::__allmul
                     ((uint)local_EDXEAX_321,(int)((ulonglong)local_EDXEAX_321 >> 0x20),uVar8,uVar23
                     );
      local_EDXEAX_355 = Library::MSVCRT::__allmul(uVar13,uVar17,uVar7,uVar21);
      local_EDXEAX_374 = Library::MSVCRT::__allmul(uVar8,uVar23,uVar8,uVar23);
      lVar25 = Library::MSVCRT::__allmul(uVar7,uVar21,uVar7,uVar21);
      local_48 = Library::MSVCRT::__alldiv
                           ((uint)(local_EDXEAX_330 - local_EDXEAX_355),
                            (uint)((ulonglong)(local_EDXEAX_330 - local_EDXEAX_355) >> 0x20),
                            (uint)(local_EDXEAX_374 + lVar25),
                            (uint)((ulonglong)(local_EDXEAX_374 + lVar25) >> 0x20));
      local_EDXEAX_440 =
           Library::MSVCRT::__allmul
                     ((uint)(local_48 - local_60),(int)((ulonglong)(local_48 - local_60) >> 0x20),
                      uVar8,uVar23);
      uVar24 = Library::MSVCRT::__alldiv
                         ((uint)local_EDXEAX_440,(uint)((ulonglong)local_EDXEAX_440 >> 0x20),uVar7,
                          uVar21);
    }
  }
  else {
    lVar26 = Library::MSVCRT::__allmul(uVar22,(int)uVar22 >> 0x1f,uVar6,uVar19);
    lVar27 = Library::MSVCRT::__allmul(uVar20,(int)uVar20 >> 0x1f,uVar6,uVar19);
    local_EDXEAX_531 = Library::MSVCRT::__allmul(uVar18,iVar12,uVar7,uVar21);
    local_EDXEAX_556 =
         Library::MSVCRT::__allmul
                   ((uint)(local_EDXEAX_531 - lVar27),
                    (int)((ulonglong)(local_EDXEAX_531 - lVar27) >> 0x20),uVar7,uVar21);
    lVar23 = Library::MSVCRT::__allmul(uVar13,uVar17,uVar6,uVar19);
    local_EDXEAX_611 = Library::MSVCRT::__allmul(uVar18,iVar12,uVar8,uVar23);
    lVar22 = Library::MSVCRT::__allmul
                       ((uint)(local_EDXEAX_611 - lVar26),
                        (int)((ulonglong)(local_EDXEAX_611 - lVar26) >> 0x20),uVar8,uVar23);
    lVar5 = (lVar23 - local_EDXEAX_556) - lVar22;
    local_EDXEAX_652 = Library::MSVCRT::__allmul(uVar8,uVar23,uVar8,uVar23);
    lVar28 = Library::MSVCRT::__allmul(uVar7,uVar21,uVar7,uVar21);
    lVar24 = Library::MSVCRT::__allmul(uVar6,uVar19,uVar6,uVar19);
    lVar4 = local_EDXEAX_652 + lVar28 + lVar24;
    uVar24 = Library::MSVCRT::__alldiv
                       ((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),(uint)lVar4,
                        (uint)((ulonglong)lVar4 >> 0x20));
    uVar22 = -(int)uVar24;
    iVar16 = -((int)((ulonglong)uVar24 >> 0x20) + (uint)((int)uVar24 != 0));
    iVar12 = (iVar16 - iVar12) - (uint)(uVar22 < uVar18);
    local_EDXEAX_749 = Library::MSVCRT::__allmul(uVar22 - uVar18,iVar12,uVar7,uVar21);
    local_48 = Library::MSVCRT::__alldiv
                         ((uint)(local_EDXEAX_749 + lVar27),
                          (uint)((ulonglong)(local_EDXEAX_749 + lVar27) >> 0x20),uVar6,uVar19);
    local_EDXEAX_798 = Library::MSVCRT::__allmul(uVar22 - uVar18,iVar12,uVar8,uVar23);
    uVar24 = Library::MSVCRT::__alldiv
                       ((uint)(local_EDXEAX_798 + lVar26),
                        (uint)((ulonglong)(local_EDXEAX_798 + lVar26) >> 0x20),uVar6,uVar19);
  }
  uVar6 = uVar9 - (uint)uVar24;
  iVar14 = (((int)uVar9 >> 0x1f) - (int)((ulonglong)uVar24 >> 0x20)) - (uint)(uVar9 < (uint)uVar24);
  iVar15 = (((int)uVar10 >> 0x1f) - STPiece<4,4>(local_48)) - (uint)(uVar10 < (uint)local_48);
  iVar16 = (((int)uVar11 >> 0x1f) - iVar16) - (uint)(uVar11 < uVar22);
  iVar12 = ((int)*(short *)&this->field_0x237 << 2) / 5;
  local_EDXEAX_913 = Library::MSVCRT::__allmul(uVar11 - uVar22,iVar16,uVar11 - uVar22,iVar16);
  local_EDXEAX_932 =
       Library::MSVCRT::__allmul(uVar10 - (uint)local_48,iVar15,uVar10 - (uint)local_48,iVar15);
  local_EDXEAX_948 = Library::MSVCRT::__allmul(uVar6,iVar14,uVar6,iVar14);
  if ((local_EDXEAX_932 + local_EDXEAX_913 + local_EDXEAX_948 <= (longlong)(iVar12 * iVar12)) &&
     (lVar5 = (longlong)(int)(uVar10 - (int)param_1->field_0043) *
              (longlong)((int)sVar2 - (int)param_1->field_0043) +
              (longlong)(int)(uVar11 - (int)param_1->field_0041) *
              (longlong)((int)sVar1 - (int)param_1->field_0041),
     lVar4 = (longlong)(int)(uVar9 - (int)param_1->field_0045) *
             (longlong)((int)sVar3 - (int)param_1->field_0045),
     -1 < (int)((int)((ulonglong)lVar5 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) +
               (uint)CARRY4((uint)lVar5,(uint)lVar4)))) {
    return 1;
  }
  return 0;
}

