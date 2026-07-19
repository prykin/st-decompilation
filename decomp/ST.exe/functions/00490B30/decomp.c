
void __thiscall FUN_00490b30(void *this,uint param_1,short param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  
  uVar5 = param_1;
  cVar6 = (char)param_1;
  if ((*(char *)((int)this + 0x33a) == cVar6) && (*(short *)((int)this + 0x33f) == param_2)) {
    *(undefined2 *)((int)this + 0x33f) = (undefined2)param_3;
  }
  if (*(int *)((int)this + 0x45d) == 2) {
    sVar1 = *(short *)((int)this + 0x800);
    sVar2 = *(short *)((int)this + 0x804);
    sVar3 = *(short *)((int)this + 0x802);
    if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
        ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
      param_1 = 0;
    }
    else {
      param_1 = *(uint *)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                         (int)sVar1) * 8);
    }
    if ((((param_1 != 0) && (*(int *)(param_1 + 0x18) == *(int *)((int)this + 0x7f4))) ||
        (iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&param_1), iVar4 != -4
        )) && ((*(short *)(param_1 + 0x32) == param_2 && (*(int *)(param_1 + 0x24) == (int)cVar6))))
    {
      uVar5 = STAllPlayersC::GetObjPtr(DAT_007fa174,uVar5,param_3,CASE_1);
      *(undefined4 *)((int)this + 0x7f4) = *(undefined4 *)(uVar5 + 0x18);
    }
  }
  return;
}

