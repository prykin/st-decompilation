
void __thiscall FUN_00422ff0(void *this,byte param_1)

{
  STGameObjC *objPtr;
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  objPtr = (STGameObjC *)(**(code **)(*(int *)this + 4))();
  if (((*(int *)((int)this + 0x20) == 0x14) && (iVar1 = thunk_FUN_0045ff10(objPtr), iVar1 == 0x14))
     && (objPtr->field_05C0 == 3)) {
    return;
  }
  if (((param_1 & 1) != 0) && ((*(uint *)((int)this + 0x1d1) & 1) != 0)) {
    *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) & 0xfffffffe;
    TLOEmbryoTy::sub_0041C3F0(this,*(undefined **)((int)this + 0x101));
  }
  if (((param_1 & 2) != 0) && ((*(uint *)((int)this + 0x1d1) & 2) != 0)) {
    *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) & 0xfffffffd;
  }
  if ((param_1 & 4) != 0) {
    if ((*(uint *)((int)this + 0x1d1) & 4) != 0) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) & 0xfffffffb;
    }
    if (*(int *)((int)this + 0x21d) == 1) {
      if (*(int *)((int)this + 0x20) == 0x14) {
        thunk_FUN_0041aee0();
      }
      if ((*(int *)((int)this + 0x20) == 1000) || (*(int *)((int)this + 0x20) == 0x3e9)) {
        thunk_FUN_0041af10();
      }
    }
  }
  if (((param_1 & 8) != 0) && ((*(uint *)((int)this + 0x1d1) & 8) != 0)) {
    *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((*(uint *)((int)this + 0x1d1) & 0x10) != 0)) {
    *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) & 0xffffffef;
  }
  return;
}

