
void __thiscall FUN_0062f0d0(void *this,int param_1)

{
  int iVar1;
  STT3DSprC *this_00;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if ((iVar1 != 0) && (this_00 = *(STT3DSprC **)(iVar1 + 0x10), this_00 != (STT3DSprC *)0x0)) {
    thunk_FUN_004ac610(this_00,'\x0e');
    STT3DSprC::StartShow(this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined1 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x3d) = 1;
    FUN_006ea3e0(DAT_00807598,*(uint *)(this_00 + 0x18),-1);
  }
  return;
}

