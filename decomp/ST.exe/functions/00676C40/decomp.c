
void __cdecl FUN_00676c40(DArrayTy *param_1,undefined *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;

  uVar3 = param_1->count;
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar7 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar7 < uVar3) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar7) (runtime stride) */
          pvVar6 = (void *)(param_1->elementSize * uVar7 + (int)param_1->data);
        }
        else {
          pvVar6 = (void *)0x0;
        }
        uVar1 = uVar7 + 1;
        if (uVar1 < uVar3) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar1) (runtime stride) */
          pvVar4 = (void *)(param_1->elementSize * uVar1 + (int)param_1->data);
        }
        else {
          pvVar4 = (void *)0x0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)param_2)(pvVar4,pvVar6);
        if (0 < iVar5) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)param_1,uVar7,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->count;
        uVar7 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}

