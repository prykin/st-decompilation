
undefined4 __thiscall FUN_0074c96c(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    pvVar1 = (void *)FUN_0072e530(0xe8);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0074cdc5(pvVar1,0,(int)this,&local_8,u_Input_007ee27c);
    }
    *(undefined4 **)((int)this + 0x8c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_0074c9fe;
  }
  if (*(int *)((int)this + 0x90) == 0) {
    pvVar1 = (void *)FUN_0072e530(0xb0);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0074cfc0(pvVar1,0,(int)this,&local_8,u_Output_007ee288);
    }
    *(undefined4 **)((int)this + 0x90) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      if (*(int **)((int)this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
  }
LAB_0074c9fe:
  if (param_1 == 0) {
    uVar3 = *(undefined4 *)((int)this + 0x8c);
  }
  else if (param_1 == 1) {
    uVar3 = *(undefined4 *)((int)this + 0x90);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

