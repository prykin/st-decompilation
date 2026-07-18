
void __thiscall thunk_FUN_004fa570(void *this,int param_1,int param_2)

{
  code *pcVar1;
  void *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint uStack_c;
  void *pvStack_8;
  
  uStack_c = CONCAT31(uStack_c._1_3_,param_1 == 0);
  if (param_1 == 0) {
    if (param_2 == *(int *)((int)this + 0x138)) {
      return;
    }
    *(int *)((int)this + 0x138) = param_2;
  }
  else {
    if (param_2 == *(int *)((int)this + 0x134)) {
      return;
    }
    *(int *)((int)this + 0x134) = param_2;
  }
  puVar5 = (undefined4 *)((int)this + 0x18);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x28) = 0x24;
  if (param_2 == 0) {
    sVar2 = *(short *)((int)this + 0x241);
  }
  else {
    sVar2 = -*(short *)((int)this + 0x241);
  }
  *(short *)((int)this + 0x2e) = sVar2;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pvStack_8 = this;
  iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  this_00 = pvStack_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x452,0,iVar4,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar4,0,0x7c1bd8,0x452);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) {
    if (*(int *)((int)pvStack_8 + 0x9d0) != 0) {
      FUN_006e6080(pvStack_8,2,*(int *)((int)pvStack_8 + 0x9d0),
                   (undefined4 *)((int)pvStack_8 + 0x18));
    }
    piVar6 = (int *)((int)this_00 + 0xa15);
    iVar4 = 6;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)((int)this_00 + 0x18));
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar6 = (int *)((int)this_00 + 0xb1f);
    iVar4 = 6;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)((int)this_00 + 0x18));
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)((int)this_00 + 0xb37);
  }
  else {
    if (*(int *)((int)pvStack_8 + 0x95c) != 0) {
      FUN_006e6080(pvStack_8,2,*(int *)((int)pvStack_8 + 0x95c),
                   (undefined4 *)((int)pvStack_8 + 0x18));
    }
    piVar6 = (int *)((int)this_00 + 0x960);
    iVar4 = 4;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)((int)this_00 + 0x18));
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)((int)this_00 + 0x970);
  }
  if (iVar4 != 0) {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)((int)this_00 + 0x18));
  }
  uVar7 = uStack_c & 0xff;
  iVar4 = *(int *)((int)this_00 + uVar7 * 4 + 0x9c0);
  if (iVar4 != 0) {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)((int)this_00 + 0x18));
  }
  iVar4 = *(int *)((int)this_00 + uVar7 * 4 + 0x2fe);
  if (iVar4 != 0) {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)((int)this_00 + 0x18));
  }
  iVar4 = *(int *)((int)this_00 + uVar7 * 4 + 0x308);
  if (iVar4 != 0) {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)((int)this_00 + 0x18));
  }
  iVar4 = *(int *)((int)this_00 + uVar7 * 4 + 0x310);
  if (iVar4 != 0) {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)((int)this_00 + 0x18));
  }
  if (((char)uStack_c != '\0') && (iVar4 = *(int *)((int)this_00 + uVar7 * 4 + 0x314), iVar4 != 0))
  {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)((int)this_00 + 0x18));
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

