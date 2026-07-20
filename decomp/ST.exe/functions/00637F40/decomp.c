
void __cdecl FUN_00637f40(uint param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  char *text;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_2;
  if (param_2 == 0) {
    text = s_mstarG_007d1c70;
  }
  else {
    text = s_mstarGb_007d1c78;
  }
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (DAT_00807598 != (void *)0x0)) {
    if (uVar3 == 0) {
      uVar3 = *(uint *)((int)puVar1 + 0xd);
      uVar2 = *(uint *)((int)puVar1 + 9);
      uVar5 = 0x45;
      uVar4 = 0x5a;
    }
    else {
      uVar3 = *(uint *)((int)puVar1 + 0xd);
      uVar2 = *(uint *)((int)puVar1 + 9);
      uVar5 = 100;
      uVar4 = 0x78;
    }
    FUN_006e8660(DAT_00807598,(int *)&param_2,1,0,uVar2,uVar3,uVar4,uVar5,0);
    FUN_006e98e0(DAT_00807598,param_2,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea270(DAT_00807598,param_2,0,0);
    FUN_006ea050(DAT_00807598,param_2,2,param_1,param_3);
    FUN_006eaaa0(DAT_00807598,param_2,0);
  }
  return;
}

