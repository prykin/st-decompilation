
void __thiscall FUN_0062f0d0(void *this,int param_1)

{
  int iVar1;
  STT3DSprC *this_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if ((iVar1 != 0) && (this_00 = *(STT3DSprC **)(iVar1 + 0x10), this_00 != (STT3DSprC *)0x0)) {
    thunk_FUN_004ac610(this_00,'\x0e');
    STT3DSprC::StartShow(this_00,0xe,g_playSystem_00802A38->field_00E4);
    *(undefined1 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x3d) = 1;
    FUN_006ea3e0(PTR_00807598,this_00->field_0018,-1);
  }
  return;
}

