#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STBHEShellC::sub_005F4FA0(STBHEShellC *this)

{
  STBHEShellC_field_0169DArray *pSVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  int local_20;
  short local_18;
  short local_14;
  int local_c;
  int local_8;

  local_c = 0;
  bVar4 = false;
  iVar6 = 0;
  if ((this->field_0169 != nullptr) &&
     (local_8 = 0, 0 < this->field_010D)) {
    do {
      uVar8 = local_8 * this->field_0109;
      if (g_playSystem_00802A38->field_00E4 < (uint)(&this->field_0159)[local_8]) {
        local_c = 1;
      }
      else {
        (&this->field_0139)[local_8] = (&this->field_0139)[local_8] + this->field_0125;
        iVar6 = (&this->field_0149)[local_8] + this->field_0121;
        (&this->field_0149)[local_8] = iVar6;
        if ((local_8 == 0) && (iVar6 = iVar6 / 200, iVar6 != this->field_0129)) {
          this->field_0129 = iVar6;
          /* ST_CALLSITE[005F505D]: CALL 0x00401285; direct=00401285 STBHEShellC::sub_005F5700 */
          sub_005F5700(this,iVar6,this->field_0139);
        }
        local_20 = 0;
        if (0 < this->field_0109) {
          do {
            pSVar1 = this->field_0169;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((uVar8 < pSVar1->count) &&
                (pcVar9 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar8,
                pcVar9 != nullptr)) && (*pcVar9 != '\x02')) {
              *(int *)(pcVar9 + 2) =
                   (*(int *)(pcVar9 + 0x12) * (&this->field_0139)[local_8]) / 10000 +
                   this->field_0111;
              iVar6 = *(int *)(pcVar9 + 2);
              *(int *)(pcVar9 + 6) =
                   (*(int *)(pcVar9 + 0x16) * (&this->field_0139)[local_8]) / 10000 +
                   this->field_0115;
              iVar2 = (&this->field_0149)[local_8];
              *(int *)(pcVar9 + 10) = iVar2;
              local_18 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
              iVar3 = *(int *)(pcVar9 + 6);
              local_14 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
              sVar7 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
              if ((((iVar6 < 0) || (g_worldGrid.sizeX <= iVar6)) ||
                  ((*(int *)(pcVar9 + 6) < 0 ||
                   (((int)g_worldGrid.sizeY <= *(int *)(pcVar9 + 6) || (iVar2 < 0)))))) ||

                 (iVar5 = thunk_FUN_004961b0(local_18,local_14,sVar7), iVar5 == 0)) {
                ST3DSMAPContext::sub_006E3210
                          (g_sT3DSMAPContext_00807598,
                           (*(int *)(pcVar9 + 2) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
                           (*(int *)(pcVar9 + 6) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9);
                lVar10 = Library::MSVCRT::__ftol();
                if (*(int *)(pcVar9 + 10) < (short)lVar10) {
                  *pcVar9 = '\x02';
                  if (-1 < (int)*(uint *)(pcVar9 + 0x1f)) {
                    Library::Ourlib::ST3DSMAP::SprClose
                              (g_sT3DSMAPContext_00807598,*(uint *)(pcVar9 + 0x1f));
                    *(uint *)(pcVar9 + 0x1f) = 0xffffffff;
                  }
                  goto LAB_005f528b;
                }
              }
              if (*pcVar9 == '\0') {
                if ((*(uint *)(pcVar9 + 0x1f) == 0xffffffff) && (this->field_0103 != '\0')) {

                  thunk_FUN_005f4a30((int)pcVar9,pcVar9[1],0);
                }
                *pcVar9 = '\x01';
              }
              if ((local_c == 0) && (*pcVar9 != '\x02')) {
                local_c = 1;
              }
              if (((local_8 == 0) && (!bVar4)) && (*pcVar9 != '\x02')) {
                bVar4 = true;
              }
            }
LAB_005f528b:
            local_20 = local_20 + 1;
            uVar8 = uVar8 + 1;
          } while (local_20 < this->field_0109);
        }
      }
      local_8 = local_8 + 1;
      iVar6 = local_c;
    } while (local_8 < this->field_010D);
  }
  return iVar6;
}

