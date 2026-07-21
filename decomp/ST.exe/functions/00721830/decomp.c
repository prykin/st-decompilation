
undefined4 __thiscall FUN_00721830(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  short *psVar8;

  if (*(int *)((int)this + 0x138) != 0) {
    if ((*(uint *)((int)this + 0x20) & 0x40) != 0) {
      if (((*(uint *)((int)this + 0x20) & 0x80) != 0) &&
         (uVar2 = FUN_00721790(this), *(uint *)((int)this + 0x134) <= uVar2)) {
        return 0;
      }
      uVar2 = FUN_007217e0(this);
      if (*(uint *)((int)this + 0x134) <= uVar2) {
        return 0;
      }
    }
    if ((*(uint **)((int)this + 0x138))[2] == 0) {
      Library::DKW::TBL::FUN_006b5aa0(*(uint **)((int)this + 0x138),PTR_DAT_007f0b04);
    }
    iVar3 = *(int *)((int)this + 0x20c) + *(int *)((int)this + 0x144);
    if (iVar3 < *(int *)(*(int *)((int)this + 0x138) + 8)) {
      pcVar6 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + iVar3 * 4);
    }
    else {
      pcVar6 = (char *)0x0;
    }
    if ((*(uint *)((int)this + 0x20) & 1) != 0) {
      if ((*(uint *)((int)this + 0x20) & 0x80) != 0) {
        uVar2 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (*(uint *)((int)this + 0x134) <= ~uVar2) {
          return 0;
        }
      }
      uVar2 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (*(uint *)((int)this + 0x134) <= ~uVar2 - 1) {
        return 0;
      }
    }
    uVar2 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    psVar4 = (short *)Library::DKW::LIB::FUN_006aac10(~uVar2 + ~uVar5);
    uVar2 = 0xffffffff;
    do {
      pcVar7 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar7 + -uVar2;
    psVar8 = psVar4;
    for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      psVar8 = psVar8 + 2;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)psVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      psVar8 = (short *)((int)psVar8 + 1);
    }
    FUN_00753050((int)psVar4,*(int *)((int)this + 0x148) + *(int *)((int)this + 0x210),*param_1);
    Library::DKW::TBL::FUN_006b6020
              (*(uint **)((int)this + 0x138),
               *(int *)((int)this + 0x144) + *(int *)((int)this + 0x20c),(char *)psVar4);
    FUN_006a5e90(psVar4);
    FUN_00721080(this,*(int *)((int)this + 0x210) + 1,*(uint *)((int)this + 0x20c));
  }
  return 0;
}

