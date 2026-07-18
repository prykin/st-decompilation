
uint * __cdecl FUN_0067dc20(int param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *_Source;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_2ec [516];
  char local_e8 [64];
  char local_a8 [12];
  char local_9c [36];
  char local_78 [32];
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint *local_c;
  ushort *local_8;
  
  puVar9 = (undefined4 *)local_2ec;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = 0;
  local_c = (uint *)0x0;
  local_8 = (ushort *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar6 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x156,0,iVar6,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
    FUN_006a5e40(iVar6,0,0x7d2fa4,0x158);
    return (uint *)0x0;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2fa4,0x13f);
  }
  local_c = FUN_006ae290((uint *)0x0,5,0x98,5);
  uVar7 = 0xffffffff;
  do {
    pcVar3 = param_3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar3 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar3;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  local_2ec[0] = 0xc;
  pcVar3 = pcVar3 + -uVar7;
  pcVar10 = local_2ec + 1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_006f12b0(FUN_006f2d10,local_2ec);
  pcVar3 = (char *)FUN_006f2790();
  while (pcVar3 != (char *)0x0) {
    local_8 = FUN_006f2d90(param_1,pcVar3,0,1);
    uVar7 = *(uint *)(local_8 + 0x85);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    if (local_8 != (ushort *)0x0) {
      if (((param_2 == 0) || (param_2 == *(short *)((int)local_8 + 0x19))) &&
         ((param_4 & uVar7) != 0)) {
        _Source = (char *)((int)local_8 + 0x1b);
        pcVar10 = local_e8;
        for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar10[0] = '\0';
          pcVar10[1] = '\0';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar10 = pcVar10 + 4;
        }
        _strncpy(local_e8,_Source,0x3f);
        _strncpy(local_a8,(char *)((int)local_8 + 0x5b),0xb);
        _strncpy(local_9c,pcVar3,0x1f);
        _strncpy(local_78,PTR_s_OBJECTIVES_0079d718,0x1f);
        local_54 = (int)*(short *)((int)local_8 + 0x19);
        local_58 = uVar7;
        FUN_006ae1c0(local_c,(undefined4 *)local_e8);
      }
      FUN_006f20e0((uint *)&local_8);
    }
    pcVar3 = (char *)FUN_006f2790();
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return local_c;
}

