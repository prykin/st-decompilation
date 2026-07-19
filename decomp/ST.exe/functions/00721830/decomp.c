
undefined4 __thiscall FUN_00721830(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (*(int *)((int)this + 0x138) != 0) {
    if ((*(uint *)((int)this + 0x20) & 0x40) != 0) {
      if (((*(uint *)((int)this + 0x20) & 0x80) != 0) &&
         (uVar2 = FUN_00721790((int)this), *(uint *)((int)this + 0x134) <= uVar2)) {
        return 0;
      }
      uVar2 = FUN_007217e0((int)this);
      if (*(uint *)((int)this + 0x134) <= uVar2) {
        return 0;
      }
    }
    if (*(int *)(*(int *)((int)this + 0x138) + 8) == 0) {
      Library::DKW::TBL::FUN_006b5aa0(*(int *)((int)this + 0x138),PTR_DAT_007f0b04);
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
        pcVar4 = pcVar6;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (*(uint *)((int)this + 0x134) <= ~uVar2) {
          return 0;
        }
      }
      uVar2 = 0xffffffff;
      pcVar4 = pcVar6;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (*(uint *)((int)this + 0x134) <= ~uVar2 - 1) {
        return 0;
      }
    }
    uVar2 = 0xffffffff;
    pcVar4 = pcVar6;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = (char *)Library::DKW::LIB::FUN_006aac10(~uVar2 + ~uVar5);
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
    pcVar7 = pcVar4;
    for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00753050((int)pcVar4,*(int *)((int)this + 0x148) + *(int *)((int)this + 0x210),*param_1);
    Library::DKW::TBL::FUN_006b6020
              (*(int *)((int)this + 0x138),*(int *)((int)this + 0x144) + *(int *)((int)this + 0x20c)
               ,pcVar4);
    FUN_006a5e90((undefined4 *)pcVar4);
    FUN_00721080(this,*(int *)((int)this + 0x210) + 1,*(uint *)((int)this + 0x20c));
  }
  return 0;
}

