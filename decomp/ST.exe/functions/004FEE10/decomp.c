
void FUN_004fee10(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 *puVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xb5,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c23cc,0xb5);
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)((int)local_8 + 0x1a0),0,0,'\x01',
                     *(byte **)((int)local_8 + 0xb43));
  thunk_FUN_00540760(*(undefined4 **)((int)local_8 + 0x19c),0,0,'\x01',
                     *(byte **)((int)local_8 + 0xb47));
  if (*(int *)((int)local_8 + 0x2e6) != 0) {
    thunk_FUN_004f1890(local_8,1);
  }
  if (*(char *)((int)local_8 + 0xc51) == '\0') {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)((int)local_8 + 0x194),0x73,0,'\x06',
                         *(byte **)((int)local_8 + 0x9f9));
      goto LAB_004fef26;
    }
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)((int)local_8 + 0x29e),1);
    puVar6 = *(undefined4 **)((int)local_8 + 0x198);
  }
  else {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)((int)local_8 + 0x194),0x73,0,'\x06',
                         *(byte **)((int)local_8 + 0xa01));
      goto LAB_004fef26;
    }
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)((int)local_8 + 0x29e),0);
    puVar6 = *(undefined4 **)((int)local_8 + 0x198);
  }
  thunk_FUN_00540760(puVar6,0,0,'\x01',pbVar4);
LAB_004fef26:
  thunk_FUN_00500520(local_8,0);
  cVar1 = *(char *)((int)local_8 + 0xc51);
  if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\x03')) {
    thunk_FUN_004fe370(0);
    iVar3 = *(int *)((int)local_8 + 0xc54);
    if (((iVar3 != 0xdd) && (iVar3 != 0xde)) && (iVar3 != 0xe0)) {
      thunk_FUN_004fe4f0(local_8,0);
    }
    iVar3 = *(int *)((int)local_8 + 0xc54);
    if (((iVar3 != 0xdd) && (iVar3 != 0xde)) && (iVar3 != 0xe0)) {
      thunk_FUN_004f2560(local_8,0);
    }
    if ((DAT_0080874e == '\x03') && (*(char *)((int)local_8 + 0xc58) == '\x03')) {
      thunk_FUN_004fe6c0(local_8,0);
    }
  }
  if (-1 < (int)*(uint *)((int)local_8 + 0x168)) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_8 + 0x168),0xffffffff,
                 *(uint *)((int)local_8 + 0x5c),*(uint *)((int)local_8 + 0xb4));
  }
  if (-1 < (int)*(uint *)((int)local_8 + 0x164)) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_8 + 0x164),0xffffffff,
                 *(uint *)((int)local_8 + 0x58),*(uint *)((int)local_8 + 0xb0));
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)*(uint *)((int)local_8 + 0x160))) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_8 + 0x160),0xffffffff,
                 *(uint *)((int)local_8 + 0x54),*(uint *)((int)local_8 + 0xac));
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

