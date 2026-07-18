
void thunk_FUN_00595e40(byte param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  LPSTR pCVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 uVar11;
  byte bVar12;
  undefined4 auStack_450 [256];
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  uint uStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x15d,0,iVar3,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0x15d);
    return;
  }
  thunk_FUN_005daf20(*(int *)((int)pvStack_c + 0x1a5b));
  DAT_0081174c = pvStack_c;
  DAT_008067a0 = 0;
  thunk_FUN_005dac80();
  DAT_00802a99 = 0;
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
  }
  if (*(int *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x2e6) != 0) {
    thunk_FUN_005b6ff0();
    *(undefined4 *)(*(int *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
  }
  uVar4 = FUN_0070a9f0(DAT_00806780,s_FSGS_BKG_007cc09c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar4;
  *(undefined4 *)((int)pvStack_c + 0x5d) = *(undefined4 *)(DAT_0081176c + 0x2c);
  puVar5 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_SET_ACC_007cc090,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)((int)pvStack_c + 0x1a83) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_FILE_LIST_007cc084,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)((int)pvStack_c + 0x1a87) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806784,0xb,&DAT_007cc07c,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)((int)pvStack_c + 0x1a8b) = puVar5;
  FUN_006bc360(*(int *)((int)pvStack_c + 0x5d),auStack_450,(int *)0x0);
  *(undefined4 *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x140) = 0xf;
  FUN_00718780((int)auStack_450,0,0x100,0x8b,0x15,
               (undefined4 *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x144));
  uVar4 = FUN_006c6a60(*(int *)((int)pvStack_c + 0x5d));
  *(undefined4 *)((int)pvStack_c + 0x1a67) = uVar4;
  *(undefined4 *)((int)pvStack_c + 0x1f5b) = *(undefined4 *)((int)pvStack_c + 8);
  *(undefined4 *)((int)pvStack_c + 0x1f3b) = *(undefined4 *)((int)pvStack_c + 8);
  *(undefined4 *)((int)pvStack_c + 0x1f5f) = 2;
  *(undefined4 *)((int)pvStack_c + 7999) = 2;
  *(undefined4 *)((int)pvStack_c + 0x1f7f) = *(undefined4 *)((int)pvStack_c + 0x5d);
  *(undefined4 *)((int)pvStack_c + 0x1f93) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1f8f) = DAT_008032ac;
  *(undefined4 *)((int)pvStack_c + 0x1f87) = 0xf;
  *(undefined4 *)((int)pvStack_c + 0x1f8b) = 1;
  *(undefined4 *)((int)pvStack_c + 0x1f83) = 0x4d;
  puVar6 = FUN_006ae290((uint *)0x0,5,0x10c,5);
  *(uint **)((int)pvStack_c + 0x1fb3) = puVar6;
  *(undefined4 *)((int)pvStack_c + 0x1a6f) =
       *(undefined4 *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x30);
  *(undefined4 *)((int)pvStack_c + 0x1a73) =
       *(undefined4 *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x34);
  iVar3 = thunk_FUN_00594850(*(int *)((int)pvStack_c + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(int *)((int)pvStack_c + 0x1a77) = iVar3;
  *(undefined4 *)(iVar3 + 0x7e) = 1;
  *(undefined2 *)(iVar3 + 0x9e) = 0;
  *(undefined1 *)(iVar3 + 0x9e) = DAT_007c6ff0;
  puVar7 = FUN_0070ceb0(0x19d,DAT_00806780,s_FSGS_NB_007cc070,0);
  *(undefined4 **)((int)pvStack_c + 0x1a7b) = puVar7;
  puVar7[0x16] = 1;
  puVar7[0x17] = 0;
  puVar7 = FUN_0070ceb0(0x19d,DAT_00806780,s_FSGS_NS_007cc064,0);
  *(undefined4 **)((int)pvStack_c + 0x1a7f) = puVar7;
  puVar7[0x16] = 1;
  puVar7[0x17] = 0;
  puVar7 = (undefined4 *)(*(int *)((int)pvStack_c + 0x5d) + 0x28);
  iVar3 = 1;
  uVar8 = FUN_006b4fe0(*(int *)((int)pvStack_c + 0x5d));
  iVar3 = FUN_006b50c0(0x24d,0x59,(uint)*(ushort *)(*(int *)((int)pvStack_c + 0x5d) + 0xe),uVar8,
                       puVar7,iVar3);
  *(int *)((int)pvStack_c + 0x1a97) = iVar3;
  uStack_8 = *(uint *)(iVar3 + 0x14);
  if (uStack_8 == 0) {
    uStack_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar3 + 8);
  }
  puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar8 = uStack_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  iVar3 = 0;
  bVar12 = 0;
  for (uVar8 = uStack_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar7 = 0xff;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  pCVar9 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)((int)pvStack_c + 0x1a93));
  puVar5 = FUN_0070a5a0(DAT_00806780,6,pCVar9,bVar12,iVar3);
  thunk_FUN_00540760(*(undefined4 **)((int)pvStack_c + 0x1a97),0,0,'\x06',(byte *)puVar5);
  uVar8 = *(uint *)((int)pvStack_c + 0x1a97);
  FUN_006b2330((uint)DAT_008075a8,(uint *)((int)pvStack_c + 0x1a8f),0x31,0x4023f6,
               *(uint *)(uVar8 + 4),*(uint *)(uVar8 + 8),uVar8);
  FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_c + 0x1a8f),0xffffffff,DAT_00806730 - 0x24d,0);
  iVar3 = 1;
  puVar7 = (undefined4 *)(*(int *)((int)pvStack_c + 0x5d) + 0x28);
  uVar8 = FUN_006b4fe0(*(int *)((int)pvStack_c + 0x5d));
  uVar8 = FUN_006b50c0(0x1b8,0x106,(uint)*(ushort *)(*(int *)((int)pvStack_c + 0x5d) + 0xe),uVar8,
                       puVar7,iVar3);
  *(uint *)((int)pvStack_c + 0x1ac0) = uVar8;
  *(undefined1 *)((int)pvStack_c + 0x1abb) = 0;
  puVar6 = (uint *)((int)pvStack_c + 0x1abc);
  FUN_006b2330((uint)DAT_008075a8,puVar6,0x31,0x4023f6,*(uint *)(uVar8 + 4),*(uint *)(uVar8 + 8),
               uVar8);
  FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0xb4,0xaa);
  FUN_006b3af0(DAT_008075a8,*puVar6);
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvStack_c + 0x1b28) + 4))
            (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)((int)pvStack_c + 0x1b30) = 0;
  if (*(uint *)((int)pvStack_c + 0x1b2c) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvStack_c + 0x1b70),*(uint *)((int)pvStack_c + 0x1b2c));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvStack_c + 0x1bb9) + 4))
            (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  *(undefined4 *)((int)pvStack_c + 0x1bc1) = 0;
  if (*(uint *)((int)pvStack_c + 0x1bbd) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvStack_c + 0x1c01),*(uint *)((int)pvStack_c + 0x1bbd));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvStack_c + 0x1c4a) + 4))
            (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  *(undefined4 *)((int)pvStack_c + 0x1c52) = 0;
  if (*(uint *)((int)pvStack_c + 0x1c4e) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvStack_c + 0x1c92),*(uint *)((int)pvStack_c + 0x1c4e));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvStack_c + 0x1cdb) + 4))
            (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)((int)pvStack_c + 0x1ce3) = 0;
  if (*(uint *)((int)pvStack_c + 0x1cdf) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvStack_c + 0x1d23),*(uint *)((int)pvStack_c + 0x1cdf));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvStack_c + 0x1d6c) + 4))
            (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  *(undefined4 *)((int)pvStack_c + 0x1d74) = 0;
  if (*(uint *)((int)pvStack_c + 0x1d70) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvStack_c + 0x1db4),*(uint *)((int)pvStack_c + 0x1d70));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvStack_c + 0x1dfd) + 4))
            (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  *(undefined4 *)((int)pvStack_c + 0x1e05) = 0;
  if (*(uint *)((int)pvStack_c + 0x1e01) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvStack_c + 0x1e45),*(uint *)((int)pvStack_c + 0x1e01));
  }
  *(undefined4 *)((int)pvStack_c + 0x1cfb) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1cf7) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1b48) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1b44) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1d8c) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1d88) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1bd9) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1bd5) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1e1d) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1e19) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1c6a) = 0;
  *(undefined4 *)((int)pvStack_c + 0x1c66) = 0;
  puVar6 = FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)((int)pvStack_c + 0x1b08) = puVar6;
  FUN_006b5aa0((int)puVar6,s_License_agreement_007cc01c);
  FUN_006b5aa0(*(int *)((int)pvStack_c + 0x1b08),s_Nothing_to_do_007cc00c);
  thunk_FUN_00596cc0('\x01');
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)pvStack_c + 0x5d),10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    puVar6 = FUN_006b54f0((uint *)0x0,100,100);
    *(uint **)((int)pvStack_c + 0x1e9e) = puVar6;
  }
  *(undefined1 *)((int)pvStack_c + 0x1a62) = 0;
  if (param_1 == 6) {
    *(undefined1 *)((int)pvStack_c + 0x1a5f) = 6;
    uVar11 = 8;
  }
  else if (param_1 == 7) {
    *(undefined1 *)((int)pvStack_c + 0x1a5f) = 7;
    uVar11 = 7;
  }
  else {
    if (param_1 != 8) {
      thunk_FUN_00597e70(6);
      *(undefined1 *)((int)pvStack_c + 0x1a62) = 1;
      goto LAB_00596510;
    }
    *(undefined1 *)((int)pvStack_c + 0x1a5f) = 8;
    uVar11 = 10;
  }
  thunk_FUN_00597e70(uVar11);
LAB_00596510:
  this = DAT_00802a30;
  if (DAT_00802a30 != (void *)0x0) {
    uVar4 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
    uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
    *(undefined2 *)((int)this + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,uVar1,uVar4);
    thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
    *(undefined1 *)((int)this + 0xd2) = 0;
    *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
  }
  if (*(int *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x2e6) != 0) {
    thunk_FUN_005b7210();
    *(undefined4 *)(*(int *)(*(int *)((int)pvStack_c + 0x1a5b) + 0x2e6) + 0x1cab) =
         *(undefined4 *)((int)pvStack_c + 8);
  }
  thunk_FUN_00568bc0(&DAT_00807658,0);
  thunk_FUN_005b6730(pvStack_c,0xb,'\0',-1);
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

