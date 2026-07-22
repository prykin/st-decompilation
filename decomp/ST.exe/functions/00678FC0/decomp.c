
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiPlrClassTy::sub_00678FC0(AiPlrClassTy *this)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  DArrayTy *pDVar7;
  dword dVar8;
  uint uVar9;

  pDVar7 = this->field_0695;
  dVar8 = pDVar7->count;
  if (1 < (int)dVar8) {
    do {
      bVar2 = false;
      uVar9 = 0;
      if ((int)(dVar8 - 1) < 1) {
        return;
      }
      do {
        if (uVar9 < dVar8) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar9) (runtime stride) */
          piVar5 = (int *)(pDVar7->elementSize * uVar9 + (int)pDVar7->data);
        }
        else {
          piVar5 = (int *)0x0;
        }
        uVar1 = uVar9 + 1;
        if (uVar1 < dVar8) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar1) (runtime stride) */
          piVar3 = (int *)(pDVar7->elementSize * uVar1 + (int)pDVar7->data);
        }
        else {
          piVar3 = (int *)0x0;
        }
        if ((*piVar5 != 0) && (*piVar3 != 0)) {
          if ((pDVar7 == (DArrayTy *)0x0) || (((int)uVar1 < 0 || ((int)dVar8 <= (int)uVar1)))) {
LAB_00679056:
            iVar6 = 0;
          }
          else {
            if (uVar1 < dVar8) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar1) (runtime stride) */
              piVar5 = (int *)(pDVar7->elementSize * uVar1 + (int)pDVar7->data);
            }
            else {
              piVar5 = (int *)0x0;
            }
            if (piVar5[1] == 0) {
              iVar6 = *piVar5;
            }
            else {
              if (*piVar5 == 0) goto LAB_00679056;
              iVar6 = *piVar5 + 0x20;
            }
          }
          if (((pDVar7 == (DArrayTy *)0x0) || ((int)uVar9 < 0)) || ((int)dVar8 <= (int)uVar9)) {
LAB_00679087:
            iVar4 = 0;
          }
          else {
            if (uVar9 < dVar8) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar9) (runtime stride) */
              piVar5 = (int *)(pDVar7->elementSize * uVar9 + (int)pDVar7->data);
            }
            else {
              piVar5 = (int *)0x0;
            }
            iVar4 = *piVar5;
            if (piVar5[1] != 0) {
              if (iVar4 == 0) goto LAB_00679087;
              iVar4 = iVar4 + 0x20;
            }
          }
          if (*(short *)(iVar4 + 0x5c) < *(short *)(iVar6 + 0x5c)) {
            FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar7,uVar9,uVar1);
            bVar2 = true;
          }
        }
        pDVar7 = this->field_0695;
        dVar8 = pDVar7->count;
        uVar9 = uVar1;
      } while ((int)uVar1 < (int)(dVar8 - 1));
    } while (bVar2);
  }
  return;
}

