
void __thiscall
FUN_00501d00(void *this,AnonShape_00501D00_3942B646 *param_1,AnonShape_00501D00_04A7E309 *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  bool bVar10;
  char local_5;

  cVar3 = '\0';
  local_5 = '\0';
  pcVar4 = &param_1->field_0x9;
  iVar7 = 6;
  do {
    if (*pcVar4 != '\0') {
      cVar3 = cVar3 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 6;
  pcVar4 = &param_2->field_0x9;
  do {
    if (*pcVar4 != '\0') {
      local_5 = local_5 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (cVar3 != local_5) {
    if (DAT_0080874e != '\x03') {
      CPanelTy::SetControlBoat(this);
      return;
    }
    CPanelTy::SetControlBoatSI(this);
    return;
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)&param_1->field_0x9;
  psVar8 = (short *)&param_2->field_0x9;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if (bVar10) {
    if (*(int *)param_1 != *(int *)param_2) {
      *(undefined4 *)((int)this + 0x28) = 5;
      FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x2fe),(undefined4 *)((int)this + 0x18));
      bVar1 = 0;
      pcVar4 = &param_1->field_0x9;
      do {
        if (*pcVar4 != '\0') {
          CPanelTy::sub_004F17D0(this,1,bVar1);
        }
        bVar1 = bVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar1 < 6);
      CPanelTy::sub_004F1610(this,'\x01');
      CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
    }
    if (param_1->field_0x8 != param_2->field_0x8) {
      CPanelTy::sub_004F1610(this,'\x01');
    }
  }
  else {
    *(undefined4 *)((int)this + 0x28) = 5;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x2fe),(undefined4 *)((int)this + 0x18));
    bVar1 = 0;
    pcVar4 = &param_1->field_0x9;
    do {
      if (*pcVar4 != '\0') {
        CPanelTy::sub_004F17D0(this,1,bVar1);
      }
      bVar1 = bVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar1 < 6);
    CPanelTy::sub_004F1610(this,'\x01');
    CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)&param_1->field_0xf;
  psVar8 = (short *)&param_2->field_0xf;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if ((!bVar10) || (param_1->field_0007 != param_2->field_0007)) {
    CPanelTy::sub_004F4570(this,'\x01',(int)param_1,(int)param_2);
  }
  if (((param_1->field_0015 != param_2->field_0015) || (param_1->field_0007 != param_2->field_0007))
     && (*(int *)((int)this + 0x9c0) != 0)) {
    *(undefined4 *)((int)this + 0x28) = 0x20;
    if (param_1->field_0007 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(byte)param_1->field_0015;
    }
    *(uint *)((int)this + 0x2c) = uVar2;
    FUN_006e6080(this,2,*(int *)((int)this + 0x9c0),(undefined4 *)((int)this + 0x18));
  }
  piVar9 = &param_1->field_0036;
  if ((param_1->field_0036 != param_2->field_0036) || (param_1->field_0007 != param_2->field_0007))
  {
    piVar6 = (int *)((int)this + 0x960);
    param_2 = (AnonShape_00501D00_04A7E309 *)0x4;
    do {
      if (*piVar6 != 0) {
        *(undefined4 *)((int)this + 0x28) = 0x20;
        if (param_1->field_0007 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(byte)*piVar9;
        }
        *(uint *)((int)this + 0x2c) = uVar2;
        FUN_006e6080(this,2,*piVar6,(undefined4 *)((int)this + 0x18));
      }
      piVar6 = piVar6 + 1;
      piVar9 = (int *)((int)piVar9 + 1);
      param_2 = (AnonShape_00501D00_04A7E309 *)&param_2[-1].field_0x3b;
    } while (param_2 != (AnonShape_00501D00_04A7E309 *)0x0);
  }
  return;
}

