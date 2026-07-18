
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecRen */

undefined4 __thiscall
cMf32::RecRen(cMf32 *this,undefined1 param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  cMf32 *this_00;
  int iVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  char *pcVar12;
  ushort *puVar13;
  undefined4 local_58;
  undefined4 local_54 [16];
  cMf32 *local_14;
  undefined4 *local_10;
  ushort *local_c;
  ushort *local_8;
  
  local_10 = (undefined4 *)0x0;
  local_8 = (ushort *)0x0;
  local_c = (ushort *)0x0;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_14 = this;
  iVar4 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    if (local_8 != (ushort *)0x0) {
      FUN_006ab060(&local_8);
    }
    if (local_c != (ushort *)0x0) {
      FUN_006ab060(&local_c);
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_006ab060(&local_10);
    }
    if ((param_4 != 0) || (iVar4 != -4)) {
      iVar7 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x182,0,iVar4,&DAT_007a4ccc);
      if (iVar7 != 0) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      FUN_006a5e40(iVar4,0,0x7efaa4,0x184);
    }
    return 0;
  }
  uVar9 = 0xffffffff;
  pcVar12 = param_2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  local_8 = (ushort *)FUN_006aac10(~uVar9 + 0x17);
  this_00 = local_14;
  *(undefined1 *)local_8 = param_1;
  iVar4 = -1;
  pcVar12 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  local_8[0xb] = ~(ushort)iVar4 - 1;
  uVar2 = local_8[0xb];
  puVar13 = local_8 + 0xc;
  for (uVar9 = (uint)(int)(short)uVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)puVar13 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar13 = puVar13 + 2;
  }
  for (uVar9 = (int)(short)uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(char *)puVar13 = *param_2;
    param_2 = param_2 + 1;
    puVar13 = (ushort *)((int)puVar13 + 1);
  }
  DVar5 = FUN_00751980(*(int **)local_14,local_8,(undefined4 *)0x0,0);
  if (DVar5 == 0xfffffffc) {
    FUN_006a5e40(-4,DAT_007ed77c,0x7efaa4,0x163);
  }
  puVar6 = (undefined4 *)FUN_006f1cb0(this_00,DVar5);
  local_10 = FUN_006aac10(*(uint *)((int)local_8 + 1));
  uVar9 = *(uint *)((int)local_8 + 1);
  puVar11 = local_10;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  uVar9 = 0xffffffff;
  pcVar12 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  local_c = (ushort *)FUN_006aac10(~uVar9 + 0x17);
  iVar4 = -1;
  *(char *)local_c = (char)*local_8;
  pcVar12 = param_3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  local_c[0xb] = ~(ushort)iVar4 - 1;
  uVar2 = local_c[0xb];
  puVar13 = local_c + 0xc;
  for (uVar9 = (uint)(int)(short)uVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)puVar13 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    puVar13 = puVar13 + 2;
  }
  for (uVar9 = (int)(short)uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(char *)puVar13 = *param_3;
    param_3 = param_3 + 1;
    puVar13 = (ushort *)((int)puVar13 + 1);
  }
  *(undefined4 *)((int)local_c + 1) = *(undefined4 *)((int)local_8 + 1);
  *(undefined1 *)((int)local_c + 5) = *(undefined1 *)((int)local_8 + 5);
  *(undefined4 *)(local_c + 3) = *(undefined4 *)(local_8 + 3);
  *(undefined4 *)(local_c + 5) = *(undefined4 *)(local_8 + 5);
  *(undefined4 *)(local_c + 7) = *(undefined4 *)(local_8 + 7);
  *(undefined4 *)(local_c + 9) = *(undefined4 *)(local_8 + 9);
  FUN_00751100(*(uint **)this_00,local_8);
  if (local_8 != (ushort *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_00751050(*(uint **)this_00,local_c,local_10,*(uint *)((int)local_c + 1));
  if (local_c != (ushort *)0x0) {
    FUN_006ab060(&local_c);
  }
  if (local_10 != (undefined4 *)0x0) {
    FUN_006ab060(&local_10);
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return 1;
}

