
void * __thiscall
FUN_0074857e(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00747b12(this,param_1,param_2,param_3,param_4,param_5,0);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0xa1) = 0;
  puVar2 = (undefined4 *)((int)this + 0xa8);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

