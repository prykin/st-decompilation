
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00619C70 -> 0061C910 @ 0061A76B; /STJumpMineC+0x93

   [STPrototypeApplier] Propagated return.
   Evidence: 0061C910 returns stored into /STJumpMineC+0x93 @ 0061A773

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA */

STJumpMineC_field_0093State __thiscall
FUN_0061c910(void *this,int param_1,STJumpMineC_field_0093State param_2,undefined4 param_3,
            undefined4 param_4,int param_5,int param_6,int param_7,int param_8)

{
  STJumpMineC_field_0093State SVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;

  iVar2 = param_7;
  SVar1 = param_2;
  local_8 = 0;
  if (param_1 == 1) {
    iVar3 = STJumpMineC::sub_0061B340
                      (this,(short)param_3,(short)param_4,param_5,param_6,param_7,param_8,&param_7);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x9f) = *(undefined4 *)((int)this + 0x40);
      *(undefined4 *)((int)this + 0xa3) = *(undefined4 *)((int)this + 0x44);
      *(int *)((int)this + 0xa7) = param_7;
      *(undefined4 *)((int)this + 0x34) = 0;
      return CASE_1;
    }
    *(int *)((int)this + 0x9f) = param_6;
    *(int *)((int)this + 0xa3) = iVar2;
    *(int *)((int)this + 0xa7) = param_7;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    if (*(int **)((int)this + 0x34) != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(**(int **)((int)this + 0x34) + 0xe0))
                        (*(undefined4 *)((int)this + 0x38),(byte *)((int)&param_2 + 2),
                         (int)&param_1 + 2,(int)&param_8 + 2,&local_8);
      if (iVar2 == 0) {
        *(int *)((int)this + 0x44) = (int)param_1._2_2_;
        *(int *)((int)this + 0xa3) = (int)param_1._2_2_;
        *(int *)((int)this + 0x40) = (int)(short)param_2._2_2_;
        *(int *)((int)this + 0x48) = param_8._2_2_ + 0x28;
        *(undefined4 *)((int)this + 0x3c) = local_8;
        *(int *)((int)this + 0x9f) = (int)(short)param_2._2_2_;
        *(int *)((int)this + 0xa7) = param_8._2_2_ + 0x28;
        iVar2 = STJumpMineC::LoadImagJMine(this,2);
        return CASE_6 - (iVar2 != 0);
      }
    }
    return CASE_6;
  }
  return SVar1;
}

