#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0061B89C MOVSX EAX,word ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=4; incoming_stack_parameter_uses=56; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/short
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

undefined4 __thiscall
STJumpMineC::sub_0061B340
          (STJumpMineC *this,short param_1,short param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *pSVar4;
  int iVar5;
  int local_EAX_109;
  int iVar7;
  STJumpMineC_field_0093State SVar8;
  int local_EAX_1138;
  int iVar6;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  STJumpMineC_field_0093State SVar11;
  short sVar12;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  uint local_8;
  local_8 = 0;
  *param_7 = param_6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((-1 < in_stack_00000006) && (-1 < in_stack_0000000a)) {
    if (param_3 < 0) goto LAB_0061bb57;
    if (((_param_1 < g_worldGrid.sizeX) && (_param_2 < g_worldGrid.sizeY)) && (param_3 < 5)) {
      sVar12 = (short)param_3;

      local_EAX_109 = thunk_FUN_004961b0(param_1,param_2,sVar12);
      if (local_EAX_109 == 0) {
        local_10 = this->field_00A7 - this->field_00E3;
        if (((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
            ((g_worldGrid.sizeY <= param_2 || (sVar12 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar12 ||
            (pSVar4 = STGridAt3D(g_worldGrid, param_1, param_2, sVar12).objects[0],
            pSVar4 == nullptr)))) {
          ST3DSMAPContext::sub_006E3310
                    (g_sT3DSMAPContext_00807598,
                     (g_sT3DSMAPContext_00807598->field_0380 * param_4) / 0xc9,
                     (int *)((g_sT3DSMAPContext_00807598->field_0380 * param_5) / 0xc9),param_3,
                     &local_14);
          lVar10 = Library::MSVCRT::__ftol();
          iVar8 = (short)lVar10;
          iVar7 = param_3 + 1;
          iVar5 = local_14;
          if (local_14 <= iVar7) {
            iVar5 = iVar7;
          }
          if (local_10 < 0) {
            if (iVar8 < param_6) {
              return local_8;
            }
            if (((local_14 <= iVar7) && (iVar7 < 5)) &&

               (local_EAX_1138 = thunk_FUN_004961b0(param_1,param_2,sVar12 + 1), local_EAX_1138 == 0
               )) {
              return 3;
            }
            if (iVar5 * 200 < iVar8) {
              return 3;
            }
          }
          else {
            if (iVar8 <= param_6) {
              return local_8;
            }

            if ((iVar7 < 5) && (iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar12 + -1), iVar6 != 0)
               ) {
              *param_7 = param_3 * 200;
              return 1;
            }
          }
          *param_7 = iVar8;
          return 2;
        }
        if (0 < local_10) {
          iVar7 = this->field_00CF;
          iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          if (iVar7 == _param_1) {
            iVar7 = this->field_00D3;
            iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
            if (iVar7 == _param_2) {
              iVar7 = this->field_00D7;
              iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
              if (iVar7 == param_3) {
                return local_8;
              }
            }
          }
          iVar7 = param_3 * 0xc9 + 0x97;
          if (param_6 < iVar7) {
            return local_8;
          }
          *param_7 = iVar7;
          return 2;
        }
        if ((((pSVar4[1].vtable < (STWorldObjectVTable *)0x8) &&
             ((g_playSystem_00802A38 == nullptr ||
              (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)))) &&
            (pSVar4->value_20 == 1000)) &&
           /* ST_CALLSITE[0061B555]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
           ((iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(pSVar4), iVar7 != 0 &&
            /* ST_CALLSITE[0061B567]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
            (iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(pSVar4), iVar7 != 0)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = (byte)this->field_0051;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_c = CONCAT31(uStack_b,bVar1);
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar2));
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_0061b627:
              iVar7 = 0;
            }
            else {
              bVar3 = g_playerRelationMatrix[bVar1][bVar2];
              if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b627;
                iVar7 = 2;
              }
            }
            bVar9 = iVar7 < 0;
          }
          else {
            bVar9 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                    g_bulkInitializedRecords_008087C7[bVar1].field_0023;
          }
          if (bVar9) {
            /* ST_CALLSITE[0061B680]: CALL 0x00404516; direct=00404516 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::thunk_FUN_00601500; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STJumpMineC; source view only; no Ghidra override */
            iVar7 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::
                    thunk_FUN_00601500((RecoveredReceiver_00601500 *)&this->field_0x20,param_4,
                                       param_5,param_6,this->field_00DB,this->field_00DF,
                                       this->field_00E3,this->field_0051,DAT_007e66ac,
                                       this->field_0085,this->field_0089,0xb3,0,0);
            if ((iVar7 != 2) && (iVar7 != 3)) {
              return local_8;
            }
            SVar11 = this->field_0093;
            goto LAB_0061b6ac;
          }
        }
        iVar7 = param_3 * 0xc9 + 0x96;
        goto LAB_0061ba9b;
      }
      if (param_1 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeX <= param_1) {
        return local_8;
      }
      if (param_2 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeY <= param_2) {
        return local_8;
      }
      if (sVar12 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeZ <= sVar12) {
        return local_8;
      }
      pSVar4 = STGridAt3D(g_worldGrid, param_1, param_2, sVar12).objects[0];
      if (pSVar4 == nullptr) {
        return local_8;
      }
      if ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable) {
        return local_8;
      }
      if ((g_playSystem_00802A38 != nullptr) &&
         (7 < g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022)) {
        return local_8;
      }
      if (pSVar4->value_20 != 1000) {
        return local_8;
      }
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = (byte)this->field_0051;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar1));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_0061b993:
          iVar7 = 0;
        }
        else {
          bVar3 = g_playerRelationMatrix[bVar1][bVar2];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b993;
            iVar7 = 2;
          }
        }
        bVar9 = iVar7 < 0;
      }
      else {
        bVar9 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (bVar9) {
        /* ST_CALLSITE[0061BAC0]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
        iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(pSVar4);
        if (iVar7 == 0) {
          return local_8;
        }
        /* ST_CALLSITE[0061BAD2]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
        iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(pSVar4);
        if (iVar7 == 0) {
          return local_8;
        }

        iVar7 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::
                thunk_FUN_00601500((RecoveredReceiver_00601500 *)&this->field_0x20,param_4,param_5,
                                   param_6,this->field_00DB,this->field_00DF,this->field_00E3,
                                   this->field_0051,DAT_007e66ac,this->field_0085,this->field_0089,
                                   0xb3,0,0);
        if ((iVar7 != 2) && (iVar7 != 3)) {
          return local_8;
        }
        SVar11 = this->field_0093;
LAB_0061b6ac:
        /* ST_CALLSITE[0061B6AF]: CALL 0x004028e7; direct=004028E7 STJumpMineC::sub_0061C910 */
        SVar8 = sub_0061C910(this,iVar7,SVar11,_param_1,_param_2,param_3,param_4,param_5,param_6);
        this->field_0093 = SVar8;
        if (SVar8 != CASE_5) {
          return local_8;
        }
        this->field_00AF = 0x19;
        this->field_00C0 = 0xb;
        this->field_00B3 = 0x14;
        this->field_00BC = 0;
        this->field_00B7 = 0;
        this->field_00AB = 0;
        return 3;
      }
      if (this->field_00A7 != this->field_00E3 && -1 < this->field_00A7 - this->field_00E3) {
        iVar7 = this->field_00CF;
        iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
        if (iVar7 == _param_1) {
          iVar7 = this->field_00D3;
          iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          if (iVar7 == _param_2) {
            iVar7 = this->field_00D7;
            iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
            if (iVar7 == param_3) {
              return local_8;
            }
          }
        }
        iVar7 = param_3 * 0xc9 + 0x97;
        if (param_6 < iVar7) {
          return local_8;
        }
        *param_7 = iVar7;
        return 2;
      }
      iVar7 = param_3 * 0xc9 + 0x32;
LAB_0061ba9b:
      if (iVar7 < param_6) {
        return local_8;
      }
      *param_7 = iVar7;
      return 2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_0061bb57:
  *param_7 = 0;
  return 2;
}

