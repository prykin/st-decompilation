
void __thiscall FUN_0063de20(void *this,int param_1)

{
  int iVar1;
  short sVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)this + 0x266);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10 = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                      (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                           (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = *(int *)((int)this + 0x26a);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_c = (short)(((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                          (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  local_8 = *(undefined4 *)((int)this + 0x18);
  thunk_FUN_00568dd0(&DAT_00807658,2,(char *)0x0,param_1,&local_10,0);
  return;
}

