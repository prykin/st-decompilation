#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005eeff0(void *this,int param_1)

{
  char cVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;

  pVVar3 = g_visibleClass_00802A88;
  if (param_1 == 0) {
    if (STField<int>(this,0x2d6) < 0) {
      thunk_FUN_005ec9f0(0);
    }
    else {
      thunk_FUN_005ef5f0((int)this);
    }
    pVVar3 = g_visibleClass_00802A88;
    if (STField<char>(this,0x2de) == '\0') {
      return;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return;
    }
    iVar5 = STField<int>(this,0x27f);
    param_1 = STBiasedDiv16(iVar5, 200); /* exact signed 16-bit grid-index division */
    iVar5 = STField<int>(this,0x27b);
    iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
    iVar4 = STField<int>(this,0x277);
    iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[005EF0F6]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (VisibleClassTy::sub_00558C00
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                     &local_8,&local_c), param_1 < 0)) ||
        (((4 < param_1 || (local_8 < 0)) ||
         (((int)pVVar3->field_0030 <= local_8 ||
          ((local_c = g_centeredOffsets5[param_1] + local_c, local_c < 0 ||
           (pVVar3->field_0034 <= local_c)))))))) ||
       ((pVVar3->field_004C == nullptr ||
        (pVVar3->field_004C[local_8 + local_c * pVVar3->field_0030] != 0)))) {
      /* ST_CALLSITE[005EF149]: CALL dword ptr [EDX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xd8))();
      /* ST_CALLSITE[005EF19F]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                ((STT3DSprC *)((int)this + 0x1d5),
                 (float)STField<int>(this,0x2be) * _DAT_007904f8 * _DAT_007904f0,
                 (float)STField<int>(this,0x2c2) * _DAT_007904f8 * _DAT_007904f0,
                 (float)STField<int>(this,0x2c6) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      cVar1 = STField<char>(this,0x2b9);
joined_r0x005ef316:
      if (cVar1 != '\0') {
        return;
      }
      thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
      STField<undefined1>(this,0x2b9) = 1;
      STField<undefined1>(this,0x2de) = 0;
      return;
    }
    cVar1 = STField<char>(this,0x2b9);
  }
  else {
    if (g_visibleClass_00802A88 == nullptr) {
      return;
    }
    if (STField<int>(this,0x2d6) < 0) {
      return;
    }
    iVar5 = STField<int>(this,0x27f);
    param_1 = STBiasedDiv16(iVar5, 200); /* exact signed 16-bit grid-index division */
    iVar5 = STField<int>(this,0x27b);
    iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
    iVar4 = STField<int>(this,0x277);
    iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           /* ST_CALLSITE[005EF2B9]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
           (VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &local_c,&local_8), param_1 < 0)) || ((4 < param_1 || (local_c < 0)))) ||
         (((int)pVVar3->field_0030 <= local_c ||
          ((local_8 = g_centeredOffsets5[param_1] + local_8, local_8 < 0 ||
           (pVVar3->field_0034 <= local_8)))))) || (pVVar3->field_004C == nullptr)) ||
       (pVVar3->field_004C[local_c + local_8 * pVVar3->field_0030] != 0)) {
      /* ST_CALLSITE[005EF308]: CALL dword ptr [EDX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xd8))();
      cVar1 = STField<char>(this,0x2b9);
      goto joined_r0x005ef316;
    }
    cVar1 = STField<char>(this,0x2b9);
  }
  if (cVar1 != '\0') {
    thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
    STField<undefined1>(this,0x2b9) = 0;
  }
  return;
}

