
undefined4 __thiscall FUN_00660180(void *this,short *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_78;
  undefined4 local_34 [3];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  uint *local_1c;
  undefined4 local_18;
  short local_14;
  short sStack_12;
  short asStack_10 [2];
  void *local_c;
  uint *local_8;
  
  *(undefined4 *)((int)this + 0xa7) = 0;
  local_c = this;
  if (param_2 != '\x02') {
    iVar2 = 1;
    if (param_2 != '\x01') {
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      iVar2 = (uVar1 >> 0x10 & 1) + 1;
    }
    if (iVar2 != 2) {
      puVar5 = local_34;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_34[0] = 1;
      local_28 = *param_1;
      local_26 = param_1[1];
      local_24 = param_1[2];
      local_22 = param_1[3];
      local_20 = param_1[4];
      local_1e = param_1[5];
      if ((*(short *)((int)this + 0x7d) == -2) || (DAT_007fa174 == 0)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)this >> 8),
                                                    *(undefined1 *)((int)this + 0x24)),
                                           CONCAT22((short)((uint)param_1 >> 0x10),
                                                    *(short *)((int)this + 0x7d)));
      }
      if (piVar4 == (int *)0x0) {
        return 0xffffffff;
      }
      (**(code **)(*piVar4 + 8))(2,local_34);
      return 0;
    }
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_8 = (uint *)0x0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar2 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (local_8 != (uint *)0x0) {
      FUN_006ae110((byte *)local_8);
    }
    return 0xffffffff;
  }
  puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,10);
  local_14 = param_1[3] / 2 + *param_1;
  sStack_12 = param_1[4] / 2 + param_1[1];
  asStack_10[0] = param_1[5] / 2 + param_1[2];
  local_8 = puVar3;
  thunk_FUN_00675950(CONCAT22(sStack_12,local_14),CONCAT22(asStack_10[0],sStack_12),asStack_10[0],
                     &local_14,&sStack_12,asStack_10,0);
  uVar1 = Library::DKW::TBL::FUN_006ae1c0(puVar3,(undefined4 *)&local_14);
  local_18 = 1;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),*(short *)((int)local_c + 0x7d));
  local_1c = puVar3;
  if ((*(short *)((int)local_c + 0x7d) == -2) || (DAT_007fa174 == 0)) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(uVar1 >> 8),
                                                *(undefined1 *)((int)local_c + 0x24)),uVar1);
  }
  if (piVar4 == (int *)0x0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_ai_ai_flt_cpp_007d2b80,0x467);
  }
  else {
    (**(code **)(*piVar4 + 8))(6,&local_1c);
  }
  if (puVar3 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar3);
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

