
void __thiscall FUN_00423320(void *this,undefined4 param_1)

{
  undefined1 local_24 [16];
  undefined4 local_14;

  if (*(undefined4 **)((int)this + 0x1c) != (undefined4 *)0x0) {
    local_14 = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)**(undefined4 **)((int)this + 0x1c))(local_24);
  }
  return;
}

