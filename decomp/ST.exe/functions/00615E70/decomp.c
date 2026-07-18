
void __thiscall
FUN_00615e70(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_006acf0d(param_1,param_2,param_3,param_7,param_8,param_9);
  iVar3 = (iVar2 * param_4) / 10000 + param_1;
  iVar4 = (iVar2 * param_5) / 10000 + param_2;
  iVar5 = (iVar2 * param_6) / 10000 + param_3;
  iVar2 = FUN_006acf0d(iVar3,iVar4,iVar5,param_7,param_8,param_9);
  if (iVar2 == 0) {
    *(undefined2 *)((int)this + 0x26c) = 0;
    *(undefined2 *)((int)this + 0x26e) = 0;
    *(undefined2 *)((int)this + 0x270) = 0;
    *(undefined4 *)((int)this + 0x278) = 0;
    return;
  }
  sVar1 = (short)iVar3;
  *(short *)((int)this + 0x272) = sVar1;
  *(short *)((int)this + 0x26c) = (short)param_7 - sVar1;
  sVar1 = (short)iVar4;
  *(short *)((int)this + 0x274) = sVar1;
  *(short *)((int)this + 0x26e) = (short)param_8 - sVar1;
  sVar1 = (short)iVar5;
  *(short *)((int)this + 0x276) = sVar1;
  *(short *)((int)this + 0x270) = (short)param_9 - sVar1;
  *(int *)((int)this + 0x278) = iVar2;
  return;
}

