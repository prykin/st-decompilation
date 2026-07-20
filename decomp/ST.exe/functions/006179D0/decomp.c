
void __fastcall FUN_006179d0(AnonShape_006179D0_BD0E52D0 *param_1)

{
  void *pvVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  bool bVar4;
  
  pDVar2 = param_1->field_005E;
  if (pDVar2 != (DArrayTy *)0x0) {
    uVar3 = 0;
    if (0 < (int)pDVar2->count) {
      bVar4 = pDVar2->count != 0;
      do {
        if ((bVar4) &&
           (pvVar1 = (void *)(pDVar2->elementSize * uVar3 + (int)pDVar2->data),
           pvVar1 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar1 + 0x18) = 0;
        }
        pDVar2 = param_1->field_005E;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < pDVar2->count;
      } while ((int)uVar3 < (int)pDVar2->count);
    }
  }
  return;
}

