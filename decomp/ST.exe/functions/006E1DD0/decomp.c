
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_006e1dd0(void *this,int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  float local_10;
  float local_c;
  float local_8;
  
  uVar2 = FUN_006e2d00(this,param_1,param_2);
  if (30000 < CONCAT22(extraout_var,uVar2)) {
    return 0;
  }
  Library::Ourlib::STREND::FUN_006e29d0(this,&local_10,param_1,param_2,CONCAT22(extraout_var,uVar2))
  ;
  dVar1 = *(double *)((int)this + 200) * _DAT_0079b168;
  if ((((local_10 < _DAT_0079034c) ||
       ((double)(int)**(short **)((int)this + 0x280) * *(double *)((int)this + 200) - dVar1 <=
        (double)local_10)) || (local_c < _DAT_0079034c)) ||
     ((double)(int)(*(short **)((int)this + 0x280))[1] * *(double *)((int)this + 200) - dVar1 <=
      (double)local_c)) {
    local_10 = -(float)*(double *)((int)this + 200);
    local_8 = -(float)*(double *)((int)this + 0xd0);
    uVar3 = 0;
    local_c = local_10;
  }
  else {
    uVar3 = 1;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_10;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = local_c;
  }
  if (param_5 == (float *)0x0) {
    return uVar3;
  }
  *param_5 = local_8;
  return uVar3;
}

