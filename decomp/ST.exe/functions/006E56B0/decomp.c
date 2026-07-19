
void __thiscall FUN_006e56b0(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 *local_8;
  
  uVar2 = param_1;
  local_8 = (undefined4 *)0x0;
  iVar3 = FUN_006e5360(this,param_1,(int *)&param_1,&local_8);
  if (iVar3 == 0) {
    local_18 = 3;
    (**(code **)*local_8)(local_28);
  }
  iVar3 = FUN_006e5360(this,uVar2,(int *)&param_1,&local_8);
  if (iVar3 == 0) {
    FUN_006b0c70(*(int *)((int)this + 0x10),param_1);
    AppClassTy::DeleteObject(*(AppClassTy **)((int)this + 0x18),uVar2);
    for (puVar1 = *(undefined4 **)((int)this + 0xc); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      uVar2 = puVar1[1];
      if ((param_1 <= uVar2) && (uVar2 != 0)) {
        puVar1[1] = uVar2 - 1;
      }
    }
  }
  return;
}

