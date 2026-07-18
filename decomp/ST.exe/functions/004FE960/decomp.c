
void FUN_004fe960(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *local_50;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_50;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c23cc,0x8a);
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x180),0,0,'\x01',
                     *(byte **)((int)local_c + 0x954));
  thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x184),0,0,'\x01',
                     *(byte **)((int)local_c + 0x958));
  if (*(int *)((int)local_c + 0x2e2) != 0) {
    thunk_FUN_004f1890(local_c,0);
  }
  if (*(char *)((int)local_c + 0xb63) == '\0') {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x18c),0,0,'\x06',
                         *(byte **)((int)local_c + 0x978));
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x29e),1);
    puVar9 = *(undefined4 **)((int)local_c + 0x188);
  }
  else {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x18c),0,0,'\x06',
                         *(byte **)((int)local_c + 0x980));
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x29e),0);
    puVar9 = *(undefined4 **)((int)local_c + 0x188);
  }
  thunk_FUN_00540760(puVar9,0,0,'\x01',pbVar6);
LAB_004fea77:
  thunk_FUN_00500520(local_c,1);
  if (*(char *)((int)local_c + 0xb63) == '\x02') {
    uVar10 = *(undefined4 *)(*(int *)((int)local_c + 0xb95) + 0xc);
    uVar4 = FUN_006b0140(0x36b9,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s_0_d_007c245c,uVar4,uVar10);
    FUN_00710a90(*(int *)((int)local_c + 0x184),0,2,0xf,
                 *(int *)(*(int *)((int)local_c + 0x958) + 4) + -4,0x2d);
    FUN_00711b70(&DAT_0080f33a,-2,-1,0,-1,-1);
  }
  cVar8 = *(char *)((int)local_c + 0xb63);
  if (((cVar8 == '\x01') || (cVar8 == '\x04')) || (cVar8 == '\x03')) {
    thunk_FUN_004fe370(1);
    thunk_FUN_004fe4f0(local_c,1);
    iVar3 = *(int *)((int)local_c + 0xb66);
    if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      if (*(int *)((int)local_c + 0xb81) != 0) {
        uVar5 = thunk_FUN_00526ba0(*(int *)((int)local_c + 0xb81),*(char *)((int)local_c + 0xb85));
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x2be),uVar5);
        thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x184),0xb,0x31,'\x01',pbVar6);
        FUN_006b4170(*(int *)((int)local_c + 0x184),0,0x3b,0x31,7,0x21,0);
        bVar1 = *(byte *)((int)local_c + 0xb86);
        cVar8 = (char)(((uint)bVar1 * 0x21) / 100);
        local_8 = CONCAT31(local_8._1_3_,cVar8);
        if ((bVar1 != 0) && (cVar8 == '\0')) {
          local_8 = CONCAT31(local_8._1_3_,1);
        }
        if (bVar1 < 0x46) {
          iVar3 = (-(uint)(bVar1 < 0x14) & 5) + 5;
        }
        else {
          iVar3 = 0;
        }
        uVar5 = local_8 & 0xff;
        FUN_006b55f0(*(undefined4 **)((int)local_c + 0x184),0,0x3c,0x52 - uVar5,
                     *(int *)((int)local_c + 0x28a),0,iVar3,
                     *(int *)(*(int *)((int)local_c + 0x28a) + 8) - uVar5,5,uVar5);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)local_c + 0x2ca),1);
        thunk_FUN_00540760(*(undefined4 **)((int)local_c + 0x184),10,0x30,'\x06',pbVar6);
      }
    }
    else {
      thunk_FUN_004f2560(local_c,1);
    }
    if ((DAT_0080874e == '\x03') && (*(char *)((int)local_c + 0xb6a) == '\x03')) {
      thunk_FUN_004fe6c0(local_c,1);
    }
  }
  if (-1 < (int)*(uint *)((int)local_c + 0x148)) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x148),0xffffffff,
                 *(uint *)((int)local_c + 0x3c),*(uint *)((int)local_c + 0x94));
  }
  if (-1 < (int)*(uint *)((int)local_c + 0x14c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x14c),0xffffffff,
                 *(uint *)((int)local_c + 0x40),*(uint *)((int)local_c + 0x98));
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)*(uint *)((int)local_c + 0x150))) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x150),0xffffffff,
                 *(uint *)((int)local_c + 0x44),*(uint *)((int)local_c + 0x9c));
  }
  DAT_00858df8 = local_50;
  return;
}

