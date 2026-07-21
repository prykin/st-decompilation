
void __thiscall FUN_0055c790(void *this,undefined4 param_1)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != (FSGSTy *)0x0)) {
    *(undefined4 *)((int)this + 0x1b) = 0x6154;
    *(undefined4 *)((int)this + 0x1f) = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_fSGS_0081174C->field_0000->field_0000)((int)this + 0xb);
  }
  return;
}

