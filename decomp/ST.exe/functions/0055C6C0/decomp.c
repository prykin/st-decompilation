
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C6D6 CMP ECX,0x2 classifies dword parameter loaded at 0055C6D3 | 0055C6DB CMP
   ECX,0x4 classifies dword parameter loaded at 0055C6D3 */

void __thiscall FUN_0055c6c0(void *this,int param_1)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    *(undefined4 *)((int)this + 0x1b) = 0x6152;
    *(int *)((int)this + 0x1f) = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_fSGS_0081174C->field_0000->field_0000)((int)this + 0xb);
  }
  return;
}

