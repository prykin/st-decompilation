
void __thiscall thunk_FUN_004ff110(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  void *this_00;
  undefined1 *puVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  ushort *puVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  byte bStack_14;
  undefined3 uStack_13;
  void *pvStack_10;
  uint uStack_c;
  undefined1 *puStack_8;
  
  if (param_1 == 0) {
    puStack_8 = (undefined1 *)((int)this + 0xc51);
  }
  else {
    puStack_8 = (undefined1 *)((int)this + 0xb63);
  }
  uStack_c = CONCAT31(uStack_c._1_3_,param_1 == 0);
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pvStack_10 = this;
  iVar6 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  puVar4 = puStack_8;
  uVar2 = uStack_c;
  this_00 = pvStack_10;
  if (iVar6 == 0) {
    uVar10 = uStack_c & 0xff;
    cVar1 = *(char *)(uVar10 + 0x2ec + (int)pvStack_10);
    if (cVar1 == '\x01') {
      puVar13 = (undefined4 *)0x0;
      iVar12 = 0;
      iVar6 = 1;
      bVar5 = 0;
      uVar11 = 6;
      if (DAT_0080731a != 0) {
        pbVar8 = (byte *)thunk_FUN_00526100(puStack_8,1);
        puVar9 = FUN_00709af0(DAT_00806794,0x1f,pbVar8,uVar11,bVar5,iVar6,iVar12,puVar13);
        *(ushort **)((int)this_00 + uVar10 * 4 + 0x2e2) = puVar9;
        *(undefined1 *)(uVar10 + 0x2ec + (int)this_00) = 5;
        *(undefined1 *)(uVar10 + 0x2ea + (int)this_00) = 0;
        pcVar7 = thunk_FUN_00526100(puVar4,0);
        *(char **)((int)this_00 + uVar10 * 4 + 0x2f6) = pcVar7;
        thunk_FUN_005252c0(0xb3);
        DAT_00858df8 = (undefined4 *)uStack_58;
        return;
      }
      pbVar8 = (byte *)thunk_FUN_00526100(puStack_8,0);
      puVar9 = FUN_00709af0(DAT_00806794,0x1f,pbVar8,uVar11,bVar5,iVar6,iVar12,puVar13);
      *(ushort **)((int)this_00 + uVar10 * 4 + 0x2e2) = puVar9;
      *(undefined1 *)(uVar10 + 0x2ea + (int)this_00) = 0;
      thunk_FUN_004f1890(this_00,(byte)uVar2);
      bVar5 = (-(param_1 != 0) & 0xf8U) + 8;
      _bStack_14 = CONCAT31(uStack_13,bVar5);
      if (bVar5 < 0xb) {
        uVar10 = (uint)bVar5;
        uVar2 = *(uint *)((int)this_00 + uVar10 * 4 + 0x148);
        if (-1 < (int)uVar2) {
          FUN_006b3640(DAT_008075a8,uVar2,0xffffffff,*(uint *)((int)this_00 + uVar10 * 4 + 0x3c),
                       *(uint *)((int)this_00 + uVar10 * 4 + 0x94));
        }
      }
    }
    else if (cVar1 == '\x05') {
      pcVar7 = thunk_FUN_00526100(puStack_8,0);
      *(char **)((int)this_00 + uVar10 * 4 + 0x2f6) = pcVar7;
      DAT_00858df8 = (undefined4 *)uStack_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar12 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xd3,0,iVar6,&DAT_007a4ccc);
  if (iVar12 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar6,0,0x7c23cc,0xd3);
  return;
}

