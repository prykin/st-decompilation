#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=004842C6 MOVSX EDX,word ptr [EBP + 0x8] | 00484301
   MOVSX EAX,word ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/short
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

undefined4 __thiscall
STBoatC::sub_00484020(STBoatC *this,short param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;

  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  byte *puVar12;
  int iVar13;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  short sStack_56;
  undefined2 uStack_52;
  uint local_50 [2];
  uint local_48 [2];
  int local_40;
  int local_3c;
  uint local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ushort local_20;
  STWorldObject *local_1c;
  short local_18 [2];
  short local_14 [2];
  STWorldObject *local_10;
  undefined *local_c;
  int local_8;

  local_38 = 0;
  if (_param_1 == 6) {
    local_8 = 0x2c;
    local_c = &DAT_007a9538;
  }
  else if (_param_1 == 7) {
    local_8 = 0x2c;
    local_c = &DAT_007a9640;
  }
  else if (_param_1 == 8) {
    local_8 = 0x98;
    local_c = &DAT_007a9748;
  }
  else {
    local_8 = -1;
    local_c = nullptr;
  }
  sVar3 = this->field_0800;
  sVar4 = this->field_0802;
  _param_1 = STReplaceLowWord((uint32_t)(this), (uint16_t)(sVar4));
  sVar1 = this->field_0804;
  if (((((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
        ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
      (local_10 = STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0], local_10 == nullptr)) &&
     ((((sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
       ((sVar4 < 0 ||
        (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
      (local_10 = STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[1], local_10 == nullptr)))) {
    return 0;
  }
  thunk_FUN_00416270(local_10,(uint *)local_14,local_18,&param_1);
  local_30 = 0;
  if (0 < local_8) {
    local_34 = (short *)(local_c + 2);
    do {
      sVar3 = local_34[1] + this->field_004B;
      *param_4 = sVar3;
      if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeZ + -1)) {
        sVar3 = this->field_0049 + *local_34;
        *param_3 = sVar3;
        if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeY + -1)) {
          sVar4 = local_34[-1] + this->field_0047;
          *param_2 = sVar4;
          if (-1 < sVar4) {
            local_28 = (int)g_worldGrid.sizeX;
            local_2c = (int)sVar4;
            if (local_2c <= local_28 + -1) {
              sVar1 = *param_3;
              sVar2 = *param_4;
              if ((-1 < STGridAt3D(g_pathingGrid, local_2c, sVar1, sVar2)) &&
                 ((((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                   ((sVar1 < 0 ||
                    (((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2))))
                   )) || (g_worldGrid.cells
                          [(int)sVar2 * (int)g_worldGrid.planeStride + sVar1 * local_28 + (int)sVar4
                          ].objects[0] == nullptr)))) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar13 = CONCAT22(sVar3 >> 0xf,sVar4) * 0xc9 + 100;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = (undefined *)
                          (CONCAT22((short)((uint)(local_28 + -1) >> 0x10),sVar1) * 0xc9 + 100);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar10 = CONCAT22(sVar4 >> 0xf,sVar2) * 200 + 100;
                local_40 = iVar13;
                local_3c = iVar10;

                iVar6 = FUN_006acf0d((short)iVar13,(short)local_c,(short)iVar10,
                                     (int)local_14[0],(int)local_18[0],(int)param_1);
                if ((iVar6 <= this->field_0814) &&
                   ((iVar6 < 1 ||
                    (uVar7 = (int)param_1 - (short)iVar10, uVar11 = (int)uVar7 >> 0x1f,
                    (int)(((uVar7 ^ uVar11) - uVar11) * 10) / iVar6 < 4)))) {
                  /* ST_CALLSITE[00484336]: CALL dword ptr [EAX + 0x10] */
                  uVar5 = (*this->vtable->vfunc_10)
                                    ((short)iVar13,(short)local_c,iVar10,local_14[0],local_18[0],
                                     _param_1);
                  local_20 = uVar5;
                  local_2c = 0;
                  if (this->field_02B2 == '\0') {
                    return 1;
                  }
                  puVar12 = &this->field_0x2a8;
                  do {

                    piVar8 = thunk_FUN_0041dc40(local_48,(short)*(undefined4 *)(puVar12 + -2),
                                                *(ushort *)(puVar12 + 2),(short)local_20);
                    sStack_56 = (short)((uint)*piVar8 >> 0x10);
                    local_28 = *piVar8 + iVar13;
                    sVar3 = (short)local_c - sStack_56;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_24 = CONCAT22(uStack_52,(short)piVar8[1]) + local_3c;

                    puVar9 = thunk_FUN_0041dc40(local_50,0,0,(short)local_20);
                    sStack_56 = (short)((uint)*puVar9 >> 0x10);
                    sVar4 = local_14[0] + (short)*puVar9;
                    sStack_56 = local_18[0] - sStack_56;
                    if (this->field_0736 == 0) {
                      /* ST_CALLSITE[0048440F]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                      iVar10 = STSprGameObjC::CheckRay
                                         ((STSprGameObjC *)this,(short)local_28,sVar3,
                                          (short)local_24,sVar4,sStack_56,(short)_param_1,
                                          this->field_079A,(int *)&local_1c,0);
                      if ((iVar10 == 0) && (local_1c != local_10)) break;
                    }
                    else {
                      /* ST_CALLSITE[00484442]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                      iVar10 = STSprGameObjC::CheckRay
                                         ((STSprGameObjC *)this,(short)local_28,sVar3,
                                          (short)local_24,sVar4,sStack_56,(short)_param_1,
                                          this->field_079A,(int *)&local_1c,1);
                      if ((iVar10 == 0) && (local_1c != local_10)) break;
                    }
                    local_2c = local_2c + 1;
                    puVar12 = puVar12 + 6;
                    iVar13 = local_40;
                    if ((int)(uint)(byte)this->field_02B2 <= local_2c) {
                      return 1;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      local_30 = local_30 + 1;
      local_34 = local_34 + 3;
    } while (local_30 < local_8);
  }
  return local_38;
}

