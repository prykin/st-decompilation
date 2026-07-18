
void thunk_FUN_0051d540(void *param_1,int param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  LPSTR pCVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  int aiStack_34 [7];
  int iStack_18;
  UINT UStack_14;
  void *pvStack_10;
  uint uStack_c;
  ushort *puStack_8;
  
  pvVar12 = param_1;
  iVar3 = param_2;
  UStack_14 = thunk_FUN_00529d80(param_1,param_2);
  piVar13 = aiStack_34;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  *(undefined1 *)piVar13 = 0;
  uStack_c = 0;
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = &uStack_78;
  iVar3 = __setjmp3(auStack_74,0,pvVar12,iVar3);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x973,0,iVar3,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar3,0,0x7c383c,0x973);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 != '\0') goto LAB_0051d689;
  cVar1 = *(char *)((int)pvStack_10 + 0x1a1);
  if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
    *(char *)((int)pvStack_10 + 0x1a2) = cVar1;
    *(undefined4 *)((int)pvStack_10 + 0x1ab) = *(undefined4 *)((int)pvStack_10 + 0x1a3);
  }
  else {
    *(undefined1 *)((int)pvStack_10 + 0x1a2) = 0;
    *(undefined4 *)((int)pvStack_10 + 0x1ab) = 0;
  }
  *(undefined1 *)((int)pvStack_10 + 0x1a1) = 8;
  *(void **)((int)pvStack_10 + 0x1a3) = param_1;
  *(int *)((int)pvStack_10 + 0x1a7) = param_2;
  *(undefined2 *)((int)pvStack_10 + 0x1af) = 0x14;
  *(undefined2 *)((int)pvStack_10 + 0x1b1) = 5;
  if (*(int *)((int)pvStack_10 + 0x178) != 0) {
    *(undefined4 *)((int)pvStack_10 + 0x28) = 0x4202;
    *(undefined2 *)((int)pvStack_10 + 0x2c) = 0;
    *(undefined2 *)((int)pvStack_10 + 0x2e) = 2;
    *(int *)((int)pvStack_10 + 0x30) = *(int *)((int)pvStack_10 + 0x178);
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)((int)pvStack_10 + 0x18);
    }
  }
  bVar7 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar7 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar7 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar7 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar7 & 0x1f);
LAB_0051d689:
  thunk_FUN_00515310(0x55f2,0,0);
  uVar9 = uStack_c;
  if (UStack_14 != 10000) {
    pcVar4 = (char *)FUN_006b0140(UStack_14,DAT_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar11 = pcVar4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar11 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar4 = pcVar11 + -uVar9;
    pcVar11 = (char *)&DAT_0080f33a;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00712d30((char *)&DAT_0080f33a,&DAT_0080f33a,(uint *)s________________007c21d8,
                 (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar9 = FUN_007113e0(*(void **)((int)pvStack_10 + 0x1e0),&DAT_0080f33a);
    uStack_c = uVar9;
    thunk_FUN_00511ab0(pvStack_10,0,uVar9);
    FUN_00710a90(*(int *)((int)pvStack_10 + 0x218),0,0,0,0x19c,uVar9 + 2);
    FUN_00711b70(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  thunk_FUN_00511ab0(pvStack_10,uVar9,0x1e);
  iVar8 = 1;
  piVar13 = (int *)0x0;
  uVar10 = (uint)(DAT_0080734d != '\0');
  iVar3 = 1;
  pCVar5 = thunk_FUN_00571240(s_BUT_HLPTDAY_007c3da8,0);
  pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar10);
  puStack_8 = FUN_006f1ce0(1,pCVar5,piVar13,iVar8);
  iVar3 = uVar9 + 10;
  thunk_FUN_00540760(*(undefined4 **)((int)pvStack_10 + 0x218),0x50,iVar3,'\x01',(byte *)puStack_8);
  iStack_18 = *(int *)(puStack_8 + 2);
  FUN_00710a90(*(int *)((int)pvStack_10 + 0x218),0,iStack_18 + 0x5f,iVar3,0x13d - iStack_18,0xf);
  uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar14 = -1;
  iVar8 = 1;
  puVar6 = (uint *)FUN_006b0140(0x5c93,DAT_00807618);
  FUN_007119c0(puVar6,iVar8,iVar14,uVar10);
  aiStack_34[0] = 0x50;
  aiStack_34[2] = iStack_18;
  aiStack_34[3] = *(int *)(puStack_8 + 4);
  aiStack_34[1] = iVar3;
  FUN_006ae1c0(*(uint **)((int)pvStack_10 + 0x1d7),aiStack_34);
  FUN_006f20e0((uint *)&puStack_8);
  thunk_FUN_00511ab0(pvStack_10,uVar9 + 0x1e,10);
  uStack_c = (uVar9 / 10 + 1) * 10;
  iVar3 = (*(ushort *)((int)pvStack_10 + 0x1af) - 0x118) + uStack_c;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)*(ushort *)((int)pvStack_10 + 0x1b1) + 1;
  }
  thunk_FUN_00512830(iVar3);
  FUN_006b5110(*(int *)((int)pvStack_10 + 0x68),0,0x21,*(ushort *)((int)pvStack_10 + 0x1af) + 0x16,
               *(int *)((int)pvStack_10 + 0x218),0,0,0,0x19c,
               0x117 - (uint)*(ushort *)((int)pvStack_10 + 0x1af),0xff);
  FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_10 + 0x60),0xffffffff,
               *(uint *)((int)pvStack_10 + 0x3c),*(uint *)((int)pvStack_10 + 0x44));
  DAT_00858df8 = (undefined4 *)uStack_78;
  return;
}

