#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00692920 parameter used as this of cMf32::RecGet @ 00692946 | 00692920 parameter used
   as this of cMf32::RecMemFree @ 00692A69

   [STPrototypeApplier] Propagated return.
   Evidence: 00692920 returns used as parameter 1 of FUN_006b4b20 @ 00691B46 | 00692920 returns used
   as parameter 1 of FUN_006b4b20 @ 00691DAB | 00692920 returns used as parameter 1 of FUN_006b4b20
   @ 00691FE9
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=4,
   pointer_dereferences=3, scalar_uses=0; sites=006929A2 dereference: IMUL EDI,dword ptr [EDX + 0x4]
   | 006929F9 dereference: MOV AX,word ptr [EDI + 0xe] | 006929FD dereference: IMUL EAX,dword ptr
   [EDI + 0x4] */

RecoveredRecordView_006B4B20_F20E56A6 *
FUN_00692920(cMf32 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  uint *puVar1;
  RecoveredRecordView_006B4B20_F20E56A6 *pRVar2;
  byte *puVar3;
  uint uVar4;
  byte *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *local_10;
  int local_c;
  int local_8;

  puVar1 = param_3;
  pRVar2 = nullptr;
  if (param_2 != nullptr) {
    local_10 = cMf32::RecGet(param_1,1,"PAL_APP",nullptr,1);
    pRVar2 = (RecoveredRecordView_006B4B20_F20E56A6 *)
             /* ST_CALLSITE[00692963]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; source view only; no Ghidra override */
             FUN_006b50c0((int)param_3,(int)param_4,8,0x100,(undefined4 *)(local_10 + 0x14),1);

    local_8 = FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pRVar2);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_5 == 0) {
      if (0 < (int)param_4) {
        auto param_3_after_write = param_4; /* compiler stack-slot lifetime split */
        puVar8 = param_2;
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (undefined4 *)((int)param_4 + -1);
          puVar6 = puVar8;
          puVar7 = (undefined4 *)
                   (((uint)pRVar2->field_000E * pRVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                    (int)param_2 + local_8);
          for (uVar4 = (uint)puVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = (uint)puVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          param_3_after_write = (undefined4 *)((int)param_3_after_write + -1);
          puVar8 = (undefined4 *)((int)puVar8 + (int)puVar1);
          param_4 = param_2;
        } while (param_3_after_write != nullptr);
      }
    }
    else if (0 < (int)param_4) {
      auto param_3_after_write_2 = param_2; /* compiler stack-slot lifetime split */
      auto param_5_after_write = (int)param_4; /* compiler stack-slot lifetime split */
      do {
        param_2 = (undefined4 *)((int)param_4 + -1);
        puVar3 = (undefined1 *)
                 (((uint)pRVar2->field_000E * pRVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  (int)param_2 + local_8);
        if (0 < (int)puVar1) {
          puVar5 = puVar3;
          puVar8 = puVar1;
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -1);
            *puVar5 = *(undefined1 *)
                       (local_c + 0x37ac +
                       ((int)((uint)(byte)puVar5[(int)param_3_after_write_2 - (int)puVar3] * 0xf) >> 8) * 4);
            puVar5 = puVar5 + 1;
          } while (puVar8 != nullptr);
        }
        param_3_after_write_2 = (undefined4 *)((int)param_3_after_write_2 + (int)puVar1);
        param_5_after_write = param_5_after_write + -1;
        param_4 = param_2;
      } while (param_5_after_write != 0);
    }
    cMf32::RecMemFree(param_1,(uint *)&local_10);
  }
  return pRVar2;
}

