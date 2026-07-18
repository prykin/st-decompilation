
void __thiscall thunk_FUN_004f2560(void *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  code *pcVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 unaff_ESI;
  char *pcVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  char *pcVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined4 *puStack_7c;
  undefined4 auStack_78 [16];
  void *pvStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  byte *pbStack_10;
  uint uStack_c;
  char cStack_5;
  
  iStack_18 = (int)this + 0xb63;
  if (param_1 == 0) {
    puStack_20 = *(undefined4 **)((int)this + 0x19c);
    iStack_18 = (int)this + 0xc51;
    iStack_28 = *(int *)((int)this + 0x58);
    iStack_2c = *(int *)((int)this + 0xb0);
  }
  else {
    puStack_20 = *(undefined4 **)((int)this + 0x184);
    iStack_28 = *(int *)((int)this + 0x40);
    iStack_2c = *(int *)((int)this + 0x98);
  }
  iStack_30 = 5;
  iStack_14 = 0x2f;
  uStack_1c = 0;
  if (param_1 == 0) {
    iStack_24 = (int)this + 0x664;
  }
  else {
    iStack_24 = (int)this + 0x31c;
  }
  uStack_c = uStack_c & 0xffffff00;
  puStack_7c = DAT_00858df8;
  DAT_00858df8 = &puStack_7c;
  pvStack_38 = this;
  iVar6 = __setjmp3(auStack_78,0,unaff_EDI,unaff_ESI);
  iVar8 = iStack_18;
  pvVar5 = pvStack_38;
  if (iVar6 != 0) {
    DAT_00858df8 = puStack_7c;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146,0,iVar6,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar6,0,0x7c1a4c,0x146);
    return;
  }
  puVar14 = (undefined4 *)((int)pvStack_38 + 0x31c);
  for (iVar6 = 0x46; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  iVar6 = iStack_30;
  if (*(short *)(iStack_18 + 0x20) != 0) {
    uVar7 = thunk_FUN_005259b0(*(short *)(iStack_18 + 0x20),*(ushort *)(iStack_18 + 0x24),'\0');
    pbStack_10 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar5 + 0x28e),uVar7);
    iVar6 = iStack_30;
    uStack_1c = -(uint)(*(char *)(iVar8 + 7) != '\x03') & 5;
    iStack_34 = uStack_1c + iStack_14;
    thunk_FUN_00540760(puStack_20,iStack_30,iStack_34,'\x06',pbStack_10);
    uVar2 = *(ushort *)(iVar8 + 0x28);
    if (uVar2 != 0xffff) {
      wsprintfA((LPSTR)((int)pvVar5 + 0x1e1),&DAT_007c1890,(uint)uVar2);
      FUN_00710a90((int)puStack_20,0,iVar6 + 0x2f,
                   (*(int *)(pbStack_10 + 8) + -0xc) / 2 + uStack_1c + iStack_14,0x11,0xc);
      FUN_00711b70((uint *)((int)pvVar5 + 0x1e1),-3,-1,0,-1,-1);
      piVar12 = (int *)(iStack_24 + (uStack_c & 0xff) * 0x1c);
      *piVar12 = iVar6 + 0x2f + iStack_28;
      piVar12[1] = iStack_34 + iStack_2c;
      piVar12[2] = 0x11;
      piVar12[3] = 0xc;
      iVar8 = thunk_FUN_00524fe0(*(undefined2 *)(iStack_18 + 0x20));
      piVar12[6] = iVar8;
      uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
    }
    piVar12 = (int *)(iStack_24 + (uStack_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + iStack_28;
    piVar12[1] = iStack_34 + iStack_2c;
    piVar12[2] = *(int *)(pbStack_10 + 4);
    piVar12[3] = *(int *)(pbStack_10 + 8);
    iVar8 = thunk_FUN_00524fe0(*(undefined2 *)(iStack_18 + 0x20));
    piVar12[6] = iVar8;
    uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
  }
  iVar8 = iStack_18;
  sVar3 = *(short *)(iStack_18 + 0x1e);
  if (sVar3 == 0) {
    DAT_00858df8 = puStack_7c;
    return;
  }
  if (sVar3 == 0xdd) {
    iVar16 = *(int *)((int)pvVar5 + 0x2d6);
    iVar11 = 0;
  }
  else {
    if (sVar3 != 0xde) {
      uVar7 = thunk_FUN_005259b0(sVar3,*(ushort *)(iStack_18 + 0x22),'\0');
      pbStack_10 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar5 + 0x28e),uVar7);
      goto LAB_004f27ff;
    }
    iVar16 = *(int *)((int)pvVar5 + 0x2d6);
    iVar11 = 1;
  }
  pbStack_10 = (byte *)FUN_0070b3a0(iVar16,iVar11);
