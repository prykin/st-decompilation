
void FUN_0052db90(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(char *)(local_8 + 0x9c) != '\0') {
      if (*(byte **)(local_8 + 0x98) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(local_8 + 0x98));
      }
      puVar3 = FUN_006b54f0((uint *)0x0,10,10);
      *(uint **)(local_8 + 0x98) = puVar3;
      iVar2 = *(int *)(local_8 + 0x90);
      uVar7 = *(uint *)(iVar2 + 0x14);
      if (uVar7 == 0) {
        uVar7 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar2 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0x89898989;
        puVar4 = puVar4 + 1;
      }
      puVar3 = (uint *)(local_8 + 0x18);
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar4 = 0x89;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      iVar2 = 0xf;
      do {
        puVar3[0xf] = 0;
        FUN_006b2800((int)DAT_008075a8,*puVar3,0,0x13);
        FUN_006b3af0(DAT_008075a8,*puVar3);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined1 *)(local_8 + 0x9c) = 0;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0xa8,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c6f84,0xa8);
  return;
}

