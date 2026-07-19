
void __cdecl
FUN_00540dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint *puVar5;
  void *unaff_EDI;
  int *piVar6;
  uint *puVar7;
  bool bVar8;
  uint local_100 [19];
  InternalExceptionFrame local_b4;
  int local_70 [5];
  uint *local_5c;
  uint local_50 [5];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_b4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b4;
  iVar2 = __setjmp3(local_b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_b4.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0xe7,0,iVar2,&DAT_007a4ccc,
                               s_SetAccelerator_007c7bbc);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Andrey_support_cpp_007c7b2c,0xe7);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_3c = param_2;
  local_1c = param_2;
  local_38 = param_3;
  local_18 = param_3;
  local_14 = param_8;
  local_34 = param_4;
  local_10 = param_10;
  local_50[0] = param_5 | 8;
  local_30 = param_9;
  local_50[2] = param_7;
  local_2c = param_11;
  piVar6 = local_70;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_c = param_12;
  local_5c = local_50;
  local_50[1] = param_6;
  local_70[4] = 0x11 - (uint)(param_1 != 0);
  local_70[2] = 1;
  local_70[3] = 3;
  FUN_006e3db0((int)local_70);
  if (param_1 != 0) {
    if (DAT_008026f0 == (uint *)0x0) {
      DAT_008026f0 = FUN_006ae290((uint *)0x0,10,0x4c,10);
    }
    FUN_006ae1c0(DAT_008026f0,local_50);
    g_currentExceptionFrame = local_b4.previous;
    return;
  }
  if (DAT_008026f0 != (uint *)0x0) {
    DAT_008026f0[1] = 0;
    uVar3 = FUN_006b1190((int)DAT_008026f0,local_100);
    if (-1 < (int)uVar3) {
      do {
        iVar2 = 0x13;
        bVar8 = true;
        puVar5 = local_100;
        puVar7 = local_50;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *puVar5 == *puVar7;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          FUN_006b0c70((int)DAT_008026f0,uVar3);
          if (DAT_008026f0[3] != 0) {
            g_currentExceptionFrame = local_b4.previous;
            return;
          }
          FUN_006ae110((byte *)DAT_008026f0);
          DAT_008026f0 = (uint *)0x0;
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
        uVar3 = FUN_006b1190((int)DAT_008026f0,local_100);
        if ((int)uVar3 < 0) {
          g_currentExceptionFrame = local_b4.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_b4.previous;
  return;
}

