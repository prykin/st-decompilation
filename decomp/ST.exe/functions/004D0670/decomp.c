#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=18, scalar_uses=0; sites=004D0679 dereference: MOV EAX,dword ptr [ESI +
   0x4d0] | 004D068D dereference: MOV EAX,dword ptr [ESI + 0x1f5] | 004D06B0 dereference: MOV
   EDX,dword ptr [ESI + 0x1f5] | 004D06CE dereference: MOV EDX,dword ptr [ESI + 0x1f5] | 004D06FC
   dereference: MOV EDX,dword ptr [ESI + 0x369] | 004D0713 dereference: MOV EAX,dword ptr [ESI +
   0x369] | 004D072A dereference: MOV ECX,dword ptr [ESI + 0x369] | 004D0741 dereference: MOV
   EDX,dword ptr [ESI + 0x369] | 004D0756 dereference: MOV ECX,dword ptr [ESI + 0x5ff] | 004D0767
   dereference: MOV ECX,dword ptr [ESI + 0x5ff] | 004D0778 dereference: MOV ECX,dword ptr [ESI +
   0x5ff] | 004D0786 dereference: MOV ECX,dword ptr [ESI + 0x5ff] | 004D07A0 dereference: MOV
   ECX,dword ptr [ESI + 0x5ff] | 004D07B3 dereference: MOV ECX,dword ptr [ESI + 0x5ff] | 004D07C7
   dereference: MOV EAX,dword ptr [ESI + 0x369] | 004D07E3 dereference: MOV ECX,dword ptr [ESI +
   0x5ff] | 004D07F3 dereference: MOV ECX,dword ptr [ESI + 0x5ff] | 004D0807 dereference: MOV
   ECX,dword ptr [ESI + 0x5ff] */

undefined4 __fastcall FUN_004d0670(RecoveredRecordView_004D0670_0B3E93E7 *param_1)

{
  char cVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  uVar5 = 0;
  if ((param_1->field_04D0 == 3) || (param_1->field_04D0 == 2)) {
    if (param_1->field_01F5->field_0154 < param_1->field_01F5->field_0158) {

      iVar3 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\t');
      if (iVar3 < param_1->field_01F5->field_0154 + 2) {
        return 0;
      }
    }
    else {

      iVar3 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\t');
      if (param_1->field_01F5->field_0154 + -2 < iVar3) {
        return 0;
      }
    }

    iVar2 = thunk_FUN_004ab050();
    uVar4 = 0;
    switch(iVar2) {
    case 0:
      uVar5 = *(uint *)(&DAT_007a90b8 + param_1->field_0369 * 0x10);
      uVar4 = DAT_007a9438;
      break;
    case 1:
      uVar5 = *(uint *)(&DAT_007a90bc + param_1->field_0369 * 0x10);
      uVar4 = DAT_007a943c;
      break;
    case 2:
      uVar5 = *(uint *)(&DAT_007a90c0 + param_1->field_0369 * 0x10);
      uVar4 = DAT_007a9440;
      break;
    case 3:
      uVar5 = *(uint *)(&DAT_007a90c4 + param_1->field_0369 * 0x10);
      uVar4 = DAT_007a9444;
    }

    thunk_FUN_004abce0(param_1->field_05FF,0xe,uVar5,uVar5,'\0');

    thunk_FUN_004abce0(param_1->field_05FF,0xc,uVar5,uVar5,'\0');
    /* ST_CALLSITE[004D0781]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(param_1->field_05FF,'\x0e',uVar5);
    /* ST_CALLSITE[004D078F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(param_1->field_05FF,'\f',uVar5);
    /* ST_CALLSITE[004D07A8]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D07C2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow(param_1->field_05FF,0xc,g_playSystem_00802A38->field_00E4);
    iVar3 = -1;
    pcVar6 = (char *)((int)&DAT_007a9440 + param_1->field_0369 * 6 + 2);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {

      thunk_FUN_004abce0(param_1->field_05FF,0xd,uVar4,uVar4,'\0');
      /* ST_CALLSITE[004D07FC]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(param_1->field_05FF,'\r',uVar4);
      /* ST_CALLSITE[004D0816]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(param_1->field_05FF,0xd,g_playSystem_00802A38->field_00E4);
    }
  }
  return 0;
}

