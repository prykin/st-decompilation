
void __thiscall thunk_FUN_005802a0(void *this,int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  STResourceC::SetResource(this,param_1,param_2);
  if (*(int *)((int)this + 0x25d) == 1) {
    sVar1 = *(short *)((int)this + 0x245);
    sVar2 = *(short *)((int)this + 0x24d);
    sVar3 = *(short *)((int)this + 0x249);
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1)
                      * 8);
    }
    if (*(int *)(iVar4 + 0x18) == *(int *)((int)this + 0x269)) {
      thunk_FUN_004e0250(iVar4);
    }
  }
  return;
}

