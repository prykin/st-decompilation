
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall CGenerate::sub_006971B0(CGenerate *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_38;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d788;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_20 = 0;
  local_8 = 0;
  uVar4 = this->field_583B;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  if ((this->field_5853 != (DArrayTy *)0x0) && (&stack0x00000000 != (undefined1 *)0x50)) {
    puVar9 = (undefined4 *)&stack0xffffffb0;
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    dVar1 = this->field_5853->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_5853;
        if (uVar4 < pDVar2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar4) (runtime stride) */
          piVar3 = (int *)(pDVar2->elementSize * uVar4 + (int)pDVar2->data);
        }
        else {
          piVar3 = (int *)0x0;
        }
        if (piVar3 != (int *)0x0) {
          *(int *)(&stack0xffffffb0 + *piVar3 * 4) =
               *(int *)(&stack0xffffffb0 + *piVar3 * 4) + *(int *)((int)piVar3 + 0x11);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
    local_38 = -1;
    iVar6 = 0;
    iVar8 = 0;
    iVar5 = -1;
    if (0 < this->field_583B) {
      do {
        iVar5 = (*(int *)(&stack0xffffffb0 + iVar8 * 4) * 100) / (int)this->field_582F;
        if (iVar8 == 0) {
          uVar4 = iVar5 - this->field_5843;
          uVar7 = (int)uVar4 >> 0x1f;
          iVar6 = (uVar4 ^ uVar7) - uVar7;
          local_38 = iVar8;
        }
        else {
          uVar4 = iVar5 - this->field_5843;
          uVar7 = (int)uVar4 >> 0x1f;
          iVar5 = (uVar4 ^ uVar7) - uVar7;
          if (iVar5 < iVar6) {
            iVar6 = iVar5;
            local_38 = iVar8;
          }
        }
        iVar8 = iVar8 + 1;
        iVar5 = local_38;
      } while (iVar8 < this->field_583B);
    }
    if (-1 < iVar5) {
      local_20 = iVar5;
    }
  }
  ExceptionList = local_14;
  return local_20;
}

