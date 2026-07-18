
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InfoCtrls */

void __thiscall FSGSTy::InfoCtrls(FSGSTy *this,void *param_1)

{
  byte bVar1;
  code *pcVar2;
  FSGSTy *this_00;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_8dc [11];
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  undefined4 local_4c [16];
  FSGSTy *local_c;
  int local_8;
  
  pbVar3 = *(byte **)(this + 0x1b0c);
  if (pbVar3 != (byte *)0x0) {
    pbVar7 = &DAT_00807e1d;
    puVar8 = local_8dc;
    local_c = this;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059d77b:
        local_8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059d77b;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    local_8 = 0;
LAB_0059d780:
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    iVar6 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    if (iVar6 == 0) {
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      this_00 = local_c;
      *(uint **)(local_c + 0x1af8) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      *(uint **)(this_00 + 0x1afc) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      *(uint **)(this_00 + 0x1b00) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      *(uint **)(this_00 + 0x1b04) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar8 = local_8dc;
      for (iVar6 = 0x223; iVar5 = local_8, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_8dc[0] = 1;
      local_8dc[1] = 0x89;
      if (local_8 != 0) {
        local_8dc[1] = 0x99;
      }
      local_8dc[2] = *(undefined4 *)(this_00 + 0x1a73);
      local_8dc[8] = *(undefined4 *)(this_00 + 0x1af8);
      local_8b0 = *(undefined4 *)(this_00 + 8);
      local_68 = 2;
      local_8ac = 2;
      local_88c = 2;
      local_8dc[3] = 0xd2;
      local_8dc[4] = 0xb5;
      local_8dc[5] = 100;
      local_8dc[6] = 0x14;
      local_8dc[7] = 0x1ff;
      local_8a8 = 0x68ff;
      local_888 = 0x697f;
      local_64 = 0x6955;
      local_890 = local_8b0;
      local_6c = local_8b0;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ad8,0,local_8dc,0);
      local_8dc[8] = *(undefined4 *)(this_00 + 0x1afc);
      local_8dc[3] = 0x15e;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1adc,0,local_8dc,0);
      local_8dc[8] = *(undefined4 *)(this_00 + 0x1b00);
      local_8dc[3] = 0x1ea;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ae0,0,local_8dc,0);
      local_8dc[1] = 200;
      if (iVar5 != 0) {
        local_8dc[1] = 0xcc;
      }
      local_8dc[8] = *(undefined4 *)(this_00 + 0x1b04);
      local_8dc[3] = 0xd2;
      local_8dc[4] = 0xdd;
      local_8dc[5] = 0x17c;
      local_8dc[6] = 0x4b;
      local_888 = 0x6981;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ae4,0,local_8dc,0);
      *(undefined4 *)(this_00 + 0x2d) = 0x61;
      *(undefined4 *)(this_00 + 0x35) = 0;
      FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x69c,0,iVar6,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar6,0,0x7cbf70,0x69c);
  }
  return;
}

