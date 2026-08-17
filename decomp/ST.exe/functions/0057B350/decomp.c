#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_etorp.cpp
   Diagnostic line evidence: 342 | 349 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl FUN_0057b350(int *param_1,int param_2,int *param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar5;
  undefined2 uVar6;
  void *pvVar7;
  int local_EAX_70;
  undefined4 uVar8;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  int *piVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar5 = param_1;
  if ((param_2 < 0x1a) || (0x23 < param_2)) {
    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_etorp.cpp",0x156,0,0,"%s",
                               "ConusExplosion:Wrong number of torppedos (min 26, max 35)");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    pvVar7 = Library::DKW::LIB::MemAlloc(param_2 << 3);
    *param_3 = (int)pvVar7;
    if (pvVar7 != nullptr) {
      local_8 = 0;
      local_c = -0xc9;
      local_18 = 3;
      do {
        local_14 = 3;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)0xffffff37;
        do {
          iVar10 = -200;
          local_10 = 3;
          piVar11 = param_3 + local_8;
          do {
            if ((int)param_1 + iVar10 + local_c != 0) {
              psVar1 = (short *)*piVar11;
              *psVar1 = STField<short>(piVar5,0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar11 + 2) = STField<short>(piVar5,0x43) + (short)param_1;
              *(short *)(*piVar11 + 4) = (short)iVar10 + STField<short>(piVar5,0x45);
              puVar2 = (undefined2 *)*piVar11;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              /* ST_CALLSITE[0057B445]: CALL dword ptr [EDX + 0x10] */
              /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable or function-table callback call with the machine-proven calling convention; expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = (**(code **)(*piVar5 + 0x10))
                                (CONCAT22(uVar9,STField<undefined2>(piVar5,0x41)),
                                 CONCAT22(uVar6,STField<undefined2>(piVar5,0x43)),
                                 CONCAT22(uVar9,STField<undefined2>(piVar5,0x45)),
                                 CONCAT22(uVar6,*puVar2),CONCAT22(uVar9,puVar2[1]),
                                 CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar11;
              local_8 = local_8 + 1;
              piVar11 = piVar11 + 1;
              *(undefined2 *)(iVar3 + 6) = uVar6;
            }
            iVar10 = iVar10 + 200;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          param_1 = (int *)((int)param_1 + 0xc9);
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_c = local_c + 0xc9;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      if (param_2 == 0x1a) {
        return 1;
      }
      local_c = -100;
      local_10 = 2;
      do {
        local_14 = 2;
        param_1 = (int *)0xffffff9c;
        do {
          iVar10 = -100;
          local_18 = 1;
          piVar11 = param_3 + local_8;
          do {
            if (param_2 <= local_8) break;
            if ((int)param_1 + local_c + iVar10 != 0) {
              psVar1 = (short *)*piVar11;
              *psVar1 = STField<short>(piVar5,0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar11 + 2) = STField<short>(piVar5,0x43) + (short)param_1;
              *(short *)(*piVar11 + 4) = (short)iVar10 + STField<short>(piVar5,0x45);
              puVar2 = (undefined2 *)*piVar11;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              /* ST_CALLSITE[0057B539]: CALL dword ptr [EDX + 0x10] */
              /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable or function-table callback call with the machine-proven calling convention; expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = (**(code **)(*piVar5 + 0x10))
                                (CONCAT22(uVar9,STField<undefined2>(piVar5,0x41)),
                                 CONCAT22(uVar6,STField<undefined2>(piVar5,0x43)),
                                 CONCAT22(uVar9,STField<undefined2>(piVar5,0x45)),
                                 CONCAT22(uVar6,*puVar2),CONCAT22(uVar9,puVar2[1]),
                                 CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar11;
              local_8 = local_8 + 1;
              piVar11 = piVar11 + 1;
              *(undefined2 *)(iVar3 + 6) = uVar6;
            }
            iVar10 = iVar10 + 200;
            local_18 = local_18 + -1;
          } while (-1 < local_18);
          param_1 = (int *)((int)param_1 + 0xc9);
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_c = local_c + 0xc9;
        local_10 = local_10 + -1;
        if (local_10 == 0) {
          return 1;
        }
      } while( true );
    }
    local_EAX_70 = ReportDebugMessage("E:\\__titans\\Igor\\to_etorp.cpp",0x15d,0,0,
                                      "%s","SphereExplosion:Bad parameters");
    if (local_EAX_70 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0;
}

