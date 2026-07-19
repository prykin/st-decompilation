
void __cdecl FUN_00637c50(uint param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2;
  if (param_2 == 0) {
    pcVar2 = s_mstarB_007d1c50;
  }
  else {
    pcVar2 = s_GrstarB_007d1c58;
  }
  puVar1 = mfRLoad(DAT_00806774,CASE_1D,(byte *)pcVar2,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (DAT_00807598 != (void *)0x0)) {
    if (uVar4 == 0) {
      uVar4 = *(uint *)((int)puVar1 + 0xd);
      uVar3 = *(uint *)((int)puVar1 + 9);
      uVar6 = 0x45;
      uVar5 = 0x5a;
    }
    else {
      uVar4 = *(uint *)((int)puVar1 + 0xd);
      uVar3 = *(uint *)((int)puVar1 + 9);
      uVar6 = 100;
      uVar5 = 0x78;
    }
    FUN_006e8660(DAT_00807598,(int *)&param_2,1,0,uVar3,uVar4,uVar5,uVar6,0);
    FUN_006e98e0(DAT_00807598,param_2,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea270(DAT_00807598,param_2,0,0);
    FUN_006ea050(DAT_00807598,param_2,2,param_1,param_3);
    FUN_006eaaa0(DAT_00807598,param_2,0);
  }
  return;
}

