
void __fastcall thunk_FUN_0059b820(void *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined4 *)((int)param_1 + 0x1a6b) = 1;
  *(undefined4 *)((int)param_1 + 0x29) = 2;
  switch(*(undefined1 *)((int)param_1 + 0x1a5f)) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 0x89;
    if (*(int *)((int)param_1 + 0x1ac4) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ac4),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1ad8) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ad8),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1adc) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1adc),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1ae0) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ae0),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 0x29;
    if (*(int *)((int)param_1 + 0x1ac8) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ac8),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1acc) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1acc),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1ad4) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ad4),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 200;
    if (*(int *)((int)param_1 + 0x1ae4) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ae4),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    if (*(int *)((int)param_1 + 0x1b14) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b14),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    if (*(int *)((int)param_1 + 0x1ad0) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ad0),(undefined4 *)((int)param_1 + 0x1d));
    }
    iVar4 = *(int *)((int)param_1 + 0x1eb6);
    break;
  case 6:
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 9;
    if (*(int *)((int)param_1 + 0x1b10) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b10),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 0x89;
    if (*(int *)((int)param_1 + 0x1ac4) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ac4),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1ac8) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ac8),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    if (*(int *)((int)param_1 + 0x1b14) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b14),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    if ((*(int *)((int)param_1 + 0x1b18) != 0) && (*(char *)((int)param_1 + 0x1a60) == '\0')) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b18),(undefined4 *)((int)param_1 + 0x1d));
    }
    if ((*(int *)((int)param_1 + 0x1b24) != 0) && (*(char *)((int)param_1 + 0x1a60) != '\0')) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b24),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1b1c) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b1c),(undefined4 *)((int)param_1 + 0x1d));
    }
    iVar4 = *(int *)((int)param_1 + 0x1b20);
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    goto joined_r0x0059bcb0;
  case 8:
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 0x99;
    if (*(int *)((int)param_1 + 0x1ac4) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ac4),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 0x89;
    if (*(int *)((int)param_1 + 0x1ac8) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ac8),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    if (*(int *)((int)param_1 + 0x1eb6) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1eb6),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1b24) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b24),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(uint *)((int)param_1 + 0x31) = (uint)(*(int *)((int)param_1 + 0x1ec2) == 0x100);
    if (*(int *)((int)param_1 + 0x1eba) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1eba),(undefined4 *)((int)param_1 + 0x1d));
    }
    iVar4 = *(int *)((int)param_1 + 0x1b20);
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    break;
  case 9:
    *(uint *)((int)param_1 + 0x31) = (uint)(*(int *)((int)param_1 + 0x1edf) != 0);
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    if (*(int *)((int)param_1 + 0x1ed3) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ed3),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(uint *)((int)param_1 + 0x31) = (uint)(*(uint *)((int)param_1 + 0x1edf) < 0xf4230);
    if (*(int *)((int)param_1 + 0x1ed7) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ed7),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    if (*(int *)((int)param_1 + 0x1eb6) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1eb6),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1eba) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1eba),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1b24) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1b24),(undefined4 *)((int)param_1 + 0x1d));
    }
    iVar4 = *(int *)((int)param_1 + 0x1ac4);
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 0x89;
joined_r0x0059bcb0:
    if (iVar4 == 0) goto switchD_0059b84b_default;
    goto LAB_0059bcb6;
  case 10:
    pbVar2 = *(byte **)((int)param_1 + 0x1b0c);
    pbVar3 = &DAT_00807e1d;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0059bb67:
        iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0059bb6c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0059bb67;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0059bb6c:
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 0x89;
    if (iVar4 != 0) {
      *(undefined4 *)((int)param_1 + 0x31) = 0x99;
    }
    if (*(int *)((int)param_1 + 0x1ad8) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ad8),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1adc) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1adc),(undefined4 *)((int)param_1 + 0x1d));
    }
    if (*(int *)((int)param_1 + 0x1ae0) != 0) {
      FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1ae0),(undefined4 *)((int)param_1 + 0x1d));
    }
    *(undefined4 *)((int)param_1 + 0x31) = 200;
    if (iVar4 != 0) {
      *(undefined4 *)((int)param_1 + 0x31) = 0xcc;
    }
    iVar4 = *(int *)((int)param_1 + 0x1ae4);
    break;
  default:
    goto switchD_0059b84b_default;
  }
  if (iVar4 != 0) {
LAB_0059bcb6:
    FUN_006e6080(param_1,2,iVar4,(undefined4 *)((int)param_1 + 0x1d));
  }
switchD_0059b84b_default:
  *(undefined4 *)((int)param_1 + 0x2d) = 0x61;
  *(undefined4 *)((int)param_1 + 0x35) = 0;
  FUN_006e6080(param_1,0xf,0,(undefined4 *)((int)param_1 + 0x1d));
  return;
}

