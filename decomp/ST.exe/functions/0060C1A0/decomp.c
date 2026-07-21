
int __thiscall STFieldC::FUN_0060c1a0(STFieldC *this,undefined4 *param_1)

{
  int iVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;

  iVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (this == (STFieldC *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)&this->field_0x1d5;
    }
    puVar7 = param_1;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
    *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar7 + 2);
    iVar1 = 0x83;
    if (this->field_0234 == (DArrayTy *)0x0) {
      piVar4 = (int *)((int)param_1 + 0x83);
    }
    else {
      pDVar2 = (DArrayTy *)FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x87));
      this->field_0234 = pDVar2;
      if ((this->field_0225 != '\0') || (pDVar2 != (DArrayTy *)0x0)) {
        uVar6 = 0;
        if (0 < (int)pDVar2->count) {
          bVar9 = pDVar2->count != 0;
          do {
            if (bVar9) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar6) (runtime stride) */
              pvVar3 = (void *)(pDVar2->elementSize * uVar6 + (int)pDVar2->data);
            }
            else {
              pvVar3 = (void *)0x0;
            }
            *(undefined4 *)((int)pvVar3 + 0x3c) = 0xffffffff;
            pDVar2 = this->field_0234;
            uVar6 = uVar6 + 1;
            bVar9 = uVar6 < pDVar2->count;
          } while ((int)uVar6 < (int)pDVar2->count);
        }
        if (this->field_0225 != '\0') {
          thunk_FUN_00609cd0(this);
        }
      }
      iVar1 = 0x10a;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar4 = (int *)((int)param_1 + *(int *)((int)param_1 + 0x83) + 0x8b);
    }
    if ((this->field_023C != 0) && (this->field_0244 != 0)) {
      iVar5 = thunk_FUN_0060d660(this,piVar4);
      iVar1 = iVar1 + iVar5;
    }
  }
  return iVar1;
}

