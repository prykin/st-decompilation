
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_005f6df0(void *param_1)

{
  void *this;
  
  this = (void *)((int)param_1 + 0x1d5);
  thunk_FUN_004ad3c0(this,(float)*(int *)((int)param_1 + 0x2c1) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)param_1 + 0x2c5) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)param_1 + 0x2c9) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
  thunk_FUN_00416240(param_1,*(undefined2 *)((int)param_1 + 0x2c1),
                     *(undefined2 *)((int)param_1 + 0x2c5),*(undefined2 *)((int)param_1 + 0x2c9));
  thunk_FUN_004ac610(this,'\x0e');
  thunk_FUN_005fa0b0((int)param_1);
  thunk_FUN_004ad460(this,0);
  return;
}

