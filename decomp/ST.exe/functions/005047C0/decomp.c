
uint FUN_005047c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined4 local_54;
  undefined4 local_50 [16];
  uint local_10;
  int local_c;
  uint local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    thunk_FUN_004f1d90(*(int *)(local_c + 0x194),param_1 + 0x39,0x65,
                       (uint)*(byte *)(local_c + 0xc33),0x2714);
    thunk_FUN_004f2130(*(int *)(local_c + 0x194),param_1 + 0x39,0x70,*(ushort *)(local_c + 0xc1c),
                       0xffff,3,0);
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)*(byte *)(local_c + 0xc33) * 0x28) / 100;
    uVar4 = (uint)*(byte *)(local_c + 0xc33) * -0x33333328;
    if (local_10 != 0) {
      uVar7 = 0;
      do {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)(local_c + 0x194),param_1 + 0xb + uVar7 * 4,0x5c,'\x01',
                           pbVar3);
        bVar5 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar5);
        uVar7 = (uint)bVar5;
        uVar4 = local_10;
      } while (uVar7 < local_10);
    }
    if ((byte)local_8 < 0x28) {
      iVar2 = param_1 + 0xb + (local_8 & 0xff) * 4;
      iVar6 = 0x28 - (local_8 & 0xff);
      do {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),0);
        uVar4 = thunk_FUN_00540760(*(undefined4 **)(local_c + 0x194),iVar2,0x5c,'\x01',pbVar3);
        iVar2 = iVar2 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return uVar4;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x57,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  uVar4 = FUN_006a5e40(iVar2,0,0x7c2700,0x57);
  return uVar4;
}

