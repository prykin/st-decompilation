#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_etorp.cpp
   Diagnostic line evidence: 342 | 349 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl FUN_0057b350(int *param_1,int param_2,int *param_3)

{
  short *psVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar5;
  ushort uVar6;
  void *pvVar7;
  int local_EAX_70;
  uint uVar8;
  int iVar8;
  ushort uVar9;
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
        uint param_1_after_write = 0xffffff37; /* compiler stack-slot lifetime split */
        do {
          iVar10 = -200;
          local_10 = 3;
          piVar11 = param_3 + local_8;
          do {
            if ((int)param_1_after_write + iVar10 + local_c != 0) {
              psVar1 = (short *)*piVar11;
              *psVar1 = STField<short>(piVar5,0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar11 + 2) = STField<short>(piVar5,0x43) + (short)param_1_after_write;
              *(short *)(*piVar11 + 4) = (short)iVar10 + STField<short>(piVar5,0x45);
              puVar2 = (undefined2 *)*piVar11;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              /* ST_CALLSITE[0057B445]: CALL dword ptr [EDX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = STStructuralVirtualCall<undefined4>(piVar5, 0x10, CONCAT22(uVar9,STField<undefined2>(piVar5,0x41)), CONCAT22(uVar6,STField<undefined2>(piVar5,0x43)), CONCAT22(uVar9,STField<undefined2>(piVar5,0x45)), CONCAT22(uVar6,*puVar2), CONCAT22(uVar9,puVar2[1]), CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar11;
              local_8 = local_8 + 1;
              piVar11 = piVar11 + 1;
              STField<undefined2>(iVar3,0x6) = uVar6;
            }
            iVar10 = iVar10 + 200;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          param_1_after_write = ((int)param_1_after_write + 0xc9);
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
        uint param_1_after_write_2 = 0xffffff9c; /* compiler stack-slot lifetime split */
        do {
          iVar10 = -100;
          local_18 = 1;
          piVar11 = param_3 + local_8;
          do {
            if (param_2 <= local_8) break;
            if ((int)param_1_after_write_2 + local_c + iVar10 != 0) {
              psVar1 = (short *)*piVar11;
              *psVar1 = STField<short>(piVar5,0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar11 + 2) = STField<short>(piVar5,0x43) + (short)param_1_after_write_2;
              *(short *)(*piVar11 + 4) = (short)iVar10 + STField<short>(piVar5,0x45);
              puVar2 = (undefined2 *)*piVar11;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              /* ST_CALLSITE[0057B539]: CALL dword ptr [EDX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = STStructuralVirtualCall<undefined4>(piVar5, 0x10, CONCAT22(uVar9,STField<undefined2>(piVar5,0x41)), CONCAT22(uVar6,STField<undefined2>(piVar5,0x43)), CONCAT22(uVar9,STField<undefined2>(piVar5,0x45)), CONCAT22(uVar6,*puVar2), CONCAT22(uVar9,puVar2[1]), CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar11;
              local_8 = local_8 + 1;
              piVar11 = piVar11 + 1;
              STField<undefined2>(iVar3,0x6) = uVar6;
            }
            iVar10 = iVar10 + 200;
            local_18 = local_18 + -1;
          } while (-1 < local_18);
          param_1_after_write_2 = ((int)param_1_after_write_2 + 0xc9);
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

