
void __thiscall FUN_00501d00(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  byte *pbVar9;
  bool bVar10;
  char local_5;
  
  cVar3 = '\0';
  local_5 = '\0';
  pcVar4 = (char *)((int)param_1 + 9);
  iVar7 = 6;
  do {
    if (*pcVar4 != '\0') {
      cVar3 = cVar3 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 6;
  psVar5 = (short *)((int)param_2 + 9);
  do {
    if ((char)*psVar5 != '\0') {
      local_5 = local_5 + '\x01';
    }
    psVar5 = (short *)((int)psVar5 + 1);
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
  psVar5 = (short *)((int)param_1 + 9);
  psVar8 = (short *)((int)param_2 + 9);
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if (bVar10) {
    if (*param_1 != *param_2) {
      *(undefined4 *)((int)this + 0x28) = 5;
      FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x2fe),(undefined4 *)((int)this + 0x18));
      bVar1 = 0;
      pcVar4 = (char *)((int)param_1 + 9);
      do {
        if (*pcVar4 != '\0') {
          thunk_FUN_004f17d0(this,1,bVar1);
        }
        bVar1 = bVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar1 < 6);
      thunk_FUN_004f1610(this,'\x01');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    if ((char)param_1[2] != (char)param_2[2]) {
      thunk_FUN_004f1610(this,'\x01');
    }
  }
  else {
    *(undefined4 *)((int)this + 0x28) = 5;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x2fe),(undefined4 *)((int)this + 0x18));
    bVar1 = 0;
    pcVar4 = (char *)((int)param_1 + 9);
    do {
      if (*pcVar4 != '\0') {
        thunk_FUN_004f17d0(this,1,bVar1);
      }
      bVar1 = bVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar1 < 6);
    thunk_FUN_004f1610(this,'\x01');
    thunk_FUN_0054a8d0(DAT_00802a30);
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)((int)param_1 + 0xf);
  psVar8 = (short *)((int)param_2 + 0xf);
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if ((!bVar10) || (*(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7))) {
    thunk_FUN_004f4570(this,'\x01',(int)param_1,(int)param_2);
  }
  if (((*(char *)((int)param_1 + 0x15) != *(char *)((int)param_2 + 0x15)) ||
      (*(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7))) &&
     (*(int *)((int)this + 0x9c0) != 0)) {
    *(undefined4 *)((int)this + 0x28) = 0x20;
    if (*(char *)((int)param_1 + 7) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)param_1 + 0x15);
    }
    *(uint *)((int)this + 0x2c) = uVar2;
    FUN_006e6080(this,2,*(int *)((int)this + 0x9c0),(undefined4 *)((int)this + 0x18));
  }
  pbVar9 = (byte *)((int)param_1 + 0x36);
  if ((*(int *)((int)param_1 + 0x36) != *(int *)((int)param_2 + 0x36)) ||
     (*(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7))) {
    piVar6 = (int *)((int)this + 0x960);
    param_2 = (int *)0x4;
    do {
      if (*piVar6 != 0) {
        *(undefined4 *)((int)this + 0x28) = 0x20;
        if (*(char *)((int)param_1 + 7) == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)*pbVar9;
        }
        *(uint *)((int)this + 0x2c) = uVar2;
        FUN_006e6080(this,2,*piVar6,(undefined4 *)((int)this + 0x18));
      }
      piVar6 = piVar6 + 1;
      pbVar9 = pbVar9 + 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return;
}

