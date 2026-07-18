
undefined4 __thiscall thunk_FUN_005f8650(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  *(int *)((int)this + 0x2c9) = param_3;
  *(int *)((int)this + 0x2c1) = param_1;
  *(int *)((int)this + 0x2c5) = param_2;
  sVar3 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    sVar3 = (((short)(param_1 / 0xc9) + sVar3) - (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar3 = ((short)(param_1 / 0xc9) + sVar3) - (short)((longlong)param_1 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)this + 0x47) = sVar3;
  sVar4 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    sVar4 = (((short)(param_2 / 0xc9) + sVar4) - (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar4 = ((short)(param_2 / 0xc9) + sVar4) - (short)((longlong)param_2 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)this + 0x49) = sVar4;
  sVar5 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    sVar5 = (((short)(param_3 / 200) + sVar5) - (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = ((short)(param_3 / 200) + sVar5) - (short)((longlong)param_3 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x4b) = sVar5;
  *(undefined2 *)((int)this + 0x41) = *(undefined2 *)((int)this + 0x2c1);
  *(undefined2 *)((int)this + 0x43) = *(undefined2 *)((int)this + 0x2c5);
  *(undefined2 *)((int)this + 0x45) = *(undefined2 *)((int)this + 0x2c9);
  *(short *)((int)this + 0x5b) = sVar3;
  *(short *)((int)this + 0x5d) = sVar4;
  *(short *)((int)this + 0x5f) = sVar5;
  uVar1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)((int)this + 0x2d9) = 0;
  *(undefined4 *)((int)this + 0x2d5) = uVar1;
  iVar2 = thunk_FUN_005faf70(this,param_1,param_2,param_3,
                             (int)(short)(*(short *)((int)this + 0x27d) * 0xc9 + 100),
                             (int)(short)(*(short *)((int)this + 0x281) * 0xc9 + 100),
                             (int)(short)(*(short *)((int)this + 0x285) * 200 + 100));
  *(int *)((int)this + 0x2bd) = iVar2;
  *(short *)((int)this + 0x6c) = (short)iVar2;
  return 1;
}

