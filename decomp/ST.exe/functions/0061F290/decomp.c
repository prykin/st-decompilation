#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STLightC::sub_0061F290(STLightC *this,int param_1)

{
  dword dVar1;
  STLightC_field_00A3DArray *pSVar2;
  VisibleClassTy *this_00;
  int iVar3;
  int iVar4;
  STLightC_field_00A3Element *element_00a3;
  longlong lVar6;
  int local_1c;
  int local_18;
  STLightC *local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;

  local_10 = 0;
  if (this->field_00A3 != nullptr) {
    dVar1 = this->field_00A3->count;
    if ((dVar1 != 0) && (local_c = 0, local_14 = this, 0 < (int)dVar1)) {
      do {
        this_00 = g_visibleClass_00802A88;
        pSVar2 = local_14->field_00A3;
        if (local_c < pSVar2->count) {
          element_00a3 = DArrayAt<STLightC_field_00A3Element>(pSVar2, local_c);
        }
        else {
          element_00a3 = nullptr;
        }
        if ((-1 < (int)element_00a3->spriteHandle) && (-1 < element_00a3->field_0000)) {
          if ((int)(g_playSystem_00802A38->field_00E4 - element_00a3->field_002A) <
              local_14->field_005F) {
            local_10 = 1;
            if ((param_1 != 0) && (g_visibleClass_00802A88 != nullptr)) {
              if ((float)element_00a3->field_000C < _DAT_0079034c) {
                lVar6 = Library::MSVCRT::__ftol();
                iVar4 = (short)lVar6 + -1;
              }
              else {
                lVar6 = Library::MSVCRT::__ftol();
                iVar4 = (int)(short)lVar6;
              }
              if ((float)element_00a3->field_0008 < _DAT_0079034c) {
                lVar6 = Library::MSVCRT::__ftol();
                local_8 = (short)lVar6 + -1;
              }
              else {
                lVar6 = Library::MSVCRT::__ftol();
                local_8 = (int)(short)lVar6;
              }
              if ((float)element_00a3->field_0004 < _DAT_0079034c) {
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
                  (((int)this_00->field_0030 <= local_18 ||
                   ((iVar4 = g_centeredOffsets5[iVar4] + local_1c, iVar4 < 0 ||
                    (this_00->field_0034 <= iVar4)))))) ||
                 ((this_00->field_004C == nullptr ||
                  (this_00->field_004C[local_18 + iVar4 * this_00->field_0030] != 0)))) {
                if (element_00a3->state == 0) {
                  Library::Ourlib::ST3DSMAP::SprShow
                            (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle,0);
                  element_00a3->state = 1;
                }
              }
              else if (element_00a3->state == 1) {
                Library::Ourlib::ST3DSMAP::SprHide
                          (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle);
                element_00a3->state = 0;
              }
            }
          }
          else {
            Library::Ourlib::ST3DSMAP::SprClose
                      (g_sT3DSMAPContext_00807598,element_00a3->spriteHandle);
            element_00a3->spriteHandle = 0xffffffff;
            element_00a3->field_0000 = -1;
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
    return local_10;
  }
  return 0;
}

