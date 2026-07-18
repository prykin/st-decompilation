
void FUN_005952b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  undefined4 *local_8;
  
  if (param_8 != 0) {
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      thunk_FUN_005b67a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         (undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      iVar2 = param_4 + 10;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256f,DAT_00807618);
      thunk_FUN_00540890(0,iVar2,param_5 + 10,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
      FUN_006c6850(param_1,iVar2,param_5 + 0x1e,param_6 + -0x14,0x8e,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256b,DAT_00807618);
      thunk_FUN_00540890(0,iVar2,param_5 + 0xb4,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8
                        );
      FUN_006c6850(param_1,iVar2,param_5 + 200,param_6 + -0x14,0x19,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256c,DAT_00807618);
      thunk_FUN_00540890(0,iVar2,param_5 + 0xe1,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8
                        );
      FUN_006c6850(param_1,iVar2,param_5 + 0xf5,param_6 + -0x14,0x19,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      local_c = param_6 + -0x1e;
      local_8 = (undefined4 *)(local_c / 2);
      pvVar7 = *(void **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256d,DAT_00807618);
      thunk_FUN_00540890(0,iVar2,param_5 + 0x11a,(int)(local_8 + -10),0x14,puVar3,uVar5,uVar6,pvVar7
                         ,uVar8);
      FUN_006c6470(param_1,(int)local_8 + param_4 + -0x14,param_5 + 0x11c,local_8 + 10,0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,(int)local_8 + param_4 + -0x12,param_5 + 0x11e,local_8 + 9,0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,iVar2,param_5 + 0x138,(undefined4 *)(param_6 + -0x14),0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,param_4 + 0xc,param_5 + 0x13a,(undefined4 *)(param_6 + -0x18),0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      iVar2 = param_4 + ((int)(local_c + (local_c >> 0x1f & 3U)) >> 2);
      FUN_006c6470(param_1,iVar2 + 0xf,param_5 + 0x157,local_8,0x19,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      FUN_006c6470(param_1,iVar2 + 0x11,param_5 + 0x159,local_8 + -1,0x15,4,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb3,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cbf70,0xb3);
  }
  return;
}

