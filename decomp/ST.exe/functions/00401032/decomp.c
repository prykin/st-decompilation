
void thunk_FUN_005956c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                       int param_6,int param_7)

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
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    thunk_FUN_00594d40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0x25a6);
    iVar2 = param_5 + 0x55;
    FUN_006c53b0(param_1,param_4,iVar2,param_4 + -1 + param_6,iVar2,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c53b0(param_1,param_4,param_5 + 0x78,param_4 + -1 + param_6,param_5 + 0x78,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25a7,DAT_00807618);
    thunk_FUN_00540890(0,param_4,iVar2,0x2d,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    iStack_8 = param_5 + -1 + param_7;
    FUN_006c53b0(param_1,param_4 + 0x2d,param_5 + 0x78,param_4 + 0x2d,iStack_8,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25a8,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x2d,iVar2,0xeb,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c53b0(param_1,param_4 + 0x118,param_5 + 0x78,param_4 + 0x118,iStack_8,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25a9,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x118,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c53b0(param_1,param_4 + 0x15e,param_5 + 0x78,param_4 + 0x15e,iStack_8,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25aa,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x15e,iVar2,0x91,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c53b0(param_1,param_4 + 0x1ef,param_5 + 0x78,param_4 + 0x1ef,iStack_8,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ab,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x1ef,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c53b0(param_1,param_4 + 0x235,param_5 + 0x78,param_4 + 0x235,iStack_8,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ac,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x235,iVar2,0x32,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c53b0(param_1,param_4 + 0x267,param_5 + 0x78,param_4 + 0x267,iStack_8,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ad,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x267,iVar2,param_6 + -0x267,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8
                      );
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    iStack_c = param_5 + 0x19;
    uVar8 = 2;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ae,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 10,iStack_c,0x96,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
    iVar2 = param_5 + 0x32;
    FUN_006c6470(param_1,param_4 + 10,iVar2,(undefined4 *)0x96,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    iStack_8 = param_5 + 0x34;
    FUN_006c6470(param_1,param_4 + 0xc,iStack_8,(undefined4 *)0x92,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25af,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0xa5,iStack_c,0x96,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c6470(param_1,param_4 + 0xa5,iVar2,(undefined4 *)0x96,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6470(param_1,param_4 + 0xa7,iStack_8,(undefined4 *)0x92,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6470(param_1,param_4 + 0x14a,iVar2,(undefined4 *)0x19,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6470(param_1,param_4 + 0x14c,iStack_8,(undefined4 *)0x15,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6850(param_1,param_4 + 0x168,iVar2,100,0x19,*(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6470(param_1,param_4 + 0x1d1,iVar2,(undefined4 *)0x19,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6470(param_1,param_4 + 0x1d3,iStack_8,(undefined4 *)0x15,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25b0,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x1f9,iStack_c,0x96,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c6850(param_1,param_4 + 0x1f9,iVar2,0x96,0x19,*(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25b1,DAT_00807618);
    thunk_FUN_00540890(0,param_4 + 0x294,iVar2,0x41,0x19,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c6470(param_1,param_4 + 0x294,iVar2,(undefined4 *)0x41,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6470(param_1,param_4 + 0x296,iStack_8,(undefined4 *)0x3d,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xeb,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbf70,0xeb);
  return;
}

