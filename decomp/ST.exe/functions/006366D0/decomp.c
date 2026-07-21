
void __fastcall FUN_006366d0(AnonShape_006366D0_80B1100F *param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1->field_002C != (DArrayTy *)0x0) {
    dVar1 = param_1->field_002C->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = param_1->field_002C;
        if (((uVar5 < pDVar2->count) &&
            (pvVar4 = (void *)(pDVar2->elementSize * uVar5 + (int)pDVar2->data),
            pvVar4 != (void *)0x0)) && (uVar3 = *(uint *)((int)pvVar4 + 4), -1 < (int)uVar3)) {
          FUN_006e8ba0(PTR_00807598,uVar3);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
    DArrayDestroy(param_1->field_002C);
    param_1->field_002C = (DArrayTy *)0x0;
  }
  return;
}

