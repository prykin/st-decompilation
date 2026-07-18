
undefined4 __thiscall thunk_FUN_005fada0(void *this,int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x2e6) == 0) {
    STColl3C::CreateAddSpr(this);
  }
  else {
    thunk_FUN_005f9f70((int)this);
  }
  if (*(int *)((int)this + 0x2e6) != 0) {
    puVar4 = (undefined4 *)(*(int *)((int)this + 0x2e6) + 8);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    thunk_FUN_00416270(this,&sStack_6,&sStack_8,&sStack_a);
    if (param_3 == 1) {
      thunk_FUN_005fac40(this,0,1,param_1,(int)sStack_6,(int)sStack_8,(int)sStack_a);
    }
    else {
      *(int *)(*(int *)((int)this + 0x2e6) + 0x14) = (int)sStack_6;
      *(int *)(*(int *)((int)this + 0x2e6) + 0x18) = (int)sStack_8;
      *(int *)(*(int *)((int)this + 0x2e6) + 0x1c) = (int)sStack_a;
    }
    uVar3 = 1;
    if (*(char *)((int)this + 0x2b6) != '\0') {
      thunk_FUN_005faa10(param_3);
      uVar1 = *(uint *)(*(int *)((int)this + 0x2e6) + 4);
      if (-1 < (int)uVar1) {
        if (param_3 != 1) {
          param_2 = uVar1;
          uVar1 = thunk_FUN_004ad650((int)this + 0x1d5);
        }
        FUN_006ea460(*(void **)((int)this + 0x211),uVar1,param_2);
      }
    }
  }
  return uVar3;
}

