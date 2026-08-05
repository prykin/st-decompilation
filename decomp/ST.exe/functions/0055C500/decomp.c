
void __thiscall FUN_0055c500(void *this,int param_1)

{
  *(undefined1 *)((int)this + 8) = 0;
  if (((*(char *)((int)this + 9) == '\0') && (param_1 != 0)) && (g_fSGS_0081174C != nullptr))
  {
    *(undefined4 *)((int)this + 0x1b) = 0x6150;
    *(int *)((int)this + 0x1f) = param_1;
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

