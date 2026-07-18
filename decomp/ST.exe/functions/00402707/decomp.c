
void __thiscall thunk_FUN_006404b0(void *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iVar2 = 0;
  if (DAT_0080874d == param_3) {
    if (*(uint *)((int)this + 0x245) < 2) {
      if (DAT_0080874e == '\x01') {
        iVar2 = 0xa1;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0xa2;
      }
      else if (DAT_0080874e == '\x03') {
        iVar2 = 0xa3;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (*(uint *)((int)this + 0x245) == 2) {
      if (DAT_0080874e == '\x01') {
        iVar2 = 0xa4;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0xa5;
      }
      else if (DAT_0080874e == '\x03') {
        iVar2 = 0xa6;
      }
    }
    sVar1 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      iStack_10 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iStack_10 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                              (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar1 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      iStack_c = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iStack_c = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    uStack_8 = *(undefined4 *)((int)this + 0x18);
    if (iVar2 != 0) {
      thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,iVar2,&iStack_10,0);
    }
  }
  return;
}

