
void __thiscall thunk_FUN_005dfa30(void *this,char param_1,undefined1 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  void *this_00;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  uint *puVar7;
  LPSTR pCVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  byte *pbVar12;
  void *unaff_EDI;
  byte *pbVar13;
  byte bVar14;
  char *pcVar15;
  undefined4 auStack_5a8 [256];
  byte abStack_1a8 [260];
  undefined4 auStack_a4 [20];
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  void *pvStack_10;
  uint uStack_c;
  undefined4 *puStack_8;
  
  *(undefined4 *)((int)this + 0x61) = *(undefined4 *)((int)this + 0x69);
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  pvStack_10 = this;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pvVar3 = pvStack_10;
  if (iVar4 != 0) {
    DAT_00858df8 = puStack_54;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0xdd,0,iVar4,&DAT_007a4ccc);
    pvVar3 = pvStack_10;
    if (iVar4 == 0) {
      thunk_FUN_005b66e0(pvStack_10);
      *(undefined4 *)((int)pvVar3 + 0x45) = 0x200;
      *(undefined4 *)((int)pvVar3 + 0x49) = 0;
      *(undefined4 *)((int)pvVar3 + 0x4d) = 0x6102;
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(char *)((int)pvStack_10 + 0x6e) = param_1;
  if (param_1 == '\0') {
    *(undefined1 *)((int)pvStack_10 + 0x6f) = param_2;
  }
  else {
    *(undefined1 *)((int)pvStack_10 + 0x6f) = 0;
  }
  if (*(char *)((int)pvStack_10 + 0x6e) == '\x01') {
    thunk_FUN_005daf20(DAT_0081176c);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (*(char *)((int)pvVar3 + 0x6e) == '\0') {
    puVar5 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    puVar5 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  *(undefined4 **)((int)pvVar3 + 0x70) = puVar5;
  if (DAT_0080fb6e != 0) {
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(*(int *)((int)pvVar3 + 0x70),PTR_s_DESCRIPTION_0079c21c,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(*(int *)((int)pvVar3 + 0x70),PTR_s_OBJECTIVES_0079c220,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar5 = &DAT_0080c3c3;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puStack_8 = &DAT_0080c3c3;
    puVar6 = FUN_006f1ce0(0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&puStack_8,0);
    if ((puVar6 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,abStack_1a8,(byte *)0x0);
      uVar10 = 0xffffffff;
      pbVar12 = abStack_1a8;
      do {
        pbVar13 = pbVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar13 = pbVar12 + 1;
        bVar14 = *pbVar12;
        pbVar12 = pbVar13;
      } while (bVar14 != 0);
      uVar10 = ~uVar10;
      pbVar12 = pbVar13 + -uVar10;
      pbVar13 = (byte *)&DAT_0080c3c3;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar13 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
      }
    }
  }
  if (*(char *)((int)pvVar3 + 0x6e) == '\0') {
    iVar4 = *(int *)((int)pvVar3 + 0x70);
    pcVar15 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    iVar4 = *(int *)((int)pvVar3 + 0x70);
    pcVar15 = (char *)&DAT_0080e303;
  }
  iVar4 = FUN_00715050(iVar4,pcVar15,0);
  *(int *)((int)pvVar3 + 0x74) = iVar4;
  if (iVar4 == 0) {
    puVar7 = FUN_006ae290((uint *)0x0,1,0x50,1);
    puVar5 = auStack_a4;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(uint **)((int)pvVar3 + 0x74) = puVar7;
    auStack_a4[0]._0_1_ = 8;
    FUN_006ae1c0(puVar7,auStack_a4);
  }
  FUN_006afe40((int *)((int)pvVar3 + 0x78),*(uint **)((int)pvVar3 + 0x74));
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
  }
  iVar4 = 1;
  bVar14 = 0;
  pCVar8 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
  uVar9 = FUN_0070a9f0(DAT_00806780,pCVar8,bVar14,iVar4);
  *(undefined4 *)((int)pvVar3 + 0x5d) = uVar9;
  *(undefined1 *)((int)pvVar3 + 0x80) = 1;
  puVar6 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_MT_CHECK_007cda58,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)((int)pvVar3 + 0x81) = puVar6;
  thunk_FUN_00568bc0(&DAT_00807658,0);
  FUN_006bc360(*(int *)((int)pvVar3 + 0x5d),auStack_5a8,(int *)0x0);
  FUN_00718780((int)auStack_5a8,0,0x100,0x1a,0x10,(undefined4 *)((int)pvVar3 + 0x91));
  FUN_00718780((int)auStack_5a8,0,0x100,0x2e,0x10,(undefined4 *)((int)pvVar3 + 0x191));
  iVar4 = thunk_FUN_005defe0(*(int *)((int)pvVar3 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(int *)((int)pvVar3 + 0x89) = iVar4;
  *(undefined4 *)(iVar4 + 0x58) = 1;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  uVar9 = thunk_FUN_005df290(*(int *)((int)pvVar3 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  uStack_c = (int)pvVar3 + 0x653;
  *(undefined4 *)((int)pvVar3 + 0x8d) = uVar9;
  puVar7 = (uint *)((int)pvVar3 + 0x2a5);
  puStack_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,puVar7,0x31,0x402f63,0,0,uStack_c);
    FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*puVar7);
    uStack_c = uStack_c + 0xc;
    puVar7 = puVar7 + 1;
    puStack_8 = (undefined4 *)((int)puStack_8 + -1);
  } while (puStack_8 != (undefined4 *)0x0);
  uStack_c = (int)pvVar3 + 0x68f;
  puVar7 = (uint *)((int)pvVar3 + 0x2bd);
  puStack_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,puVar7,0x31,0x402f63,0,0,uStack_c);
    FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*puVar7);
    uStack_c = uStack_c + 0xc;
    puVar7 = puVar7 + 1;
    puStack_8 = (undefined4 *)((int)puStack_8 + -1);
  } while (puStack_8 != (undefined4 *)0x0);
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0x2d1) + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  *(undefined4 *)((int)pvVar3 + 0x2ed) = 0;
  *(undefined4 *)((int)pvVar3 + 0x2f1) = 0;
  *(undefined4 *)((int)pvVar3 + 0x2d9) = 0;
  if (*(uint *)((int)pvVar3 + 0x2d5) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvVar3 + 0x319),*(uint *)((int)pvVar3 + 0x2d5));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0x362) + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff);
  *(undefined4 *)((int)pvVar3 + 0x37e) = 0;
  *(undefined4 *)((int)pvVar3 + 0x382) = 0;
  *(undefined4 *)((int)pvVar3 + 0x36a) = 0;
  if (*(uint *)((int)pvVar3 + 0x366) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvVar3 + 0x3aa),*(uint *)((int)pvVar3 + 0x366));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0x3f3) + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  *(undefined4 *)((int)pvVar3 + 0x40f) = 0;
  *(undefined4 *)((int)pvVar3 + 0x413) = 0;
  *(undefined4 *)((int)pvVar3 + 0x3fb) = 0;
  if (*(uint *)((int)pvVar3 + 0x3f7) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvVar3 + 0x43b),*(uint *)((int)pvVar3 + 0x3f7));
  }
  puVar7 = (uint *)((int)pvVar3 + 0x484);
  FUN_006b2330((uint)DAT_008075a8,puVar7,0x32,0x402f63,0,0,(int)pvVar3 + 0x6bf);
  FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*puVar7);
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0x48c) + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  *(undefined4 *)((int)pvVar3 + 0x4a8) = 0;
  *(undefined4 *)((int)pvVar3 + 0x4ac) = 0;
  *(undefined4 *)((int)pvVar3 + 0x494) = 0;
  if (*(uint *)((int)pvVar3 + 0x490) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvVar3 + 0x4d4),*(uint *)((int)pvVar3 + 0x490));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0x51d) + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff);
  *(undefined4 *)((int)pvVar3 + 0x539) = 0;
  *(undefined4 *)((int)pvVar3 + 0x53d) = 0;
  *(undefined4 *)((int)pvVar3 + 0x525) = 0;
  if (*(uint *)((int)pvVar3 + 0x521) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvVar3 + 0x565),*(uint *)((int)pvVar3 + 0x521));
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0x5ae) + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  *(undefined4 *)((int)pvVar3 + 0x5ca) = 0;
  *(undefined4 *)((int)pvVar3 + 0x5ce) = 0;
  *(undefined4 *)((int)pvVar3 + 0x5b6) = 0;
  if (*(uint *)((int)pvVar3 + 0x5b2) != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)pvVar3 + 0x5f6),*(uint *)((int)pvVar3 + 0x5b2));
  }
  puVar7 = (uint *)((int)pvVar3 + 0x63f);
  FUN_006b2330((uint)DAT_008075a8,puVar7,0x32,0x402f63,0,0,(int)pvVar3 + 0x6cb);
  FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*puVar7);
  puVar7 = FUN_006ae310((uint *)0x0,10,0x9e,10,0x405de4);
  *(uint **)((int)pvVar3 + 0x64b) = puVar7;
  puVar7 = FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  *(uint **)((int)pvVar3 + 0x647) = puVar7;
  puVar7 = FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  *(uint **)((int)pvVar3 + 0x64f) = puVar7;
  if (*(void **)(DAT_0081176c + 0x2e6) != (void *)0x0) {
    thunk_FUN_005b8c70(*(void **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  thunk_FUN_0055dbf0(DAT_0080759c,1,0);
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (void *)0x0) {
    uVar9 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
    uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 3;
    *(undefined2 *)((int)this_00 + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,uVar1,uVar9);
    thunk_FUN_00543c90(this_00,*(int *)((int)this_00 + 0xc5),*(int *)((int)this_00 + 0xc9));
    *(undefined1 *)((int)this_00 + 0xd2) = 0;
    *(undefined4 *)((int)this_00 + 0x4df) = 0xffffffff;
  }
  thunk_FUN_00540dc0(1,*(undefined4 *)((int)pvVar3 + 8),2,100,2,1,0,0,0,0,0,0);
  thunk_FUN_00540dc0(1,*(undefined4 *)((int)pvVar3 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
  *(undefined1 *)((int)pvVar3 + 0x6d) = 3;
  thunk_FUN_005e1330();
  thunk_FUN_005e09e0();
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)pvVar3 + 0x5d),10,2);
  DAT_00858df8 = puStack_54;
  return;
}

