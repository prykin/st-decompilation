#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall HelpPanelTy::sub_0051DA70(HelpPanelTy *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int local_c;
  uint local_8;

  if ((((DAT_0080734d != '\0') &&
       (*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0')) &&
      (DAT_0080874f == '\0')) && (DAT_00808783 != '\x03')) {
    bVar3 = this->field_0250;
    bVar8 = 0;
    bVar2 = 0;
    bVar1 = 0;
    local_8 = 0;
    bVar4 = 0;
    if (bVar3 != 0) {
      bVar9 = 0;
      uVar10 = (uint)bVar3;
      do {
        if ((DAT_0080734e & 1 << (bVar9 & 0x1f)) != 0) {
          bVar8 = bVar8 + 1;
        }
        bVar9 = bVar9 + 1;
        uVar10 = uVar10 - 1;
        bVar4 = bVar8;
      } while (uVar10 != 0);
    }
    bVar9 = 0;
    bVar8 = this->field_0251;
    if (bVar8 != 0) {
      bVar6 = 0;
      uVar10 = (uint)bVar8;
      do {
        if ((DAT_00807352 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar9 = bVar9 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      local_8 = (uint)bVar9;
    }
    bVar9 = this->field_0252;
    if (bVar9 != 0) {
      bVar6 = 0;
      uVar10 = (uint)bVar9;
      do {
        if ((DAT_00807356 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar1 = bVar1 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    bVar6 = this->field_0253;
    if (bVar6 != 0) {
      bVar7 = 0;
      uVar10 = (uint)bVar6;
      do {
        if ((DAT_0080735a & 1 << (bVar7 & 0x1f)) != 0) {
          bVar2 = bVar2 + 1;
        }
        bVar7 = bVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (DAT_0080874e == '\x02') {
      iVar12 = (((uint)bVar9 - (uint)bVar1) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else if (DAT_0080874e == '\x03') {
      iVar12 = (((uint)bVar6 - (uint)bVar2) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else {
      iVar12 = ((bVar8 - local_8) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    if (-1 < iVar12) {
      uVar10 = Library::MSVCRT::FUN_0072e6c0();
      uVar10 = uVar10 % (iVar12 + 1U);
      uVar5 = (uint)(byte)this->field_0250;
      local_8 = uVar10 & 0xff;
      if ((int)(uVar10 & 0xff) < (int)(uVar5 - bVar4)) {
        puVar11 = &DAT_0080734e;
        local_c = 0;
      }
      else {
        local_8 = (uint)(byte)((char)uVar10 + (bVar4 - this->field_0250));
        if (DAT_0080874e == '\x01') {
          puVar11 = &DAT_00807352;
          uVar5 = (uint)(byte)this->field_0251;
          local_c = 1;
        }
        else if (DAT_0080874e == '\x02') {
          puVar11 = &DAT_00807356;
          uVar5 = (uint)(byte)this->field_0252;
          local_c = 2;
        }
        else {
          puVar11 = &DAT_0080735a;
          uVar5 = (uint)(byte)this->field_0253;
          local_c = 3;
        }
      }
      bVar1 = 0;
      if (uVar5 != 0) {
        uVar10 = 0;
        do {
          if ((*puVar11 & 1 << ((byte)uVar10 & 0x1f)) == 0) {
            if ((char)local_8 == '\0') {
              TipProc(this,(void *)(uint)bVar1,local_c,'\0');
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(this->vtable + 0x18))(1);
              return;
            }
            local_8 = (uint)(byte)((char)local_8 - 1);
          }
          bVar1 = bVar1 + 1;
          uVar10 = (uint)bVar1;
        } while (uVar10 < uVar5);
        return;
      }
    }
  }
  return;
}

