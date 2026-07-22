
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061DFE0 @ 0061D28F */

void __fastcall FUN_0061dfe0(STLightC *param_1)

{
  uint *puVar1;
  uint uVar2;
  DArrayTy *pDVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  uint local_8;

  uVar2 = param_1->field_00AC * 0x41c64e6d + 0x3039;
  param_1->field_00AC = uVar2;
  pDVar3 = param_1->field_00A3;
  iVar4 = ((uVar2 >> 0x10) % 3 + 3) * 0x200 + DAT_008032d0;
  if (pDVar3 != (DArrayTy *)0x0) {
    local_8 = 0;
    if (0 < (int)pDVar3->count) {
      bVar6 = pDVar3->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, local_8) (runtime stride) */
        if ((bVar6) &&
           (pvVar5 = (void *)(pDVar3->elementSize * local_8 + (int)pDVar3->data),
           pvVar5 != (void *)0x0)) {
          puVar1 = (uint *)((int)pvVar5 + 0x26);
          FUN_006e88c0(PTR_00807598,(int *)puVar1,*(undefined4 *)((int)pvVar5 + 4),
                       *(undefined4 *)((int)pvVar5 + 8),*(undefined4 *)((int)pvVar5 + 0xc),
                       *(undefined4 *)((int)pvVar5 + 0x10),*(undefined4 *)((int)pvVar5 + 0x14),
                       *(undefined4 *)((int)pvVar5 + 0x18),*(undefined4 *)((int)pvVar5 + 0x1c),
                       *(undefined1 *)((int)pvVar5 + 0x20),*(undefined4 *)((int)pvVar5 + 0x21),iVar4
                       ,0xffffffff);
          if (*(char *)((int)pvVar5 + 0x2f) == '\0') {
            FUN_006eab60(PTR_00807598,*puVar1);
          }
          else {
            FUN_006eaaa0(PTR_00807598,*puVar1,0);
          }
        }
        pDVar3 = param_1->field_00A3;
        local_8 = local_8 + 1;
        bVar6 = local_8 < pDVar3->count;
      } while ((int)local_8 < (int)pDVar3->count);
    }
  }
  return;
}

