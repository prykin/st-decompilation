
undefined4 __thiscall
thunk_FUN_005ff3a0(void *this,undefined2 *param_1,undefined2 *param_2,short *param_3)

{
  undefined4 in_EAX;
  int *this_00;
  int iVar1;
  
  this_00 = (int *)STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)this >> 8),*(undefined1 *)((int)this + 0x20a)),
                              CONCAT22((short)((uint)in_EAX >> 0x10),
                                       *(undefined2 *)((int)this + 0x224)),1);
  if (this_00 != (int *)0x0) {
    iVar1 = (**(code **)(*this_00 + 0xf8))();
    if (iVar1 != 0) {
      thunk_FUN_00416270(this_00,param_1,param_2,param_3);
      *param_3 = *param_3 + -0x1e;
      return 1;
    }
  }
  return 0;
}

