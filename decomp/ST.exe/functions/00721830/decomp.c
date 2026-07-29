
undefined4 __thiscall FUN_00721830(void *this,char *param_1)

{
  char cVar1;
  int local_EAX_34;
  int uVar2;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  short *psVar8;

  if (*(int *)((int)this + 0x138) != 0) {
    if ((*(uint *)((int)this + 0x20) & 0x40) != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((*(uint *)((int)this + 0x20) & 0x80) != 0) &&
         (local_EAX_34 = FUN_00721790(this), *(uint *)((int)this + 0x134) <= (uint)local_EAX_34)) {
        return 0;
      }
      uVar2 = FUN_007217e0(this);
      if (*(uint *)((int)this + 0x134) <= (uint)uVar2) {
        return 0;
      }
    }
    if ((*(uint **)((int)this + 0x138))[2] == 0) {
      Library::DKW::TBL::FUN_006b5aa0(*(uint **)((int)this + 0x138),PTR_DAT_007f0b04);
    }
    iVar2 = *(int *)((int)this + 0x20c) + *(int *)((int)this + 0x144);
    if (iVar2 < *(int *)(*(int *)((int)this + 0x138) + 8)) {
      pcVar6 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + iVar2 * 4);
    }
    else {
      pcVar6 = (char *)0x0;
    }
    if ((*(uint *)((int)this + 0x20) & 1) != 0) {
      if ((*(uint *)((int)this + 0x20) & 0x80) != 0) {
        uVar4 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (*(uint *)((int)this + 0x134) <= ~uVar4) {
          return 0;
        }
      }
      uVar4 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (*(uint *)((int)this + 0x134) <= ~uVar4 - 1) {
        return 0;
      }
    }
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
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
    psVar3 = (short *)Library::DKW::LIB::FUN_006aac10(~uVar4 + ~uVar5);
    uVar4 = 0xffffffff;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    psVar8 = psVar3;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      psVar8 = psVar8 + 2;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      psVar8 = (short *)((int)psVar8 + 1);
    }
    FUN_00753050((int)psVar3,*(int *)((int)this + 0x148) + *(int *)((int)this + 0x210),*param_1);
    Library::DKW::TBL::FUN_006b6020
              (*(uint **)((int)this + 0x138),
               *(int *)((int)this + 0x144) + *(int *)((int)this + 0x20c),(char *)psVar3);
    FUN_006a5e90(psVar3);
    FUN_00721080(this,*(int *)((int)this + 0x210) + 1,*(uint *)((int)this + 0x20c));
  }
  return 0;
}

