
void FUN_00501190(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = FUN_0070b3a0(*(int *)(local_10 + 0x2b2),0);
    iVar3 = (*(int *)(*(int *)(local_10 + 0x18c) + 4) - *(int *)(iVar3 + 4)) / 2;
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2b2),-(uint)(DAT_0080874e != '\x01') & 6);
    thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x18c),iVar3,0x50,'\x01',pbVar4);
    local_8 = local_8 & 0xffffff00;
    if (*(char *)(local_10 + 0xbb6) != '\0') {
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x18c),iVar3 + 3 + (local_8 & 0xff) * 4,0x53,
                           '\x01',pbVar4);
        bVar2 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < *(byte *)(local_10 + 0xbb6));
    }
    uVar6 = local_8 & 0xff;
    local_c = CONCAT31(local_c._1_3_,(byte)local_8);
    local_14 = uVar6;
    if (uVar6 < *(byte *)(local_10 + 2999) + uVar6) {
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2b6),5);
        thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x18c),iVar3 + 3 + uVar6 * 4,0x53,'\x01',
                           pbVar4);
        bVar2 = (byte)local_c + 1;
        local_c = CONCAT31(local_c._1_3_,bVar2);
        uVar6 = (uint)bVar2;
      } while ((int)uVar6 < (int)(*(byte *)(local_10 + 2999) + local_14));
    }
    uVar6 = local_c & 0xff;
    local_8._0_1_ = (byte)local_c;
    local_14 = uVar6;
    if (uVar6 < *(byte *)(local_10 + 0xbb5) + uVar6) {
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x18c),iVar3 + 3 + uVar6 * 4,0x53,'\x01',
                           pbVar4);
        local_8._0_1_ = (byte)local_8 + 1;
        uVar6 = (uint)(byte)local_8;
      } while ((int)uVar6 < (int)(*(byte *)(local_10 + 0xbb5) + local_14));
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x32,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c2524,0x32);
  return;
}

