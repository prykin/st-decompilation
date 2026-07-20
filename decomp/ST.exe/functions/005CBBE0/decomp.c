
int __thiscall FUN_005cbbe0(void *this,AnonShape_005CBBE0_2D1CAA09 *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  UINT uID;
  void *pvVar3;
  
  iVar2 = FUN_006b0140(8000,HINSTANCE_00807618);
  if (param_1 != (AnonShape_005CBBE0_2D1CAA09 *)0x0) {
    switch(param_1->field_0x4) {
    case 1:
      if (((*(char *)((int)this + 0x1e26) != '\f') && (*(char *)((int)this + 0x1e26) != '\x10')) ||
         (uID = 0x1f5a, *(char *)param_1 == '\0')) {
        uID = 0x1f41;
      }
      iVar2 = FUN_006b0140(uID,HINSTANCE_00807618);
      return iVar2;
    case 2:
      iVar2 = FUN_006b0140(0x1f42,HINSTANCE_00807618);
      return iVar2;
    case 3:
      iVar2 = FUN_006b0140(0x1f46,HINSTANCE_00807618);
      return iVar2;
    case 4:
      pDVar1 = param_1->field_0050;
      if (((uint)(byte)param_1->field_0x5 < pDVar1->count) &&
         (pvVar3 = (void *)(pDVar1->elementSize * (uint)(byte)param_1->field_0x5 + (int)pDVar1->data
                           ), pvVar3 != (void *)0x0)) {
        return (int)pvVar3 + 0x40;
      }
      iVar2 = FUN_006b0140(10000,HINSTANCE_00807618);
    }
  }
  return iVar2;
}

