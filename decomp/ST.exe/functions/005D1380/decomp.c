
void __fastcall FUN_005d1380(AnonShape_005D1380_CEECF2C3 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;

  DAT_0080874d = 0xff;
  pDVar1 = param_1->field_1F84;
  if (pDVar1 != (DArrayTy *)0x0) {
    uVar2 = pDVar1->count;
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar4) (runtime stride) */
      while ((((!bVar5 ||
               (pvVar3 = (void *)(pDVar1->elementSize * uVar4 + (int)pDVar1->data),
               pvVar3 == (void *)0x0)) || (*(char *)((int)pvVar3 + 4) != '\x02')) ||
             (*(int *)((int)pvVar3 + 6) != DAT_0080877f))) {
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
      DAT_0080874d = *(undefined1 *)((int)pvVar3 + 2);
      DAT_0080874e = *(undefined1 *)((int)pvVar3 + 3);
    }
  }
  return;
}

