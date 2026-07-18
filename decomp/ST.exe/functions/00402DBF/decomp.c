
void __cdecl
thunk_FUN_00540dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                  ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
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
  uint auStack_100 [19];
  undefined4 uStack_b4;
  undefined4 auStack_b0 [16];
  int aiStack_70 [5];
  uint *puStack_5c;
  uint auStack_50 [5];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_b4 = DAT_00858df8;
  DAT_00858df8 = &uStack_b4;
  iVar2 = __setjmp3(auStack_b0,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_b4;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_support_cpp_007c7b2c,0xe7,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7c7b2c,0xe7);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = auStack_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uStack_3c = param_2;
  uStack_1c = param_2;
  uStack_38 = param_3;
  uStack_18 = param_3;
  uStack_14 = param_8;
  uStack_34 = param_4;
  uStack_10 = param_10;
  auStack_50[0] = param_5 | 8;
  uStack_30 = param_9;
  auStack_50[2] = param_7;
  uStack_2c = param_11;
  piVar6 = aiStack_70;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  uStack_c = param_12;
  puStack_5c = auStack_50;
  auStack_50[1] = param_6;
  aiStack_70[4] = 0x11 - (uint)(param_1 != 0);
  aiStack_70[2] = 1;
  aiStack_70[3] = 3;
  FUN_006e3db0((int)aiStack_70);
  if (param_1 != 0) {
    if (DAT_008026f0 == (uint *)0x0) {
      DAT_008026f0 = FUN_006ae290((uint *)0x0,10,0x4c,10);
    }
    FUN_006ae1c0(DAT_008026f0,auStack_50);
    DAT_00858df8 = (undefined4 *)uStack_b4;
    return;
  }
  if (DAT_008026f0 != (uint *)0x0) {
    DAT_008026f0[1] = 0;
    uVar3 = FUN_006b1190((int)DAT_008026f0,auStack_100);
    if (-1 < (int)uVar3) {
      do {
        iVar2 = 0x13;
        bVar8 = true;
        puVar5 = auStack_100;
        puVar7 = auStack_50;
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
            DAT_00858df8 = (undefined4 *)uStack_b4;
            return;
          }
          FUN_006ae110((byte *)DAT_008026f0);
          DAT_008026f0 = (uint *)0x0;
          DAT_00858df8 = (undefined4 *)uStack_b4;
          return;
        }
        uVar3 = FUN_006b1190((int)DAT_008026f0,auStack_100);
        if ((int)uVar3 < 0) {
          DAT_00858df8 = (undefined4 *)uStack_b4;
          return;
        }
      } while( true );
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_b4;
  return;
}

