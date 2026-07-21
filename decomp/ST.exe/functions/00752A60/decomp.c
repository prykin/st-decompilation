
byte * FUN_00752a60(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6,
                   uint *param_7)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;

  iVar10 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
  *param_7 = iVar10 * param_4;
  pbVar2 = (byte *)Library::DKW::LIB::FUN_006aac10(iVar10 * param_4);
  if (pbVar2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (param_5 < 1) {
    if (0 < param_4) {
      param_5 = param_4;
      pbVar8 = pbVar2;
      do {
        iVar3 = 0;
        bVar6 = 0x80;
        pbVar4 = pbVar8;
        if (0 < param_3) {
          do {
            if (*(char *)(iVar3 + param_1) != param_6) {
              *pbVar4 = *pbVar4 | bVar6;
            }
            bVar6 = bVar6 >> 1;
            if (bVar6 == 0) {
              bVar6 = 0x80;
              pbVar4 = pbVar4 + 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_3);
        }
        param_1 = param_1 + param_2;
        pbVar8 = pbVar8 + iVar10;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return pbVar2;
    }
  }
  else {
    local_1c = 0;
    if (0 < param_4) {
      do {
        local_10 = 0;
LAB_00752b1b:
        iVar3 = local_10;
        if (local_10 < param_3) {
          while (*(char *)(iVar3 + param_1) == param_6) {
            iVar3 = iVar3 + 1;
            if (param_3 <= iVar3) goto LAB_00752cba;
          }
          local_10 = iVar3;
          if (iVar3 < param_3) {
LAB_00752b4c:
            do {
              if (*(char *)(local_10 + param_1) != param_6) {
                local_10 = local_10 + 1;
                if (local_10 < param_3) goto LAB_00752b4c;
              }
              iVar5 = 0;
              if (param_3 <= local_10) goto LAB_00752b83;
              while ((iVar5 <= param_5 * 2 && (*(char *)(local_10 + param_1) == param_6))) {
                iVar5 = iVar5 + 1;
                local_10 = local_10 + 1;
                if (param_3 <= local_10) goto LAB_00752b83;
              }
              if ((param_3 <= local_10) || (param_5 * 2 < iVar5)) goto LAB_00752b83;
            } while( true );
          }
        }
LAB_00752cba:
        param_1 = param_1 + param_2;
        local_1c = local_1c + 1;
        if (param_4 <= local_1c) {
          return pbVar2;
        }
      } while( true );
    }
  }
  return pbVar2;
LAB_00752b83:
  if (param_5 < iVar5) {
    local_10 = local_10 + (param_5 - iVar5);
  }
  if (-1 < iVar3) {
    if (iVar3 < param_5) {
      uVar11 = 0;
    }
    else {
      uVar11 = iVar3 - param_5;
    }
    if (local_1c < param_5) {
      local_c = 0;
    }
    else {
      local_c = local_1c - param_5;
    }
    iVar3 = local_1c + param_5;
    if (param_4 <= iVar3) {
      iVar3 = param_4 + -1;
    }
    bVar6 = (&DAT_007f2bbc)[-(uVar11 & 7)];
    iVar9 = (local_10 - 1U & 7) + 1;
    bVar1 = (&DAT_007f2bbc)[-iVar9];
    iVar5 = (((local_10 - 1U) - (-(uVar11 & 7) + 8)) - uVar11) + 1;
    if (iVar5 < 1) {
      pbVar8 = pbVar2 + ((int)uVar11 >> 3) + local_c * iVar10;
      if (local_c <= iVar3) {
        iVar3 = (iVar3 - local_c) + 1;
        do {
          *pbVar8 = *pbVar8 | ~bVar1 & bVar6;
          pbVar8 = pbVar8 + iVar10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if (local_c <= iVar3) {
      pbVar8 = pbVar2 + ((int)uVar11 >> 3) + 1 + local_c * iVar10;
      local_18 = (iVar3 - local_c) + 1;
      do {
        pbVar8[-1] = pbVar8[-1] | bVar6;
        iVar5 = iVar5 - iVar9;
        pbVar4 = pbVar8;
        if (0 < iVar5) {
          uVar7 = iVar5 + 7U >> 3;
          for (uVar11 = iVar5 + 7U >> 5; uVar11 != 0; uVar11 = uVar11 - 1) {
            pbVar4[0] = 0xff;
            pbVar4[1] = 0xff;
            pbVar4[2] = 0xff;
            pbVar4[3] = 0xff;
            pbVar4 = pbVar4 + 4;
          }
          for (uVar11 = uVar7 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pbVar4 = 0xff;
            pbVar4 = pbVar4 + 1;
          }
          pbVar4 = pbVar8 + uVar7;
          iVar5 = iVar5 + uVar7 * -8;
        }
        *pbVar4 = *pbVar4 | ~bVar1;
        pbVar8 = pbVar8 + iVar10;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  goto LAB_00752b1b;
}

