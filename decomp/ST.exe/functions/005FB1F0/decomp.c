#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FB234 MOVSX EAX,word ptr [EBP + 0x10]

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C5AC
   Entries: 0040177B
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=533/755; unique_owner_for_target */

uint __thiscall
STColl3C::vfunc_DC(STColl3C *this,short param_1,short param_2,short param_3,short param_4,
                  short param_5,short param_6)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000e;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000012;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  uint local_c;
  int local_8;

  uVar3 = (int)param_1 - (int)this->field_0041;
  uVar8 = (int)uVar3 >> 0x1f;
  if ((((int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0) &&
      (uVar3 = (int)param_2 - (int)this->field_0043, uVar8 = (int)uVar3 >> 0x1f,
      (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0)) &&
     (local_8 = (int)param_3, uVar3 = local_8 - this->field_0045, uVar8 = (int)uVar3 >> 0x1f,
     (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a8)) {

    uVar4 = FUN_006aff5b((int)this->field_006C);

    uVar5 = FUN_006aff50((int)this->field_006C);
    iVar9 = (int)param_1 - (int)this->field_0041;
    iVar7 = (int)param_2 - (int)this->field_0043;
    uVar3 = (int)(iVar9 * uVar5 - iVar7 * uVar4) / 10000;
    uVar8 = (int)(iVar7 * uVar5 + iVar9 * uVar4) / 10000;
    uVar6 = local_8 - this->field_0045;
    if ((int)(DAT_007ce7a8 * uVar6 * uVar6 + DAT_007ce7a4 * uVar8 * uVar8 +
             DAT_007ce7a0 * uVar3 * uVar3) < DAT_007ce7ac) {
      iVar9 = (int)param_4 - (int)this->field_0041;
      iVar7 = (int)param_5 - (int)this->field_0043;

      thunk_FUN_0060e680((int)(iVar9 * uVar5 - iVar7 * uVar4) / 10000,
                         (int)(iVar7 * uVar5 + iVar9 * uVar4) / 10000,
                         (int)param_6 - (int)this->field_0045,uVar3,uVar8,uVar6,(int *)&DAT_007ce794
                         ,(RecoveredRecord_0060E680_206C65A9 *)&DAT_007ce7a0,(uint *)&param_3,
                         &local_c,&local_10);
      _param_4 = (int)(_param_3 * uVar5 + local_c * uVar4) / 10000;
      iVar7 = (int)(local_c * uVar5 - _param_3 * uVar4) / 10000;
      ST3DSMAPContext::sub_006DD530(this->field_0211,&local_1c,&local_18,&local_14);
      lVar10 = Library::MSVCRT::__ftol();
      sVar1 = this->field_0045;
      lVar11 = Library::MSVCRT::__ftol();
      sVar2 = this->field_0043;
      lVar12 = Library::MSVCRT::__ftol();
      STPiece<0,1>(param_2) = (undefined1)iVar7;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return ((uint)(0 < (int)(((short)lVar10 - (int)sVar1) * local_10 +
                               ((short)lVar11 - (int)sVar2) * iVar7 +
                              ((short)lVar12 - (int)this->field_0041) * _param_4)) << 8 |
             local_10 & 0xff) << 0x10 | (uint)CONCAT11((undefined1)param_2,(char)_param_4);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

