
int __thiscall FUN_005cbbe0(void *this,AnonShape_005CBBE0_2D1CAA09 *param_1)

{
  DArrayTy *pDVar1;
  char *pcVar2;
  UINT resourceId;
  void *pvVar3;

  pcVar2 = LoadResourceString(8000,HINSTANCE_00807618);
  if (param_1 != (AnonShape_005CBBE0_2D1CAA09 *)0x0) {
    switch(param_1->field_0x4) {
    case 1:
      if (((*(char *)((int)this + 0x1e26) != '\f') && (*(char *)((int)this + 0x1e26) != '\x10')) ||
         (resourceId = 0x1f5a, *(char *)param_1 == '\0')) {
        resourceId = 0x1f41;
      }
      pcVar2 = LoadResourceString(resourceId,HINSTANCE_00807618);
      return (int)pcVar2;
    case 2:
      pcVar2 = LoadResourceString(0x1f42,HINSTANCE_00807618);
      return (int)pcVar2;
    case 3:
      pcVar2 = LoadResourceString(0x1f46,HINSTANCE_00807618);
      return (int)pcVar2;
    case 4:
      pDVar1 = param_1->field_0050;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, (uint)(byte)param_1->field_0x5) (runtime stride) */
      if (((uint)(byte)param_1->field_0x5 < pDVar1->count) &&
         (pvVar3 = (void *)(pDVar1->elementSize * (uint)(byte)param_1->field_0x5 + (int)pDVar1->data
                           ), pvVar3 != (void *)0x0)) {
        return (int)pvVar3 + 0x40;
      }
      pcVar2 = LoadResourceString(10000,HINSTANCE_00807618);
    }
  }
  return (int)pcVar2;
}

