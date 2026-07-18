
void FUN_00505df0(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x194),0x33,0x7b,'\x01',pbVar3);
    if (*(short *)(local_c + 0xc2f) != 0) {
      FUN_00710a90(*(int *)(local_c + 0x194),0,0x24,0x4c,0xa4,0x2b);
      uVar4 = FUN_006b0140(0x38ae,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2840,(uint)*(ushort *)(local_c + 0xc2f),uVar4);
      FUN_00711b70(&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (*(byte *)(local_c + 0xc29) != 0xff) {
      if (0x21 < *(byte *)(local_c + 0xc29)) {
        *(undefined1 *)(local_c + 0xc29) = 0x21;
      }
      bVar5 = 0;
      local_8 = local_8 & 0xffffff00;
      if (*(char *)(local_c + 0xc29) != '\0') {
        do {
          pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x194),(local_8 & 0xff) * 4 + 0x35,0x7d,
                             '\x01',pbVar3);
          bVar5 = bVar5 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar5);
        } while (bVar5 < *(byte *)(local_c + 0xc29));
      }
      if (bVar5 < 0x21) {
        iVar6 = 0x21 - (local_8 & 0xff);
        iVar2 = (local_8 & 0xff) * 4 + 0x35;
        do {
          pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x194),iVar2,0x7d,'\x01',pbVar3);
          iVar2 = iVar2 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    DAT_00858df8 = local_50;
    return;
  }
  DAT_00858df8 = local_50;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x19a,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c2700,0x19a);
  return;
}

