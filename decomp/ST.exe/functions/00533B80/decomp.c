#include "../../pseudocode_runtime.h"


void __fastcall FUN_00533b80(RecoveredRecord_STPlaySystemC_00533B80 *param_1)

{
  uint uVar1;
  char *resourceString;
  UINT resourceId;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_24 [4];
  uint local_14;
  if ((DAT_008067a0 != '\0') && (param_1->field_0172 != 2)) {
    if ((param_1->field_01A4 == '\x05') && (param_1->field_01AB == '\x04')) {

      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)param_1->field_0068,0,0x1d,0x13,
                 (RecoveredRecordView_006B84D0_87AF9D9B *)param_1->field_0184,0,0x1d,0x13,0xee,0x6a);

      ccFntTy::SetSurf(param_1->field_0180,param_1->field_0068,0,0x1d,0x13,0xee,0x6a);
      if (DAT_008067a0 == '\0') {
        resourceId = 0x3e84;
      }
      else {
        resourceId = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034
                              < 6000);
      }
      param_1->field_01A5 = resourceId;
      if (DAT_0080874e == '\x03') {
        uVar1 = 5;
      }
      else {
        uVar1 = -(uint)(DAT_0080874e != '\x01') & 7;
      }
      iVar5 = -1;
      iVar4 = -1;
      iVar3 = -1;
      iVar2 = -2;
      /* ST_CALLSITE[00533C5C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      resourceString = LoadResourceString(resourceId,g_hINSTANCE_00807618);

      ccFntTy::WrTxt(param_1->field_0180,resourceString,iVar2,iVar3,uVar1,iVar4,iVar5);

      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,param_1->field_0060,0xffffffff,param_1->field_003C,
                 param_1->field_0044);
      return;
    }
    if (param_1->field_01A4 == '\x01') {
      local_14 = 5;
      if (param_1->field_01C1 != 0) {
        FUN_006e6080(param_1,2,param_1->field_01C1,local_24);
      }
    }
  }
  return;
}

