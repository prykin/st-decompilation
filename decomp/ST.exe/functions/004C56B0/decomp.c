#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=2; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C56B0(TLOBaseTy *this,void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;

  pvVar2 = param_1;
  sVar6 = 0;
  sVar7 = 0;
  local_8 = 0;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    local_8 = (uint)(ushort)this->field_0041;
  }
  if (&stack0x00000000 != (undefined1 *)0xfffffffc) {
    sVar7 = this->field_0043;
    sVar6 = this->field_0045;
  }
  iVar5 = (int)param_1 * 0x80;
  if (*(int *)((int)&this->field_02CC + iVar5 + 1) < *(int *)((int)&this->field_02D0 + iVar5 + 1)) {
    pvVar1 = (void *)((int)param_1 + this->field_0235 * 2);
    if ((&DAT_00792ca0)[(int)pvVar1 * 3] == 0xb3) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
      if (((AnonShape_005EFAE0_B406B78B *)this->field_04E0[3] != nullptr)
         && (iVar3 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,
                                (AnonShape_005EFAE0_B406B78B *)this->field_04E0[3],(int *)&param_1),
            iVar3 == 0)) {
        uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar4;
        iVar3 = thunk_FUN_00617ca0(param_1,(int *)&local_8,&local_10,&local_18,(int *)&local_c,
                                   (int *)&local_14,(int *)&local_1c,uVar4 >> 0x10);
        if (iVar3 != 0) {
          *(uint *)(&this->field_0x2a5 + iVar5) = local_8;
          this->field_04E0[5] = local_c;
          (&this->field_02A9)[(int)pvVar2 * 0x20] = local_10;
          this->field_04E0[6] = local_14;
          *(undefined4 *)(&this->field_0x2ad + iVar5) = local_18;
          this->field_04E0[7] = local_1c;
          return 1;
        }
      }
    }
    else {
      iVar5 = (int)pvVar1 * 0x16;
      iVar3 = (int)sVar6 + (int)*(short *)(&DAT_007932d8 + iVar5);
      sVar6 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        sVar6 = (((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) +
                -1;
      }
      else {
        sVar6 = ((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
      }
      iVar3 = (int)*(short *)(&DAT_007932d6 + iVar5) + (int)sVar7;
      sVar7 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        sVar7 = (((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) +
                -1;
      }
      else {
        sVar7 = ((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
      }
      iVar5 = (int)*(short *)(&DAT_007932d4 + iVar5) + (int)(short)local_8;
      sVar8 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        sVar8 = (((short)(iVar5 / 0xc9) + sVar8) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) +
                -1;
      }
      else {
        sVar8 = ((short)(iVar5 / 0xc9) + sVar8) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
      }
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar7 < 0)) ||
          ((g_worldGrid.sizeY <= sVar7 || (sVar6 < 0)))) ||
         ((g_worldGrid.sizeZ <= sVar6 ||
          (STGridAt3D(g_worldGrid, sVar8, sVar7, sVar6).objects[1] == nullptr)))) {
        return 1;
      }
    }
  }
  return 0;
}

