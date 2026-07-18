
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::LoadSequence */

undefined4 __thiscall
STT3DSprC::LoadSequence(STT3DSprC *this,byte param_1,int *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  code *pcVar2;
  STT3DSprC *this_00;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  byte *pbVar11;
  void *unaff_EDI;
  byte *pbVar12;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint local_14;
  STT3DSprC *local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_c = this;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x3b,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    return 0xffffffff;
  }
  if (*(int *)(local_c + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x22);
  }
  if (((char)param_1 < '\0') || (*(int *)(this_00 + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x23);
  }
  local_14 = (uint)(char)param_1;
  iVar3 = local_14 * 0x24;
  local_8 = iVar3;
  if (*(int *)(*(int *)(this_00 + 0x20) + iVar3) != 0) {
    iVar4 = UnLoadSequence(this_00,param_1);
    if (iVar4 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x24);
    }
  }
  puVar5 = FUN_00709af0(param_2,param_4,param_3,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(*(int *)(this_00 + 0x20) + iVar3) = puVar5;
  iVar4 = **(int **)(*(int *)(this_00 + 0x20) + iVar3);
  iVar6 = FUN_006aac70(iVar4 * 4);
  *(int *)(*(int *)(this_00 + 0x20) + 4 + iVar3) = iVar6;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(((int *)(*(int *)(this_00 + 0x20) + iVar3))[1] + -4 + iVar6 * 4) =
           *(undefined4 *)(*(int *)(*(int *)(this_00 + 0x20) + iVar3) + 0x2d + iVar6 * 4);
    } while (iVar6 < iVar4);
  }
  uVar8 = 0xffffffff;
  pbVar11 = param_3;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar1 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  } while (bVar1 != 0);
  iVar4 = FUN_006aac70(~uVar8);
  uVar8 = local_14;
  *(int *)(*(int *)(this_00 + 0x20) + 8 + iVar3) = iVar4;
  uVar9 = 0xffffffff;
  do {
    pbVar11 = param_3;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pbVar11 = param_3 + 1;
    bVar1 = *param_3;
    param_3 = pbVar11;
  } while (bVar1 != 0);
  uVar9 = ~uVar9;
  pbVar11 = pbVar11 + -uVar9;
  pbVar12 = *(byte **)(*(int *)(this_00 + 0x20) + 8 + local_8);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar12 = pbVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar12 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
  }
  *(byte *)(*(int *)(this_00 + 0x20) + 0xc + local_8) = param_4;
  *(undefined4 *)(*(int *)(this_00 + 0x20) + 0x18 + local_8) = 0;
  *(undefined4 *)(*(int *)(this_00 + 0x20) + 0x10 + local_8) = 0;
  ((undefined4 *)(*(int *)(this_00 + 0x20) + local_8))[5] =
       **(int **)(*(int *)(this_00 + 0x20) + local_8) + -1;
  *(undefined4 *)(*(int *)(this_00 + 0x20) + 0x20 + local_8) = 0;
  FUN_006e98e0(*(void **)(this_00 + 0x3c),*(uint *)(this_00 + 0x18),local_14,
               **(undefined4 **)(*(int *)(this_00 + 0x20) + local_8),
               *(int *)((int)*(undefined4 **)(*(int *)(this_00 + 0x20) + local_8) + 0x21),0);
  puVar5 = (ushort *)(*(int *)(this_00 + 0x20) + 0xe + local_8);
  *puVar5 = *puVar5 & 0xfe37;
  pbVar11 = (byte *)(*(int *)(this_00 + 0x20) + 0xe + local_8);
  *pbVar11 = *pbVar11 | 0x20;
  *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) & ~(1 << ((byte)uVar8 & 0x1f));
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

