
void __thiscall FUN_00493110(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006e62d0(PTR_00802a38,(int)param_1,(int *)&param_1);
  if (iVar1 != -4) {
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    iVar1 = *(int *)((int)this + 0x6f7);
    if (((iVar1 == 7) || (iVar1 == 0x13)) || (iVar1 == 0x1b)) {
      if ((*(int *)((int)this + 0x7ca) == 0) &&
         (((iVar2 == 0xfd || (iVar2 == 0xfe)) ||
          ((((0 < iVar2 && ((iVar2 < 0x29 && (iVar2 != 7)))) && (iVar2 != 0x13)) && (iVar2 != 0x1b))
          )))) {
        *(int *)((int)this + 0x7ca) = param_1[6];
        FUN_006ea3e0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                     *(int *)((int)param_1 + 0x1ed));
      }
    }
    else if (((iVar2 == 7) || (iVar2 == 0x13)) || (iVar2 == 0x1b)) {
      *(undefined2 *)((int)this + 0x5a0) = *(undefined2 *)((int)this + 0x30);
      *(undefined4 *)((int)this + 0x45d) = 0x14;
      *(undefined4 *)((int)this + 0x7c2) = 1;
      iVar1 = param_1[6];
      *(undefined4 *)((int)this + 0x5a6) = 0;
      *(undefined4 *)((int)this + 0x76) = 0;
      *(int *)((int)this + 0x5a2) = iVar1;
      *(undefined4 *)((int)this + 0x5c4) = 7;
      (**(code **)(*(int *)this + 0xb4))();
      return;
    }
  }
  return;
}

