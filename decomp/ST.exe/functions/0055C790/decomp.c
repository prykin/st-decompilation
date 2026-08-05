
void __thiscall FUN_0055c790(void *this,undefined4 param_1)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    *(undefined4 *)((int)this + 0x1b) = 0x6154;
    *(undefined4 *)((int)this + 0x1f) = param_1;
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

