#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=2; incoming_stack_parameter_uses=19; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
CPanelTy::sub_00501D00
          (CPanelTy *this,RecoveredRecordView_00501D00_08D99E75 *param_1,
          RecoveredRecord_CPanelTy_00501D00 *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  short *psVar5;
  uint *puVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  bool bVar10;
  char local_5;

  cVar3 = '\0';
  local_5 = '\0';
  pcVar4 = &param_1->field_0x9;
  iVar7 = 6;
  do {
    if (*pcVar4 != '\0') {
      cVar3 = cVar3 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 6;
  pcVar4 = &param_2->field_0x9;
  do {
    if (*pcVar4 != '\0') {
      local_5 = local_5 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (cVar3 != local_5) {
    if (DAT_0080874e != '\x03') {
      /* ST_CALLSITE[00501D6C]: CALL 0x0040556f; direct=0040556F CPanelTy::SetControlBoat */
      SetControlBoat(this);
      return;
    }
    /* ST_CALLSITE[00501D5E]: CALL 0x0040296e; direct=0040296E CPanelTy::SetControlBoatSI */
    SetControlBoatSI(this);
    return;
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)&param_1->field_0x9;
  psVar8 = (short *)&param_2->field_0x9;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if (bVar10) {
    if (*(int *)param_1 != *(int *)param_2) {
      this->field_0028 = 5;
      FUN_006e6080(this,2,this->field_02FE,(undefined4 *)&this->field_0x18);
      bVar1 = 0;
      pcVar4 = &param_1->field_0x9;
      do {
        if (*pcVar4 != '\0') {
          /* ST_CALLSITE[00501E1E]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
          sub_004F17D0(this,1,bVar1);
        }
        bVar1 = bVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar1 < 6);
      /* ST_CALLSITE[00501E34]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      sub_004F1610(this,'\x01');
      /* ST_CALLSITE[00501E3F]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
      CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
    }
    if (param_1->field_0x8 != param_2->field_0x8) {
      /* ST_CALLSITE[00501E56]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
      sub_004F1610(this,'\x01');
    }
  }
  else {
    this->field_0028 = 5;
    FUN_006e6080(this,2,this->field_02FE,(undefined4 *)&this->field_0x18);
    bVar1 = 0;
    pcVar4 = &param_1->field_0x9;
    do {
      if (*pcVar4 != '\0') {
        /* ST_CALLSITE[00501DBB]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
        sub_004F17D0(this,1,bVar1);
      }
      bVar1 = bVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar1 < 6);
    /* ST_CALLSITE[00501DD1]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
    sub_004F1610(this,'\x01');
    /* ST_CALLSITE[00501DDC]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
    CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)&param_1->field_0xf;
  psVar8 = (short *)&param_2->field_0xf;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if ((!bVar10) || (param_1->field_0007 != param_2->field_0007)) {
    /* ST_CALLSITE[00501E89]: CALL 0x00404f89; direct=00404F89 CPanelTy::sub_004F4570 */
    sub_004F4570(this,'\x01',(RecoveredRecord_004F4570_07A3F315 *)param_1,
                 (RecoveredRecord_004F4570_D72BA975 *)param_2);
  }
  if (((param_1->field_0015 != param_2->field_0015) || (param_1->field_0007 != param_2->field_0007))
     && (this->field_09C0[0] != 0)) {
    this->field_0028 = 0x20;
    if (param_1->field_0007 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(byte)param_1->field_0015;
    }
    *(uint *)&this->field_0x2c = uVar2;
    FUN_006e6080(this,2,this->field_09C0[0],(undefined4 *)&this->field_0x18);
  }
  piVar9 = &param_1->field_0036;
  if ((param_1->field_0036 != param_2->field_0036) || (param_1->field_0007 != param_2->field_0007))
  {
    puVar6 = this->field_0960;
    uint param_2_after_write = 0x4; /* compiler stack-slot lifetime split */
    do {
      if (*puVar6 != 0) {
        this->field_0028 = 0x20;
        if (param_1->field_0007 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(byte)*piVar9;
        }
        *(uint *)&this->field_0x2c = uVar2;
        FUN_006e6080(this,2,*puVar6,(undefined4 *)&this->field_0x18);
      }
      puVar6 = puVar6 + 1;
      piVar9 = (int *)((int)piVar9 + 1);
      param_2_after_write = param_2_after_write - 1;
    } while (param_2_after_write != 0);
  }
  return;
}