LAB_004f27ff:
  switch(*(undefined2 *)(iVar8 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar11 = iStack_14 + 2;
    iVar16 = iVar6 + 1;
    break;
  default:
    if (*(short *)(iVar8 + 0x20) == 0) {
      uStack_1c = (0x24 - *(int *)(pbStack_10 + 8)) / 2;
    }
    else {
      uStack_1c = ((-(uint)(*(char *)(iVar8 + 7) != '\x03') & 0xfffffffa) + 0x22) -
                  *(int *)(pbStack_10 + 8);
    }
    iVar11 = uStack_1c + iStack_14;
    iVar16 = iVar6;
  }
  thunk_FUN_00540760(puStack_20,iVar16,iVar11,'\x06',pbStack_10);
  if (*(short *)(iVar8 + 0x1e) == 0xff) {
    FUN_00710a90((int)puStack_20,0,iVar6 + 1,iStack_14 + 2,*(int *)(pbStack_10 + 4),
                 *(int *)(pbStack_10 + 8));
    iVar19 = -1;
    iVar18 = -1;
    uVar17 = 1;
    iVar11 = -1;
    iVar16 = -2;
    puVar9 = (uint *)FUN_006b0140(0x2715,DAT_00807618);
    FUN_00711b70(puVar9,iVar16,iVar11,uVar17,iVar18,iVar19);
  }
  cStack_5 = '\x01';
  if (*(short *)(iVar8 + 0x26) == -1) {
    switch(*(undefined2 *)(iVar8 + 0x1e)) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      cStack_5 = '\0';
      break;
    default:
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_007c1b00;
      do {
        pcVar15 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar15 + -uVar7;
      pcVar15 = (char *)((int)pvVar5 + 0x1e1);
      for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; iVar8 = iStack_18, iVar6 = iStack_30, uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
  }
  else {
    wsprintfA((LPSTR)((int)pvVar5 + 0x1e1),&DAT_007c1890,*(short *)(iVar8 + 0x26));
  }
  if (cStack_5 != '\0') {
    iStack_34 = 0;
    if ((0x9b < *(ushort *)(iVar8 + 0x1e)) && (*(ushort *)(iVar8 + 0x1e) < 0x9f)) {
      iStack_34 = 4;
    }
    FUN_00710a90((int)puStack_20,0,iVar6 + 0x2f,
                 (*(int *)(pbStack_10 + 8) + -0xc) / 2 + iStack_34 + uStack_1c + iStack_14,0x11,0xc)
    ;
    FUN_00711b70((uint *)((int)pvVar5 + 0x1e1),-3,-1,0,-1,-1);
    piVar12 = (int *)(iStack_24 + (uStack_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + 0x2f + iStack_28;
    piVar12[1] = (*(int *)(pbStack_10 + 8) + -0xc) / 2 + iStack_34 + uStack_1c + iStack_14 +
                 iStack_2c;
    piVar12[2] = 0x11;
    piVar12[3] = 0xc;
    iVar8 = thunk_FUN_00524fe0(*(undefined2 *)(iStack_18 + 0x1e));
    piVar12[6] = iVar8;
    uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
    iVar8 = iStack_18;
  }
  switch(*(undefined2 *)(iVar8 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar12 = (int *)(iStack_24 + (uStack_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + 1 + iStack_28;
    piVar12[1] = iStack_14 + 2 + iStack_2c;
    break;
  default:
    piVar12 = (int *)(iStack_24 + (uStack_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + iStack_28;
    piVar12[1] = uStack_1c + iStack_14 + iStack_2c;
  }
  piVar12[2] = *(int *)(pbStack_10 + 4);
  piVar12[3] = *(int *)(pbStack_10 + 8);
  iVar8 = thunk_FUN_00524fe0(*(undefined2 *)(iVar8 + 0x1e));
  piVar12[6] = iVar8;
  DAT_00858df8 = puStack_7c;
  return;
}

