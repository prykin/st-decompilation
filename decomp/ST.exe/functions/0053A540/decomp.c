#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as PlayPanelTy.
   Evidence: this_call_owners=[PlayPanelTy]; agreed_this_calls=2; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall PlayPanelTy::sub_0053A540(PlayPanelTy *this)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar6;
  bool bVar7;

  puVar1 = &this->field_0x18;
  memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
  this->field_0028 = 0x28;
  if (DAT_00808aaf < 9) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_00808aaf - 8;
  }
  this->field_002C = (short)iVar4;
  this->field_002E = (short)((uint)iVar4 >> 0x10);
  FUN_006e6080(this,2,this->field_01C5,(undefined4 *)puVar1);
  this->field_0028 = 0x20;
  bVar7 = 8 < DAT_00808aaf;
  this->field_002C = (short)(uint)bVar7;
  this->field_002E = (short)((uint)bVar7 >> 0x10);
  FUN_006e6080(this,2,this->field_01C5,(undefined4 *)puVar1);
  this->field_0028 = 0x22;
  this->field_002C = 0;
  this->field_002E = 0;
  FUN_006e6080(this,2,this->field_01C5,(undefined4 *)puVar1);
  bVar2 = 0;
  this->field_0028 = 0x20;
  piVar6 = &this->field_01A1;
  do {
    if (*piVar6 != 0) {
      if ((bVar2 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      this->field_002C = (short)uVar3;
      this->field_002E = (short)((uint)uVar3 >> 0x10);
      FUN_006e6080(this,2,piVar6[-8],(undefined4 *)puVar1);
      if ((bVar2 < DAT_00808aaf) && (DAT_00808783 == '\x03')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      this->field_002C = (short)uVar3;
      this->field_002E = (short)((uint)uVar3 >> 0x10);
      FUN_006e6080(this,2,*piVar6,(undefined4 *)puVar1);
    }
    bVar2 = bVar2 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar2 < 8);
  PaintPlayPanel(this);
  return;
}

