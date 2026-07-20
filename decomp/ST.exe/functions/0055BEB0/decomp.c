
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C180 -> 0055BEB0 @ 0055C1FD | 0055C290 -> 0055BEB0 @ 0055C2BA | 005A4350 ->
   0055BEB0 @ 005A6806 */

void __thiscall FUN_0055beb0(void *this,DWORD lastError)

{
  int iVar1;
  
  iVar1 = CFsgsConnection::IsInitialized(this);
  if (((iVar1 != 0) && (*(undefined1 *)((int)this + 8) = 0, *(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != (FSGSTy *)0x0)) {
    *(undefined4 *)((int)this + 0x1b) = 0x614f;
    *(DWORD *)((int)this + 0x1f) = lastError;
    (*(code *)g_fSGS_0081174C->field_0000->field_0000)((int)this + 0xb);
  }
  return;
}

