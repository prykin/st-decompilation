
undefined4 __thiscall FUN_006e5150(void *this,int param_1)

{
  if (*(int *)(param_1 + 0x10) == 4) {
    DAT_00856d74 = *(int *)(param_1 + 0x14);
    if ((DAT_00856d74 != 0) && (*(int *)((int)this + 0x24) != 0)) {
      FUN_006e4290(0xf,5,0xf,0);
      return 0;
    }
    FUN_006e4340(this,0xf,5,0xf,0);
  }
  else if (*(int *)(param_1 + 0x10) == 0xf) {
    *(undefined4 *)((int)this + 0x1c) = 1;
    return 0;
  }
  return 0;
}

