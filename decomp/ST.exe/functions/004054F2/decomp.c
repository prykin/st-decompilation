
void __thiscall thunk_FUN_004fae90(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
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
                           &iStack_8);
      if (iVar3 != 0) {
        iStack_10 = iStack_8;
        uStack_14 = param_1;
        iVar3 = STAllPlayersC::GetActiveCenter
                          (DAT_007fa174,(undefined2 *)0x0,(undefined2 *)0x0,
                           (undefined2 *)((int)&param_2 + 2));
        if (-1 < iVar3) {
          iStack_c = (int)param_2._2_2_;
          if (iStack_c < 0) {
            iStack_c = 2;
          }
          thunk_FUN_0054edf0((undefined4 *)0x14,&uStack_14,0,0xffffffff);
        }
      }
    }
  }
  return;
}

