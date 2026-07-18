
undefined4 FUN_006c23f0(short *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 == 1) {
    lVar1 = __allmul(*(uint *)(param_1 + 9),0,1000,0);
    uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),*(uint *)(param_1 + 4),0);
    return (int)uVar2;
  }
  lVar1 = __allmul(*(uint *)(param_1 + 0xd),(int)*(uint *)(param_1 + 0xd) >> 0x1f,1000,0);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),*(uint *)(param_1 + 2),0);
  return (int)uVar2;
}

