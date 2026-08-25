#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=2; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C56B0(TLOBaseTy *this,void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar4;
  uint uVar5;
  int iVar3;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;

  pvVar2 = param_1;
  sVar7 = 0;
  sVar8 = 0;
  local_8 = 0;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    local_8 = (uint)(ushort)this->field_0041;
  }
  if (&stack0x00000000 != (undefined1 *)0xfffffffc) {
    sVar8 = this->field_0043;
    sVar7 = this->field_0045;
  }
  iVar6 = (int)param_1 * 0x80;
  if (*(int *)((int)&this->field_02CC + iVar6 + 1) < *(int *)((int)&this->field_02D0 + iVar6 + 1)) {
    pvVar1 = (void *)((int)param_1 + this->field_0235 * 2);
    if ((&DAT_00792ca0)[(int)pvVar1 * 3] == 0xb3) {
      void * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
      if (((AnonShape_005EFAE0_B406B78B *)this->field_04E0[3] != nullptr)
         && (iVar4 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,
                                (AnonShape_005EFAE0_B406B78B *)this->field_04E0[3],(int *)&param_1_after_write),
            iVar4 == 0)) {
        uVar5 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar5;
        iVar3 = thunk_FUN_00617ca0(param_1_after_write,(int *)&local_8,&local_10,&local_18,(int *)&local_c,
                                   (int *)&local_14,(int *)&local_1c,uVar5 >> 0x10);
        if (iVar3 != 0) {
          *(uint *)(&this->field_0x2a5 + iVar6) = local_8;
          this->field_04E0[5] = local_c;
          (&this->field_02A9)[(int)pvVar2 * 0x20] = local_10;
          this->field_04E0[6] = local_14;
          *(undefined4 *)(&this->field_0x2ad + iVar6) = local_18;
          this->field_04E0[7] = local_1c;
          return 1;
        }
      }
    }
    else {
      iVar6 = (int)pvVar1 * 0x16;
      iVar4 = (int)sVar7 + (int)*(short *)(&DAT_007932d8 + iVar6);
      sVar7 = STBiasedDiv16(iVar4, 200); /* exact signed 16-bit grid-index division */
      iVar4 = (int)*(short *)(&DAT_007932d6 + iVar6) + (int)sVar8;
      sVar8 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
      iVar6 = (int)*(short *)(&DAT_007932d4 + iVar6) + (short)local_8;
      sVar9 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar8 < 0)) ||
          ((g_worldGrid.sizeY <= sVar8 || (sVar7 < 0)))) ||
         ((g_worldGrid.sizeZ <= sVar7 ||
          (STGridAt3D(g_worldGrid, sVar9, sVar8, sVar7).objects[1] == nullptr)))) {
        return 1;
      }
    }
  }
  return 0;
}

