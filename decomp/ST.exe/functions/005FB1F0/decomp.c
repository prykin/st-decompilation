#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FB234 MOVSX EAX,word ptr [EBP + 0x10] */

uint __thiscall
FUN_005fb1f0(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

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

  uVar3 = (int)param_1 - (int)STField<short>(this,0x41);
  uVar8 = (int)uVar3 >> 0x1f;
  if ((((int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0) &&
      (uVar3 = (int)param_2 - (int)STField<short>(this,0x43), uVar8 = (int)uVar3 >> 0x1f,
      (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0)) &&
     (local_8 = (int)param_3, uVar3 = local_8 - STField<short>(this,0x45),
     uVar8 = (int)uVar3 >> 0x1f, (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a8)) {
    uVar4 = FUN_006aff5b((int)STField<short>(this,0x6c));
    uVar5 = FUN_006aff50((int)STField<short>(this,0x6c));
    iVar9 = (int)param_1 - (int)STField<short>(this,0x41);
    iVar7 = (int)param_2 - (int)STField<short>(this,0x43);
    uVar3 = (int)(iVar9 * uVar5 - iVar7 * uVar4) / 10000;
    uVar8 = (int)(iVar7 * uVar5 + iVar9 * uVar4) / 10000;
    uVar6 = local_8 - STField<short>(this,0x45);
    if ((int)(DAT_007ce7a8 * uVar6 * uVar6 + DAT_007ce7a4 * uVar8 * uVar8 +
             DAT_007ce7a0 * uVar3 * uVar3) < DAT_007ce7ac) {
      iVar9 = (int)param_4 - (int)STField<short>(this,0x41);
      iVar7 = (int)param_5 - (int)STField<short>(this,0x43);
      thunk_FUN_0060e680((int)(iVar9 * uVar5 - iVar7 * uVar4) / 10000,
                         (int)(iVar7 * uVar5 + iVar9 * uVar4) / 10000,
                         (int)param_6 - (int)STField<short>(this,0x45),uVar3,uVar8,uVar6,
                         (int *)&DAT_007ce794,0x7ce7a0,(uint *)&param_3,&local_c,&local_10);
      _param_4 = (int)(_param_3 * uVar5 + local_c * uVar4) / 10000;
      iVar7 = (int)(local_c * uVar5 - _param_3 * uVar4) / 10000;
      ST3DSMAPContext::sub_006DD530
                (STField<ST3DSMAPContext *>(this,0x211),&local_1c,&local_18,&local_14);
      lVar10 = Library::MSVCRT::__ftol();
      sVar1 = STField<short>(this,0x45);
      lVar11 = Library::MSVCRT::__ftol();
      sVar2 = STField<short>(this,0x43);
      lVar12 = Library::MSVCRT::__ftol();
      STPiece<0,1>(param_2) = (undefined1)iVar7;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return ((uint)(0 < (int)(((short)lVar10 - (int)sVar1) * local_10 +
                               ((short)lVar11 - (int)sVar2) * iVar7 +
                              ((short)lVar12 - (int)STField<short>(this,0x41)) * _param_4))
              << 8 | local_10 & 0xff) << 0x10 | (uint)CONCAT11((undefined1)param_2,(char)_param_4);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

