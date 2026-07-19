
uint * thunk_FUN_0065fa60(int param_1,int param_2,short *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  InternalExceptionFrame IStack_5c;
  uint uStack_18;
  int iStack_14;
  uint *puStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  puStack_10 = (uint *)0x0;
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  iVar1 = __setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      if (*(void **)(iStack_14 + 0x284) != (void *)0x0) {
        puStack_10 = thunk_FUN_0068e4f0(*(void **)(iStack_14 + 0x284),param_1);
      }
    }
    else if (param_2 == 1) {
      if (*(void **)(iStack_14 + 0x284) != (void *)0x0) {
        puStack_10 = thunk_FUN_0068e4f0(*(void **)(iStack_14 + 0x284),param_1);
      }
      if ((puStack_10 == (uint *)0x0) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
        puStack_10 = STAllPlayersC::GetTOBJList
                               (DAT_007fa174,*(char *)(iStack_14 + 0x24),param_1,0,-1);
      }
    }
    else if ((param_2 == 2) && (DAT_007fa174 != (STAllPlayersC *)0x0)) {
      puStack_10 = STAllPlayersC::GetTOBJList(DAT_007fa174,*(char *)(iStack_14 + 0x24),param_1,0,-1)
      ;
    }
  }
  puVar4 = puStack_10;
  g_currentExceptionFrame = IStack_5c.previous;
  if (puStack_10 != (uint *)0x0) {
    if (puStack_10[3] == 0) {
      FUN_006ae110((byte *)puStack_10);
      puStack_10 = (uint *)0x0;
    }
    puVar4 = puStack_10;
    if ((((puStack_10 != (uint *)0x0) && (param_3 != (short *)0x0)) && (0 < param_3[3])) &&
       ((0 < param_3[4] && (0 < param_3[5])))) {
      uStack_18 = puStack_10[3];
      while (uVar3 = uStack_18 - 1, -1 < (int)uVar3) {
        if (uVar3 < puVar4[3]) {
          puVar2 = (undefined4 *)(puVar4[2] * uVar3 + puVar4[7]);
        }
        else {
          puVar2 = (undefined4 *)0x0;
        }
        uStack_18 = uVar3;
        if ((void *)*puVar2 != (void *)0x0) {
          thunk_FUN_004162b0((void *)*puVar2,&sStack_6,&sStack_8,&sStack_a);
          if (((sStack_6 < *param_3) || (sStack_8 < param_3[1])) ||
             ((uVar3 = uStack_18, sStack_a < param_3[2] ||
              ((((int)*param_3 + (int)param_3[3] <= (int)sStack_6 ||
                ((int)param_3[1] + (int)param_3[4] <= (int)sStack_8)) ||
               ((int)param_3[2] + (int)param_3[5] <= (int)sStack_a)))))) {
            FUN_006b0c70((int)puVar4,uVar3);
            uStack_18 = uVar3;
          }
        }
      }
    }
  }
  return puVar4;
}

