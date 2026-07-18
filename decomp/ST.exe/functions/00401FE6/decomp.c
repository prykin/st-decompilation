
void thunk_FUN_0052d980(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  uint *puVar8;
  void *unaff_EDI;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  byte bStack_5;
  
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_5c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x95,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7c6f84,0x95);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_10 = -0x18 - iStack_18;
  bStack_5 = 0;
  iStack_14 = 0;
  uStack_c = 0x1e;
  puVar8 = (uint *)(iStack_18 + 0x18);
  do {
    iVar3 = iStack_14;
    if ((DAT_00807342 == 0) || (*(byte *)(iStack_18 + 0x9c) <= bStack_5)) {
LAB_0052da81:
      puVar8[0xf] = 0;
      FUN_006b2800((int)DAT_008075a8,*puVar8,0,0x13);
      FUN_006b3af0(DAT_008075a8,*puVar8);
    }
    else {
      iVar6 = *(int *)(iStack_18 + 0x98);
      if (iStack_14 < *(int *)(iVar6 + 8)) {
        iVar7 = *(int *)(*(int *)(iVar6 + 0x14) + iStack_10 + (int)puVar8);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) goto LAB_0052da81;
      if (iStack_14 < *(int *)(iVar6 + 8)) {
        puVar4 = *(uint **)(*(int *)(iVar6 + 0x14) + iStack_10 + (int)puVar8);
      }
      else {
        puVar4 = (uint *)0x0;
      }
      uVar5 = FUN_00711110(*(void **)(iStack_18 + 0x94),puVar4);
      uVar1 = *(uint *)(*(int *)(iStack_18 + 0x90) + 4);
      if ((int)uVar1 <= (int)uVar5) {
        uVar5 = uVar1;
      }
      puVar8[0xf] = uVar5;
      FUN_006b2800((int)DAT_008075a8,*puVar8,uVar5,0x13);
      FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0xd,uStack_c);
      FUN_006b3430(DAT_008075a8,*puVar8);
    }
    bStack_5 = bStack_5 + 1;
    iStack_14 = iVar3 + 1;
    puVar8 = puVar8 + 1;
    uStack_c = uStack_c + 0x13;
    if (0xe < bStack_5) {
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return;
    }
  } while( true );
}

