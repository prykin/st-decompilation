
int __cdecl
FUN_006f2e40(undefined4 param_1,char *param_2,undefined *param_3,undefined4 param_4,byte param_5)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar9;
  undefined1 local_250;
  char local_24f [515];
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar6 = FUN_006ad4d0(s_E__Ourlib_mfaobj_cpp_007efd3c,0x45,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7efd3c,0x47);
    if (-1 < iVar3) {
      return -1;
    }
    return iVar3;
  }
  if (param_3 == (undefined *)0x0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7efd3c,0x37);
  }
  uVar7 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  local_250 = 0xc;
  pcVar4 = pcVar4 + -uVar7;
  pcVar9 = local_24f;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_006f12b0(FUN_006f2d10,&local_250);
  pcVar4 = (char *)FUN_006f2790();
  while (pcVar4 != (char *)0x0) {
    puVar5 = FUN_006f2d90(param_1,pcVar4,param_5,1);
    iVar3 = FUN_006f2600(0xc,pcVar4,(undefined1 *)0x0,1);
    iVar3 = (*(code *)param_3)(puVar5,iVar3,param_1,pcVar4,param_4);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7efd3c,0x3f);
    }
    local_8 = local_8 + 1;
    pcVar4 = (char *)FUN_006f2790();
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return local_8;
}

