
uint * __thiscall FUN_0065fa60(void *this,int param_1,short *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  DArrayTy *groupContent;
  short *in_stack_0000000c;
  InternalExceptionFrame local_5c;
  uint local_18;
  void *local_14;
  DArrayTy *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_10 = (DArrayTy *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pvVar1 = local_14;
  if (iVar2 == 0) {
    if (param_2 == (short *)0x0) {
      if (*(void **)((int)local_14 + 0x284) != (void *)0x0) {
        local_10 = (DArrayTy *)thunk_FUN_0068e4f0(*(void **)((int)local_14 + 0x284),param_1);
      }
    }
    else if (param_2 == (short *)0x1) {
      if (*(void **)((int)local_14 + 0x284) != (void *)0x0) {
        local_10 = (DArrayTy *)thunk_FUN_0068e4f0(*(void **)((int)local_14 + 0x284),param_1);
      }
      if ((local_10 == (DArrayTy *)0x0) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        local_10 = (DArrayTy *)
                   STAllPlayersC::GetTOBJList
                             (g_sTAllPlayers_007FA174,*(char *)((int)pvVar1 + 0x24),param_1,0,-1);
      }
    }
    else if ((param_2 == (short *)0x2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      local_10 = (DArrayTy *)
                 STAllPlayersC::GetTOBJList
                           (g_sTAllPlayers_007FA174,*(char *)((int)local_14 + 0x24),param_1,0,-1);
    }
  }
  groupContent = local_10;
  g_currentExceptionFrame = local_5c.previous;
  if (local_10 != (DArrayTy *)0x0) {
    if (local_10->count == 0) {
      FUN_006ae110((byte *)local_10);
      local_10 = (DArrayTy *)0x0;
    }
    groupContent = local_10;
    if ((((local_10 != (DArrayTy *)0x0) && (in_stack_0000000c != (short *)0x0)) &&
        (0 < in_stack_0000000c[3])) && ((0 < in_stack_0000000c[4] && (0 < in_stack_0000000c[5])))) {
      local_18 = local_10->count;
      while (uVar4 = local_18 - 1, -1 < (int)uVar4) {
        if (uVar4 < groupContent->count) {
          puVar3 = (undefined4 *)(groupContent->elementSize * uVar4 + (int)groupContent->data);
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
        local_18 = uVar4;
        if ((STFishC *)*puVar3 != (STFishC *)0x0) {
          STFishC::sub_004162B0((STFishC *)*puVar3,&local_6,&local_8,&local_a);
          if (((local_6 < *in_stack_0000000c) || (local_8 < in_stack_0000000c[1])) ||
             ((uVar4 = local_18, local_a < in_stack_0000000c[2] ||
              ((((int)*in_stack_0000000c + (int)in_stack_0000000c[3] <= (int)local_6 ||
                ((int)in_stack_0000000c[1] + (int)in_stack_0000000c[4] <= (int)local_8)) ||
               ((int)in_stack_0000000c[2] + (int)in_stack_0000000c[5] <= (int)local_a)))))) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)groupContent,uVar4);
            local_18 = uVar4;
          }
        }
      }
    }
  }
  return &groupContent->flags;
}

