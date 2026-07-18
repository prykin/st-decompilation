
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00495980(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 ***local_90;
  undefined4 local_8c [16];
  undefined4 ***local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  FUN_006e5fd0();
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 2:
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar2 != 0) {
      DAT_00858df8 = (undefined4 ****)local_4c;
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_dump_cpp_007abdd4,0x3d,0,iVar2,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = 0x3e;
LAB_00495c27:
      FUN_006a5e40(iVar2,0,0x7abdd4,uVar4);
      return 0xffff;
    }
    DAT_007fb278 = *DAT_00806750;
    DAT_007fb27a = DAT_00806750[1];
    DAT_007fb27c = 5;
    DAT_007fb27e = *DAT_00806750 * DAT_00806750[1];
    DAT_007fb280 = (undefined4 *)FUN_006aac70((int)DAT_007fb27a * (int)DAT_007fb278 * 10);
    if (DAT_007fb280 == (undefined4 *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7abdd4,0x2b);
    }
    uVar5 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
    puVar7 = DAT_007fb280;
    for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DAT_007fb232 = DAT_007fb27a;
    DAT_007fb234 = DAT_007fb27c;
    DAT_007fb230 = DAT_007fb278;
    _DAT_007fb236 = DAT_007fb27e;
    DAT_007fb238 = FUN_006aac70((int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278 * 2);
    if (DAT_007fb238 == 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7abdd4,0x30);
    }
    DAT_007fb242 = DAT_007fb27a;
    DAT_007fb244 = DAT_007fb27c;
    DAT_007fb240 = DAT_007fb278;
    DAT_007fb246 = DAT_007fb27e;
    DAT_007fb248 = (undefined4 *)
                   FUN_006aac70((int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278 * 8);
    if (DAT_007fb248 == (undefined4 *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7abdd4,0x34);
    }
    puVar7 = DAT_007fb248;
    for (iVar2 = ((int)DAT_007fb244 * (int)DAT_007fb242 * (int)DAT_007fb240 & 0x1fffffffU) << 1;
        iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DAT_007fb26c = (undefined4 *)FUN_006aac70((int)DAT_007fb232 * (int)DAT_007fb230);
    iVar2 = (int)DAT_007fb232;
    iVar3 = (int)DAT_007fb230;
    puVar7 = DAT_007fb26c;
    for (uVar5 = (uint)(iVar2 * iVar3) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = iVar2 * iVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DAT_007fb270 = FUN_006ae290((uint *)0x0,10,0x18,10);
    thunk_FUN_00495e50();
    DAT_00858df8 = (undefined4 ****)local_4c;
    FUN_006e4d40(*(void **)(local_8 + 0x10),*(int *)(local_8 + 0xc));
    break;
  case 3:
    local_90 = DAT_00858df8;
    DAT_00858df8 = &local_90;
    iVar2 = __setjmp3(local_8c,0,unaff_EDI,unaff_ESI);
    if (iVar2 != 0) {
      DAT_00858df8 = (undefined4 ****)local_90;
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_dump_cpp_007abdd4,0x58,0,iVar2,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = 0x59;
      goto LAB_00495c27;
    }
    thunk_FUN_00495ea0();
    if (DAT_007fb280 != (undefined4 *)0x0) {
      FUN_006ab060(&DAT_007fb280);
    }
    if (DAT_007fb238 != 0) {
      FUN_006ab060(&DAT_007fb238);
    }
    if (DAT_007fb248 != (undefined4 *)0x0) {
      FUN_006ab060(&DAT_007fb248);
    }
    thunk_FUN_00497000();
    if (DAT_007fb270 != (uint *)0x0) {
      FUN_006ae110((byte *)DAT_007fb270);
    }
    iVar2 = FUN_006e4d40(*(void **)(local_8 + 0x10),*(int *)(local_8 + 0xc));
    if (iVar2 == 1) {
      DAT_00858df8 = (undefined4 ****)local_90;
      return 0;
    }
  }
  return 0;
}

