
void __thiscall thunk_FUN_005b3d60(void *this,char param_1,int param_2)

{
  code *pcVar1;
  void *this_00;
  uint *puVar2;
  LPCSTR pCVar3;
  DWORD DVar4;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  int iVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  UINT UVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  void *pvVar19;
  undefined4 uVar20;
  undefined4 uStack_24c;
  undefined4 uStack_162;
  undefined4 uStack_155;
  undefined4 uStack_151;
  undefined4 uStack_14d;
  undefined1 uStack_13d;
  undefined4 *puStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  uint uStack_8;
  
  puVar7 = (undefined4 *)((int)this + 0x17c);
  iVar9 = 0xd;
  do {
    puVar7[-0x30] = 0;
    *puVar7 = 0;
    puVar10 = (undefined4 *)((int)puVar7 + -0xbb);
    puVar7 = (undefined4 *)((int)puVar7 + 0x1fb);
    iVar9 = iVar9 + -1;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  } while (iVar9 != 0);
  puStack_50 = DAT_00858df8;
  DAT_00858df8 = &puStack_50;
  pvStack_c = this;
  iVar9 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  this_00 = pvStack_c;
  if (iVar9 != 0) {
    DAT_00858df8 = puStack_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0x16a,0,iVar9,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar9,0,0x7cc8e8,0x16a);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(char *)((int)pvStack_c + 0x1ee3) = param_1;
  if (param_1 == '\0') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    *(undefined1 *)((int)pvStack_c + 0x9a) = 5;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)pvStack_c + 0xbc) = 0x2334;
    iVar9 = *(int *)((int)pvStack_c + 0x174);
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2334,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)this_00 + 0x2b7) = 0x2335;
    iVar9 = *(int *)((int)this_00 + 0x36f);
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2335,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar9 = *(int *)((int)this_00 + 0x56a);
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)this_00 + 0x4b2) = 0x2332;
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2332,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    iVar9 = *(int *)((int)this_00 + 0x765);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    uVar12 = 0xfffffffe;
    *(undefined4 *)((int)this_00 + 0x6ad) = 0x2333;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2333,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar9 = *(int *)((int)this_00 + 0x960);
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)this_00 + 0x8a8) = 0x2336;
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2336,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    *(undefined4 *)((int)this_00 + 0xc9) = *(undefined4 *)((int)this_00 + 8);
    *(undefined4 *)((int)this_00 + 0xcd) = 2;
    *(undefined4 *)((int)this_00 + 0xd1) = 0x6944;
    *(undefined4 *)((int)this_00 + 0x2c4) = 0x200;
    *(undefined4 *)((int)this_00 + 0x2c8) = 0;
    *(undefined4 *)((int)this_00 + 0x2cc) = 0x6105;
    *(undefined4 *)((int)this_00 + 0x2d0) = 0;
    *(undefined4 *)((int)this_00 + 0x2d4) = 1;
    *(undefined4 *)((int)this_00 + 0x4bf) = 0x200;
    *(undefined4 *)((int)this_00 + 0x4c3) = 0;
    *(undefined4 *)((int)this_00 + 0x4c7) = 0x6103;
    *(undefined4 *)((int)this_00 + 0x4cb) = 1;
    *(undefined4 *)((int)this_00 + 0x6c2) = 0;
    *(undefined4 *)((int)this_00 + 0x8b9) = 1;
    *(undefined4 *)((int)this_00 + 0x8bd) = 0x7102;
    FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar18 = 0;
    pvVar19 = *(void **)(DAT_0081176c + 0x30);
    uVar13 = 0xffffffff;
    uVar12 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(0x26ac,DAT_00807618);
    thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar2,uVar12,uVar13,pvVar19,uVar18);
    uVar8 = DAT_00807dd5 >> 0x10 & 0xff;
    uVar13 = DAT_00807dd5 & 0xffff;
    uVar12 = DAT_00807dd5 >> 0x18;
    pCVar3 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
    wsprintfA((LPSTR)(*(int *)((int)this_00 + 0x1a5b) + 0x3c),pCVar3,uVar12,uVar8,uVar13);
    thunk_FUN_00540890(0,0,0x240,800,0x18,(uint *)(*(int *)((int)this_00 + 0x1a5b) + 0x3c),
                       0xfffffffe,0xffffffff,*(void **)(DAT_0081176c + 0x34),0);
  }
  else if (param_1 == '\x01') {
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    *(undefined1 *)((int)pvStack_c + 0x9a) = 5;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)pvStack_c + 0xbc) = 0x233c;
    iVar9 = *(int *)((int)pvStack_c + 0x174);
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233c,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)this_00 + 0x2b7) = 0x233d;
    iVar9 = *(int *)((int)this_00 + 0x36f);
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233d,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar9 = *(int *)((int)this_00 + 0x56a);
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)this_00 + 0x4b2) = 0x233e;
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233e,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    iVar9 = *(int *)((int)this_00 + 0x765);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    uVar12 = 0xfffffffe;
    *(undefined4 *)((int)this_00 + 0x6ad) = 0x233f;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x233f,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    uVar20 = 0xffffffff;
    uVar18 = 7;
    iVar17 = -1;
    iVar9 = *(int *)((int)this_00 + 0x960);
    iVar16 = -1;
    iVar15 = 1;
    uVar13 = 0xffffffff;
    *(undefined4 *)((int)this_00 + 0x8a8) = 0x2359;
    uVar12 = 0xfffffffe;
    iVar11 = 0x28;
    iVar5 = 0x8c;
    puVar2 = (uint *)FUN_006b0140(0x2359,DAT_00807618);
    puVar7 = FUN_00713480(puVar2,iVar5,iVar11,uVar12,uVar13,iVar15,iVar16,iVar17);
    (**(code **)(iVar9 + 8))(puVar7,uVar18,uVar20);
    bVar6 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    if (*(char *)((int)this_00 + 0x9a) != '\0') {
      do {
        uVar12 = uStack_8 & 0xff;
        bVar6 = bVar6 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar6);
        *(undefined4 *)((int)this_00 + uVar12 * 0x1fb + 0xc9) = 0x200;
        *(undefined4 *)((int)this_00 + uVar12 * 0x1fb + 0xcd) = 0;
      } while (bVar6 < *(byte *)((int)this_00 + 0x9a));
    }
    *(undefined4 *)((int)this_00 + 0xd1) = 0x6122;
    *(undefined4 *)((int)this_00 + 0x2cc) = 0x611f;
    *(undefined4 *)((int)this_00 + 0x4c7) = 0x611f;
    *(undefined4 *)((int)this_00 + 0x6c2) = 0x611f;
    *(undefined4 *)((int)this_00 + 0x8bd) = 0x6122;
    puVar7 = &uStack_24c;
    for (iVar9 = 0x7e; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    iVar9 = *(int *)((int)this_00 + 0x1a5b);
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    uStack_155 = *(undefined4 *)((int)this_00 + 8);
    *(undefined4 *)((int)this_00 + 0xd5) = 0;
    *(undefined4 *)((int)this_00 + 0x2d0) = 2;
    *(undefined4 *)((int)this_00 + 0x4cb) = 9;
    *(undefined4 *)((int)this_00 + 0x6c6) = 3;
    *(undefined4 *)((int)this_00 + 0x8c1) = 1;
    uStack_162 = 0x24bc;
    uStack_13d = 1;
    uStack_151 = 2;
    uStack_14d = 0x6943;
    pvVar19 = *(void **)(iVar9 + 0x2e6);
    if (pvVar19 != (void *)0x0) {
      thunk_FUN_005b87d0(pvVar19,0,(int)&uStack_24c,0,0);
    }
    FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
    uVar18 = 0;
    pvVar19 = *(void **)(DAT_0081176c + 0x30);
    uVar13 = 0xffffffff;
    uVar12 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(0x26b0,DAT_00807618);
    thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar2,uVar12,uVar13,pvVar19,uVar18);
  }
  if (param_2 != 0) {
    thunk_FUN_005b3160();
    *(undefined4 *)((int)this_00 + 0x1ad3) = 1;
    *(undefined4 *)((int)this_00 + 0x1adb) = 0;
    *(undefined4 *)((int)this_00 + 0x1ad7) = *(undefined4 *)((int)this_00 + 0x61);
    goto LAB_005b44f1;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  FUN_006ba9e0(DAT_0080759c,0xe9,0x14,0x14c,0x18,0);
  if (*(char *)((int)this_00 + 0x1ee3) == '\0') {
    pvVar19 = *(void **)(DAT_0081176c + 0x30);
    UVar14 = 0x26ac;
LAB_005b4465:
    uVar18 = 0;
    uVar13 = 0xffffffff;
    uVar12 = 0xfffffffe;
    puVar2 = (uint *)FUN_006b0140(UVar14,DAT_00807618);
    thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar2,uVar12,uVar13,pvVar19,uVar18);
  }
  else if (*(char *)((int)this_00 + 0x1ee3) == '\x01') {
    pvVar19 = *(void **)(DAT_0081176c + 0x30);
    UVar14 = 0x26b0;
    goto LAB_005b4465;
  }
  uVar8 = DAT_00807dd5 >> 0x10 & 0xff;
  uVar13 = DAT_00807dd5 & 0xffff;
  uVar12 = DAT_00807dd5 >> 0x18;
  pCVar3 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
  wsprintfA((LPSTR)(*(int *)((int)this_00 + 0x1a5b) + 0x3c),pCVar3,uVar12,uVar8,uVar13);
  thunk_FUN_00540890(0,0,0x240,800,0x18,(uint *)(*(int *)((int)this_00 + 0x1a5b) + 0x3c),0xfffffffe,
                     0xffffffff,*(void **)(DAT_0081176c + 0x34),0);
LAB_005b44f1:
  uStack_8 = uStack_8 & 0xffffff00;
  if (*(char *)((int)this_00 + 0x9a) != '\0') {
    do {
      uVar12 = uStack_8 & 0xff;
      DVar4 = timeGetTime();
      *(DWORD *)((int)this_00 + uVar12 * 0x1fb + 0x127) = DVar4;
      *(uint *)((int)this_00 + uVar12 * 0x1fb + 0x123) = uVar12 * 0x96;
      *(undefined1 *)((int)this_00 + uVar12 * 0x1fb + 0xbb) = 1;
      bVar6 = (char)uStack_8 + 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar6);
    } while (bVar6 < *(byte *)((int)this_00 + 0x9a));
  }
  *(undefined1 *)((int)this_00 + 0x65) = 3;
  thunk_FUN_005b6730(this_00,1,'\0',-1);
  DAT_00858df8 = puStack_50;
  return;
}

