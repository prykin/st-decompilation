
void __thiscall thunk_FUN_00617560(void *this,int param_1)

{
  short sVar1;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  sVar1 = *(short *)((int)this + 0x25a);
  if (sVar1 < 0) {
    iStack_10 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                       (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_10 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)((int)this + 0x25c);
  if (sVar1 < 0) {
    iStack_c = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                      (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_c = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                           (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  uStack_8 = *(undefined4 *)((int)this + 0x18);
  thunk_FUN_00568dd0(&DAT_00807658,3,(char *)0x0,param_1,&iStack_10,0);
  return;
}

