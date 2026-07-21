
void __thiscall FUN_0056a130(void *this,uint param_1,char param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame local_4c;
  void *local_8;

  if (*(int *)((int)this + 0xf8b) == 0) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_4 == (uint *)0x0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_4 = (uint *)FUN_0071a990(*(AnonShape_0071A990_7656000F **)((int)local_8 + 0xdf3),
                                     (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),-1,
                                     (undefined1 *)0x0);
    }
    iVar1 = param_3;
    if (param_2 == '\x01') {
      if (param_4 == (uint *)0x0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        iVar1 = 0xf;
      }
      uVar2 = 2;
    }
    else if (param_2 == '\x02') {
      if (param_4 == (uint *)0x0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        uVar2 = 9;
        iVar1 = 0xf;
      }
      else {
        uVar2 = 9;
      }
    }
    else {
      if (param_4 == (uint *)0x0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0x10;
        uVar2 = 0;
        iVar1 = 0x1f;
      }
      else {
        uVar2 = 0;
      }
    }
    FUN_006c1390(param_4,0,uVar2,DAT_0080730e,0,param_3,iVar1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

