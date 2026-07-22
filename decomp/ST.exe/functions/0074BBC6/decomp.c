
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00747D92 -> 0074BBC6 @ 00747DD6 */

undefined4 __thiscall FUN_0074bbc6(void *this,AnonShape_0074BBC6_71B34D24 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  AnonShape_0074BBC6_71B34D24 *pAVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;

  iVar2 = 0x10;
  bVar6 = true;
  pAVar3 = param_1;
  pcVar4 = "";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *(char *)pAVar3 == *pcVar4;
    pAVar3 = (AnonShape_0074BBC6_71B34D24 *)&pAVar3->field_0x1;
    pcVar4 = pcVar4 + 1;
  } while (bVar6);
  if (bVar6) {
LAB_0074bbef:
    iVar2 = 0x10;
    bVar6 = true;
    pcVar4 = &param_1->field_0x10;
    pcVar5 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar4 = (char *)((int)this + 0x10);
      pcVar5 = &param_1->field_0x10;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) goto cf_common_exit_0074BC42;
    }
    iVar2 = 0x10;
    bVar6 = true;
    pcVar4 = &param_1->field_0x2c;
    pcVar5 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar4 = (char *)((int)this + 0x2c);
      pcVar5 = &param_1->field_0x2c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if ((!bVar6) || (iVar2 = *(int *)((int)this + 0x40), iVar2 != param_1->field_0040))
      goto cf_common_exit_0074BC42;
      if (iVar2 != 0) {
        bVar6 = true;
        pcVar4 = *(char **)((int)this + 0x44);
        pcVar5 = param_1->field_0044;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (!bVar6) goto cf_common_exit_0074BC42;
      }
    }
    uVar1 = 1;
  }
  else {
    iVar2 = 0x10;
    bVar6 = true;
    pcVar4 = this;
    pAVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *(char *)pAVar3;
      pcVar4 = pcVar4 + 1;
      pAVar3 = (AnonShape_0074BBC6_71B34D24 *)&pAVar3->field_0x1;
    } while (bVar6);
    if (bVar6) goto LAB_0074bbef;
cf_common_exit_0074BC42:
    uVar1 = 0;
  }
  return uVar1;
}

