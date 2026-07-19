
void __thiscall FUN_00422e20(void *this,byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar3;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX_02;
  int iVar5;
  undefined8 uVar6;
  Global_sub_0043FC50_param_1Enum GVar7;
  
  uVar6 = (**(code **)(*(int *)this + 4))();
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = extraout_ECX;
  if (((*(int *)((int)this + 0x20) != 0x14) ||
      (iVar1 = thunk_FUN_0045ff10((int)uVar6), uVar3 = extraout_ECX_00, uVar4 = extraout_EDX,
      iVar1 != 0x14)) || (*(int *)((int)uVar6 + 0x5c0) != 3)) {
    if (((param_1 & 1) != 0) && ((*(byte *)((int)this + 0x1d1) & 1) == 0)) {
      thunk_FUN_0041c5a0(this);
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 1;
      uVar3 = extraout_ECX_01;
      uVar4 = extraout_EDX_00;
    }
    if (((param_1 & 2) != 0) && ((*(uint *)((int)this + 0x1d1) & 2) == 0)) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 2;
      iVar1 = *(int *)((int)this + 0x20);
      if (iVar1 == 0x14) {
        iVar1 = 0;
        uVar2 = 0;
        do {
          uVar2 = thunk_FUN_0042c300(CONCAT31((int3)((uint)uVar2 >> 8),DAT_0080874d),0,iVar1,
                                     CONCAT31((int3)((uint)uVar4 >> 8),
                                              *(undefined1 *)((int)this + 0x24)),
                                     CONCAT22((short)((uint)uVar3 >> 0x10),
                                              *(undefined2 *)((int)this + 0x32)));
          iVar1 = iVar1 + 1;
          uVar3 = extraout_ECX_02;
          uVar4 = extraout_EDX_01;
        } while (iVar1 < 5);
      }
      else {
        iVar5 = 0;
        do {
          iVar1 = thunk_FUN_0042c300(CONCAT31((int3)((uint)iVar1 >> 8),DAT_0080874d),1,iVar5,
                                     CONCAT31((int3)((uint)uVar4 >> 8),
                                              *(undefined1 *)((int)this + 0x24)),
                                     CONCAT22((short)((uint)uVar3 >> 0x10),
                                              *(undefined2 *)((int)this + 0x32)));
          iVar5 = iVar5 + 1;
          uVar3 = extraout_ECX_03;
          uVar4 = extraout_EDX_02;
        } while (iVar5 < 5);
      }
      STAllPlayersC::DelObjFromSaveTmps
                (DAT_007fa174,*(int *)((int)this + 0x20),*(char *)((int)this + 0x24),
                 *(short *)((int)this + 0x32));
    }
    if ((((param_1 & 4) != 0) && ((*(uint *)((int)this + 0x1d1) & 4) == 0)) &&
       (*(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 4,
       *(int *)((int)this + 0x21d) == 1)) {
      if (*(int *)((int)this + 0x20) == 0x14) {
        thunk_FUN_0043fc50(CASE_1,0);
        GVar7 = CASE_2;
      }
      else {
        thunk_FUN_0043fc50(CASE_4,0);
        GVar7 = CASE_5;
      }
      thunk_FUN_0043fc50(GVar7,0);
    }
    if (((param_1 & 8) != 0) && ((*(uint *)((int)this + 0x1d1) & 8) == 0)) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 8;
    }
    if (((param_1 & 0x10) != 0) && ((*(uint *)((int)this + 0x1d1) & 0x10) == 0)) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 0x10;
    }
  }
  return;
}

