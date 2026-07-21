
void __thiscall
FUN_0052bc30(void *this,uint param_1,uint param_2,uint param_3,byte param_4,undefined1 param_5,
            int param_6)

{
  if (DAT_0080874e == '\x03') {
    if (param_1 == 0xffffffff) goto LAB_0052bc8f;
    if (0xf423e < param_1) {
      param_1 = 999999;
    }
    *(uint *)((int)this + 0x8a) = param_1;
  }
  else {
    if (param_1 == 0xffffffff) goto LAB_0052bc8f;
    if (0x1869e < param_1) {
      param_1 = 99999;
    }
    *(uint *)((int)this + 0x8a) = param_1;
  }
  if (param_6 != 0) {
    *(uint *)((int)this + 0x86) = param_1 + 1;
  }
LAB_0052bc8f:
  if (param_2 != 0xffffffff) {
    if (0xf423e < param_2) {
      param_2 = 999999;
    }
    *(uint *)((int)this + 0x92) = param_2;
    if (param_6 != 0) {
      *(uint *)((int)this + 0x8e) = param_2 + 1;
    }
  }
  if (param_3 != 0xffffffff) {
    if (0xf423e < param_3) {
      param_3 = 999999;
    }
    *(uint *)((int)this + 0x9a) = param_3;
    if (param_6 != 0) {
      *(uint *)((int)this + 0x96) = param_3 + 1;
    }
  }
  if (param_4 != 0xff) {
    if ((int)((-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x15) <= (int)(uint)param_4) {
      param_4 = (-(DAT_0080874e != '\x03') & 0xf9U) + 0x14;
    }
    *(byte *)((int)this + 0xa3) = param_4;
    *(undefined1 *)((int)this + 0xa5) = param_5;
  }
  if ((DAT_00802a44 != (int *)0x0) && (*(short *)((int)DAT_00802a44 + 0x172) == 1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*DAT_00802a44 + 0x20))();
  }
  return;
}

