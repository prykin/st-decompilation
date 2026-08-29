#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=8, scalar_uses=0; sites=004EC2A6 dereference: MOV EAX,dword ptr [ESI +
   0x1f1] | 004EC2B5 dereference: MOV EAX,dword ptr [ESI + 0x4d0] | 004EC2CE dereference: MOV
   EAX,dword ptr [ESI + 0x1f5] | 004EC2F1 dereference: MOV EDX,dword ptr [ESI + 0x1f5] | 004EC30F
   dereference: MOV EDX,dword ptr [ESI + 0x1f5] | 004EC357 dereference: MOV ECX,dword ptr [ESI +
   0x5ff] | 004EC368 dereference: MOV ECX,dword ptr [ESI + 0x5ff] | 004EC37C dereference: MOV
   ECX,dword ptr [ESI + 0x5ff] */

undefined4 __fastcall FUN_004ec2a0(RecoveredRecordView_004EC2A0_85163159 *param_1)

{
  int iVar2;
  int iVar1;
  uint uVar3;

  if (((param_1->field_01F1 & 0x4000) != 0) &&
     (((iVar2 = param_1->field_04D0, iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 5)))) {
    if (param_1->field_01F5->field_0154 < param_1->field_01F5->field_0158) {

      iVar2 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\t');
      if (iVar2 < param_1->field_01F5->field_0154 + 2) {
        return 0;
      }
    }
    else {

      iVar2 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\t');
      if (param_1->field_01F5->field_0154 + -2 < iVar2) {
        return 0;
      }
    }

    iVar1 = thunk_FUN_004ab050();
    uVar3 = 0;
    switch(iVar1) {
    case 0:
      uVar3 = DAT_0079aa90;
      break;
    case 1:
      uVar3 = DAT_0079aa94;
      break;
    case 2:
      uVar3 = DAT_0079aa98;
      break;
    case 3:
      uVar3 = DAT_0079aa9c;
    }

    thunk_FUN_004abce0(param_1->field_05FF,0xe,uVar3,uVar3,'\0');
    /* ST_CALLSITE[004EC371]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(param_1->field_05FF,'\x0e',uVar3);
    /* ST_CALLSITE[004EC38B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}

