
undefined4 * __thiscall FUN_006e6100(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_006e51c0(this,param_1,param_2);
  *(SystemWithNamedObjClassTyVTable **)this = &SystemWithNamedObjClassTyVTable;
  *(undefined4 *)((int)this + 0x20) = 1;
  return this;
}

