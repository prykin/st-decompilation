
undefined4 FUN_0051fba0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      if ((*(int *)(local_8 + 0x12e) != 0) &&
         (iVar2 = FUN_006e51b0(*(int *)(local_8 + 0x10)),
         *(uint *)(local_8 + 0x126) <= (uint)(iVar2 - *(int *)(local_8 + 0x122)))) {
        puVar3 = (undefined4 *)(local_8 + 0x18);
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        thunk_FUN_0051f8f0();
        *(undefined1 *)(local_8 + 0x11c) = 0;
        *(undefined4 *)(local_8 + 0x12e) = 0;
      }
      break;
    case 2:
      puVar3 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x30));
      *(undefined4 **)(local_8 + 0x11e) = puVar3;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar2 = 1;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      iVar2 = FUN_006b50c0((DAT_00806730 - ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e))
                           + -0x87,0x12,(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar3,iVar2);
      *(int *)(local_8 + 0x12a) = iVar2;
      uVar4 = *(uint *)(iVar2 + 0x14);
      if (uVar4 == 0) {
        uVar4 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar2 + 8);
      }
      puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      DAT_00801694 = local_8;
      break;
    case 3:
      DAT_00801694 = 0;
      if (*(uint **)(local_8 + 0x11e) != (uint *)0x0) {
        FUN_00710560(*(uint **)(local_8 + 0x11e));
        *(undefined4 *)(local_8 + 0x11e) = 0;
      }
      if (*(int *)(local_8 + 0x12a) != 0) {
        FUN_006ab060((undefined4 *)(local_8 + 0x12a));
      }
      break;
    case 5:
      thunk_FUN_0051f8f0();
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    uVar5 = FUN_006e5fd0();
    return uVar5;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x4d,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7c3e4c,0x4d);
  return 0xffff;
}

