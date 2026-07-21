
void FUN_006d0820(int param_1,int param_2,int param_3,int param_4,
                 AnonShape_006D0820_E08F8169 *param_5,int param_6,int param_7,int param_8,
                 int param_9,int param_10,int param_11,HPALETTE param_12)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  char *pcVar7;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (param_6 == 0) {
    param_6 = FUN_006b4fa0((int)param_5);
  }
  local_1c = param_5->field_0004;
  local_18 = param_5->field_0008;
  uVar4 = (uint)param_5->field_000E * local_1c + 0x1f >> 3 & 0x1ffffffc;
  local_20 = 0;
  local_24 = 0;
  uVar5 = -uVar4;
  if (local_18 < 0) {
    local_18 = -local_18;
    uVar5 = uVar4;
  }
  local_10 = param_8;
  local_14 = param_7;
  local_c = param_9;
  local_8 = param_10;
  iVar3 = FUN_006b0460(&local_14,&local_14,&local_24);
  if (iVar3 != 0) {
    pcVar7 = (char *)((((local_10 - param_8) + param_4) * param_2 - param_7) + local_14 + param_1 +
                     param_3);
    if ((int)uVar5 < 0) {
      iVar3 = -(((local_18 - local_10) + -1) * uVar5);
    }
    else {
      iVar3 = local_10 * uVar5;
    }
    puVar6 = (ushort *)(iVar3 + param_6 + local_14 * 2);
    param_6 = local_c;
    if ((param_5->field_0010 == 3) && (param_5->field_0028 == 0xf800)) {
      if (0 < local_8) {
        do {
          local_8 = local_8 + -1;
          iVar3 = param_6;
          if (0 < param_6) {
            do {
              uVar4 = (uint)*puVar6;
              puVar6 = puVar6 + 1;
              cVar2 = *(char *)(uVar4 + param_11);
              if (uVar4 < 0x8001) {
                if (cVar2 == -1) goto LAB_006d0950;
              }
              else if (cVar2 == '\0') {
LAB_006d0950:
                cVar2 = FUN_006d07d0(param_11,param_12,uVar4);
              }
              *pcVar7 = cVar2;
              pcVar7 = pcVar7 + 1;
              param_6 = param_6 + -1;
              iVar3 = local_c;
            } while (param_6 != 0);
          }
          pcVar7 = pcVar7 + (param_2 - iVar3);
          puVar6 = (ushort *)((int)puVar6 + uVar5 + iVar3 * -2);
          param_6 = iVar3;
          if (local_8 < 1) {
            return;
          }
        } while( true );
      }
    }
    else {
      while (0 < local_8) {
        local_8 = local_8 + -1;
        iVar3 = param_6;
        if (0 < param_6) {
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            uVar4 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
            cVar2 = *(char *)(uVar4 + param_11);
            if (uVar4 < 0x8001) {
              if (cVar2 == -1) goto LAB_006d09e1;
            }
            else if (cVar2 == '\0') {
LAB_006d09e1:
              cVar2 = FUN_006d07d0(param_11,param_12,uVar4);
            }
            *pcVar7 = cVar2;
            pcVar7 = pcVar7 + 1;
            param_6 = param_6 + -1;
            iVar3 = local_c;
          } while (param_6 != 0);
        }
        pcVar7 = pcVar7 + (param_2 - iVar3);
        puVar6 = (ushort *)((int)puVar6 + uVar5 + iVar3 * -2);
        param_6 = iVar3;
      }
    }
  }
  return;
}

