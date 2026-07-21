
int __cdecl FUN_0067bc80(DArrayTy *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  void *pvVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  void *local_8;

  uVar5 = 0;
  sVar4 = 10000;
  uVar2 = param_1->count;
  local_8 = (void *)0x0;
  bVar6 = uVar2 != 0;
  if (0 < (int)uVar2) {
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar5) (runtime stride) */
      if ((((bVar6) &&
           (pvVar3 = (void *)(param_1->elementSize * uVar5 + (int)param_1->data),
           pvVar3 != (void *)0x0)) && ((*(uint *)((int)pvVar3 + 0x14) & param_2) != 0)) &&
         ((sVar1 = *(short *)((int)pvVar3 + 0x1a), sVar1 < sVar4 &&
          (sVar4 = sVar1, local_8 = pvVar3, sVar1 == 0)))) {
        return (int)pvVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return (int)local_8;
}

