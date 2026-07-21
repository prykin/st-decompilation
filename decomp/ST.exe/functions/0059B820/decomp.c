
void __fastcall FUN_0059b820(AnonShape_0059B820_F1E7AB4B *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;

  param_1->field_1A6B = 1;
  param_1->field_0029 = 2;
  switch(param_1->field_1A5F) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x89;
    if (param_1->field_1AC4 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AC4,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1AD8 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AD8,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1ADC != 0) {
      FUN_006e6080(param_1,2,param_1->field_1ADC,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1AE0 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AE0,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 0x29;
    if (param_1->field_1AC8 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AC8,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1ACC != 0) {
      FUN_006e6080(param_1,2,param_1->field_1ACC,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1AD4 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AD4,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 200;
    if (param_1->field_1AE4 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AE4,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_002D = 0x20;
    param_1->field_0031 = 1;
    if (param_1->field_1B14 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1B14,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 1;
    if (param_1->field_1AD0 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AD0,(undefined4 *)&param_1->field_0x1d);
    }
    iVar4 = param_1->field_1EB6;
    break;
  case 6:
    param_1->field_002D = 0x29;
    param_1->field_0031 = 9;
    if (param_1->field_1B10 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1B10,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 0x89;
    if (param_1->field_1AC4 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AC4,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1AC8 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AC8,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_002D = 0x20;
    param_1->field_0031 = 1;
    if (param_1->field_1B14 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1B14,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 1;
    if ((param_1->field_1B18 != 0) && (param_1->field_1A60 == '\0')) {
      FUN_006e6080(param_1,2,param_1->field_1B18,(undefined4 *)&param_1->field_0x1d);
    }
    if ((param_1->field_1B24 != 0) && (param_1->field_1A60 != '\0')) {
      FUN_006e6080(param_1,2,param_1->field_1B24,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1B1C != 0) {
      FUN_006e6080(param_1,2,param_1->field_1B1C,(undefined4 *)&param_1->field_0x1d);
    }
    iVar4 = param_1->field_1B20;
    param_1->field_0031 = 1;
    goto joined_r0x0059bcb0;
  case 8:
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x99;
    if (param_1->field_1AC4 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AC4,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 0x89;
    if (param_1->field_1AC8 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AC8,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_002D = 0x20;
    param_1->field_0031 = 1;
    if (param_1->field_1EB6 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1EB6,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1B24 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1B24,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = (uint)(param_1->field_1EC2 == 0x100);
    if (param_1->field_1EBA != 0) {
      FUN_006e6080(param_1,2,param_1->field_1EBA,(undefined4 *)&param_1->field_0x1d);
    }
    iVar4 = param_1->field_1B20;
    param_1->field_0031 = 1;
    break;
  case 9:
    param_1->field_0031 = (uint)(param_1->field_1EDF != 0);
    param_1->field_002D = 0x20;
    if (param_1->field_1ED3 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1ED3,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = (uint)((uint)param_1->field_1EDF < 0xf4230);
    if (param_1->field_1ED7 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1ED7,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 1;
    if (param_1->field_1EB6 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1EB6,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1EBA != 0) {
      FUN_006e6080(param_1,2,param_1->field_1EBA,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1B24 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1B24,(undefined4 *)&param_1->field_0x1d);
    }
    iVar4 = param_1->field_1AC4;
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x89;
joined_r0x0059bcb0:
    if (iVar4 == 0) goto switchD_0059b84b_default;
    goto LAB_0059bcb6;
  case 10:
    pbVar2 = param_1->field_1B0C;
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
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x89;
    if (iVar4 != 0) {
      param_1->field_0031 = 0x99;
    }
    if (param_1->field_1AD8 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AD8,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1ADC != 0) {
      FUN_006e6080(param_1,2,param_1->field_1ADC,(undefined4 *)&param_1->field_0x1d);
    }
    if (param_1->field_1AE0 != 0) {
      FUN_006e6080(param_1,2,param_1->field_1AE0,(undefined4 *)&param_1->field_0x1d);
    }
    param_1->field_0031 = 200;
    if (iVar4 != 0) {
      param_1->field_0031 = 0xcc;
    }
    iVar4 = param_1->field_1AE4;
    break;
  default:
    goto switchD_0059b84b_default;
  }
  if (iVar4 != 0) {
LAB_0059bcb6:
    FUN_006e6080(param_1,2,iVar4,(undefined4 *)&param_1->field_0x1d);
  }
switchD_0059b84b_default:
  param_1->field_002D = 0x61;
  param_1->field_0035 = 0;
  FUN_006e6080(param_1,0xf,0,(undefined4 *)&param_1->field_0x1d);
  return;
}

