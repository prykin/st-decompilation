
int __thiscall FUN_006e44e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  
  iVar2 = 0;
  *(undefined4 *)(*(int *)((int)this + 0x10) + 4) = 0;
  iVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)((int)this + 0x10),&local_10);
  while (((-1 < iVar1 && (iVar2 = local_c, *(int *)(local_c + 0x14) != param_1)) &&
         (iVar2 = FUN_006e4480((int)&local_10,param_1), iVar2 == 0))) {
    iVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)((int)this + 0x10),&local_10);
  }
  return iVar2;
}

