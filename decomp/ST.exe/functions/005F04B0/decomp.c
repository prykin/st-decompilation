
void __thiscall FUN_005f04b0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  piVar1 = param_1;
  iVar3 = FUN_006e62d0(PTR_00802a38,(int)param_1,(int *)&param_1);
  piVar2 = param_1;
  if (iVar3 != -4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (((iVar3 == 0x1b) || (iVar3 == 7)) || (iVar3 == 0x13)) {
      *(undefined1 *)((int)this + 0x24e) = 1;
      *(int *)((int)this + 0x2a3) = piVar2[9];
      *(undefined2 *)((int)this + 0x2ab) = *(undefined2 *)((int)piVar2 + 0x32);
      *(int **)((int)this + 0x2a7) = piVar1;
      iVar3 = thunk_FUN_00495ff0(*(short *)((int)this + 0x242),*(short *)((int)this + 0x244),
                                 *(short *)((int)this + 0x246),0,this);
      if (iVar3 == 0) {
        *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + -1;
      }
      *(undefined4 *)((int)this + 0x23a) = 4;
      if (piVar1 != *(int **)((int)this + 0x18)) {
        *(undefined1 *)((int)this + 0x24f) = 1;
      }
    }
  }
  return;
}

