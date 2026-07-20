
uint * FUN_0065fa60(int param_1,int param_2,short *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *groupContent;
  InternalExceptionFrame local_5c;
  uint local_18;
  int local_14;
  uint *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_10 = (uint *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar1 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      if (*(void **)(local_14 + 0x284) != (void *)0x0) {
        local_10 = thunk_FUN_0068e4f0(*(void **)(local_14 + 0x284),param_1);
      }
    }
    else if (param_2 == 1) {
      if (*(void **)(local_14 + 0x284) != (void *)0x0) {
        local_10 = thunk_FUN_0068e4f0(*(void **)(local_14 + 0x284),param_1);
      }
      if ((local_10 == (uint *)0x0) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        local_10 = STAllPlayersC::GetTOBJList
                             (g_sTAllPlayers_007FA174,*(char *)(local_14 + 0x24),param_1,0,-1);
      }
    }
    else if ((param_2 == 2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      local_10 = STAllPlayersC::GetTOBJList
                           (g_sTAllPlayers_007FA174,*(char *)(local_14 + 0x24),param_1,0,-1);
    }
  }
  groupContent = local_10;
  g_currentExceptionFrame = local_5c.previous;
  if (local_10 != (uint *)0x0) {
    if (local_10[3] == 0) {
      FUN_006ae110((byte *)local_10);
      local_10 = (uint *)0x0;
    }
    groupContent = local_10;
    if ((((local_10 != (uint *)0x0) && (param_3 != (short *)0x0)) && (0 < param_3[3])) &&
       ((0 < param_3[4] && (0 < param_3[5])))) {
      local_18 = local_10[3];
      while (uVar3 = local_18 - 1, -1 < (int)uVar3) {
        if (uVar3 < groupContent[3]) {
          puVar2 = (undefined4 *)(groupContent[2] * uVar3 + groupContent[7]);
        }
        else {
          puVar2 = (undefined4 *)0x0;
        }
        local_18 = uVar3;
        if ((STFishC *)*puVar2 != (STFishC *)0x0) {
          STFishC::sub_004162B0((STFishC *)*puVar2,&local_6,&local_8,&local_a);
          if (((local_6 < *param_3) || (local_8 < param_3[1])) ||
             ((uVar3 = local_18, local_a < param_3[2] ||
              ((((int)*param_3 + (int)param_3[3] <= (int)local_6 ||
                ((int)param_3[1] + (int)param_3[4] <= (int)local_8)) ||
               ((int)param_3[2] + (int)param_3[5] <= (int)local_a)))))) {
            FUN_006b0c70((int)groupContent,uVar3);
            local_18 = uVar3;
          }
        }
      }
    }
  }
  return groupContent;
}

