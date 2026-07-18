
void __thiscall FUN_004fe6c0(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  uint local_c;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = *(int *)((int)this + 0x194);
    bVar7 = *(byte *)((int)this + 0xc6d);
  }
  else {
    local_8 = *(int *)((int)this + 0x18c);
    bVar7 = *(byte *)((int)this + 0xb7f);
  }
  local_c = CONCAT31(local_c._1_3_,bVar7);
  if (bVar7 < 0x65) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    local_10 = this;
    iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    pvVar2 = local_10;
    if (iVar3 != 0) {
      DAT_00858df8 = (undefined4 *)local_54;
      iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x4a,0,iVar3,&DAT_007a4ccc);
      if (iVar6 == 0) {
        FUN_006a5e40(iVar3,0,0x7c23cc,0x4a);
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == 0) {
      iVar3 = FUN_0070b3a0(*(int *)((int)local_10 + 0x2da),2);
      iVar6 = local_8;
      FUN_006b5440(local_8,0,199,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0(*(int *)((int)pvVar2 + 0x2da),3);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar8 = *(int *)(iVar4 + 8) - iVar3;
      FUN_006b5110(iVar6,0,199,iVar8 + 6,iVar4,0,0,iVar8,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = *(uint *)((int)pvVar2 + 0x15c);
      if ((int)uVar5 < 0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return;
      }
      uVar10 = *(uint *)((int)pvVar2 + 0xa8);
      uVar9 = *(uint *)((int)pvVar2 + 0x50);
    }
    else {
      iVar3 = FUN_0070b3a0(*(int *)((int)local_10 + 0x2da),0);
      iVar6 = local_8;
      FUN_006b5440(local_8,0,2,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0(*(int *)((int)pvVar2 + 0x2da),1);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar8 = *(int *)(iVar4 + 8) - iVar3;
      FUN_006b5110(iVar6,0,2,iVar8 + 6,iVar4,0,0,iVar8,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = *(uint *)((int)pvVar2 + 0x154);
      if ((int)uVar5 < 0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return;
      }
      uVar10 = *(uint *)((int)pvVar2 + 0xa0);
      uVar9 = *(uint *)((int)pvVar2 + 0x48);
    }
    FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,uVar9,uVar10);
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  return;
}

