
void FUN_0059e7f0(void)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_8d8 [11];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar6 = local_8d8;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)local_8 + 0x1ae8) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_00807e1d);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)local_8 + 0x1aec) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar6 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_8d8[2] = *(undefined4 *)((int)local_8 + 0x1a73);
    local_8d8[8] = *(undefined4 *)((int)local_8 + 0x1ae8);
    local_8ac = *(undefined4 *)((int)local_8 + 8);
    local_848 = 2;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = 1;
    local_8d8[1] = 0x89;
    local_8d8[3] = 0xd2;
    local_8d8[4] = 0x106;
    local_8d8[5] = 0x17c;
    local_8d8[6] = 0x19;
    local_8d8[7] = 0x20;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_844 = 0x63ff;
    local_88c = local_8ac;
    local_84c = local_8ac;
    local_68 = local_8ac;
    (**(code **)(**(int **)((int)local_8 + 0xc) + 8))(6,(int)local_8 + 0x1ac4,0,local_8d8,0);
    local_8d8[8] = *(undefined4 *)((int)local_8 + 0x1aec);
    local_8d8[4] = 0x13d;
    local_8d8[5] = 0xaa;
    local_8d8[6] = 0x14;
    local_8d8[7] = 0x10;
    (**(code **)(**(int **)((int)local_8 + 0xc) + 8))(6,(int)local_8 + 0x1ac8,0,local_8d8,0);
    *(undefined4 *)((int)local_8 + 0x1ec2) = 0x100;
    *(undefined4 *)((int)local_8 + 0x1ec6) = 0xffffffff;
    *(undefined4 *)((int)local_8 + 0x1eca) = 0;
    uVar3 = thunk_FUN_005b5510(1,1,0xcd,0x16f,0x186,0x19,0x6904,0x698b);
    *(undefined4 *)((int)local_8 + 0x1eb6) = uVar3;
    *(undefined4 *)((int)local_8 + 0x2d) = 0x61;
    *(undefined4 *)((int)local_8 + 0x35) = 0;
    FUN_006e6080(local_8,0xf,0,(undefined4 *)((int)local_8 + 0x1d));
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x782,0,iVar5,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7cbf70,0x782);
  return;
}

