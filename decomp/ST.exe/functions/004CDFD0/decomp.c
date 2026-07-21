
undefined4 __thiscall FUN_004cdfd0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;

  iVar1 = thunk_FUN_004ae0b0((short)param_2,param_3,param_4,param_1,*(int *)((int)this + 0x24),
                             (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,*(int **)((int)this + 0x18));
  if (iVar1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004b0f20(*(int *)((int)this + 0x24),param_1,param_2,param_3,param_4,
                       (uint)*(ushort *)((int)this + 0x30),*(int *)((int)this + 0x5c0),(char *)0x0,
                       *(undefined4 *)((int)this + 0x18),100);
  }
  return 0;
}

