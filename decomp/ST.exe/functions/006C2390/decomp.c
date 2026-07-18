
void FUN_006c2390(uint *param_1)

{
  uint local_8;
  
  if (param_1 != (uint *)0x0) {
    if ((-1 < *(int *)((int)param_1 + 0x46)) &&
       (FUN_006c1f00(*(int *)((int)param_1 + 0x46),&local_8,(uint *)0x0), local_8 != 0)) {
      FUN_006c1ba0(*(int *)((int)param_1 + 0x46));
    }
    if ((*param_1 & 0x8000) != 0) {
      FUN_006d46a0(*(undefined4 **)((int)param_1 + 0x42),0);
    }
    FUN_006ab060(&param_1);
  }
  return;
}

