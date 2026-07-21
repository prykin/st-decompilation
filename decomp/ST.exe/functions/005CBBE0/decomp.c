
int __thiscall FUN_005cbbe0(void *this,AnonShape_005CBBE0_2D1CAA09 *param_1)

{
  DArrayTy *pDVar1;
  int extraout_EAX;
  UINT resourceId;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  void *pvVar2;
  int extraout_EAX_03;
  int iVar3;
  
  LoadResourceString(8000,HINSTANCE_00807618);
  iVar3 = extraout_EAX;
  if (param_1 != (AnonShape_005CBBE0_2D1CAA09 *)0x0) {
    switch(param_1->field_0x4) {
    case 1:
      if (((*(char *)((int)this + 0x1e26) != '\f') && (*(char *)((int)this + 0x1e26) != '\x10')) ||
         (resourceId = 0x1f5a, *(char *)param_1 == '\0')) {
        resourceId = 0x1f41;
      }
      LoadResourceString(resourceId,HINSTANCE_00807618);
      return extraout_EAX_00;
    case 2:
      LoadResourceString(0x1f42,HINSTANCE_00807618);
      return extraout_EAX_01;
    case 3:
      LoadResourceString(0x1f46,HINSTANCE_00807618);
      return extraout_EAX_02;
    case 4:
      pDVar1 = param_1->field_0050;
      if (((uint)(byte)param_1->field_0x5 < pDVar1->count) &&
         (pvVar2 = (void *)(pDVar1->elementSize * (uint)(byte)param_1->field_0x5 + (int)pDVar1->data
                           ), pvVar2 != (void *)0x0)) {
        return (int)pvVar2 + 0x40;
      }
      LoadResourceString(10000,HINSTANCE_00807618);
      iVar3 = extraout_EAX_03;
    }
  }
  return iVar3;
}

