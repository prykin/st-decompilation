
void __thiscall FUN_005b6730(void *this,uint param_1,char param_2,int param_3)

{
  if ((*(int *)((int)this + 0x18) != 0) && (param_1 == 3)) {
    *(undefined4 *)((int)this + 0x18) = 0;
    return;
  }
  if (param_1 == 4) {
    *(undefined4 *)((int)this + 0x18) = 1;
  }
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&g_sound,param_1,param_2,param_3,(uint *)0x0);
  }
  return;
}

