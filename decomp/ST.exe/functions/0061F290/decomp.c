
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STLightC::sub_0061F290(STLightC *this,int param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  VisibleClassTy *this_00;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int local_1c;
  int local_18;
  STLightC *local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;

  local_10 = 0;
  if (this->field_00A3 != (DArrayTy *)0x0) {
    dVar1 = this->field_00A3->count;
    if ((dVar1 != 0) && (local_c = 0, local_14 = this, 0 < (int)dVar1)) {
      do {
        this_00 = g_visibleClass_00802A88;
        pDVar2 = local_14->field_00A3;
        if (local_c < pDVar2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, local_c) (runtime stride) */
          piVar5 = (int *)(pDVar2->elementSize * local_c + (int)pDVar2->data);
        }
        else {
          piVar5 = (int *)0x0;
        }
        if ((-1 < (int)*(uint *)((int)piVar5 + 0x26)) && (-1 < *piVar5)) {
          if ((int)(g_playSystem_00802A38->field_00E4 - *(int *)((int)piVar5 + 0x2a)) <
              local_14->field_005F) {
            local_10 = 1;
            if ((param_1 != 0) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
              if ((float)piVar5[3] < _DAT_0079034c) {
                lVar6 = Library::MSVCRT::__ftol();
                iVar4 = (short)lVar6 + -1;
              }
              else {
                lVar6 = Library::MSVCRT::__ftol();
                iVar4 = (int)(short)lVar6;
              }
              if ((float)piVar5[2] < _DAT_0079034c) {
                lVar6 = Library::MSVCRT::__ftol();
                local_8 = (short)lVar6 + -1;
              }
              else {
                lVar6 = Library::MSVCRT::__ftol();
                local_8 = (int)(short)lVar6;
              }
              if ((float)piVar5[1] < _DAT_0079034c) {
                lVar6 = Library::MSVCRT::__ftol();
                iVar3 = (short)lVar6 + -1;
              }
              else {
                lVar6 = Library::MSVCRT::__ftol();
                iVar3 = (int)(short)lVar6;
              }
              if ((((((DAT_0080874d == -1) || (this_00->field_00F8 == 0)) ||
                    (VisibleClassTy::sub_00558C00
                               (this_00,this_00->field_010C,iVar3,local_8,&local_18,&local_1c),
                    iVar4 < 0)) || ((4 < iVar4 || (local_18 < 0)))) ||
                  ((this_00->field_0030 <= local_18 ||
                   ((iVar4 = g_centeredOffsets5[iVar4] + local_1c, iVar4 < 0 ||
                    (this_00->field_0034 <= iVar4)))))) ||
                 ((this_00->field_004C == (byte *)0x0 ||
                  (this_00->field_004C[local_18 + iVar4 * this_00->field_0030] != 0)))) {
                if (*(char *)((int)piVar5 + 0x2f) == '\0') {
                  FUN_006eaaa0(PTR_00807598,*(uint *)((int)piVar5 + 0x26),0);
                  *(undefined1 *)((int)piVar5 + 0x2f) = 1;
                }
              }
              else if (*(char *)((int)piVar5 + 0x2f) == '\x01') {
                FUN_006eab60(PTR_00807598,*(uint *)((int)piVar5 + 0x26));
                *(undefined1 *)((int)piVar5 + 0x2f) = 0;
              }
            }
          }
          else {
            FUN_006e8ba0(PTR_00807598,*(uint *)((int)piVar5 + 0x26));
            *(undefined4 *)((int)piVar5 + 0x26) = 0xffffffff;
            *piVar5 = -1;
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
    return local_10;
  }
  return 0;
}

