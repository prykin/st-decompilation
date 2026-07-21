
undefined4 __thiscall
FUN_006255b0(void *this,int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;

  iVar1 = param_7;
  iVar2 = param_6;
  local_8 = 0;
  if (param_1 == 1) {
    iVar3 = thunk_FUN_00624140(this,param_3,param_4,param_5,param_6,param_7,param_8,&param_6,0);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x2c2) = *(undefined4 *)((int)this + 0x251);
      *(undefined4 *)((int)this + 0x2c6) = *(undefined4 *)((int)this + 0x255);
      *(int *)((int)this + 0x2ca) = param_6;
      return param_2;
    }
    *(int *)((int)this + 0x2c2) = iVar2;
    *(int *)((int)this + 0x2c6) = iVar1;
    *(int *)((int)this + 0x2ca) = param_6;
  }
  else if (((1 < param_1) && (param_1 < 4)) && (*(int **)((int)this + 0x245) != (int *)0x0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(**(int **)((int)this + 0x245) + 0xe0))
                      (*(undefined4 *)((int)this + 0x249),(int)&param_1 + 2,(int)&param_8 + 2,
                       (int)&param_7 + 2,&local_8);
    if (iVar2 == 0) {
      *(int *)((int)this + 0x255) = (int)param_8._2_2_;
      *(int *)((int)this + 0x2c6) = (int)param_8._2_2_;
      *(int *)((int)this + 0x251) = (int)param_1._2_2_;
      *(int *)((int)this + 0x259) = (int)param_7._2_2_;
      *(undefined4 *)((int)this + 0x24d) = local_8;
      *(int *)((int)this + 0x2c2) = (int)param_1._2_2_;
      *(int *)((int)this + 0x2ca) = (int)param_7._2_2_;
      thunk_FUN_00624000(this);
      STMineSetC::LoadImagMineSet(this,1);
      return param_2;
    }
  }
  return param_2;
}

