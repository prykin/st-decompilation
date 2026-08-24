#include "../../pseudocode_runtime.h"


undefined4 FUN_005da7a0(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar4;
  bool bVar5;
  int iVar3;
  int *piVar4;
  char *pcVar6;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    puVar1 = &local_8->field_068A;
    if (local_8->field_068A == 0) {
      Library::DKW::DDX::FUN_006b62d0(puVar1);
      piVar2 = (int *)*puVar1;
      bVar5 = true;
      if (*piVar2 <= piVar2[1]) {
        piVar4 = FUN_006bfb50(piVar2,*piVar2 * 0x14 + 0x1c);
        if (piVar4 == nullptr) {
          bVar5 = false;
        }
        else {
          *puVar1 = piVar4;
          *piVar4 = *piVar4 + 1;
        }
      }
      if (bVar5) {
        pcVar6 = LoadResourceString(0x254b,g_hINSTANCE_00807618);
        pcVar6 = FUN_006c8170(pcVar6);
        if (pcVar6 != nullptr) {
          iVar4 = *puVar1;
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(iVar4 + 0x1c),(AnonPointee_TLOBaseTy_0607 *)(iVar4 + 8),
                     *(int *)(iVar4 + 4) * 0x14);
          iVar4 = *puVar1;
          *(undefined4 *)(iVar4 + 0xc) = DAT_007cd700;
          *(undefined4 *)(iVar4 + 0x10) = DAT_007cd704;
          *(undefined4 *)(iVar4 + 0x14) = DAT_007cd708;
          *(undefined4 *)(iVar4 + 0x18) = DAT_007cd70c;
          *(char **)(*puVar1 + 8) = pcVar6;
          *(int *)(*puVar1 + 4) = *(int *)(*puVar1 + 4) + 1;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  /* ST_CALLSITE[005DA8AA]: CALL 0x004055f6; direct=004055F6 StartSystemTy::sub_005DA910 */
  StartSystemTy::sub_005DA910(local_8);
  return 0xfffffffa;
}

