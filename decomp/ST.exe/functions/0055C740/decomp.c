
void __thiscall FUN_0055c740(void *this,int param_1)

{
  if ((((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) && (param_1 == 0))
     && (g_fSGS_0081174C != (FSGSTy *)0x0)) {
    *(undefined4 *)((int)this + 0x1b) = 0x6153;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_fSGS_0081174C->field_0000->field_0000)((int)this + 0xb);
  }
  return;
}

