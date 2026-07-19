
void FUN_006d86e0(uint *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 uint param_7,byte param_8,char param_9)

{
  short sVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint local_c;
  byte local_8;
  
  if ((param_6 < 1) || ((int)param_7 < 1)) {
    return;
  }
  local_8 = (param_8 - 1) + param_9;
  if (param_5 < 1) {
    puVar3 = (uint *)((*(byte *)((int)param_3 + 0xd) >> 1 & 0xe) + 0x16 + (int)param_3);
  }
  else {
    puVar3 = (uint *)FUN_006cfe10((byte *)param_3,param_5);
  }
  sVar1 = *(short *)((int)param_3 + 0x12);
  local_c = param_7;
LAB_006d8738:
  param_7 = (uint)(byte)*puVar3;
  puVar3 = (uint *)((int)puVar3 + 1);
  iVar8 = param_4;
  if (param_7 != 0) {
    while( true ) {
      while ((param_7 & 0x80) == 0) {
        uVar7 = param_7 & 0x7f;
        if (iVar8 < (int)uVar7) goto LAB_006d8786;
        uVar4 = *puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        iVar8 = iVar8 - uVar7;
        param_7 = (uint)(byte)uVar4;
      }
      uVar7 = param_7 & 0x3f;
      if (iVar8 < (int)uVar7) break;
      if ((param_7 & 0x40) == 0) {
        param_7 = (uint)*(byte *)((int)puVar3 + uVar7);
        puVar3 = (uint *)((byte *)((int)puVar3 + uVar7) + 1);
        iVar8 = iVar8 - uVar7;
      }
      else {
        param_7 = (uint)*(byte *)((int)puVar3 + 1);
        puVar3 = (uint *)((int)puVar3 + 2);
        iVar8 = iVar8 - uVar7;
      }
    }
LAB_006d8786:
    param_9 = (char)uVar7 - (char)iVar8;
    param_3 = puVar3;
    if (((byte)param_7 & 0xc0) == 0x80) {
      param_3 = (uint *)((int)puVar3 + iVar8);
    }
    bVar6 = (byte)param_7 & 0xc0;
    if ((param_7 & 0x80) == 0) {
      bVar6 = 0;
    }
    uVar7 = (uint)(byte)(bVar6 + param_9);
    iVar8 = param_6;
    do {
      puVar3 = param_3;
      if ((uVar7 & 0x80) == 0) {
        if (iVar8 < (int)uVar7) goto cf_common_join_006D88D7;
        iVar8 = iVar8 - uVar7;
        param_1 = (uint *)((int)param_1 + uVar7);
      }
      else if ((uVar7 & 0x40) == 0) {
        uVar7 = uVar7 & 0x3f;
        if (iVar8 < (int)uVar7) goto cf_common_join_006D88D7;
        iVar8 = iVar8 - uVar7;
        if (((byte)*param_3 < param_8) || (local_8 < (byte)*param_3)) {
          if (3 < uVar7) {
            if (((uint)param_1 & 1) != 0) {
              uVar7 = uVar7 - 1;
              *(byte *)param_1 = (byte)*param_3;
              param_3 = (uint *)((int)param_3 + 1);
              param_1 = (uint *)((int)param_1 + 1);
            }
            if (((uint)param_1 & 2) != 0) {
              uVar7 = uVar7 - 2;
              *(ushort *)param_1 = (ushort)*param_3;
              param_3 = (uint *)((int)param_3 + 2);
              param_1 = (uint *)((int)param_1 + 2);
            }
            while (3 < (int)uVar7) {
              uVar4 = *param_3;
              param_3 = param_3 + 1;
              *param_1 = uVar4;
              param_1 = param_1 + 1;
              uVar7 = uVar7 - 4;
            }
            if (uVar7 == 0) goto LAB_006d88c6;
          }
          if ((char)uVar7 != '\x01') {
            if ((char)uVar7 != '\x02') {
              *(byte *)((int)param_1 + 2) = *(byte *)((int)param_3 + 2);
            }
            *(byte *)((int)param_1 + 1) = *(byte *)((int)param_3 + 1);
          }
          uVar4 = *param_3;
          param_3 = (uint *)((int)param_3 + uVar7);
          *(byte *)param_1 = (byte)uVar4;
          param_1 = (uint *)((int)param_1 + uVar7);
        }
        else {
          param_3 = (uint *)((int)param_3 + uVar7);
          param_1 = (uint *)((int)param_1 + uVar7);
        }
      }
      else {
        bVar6 = (byte)*param_3;
        uVar7 = uVar7 & 0xffffff3f;
        uVar2 = CONCAT11(bVar6,bVar6);
        uVar4 = (uint)uVar2;
        if (iVar8 < (int)uVar7) goto cf_common_join_006D88D7;
        iVar8 = iVar8 - uVar7;
        param_3 = (uint *)((int)param_3 + 1);
        if (3 < uVar7) {
          if (((uint)param_1 & 1) != 0) {
            *(byte *)param_1 = bVar6;
            param_1 = (uint *)((int)param_1 + 1);
            uVar7 = uVar7 - 1;
          }
          if (((uint)param_1 & 2) != 0) {
            *(ushort *)param_1 = uVar2;
            param_1 = (uint *)((int)param_1 + 2);
            uVar7 = uVar7 - 2;
          }
          uVar4 = CONCAT22(uVar2,uVar2);
          while (3 < (int)uVar7) {
            *param_1 = uVar4;
            param_1 = param_1 + 1;
            uVar7 = uVar7 - 4;
          }
          if (uVar7 == 0) goto LAB_006d88c6;
        }
        bVar6 = (byte)uVar4;
        if ((char)uVar7 != '\x01') {
          if ((char)uVar7 != '\x02') {
            *(byte *)((int)param_1 + 2) = bVar6;
          }
          *(byte *)((int)param_1 + 1) = bVar6;
        }
        *(byte *)param_1 = bVar6;
        param_1 = (uint *)((int)param_1 + uVar7);
      }
LAB_006d88c6:
      uVar7 = 0;
      puVar3 = param_3;
      if (iVar8 < 1) goto cf_common_join_006D88D7;
      uVar7 = (uint)(byte)*param_3;
      param_3 = (uint *)((int)param_3 + 1);
      param_7 = uVar7;
    } while( true );
  }
  param_1 = (uint *)((int)param_1 + param_2);
  goto LAB_006d8a3c;
cf_common_join_006D88D7:
  if (0 < iVar8) {
    uVar7 = uVar7 - iVar8;
    if ((param_7 & 0x80) == 0) {
      param_1 = (uint *)((int)param_1 + iVar8);
    }
    else if ((param_7 & 0x40) == 0) {
      if (((byte)*puVar3 < param_8) || (local_8 < (byte)*puVar3)) {
        if (3 < iVar8) {
          if (((uint)param_1 & 1) != 0) {
            *(byte *)param_1 = (byte)*puVar3;
            puVar3 = (uint *)((int)puVar3 + 1);
            param_1 = (uint *)((int)param_1 + 1);
            iVar8 = iVar8 + -1;
          }
          if (((uint)param_1 & 2) != 0) {
            *(ushort *)param_1 = (ushort)*puVar3;
            puVar3 = (uint *)((int)puVar3 + 2);
            param_1 = (uint *)((int)param_1 + 2);
            iVar8 = iVar8 + -2;
          }
          while (3 < iVar8) {
            uVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            *param_1 = uVar4;
            param_1 = param_1 + 1;
            iVar8 = iVar8 + -4;
          }
          if (iVar8 == 0) goto LAB_006d89c6;
        }
        if ((char)iVar8 != '\x01') {
          if ((char)iVar8 != '\x02') {
            *(byte *)((int)param_1 + 2) = *(byte *)((int)puVar3 + 2);
          }
          *(byte *)((int)param_1 + 1) = *(byte *)((int)puVar3 + 1);
        }
        *(byte *)param_1 = (byte)*puVar3;
        puVar3 = (uint *)((int)puVar3 + iVar8);
        param_1 = (uint *)((int)param_1 + iVar8);
      }
      else {
        puVar3 = (uint *)((int)puVar3 + iVar8);
        param_1 = (uint *)((int)param_1 + iVar8);
      }
    }
    else {
      bVar6 = (byte)*puVar3;
      uVar2 = CONCAT11(bVar6,bVar6);
      uVar4 = (uint)uVar2;
      puVar3 = (uint *)((int)puVar3 + 1);
      if (3 < iVar8) {
        if (((uint)param_1 & 1) != 0) {
          *(byte *)param_1 = bVar6;
          param_1 = (uint *)((int)param_1 + 1);
          iVar8 = iVar8 + -1;
        }
        if (((uint)param_1 & 2) != 0) {
          *(ushort *)param_1 = uVar2;
          param_1 = (uint *)((int)param_1 + 2);
          iVar8 = iVar8 + -2;
        }
        uVar4 = CONCAT22(uVar2,uVar2);
        while (3 < iVar8) {
          *param_1 = uVar4;
          param_1 = param_1 + 1;
          iVar8 = iVar8 + -4;
        }
        if (iVar8 == 0) goto LAB_006d89c6;
      }
      bVar6 = (byte)uVar4;
      if ((char)iVar8 != '\x01') {
        if ((char)iVar8 != '\x02') {
          *(byte *)((int)param_1 + 2) = bVar6;
        }
        *(byte *)((int)param_1 + 1) = bVar6;
      }
      *(byte *)param_1 = bVar6;
      param_1 = (uint *)((int)param_1 + iVar8);
    }
  }
LAB_006d89c6:
  iVar8 = (sVar1 - param_4) - param_6;
  bVar6 = (byte)param_7;
  if ((int)uVar7 < iVar8) {
    do {
      iVar8 = iVar8 - uVar7;
      puVar5 = puVar3;
      if (((byte)param_7 & 0xc0) == 0x80) {
        puVar5 = (uint *)((int)puVar3 + uVar7);
      }
      bVar6 = (byte)*puVar5;
      param_7 = (uint)bVar6;
      puVar3 = (uint *)((int)puVar5 + 1);
      uVar7 = param_7;
      if (((bVar6 & 0x80) != 0) && (uVar7 = param_7 & 0x3f, (bVar6 & 0x40) != 0)) {
        puVar3 = (uint *)((int)puVar5 + 2);
      }
    } while ((int)uVar7 < iVar8);
  }
  if ((bVar6 & 0xc0) == 0x80) {
    puVar3 = (uint *)((int)puVar3 + iVar8);
  }
  param_1 = (uint *)((int)param_1 + (param_2 - param_6));
LAB_006d8a3c:
  local_c = local_c - 1;
  if (local_c == 0) {
    return;
  }
  goto LAB_006d8738;
}

