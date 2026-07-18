
void __thiscall FUN_004fad60(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x4c);
  iVar1 = *(int *)((int)this + 0xa4);
  if (*(short *)((int)this + 0x23f) != 2) {
    uVar2 = param_1 & 0xffff;
    uVar4 = param_2 & 0xffff;
    if (((((iVar3 <= (int)uVar2) && ((int)uVar2 < *(int *)((int)this + 0x78) + iVar3)) &&
         (iVar1 <= (int)uVar4)) &&
        (((int)uVar4 < *(int *)((int)this + 0xd0) + iVar1 && (DAT_00808784 == 0)))) &&
       ((DAT_00808788 == 0 && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))))) {
      iVar3 = FUN_006e68c0(DAT_00807598,(uVar2 - iVar3) + -5,(uVar4 - iVar1) + -7,(int *)&param_1,
                           (int *)&param_2);
      if (iVar3 != 0) {
        *(undefined4 *)((int)this + 0x13c) = 1;
        thunk_FUN_004ab530((uint)DAT_00807349,param_1,param_2);
      }
    }
  }
  return;
}

