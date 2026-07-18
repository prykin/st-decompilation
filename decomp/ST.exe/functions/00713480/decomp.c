
undefined4 *
FUN_00713480(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7
            ,int param_8)

{
  char cVar1;
  code *pcVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  uint uVar12;
  uint *puVar13;
  void *unaff_EDI;
  uint *puVar14;
  char *pcVar15;
  undefined4 local_e4 [18];
  undefined4 local_9c;
  undefined4 local_98 [16];
  char local_58 [12];
  uint local_4c;
  void *local_48;
  undefined4 *local_44;
  int local_40;
  size_t local_3c;
  int local_38;
  int local_34;
  uint *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  size_t local_14;
  undefined4 *local_10;
  uint *local_c;
  undefined1 local_5;
  
  local_20 = param_2;
  local_28 = param_5;
  local_38 = param_3;
  local_18 = param_4;
  local_10 = (undefined4 *)0x0;
  local_3c = 0xffffffff;
  local_c = (uint *)0x0;
  local_5 = 0;
  local_9c = DAT_00858df8;
  DAT_00858df8 = &local_9c;
  iVar5 = __setjmp3(local_98,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_9c;
    iVar6 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x9d0,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      puVar7 = (undefined4 *)(*pcVar2)();
      return puVar7;
    }
    FUN_00710f00();
    if (local_c != (uint *)0x0) {
      FUN_006ab060(&local_c);
    }
    FUN_00725e30((int *)&local_10);
    FUN_007109f0(local_48,local_e4);
    FUN_006a5e40(iVar5,0,0x7f0190,0x9d5);
    return (undefined4 *)0x0;
  }
  if ((param_1 == (uint *)0x0) || ((char)*param_1 == '\0')) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x95f);
  }
  FUN_007108b0(local_e4);
  if (param_7 < 0) {
    param_7 = param_6 + 1;
  }
  if (param_8 < 0) {
    if (param_6 < 1) {
      param_8 = 0;
    }
    else {
      param_8 = param_6 + -1;
    }
  }
  *(undefined4 *)((int)local_48 + 0x7e) = 1;
  *(undefined2 *)((int)local_48 + 0x9e) = 0;
  *(undefined1 *)((int)local_48 + 0x9e) = DAT_007cc854;
  local_40 = FUN_00711370(local_48,param_1);
  iVar6 = FUN_007113e0(local_48,param_1);
  iVar5 = (((int)param_4 < 1) - 1 & param_4) + local_40;
  if (local_20 < iVar5) {
    local_20 = iVar5;
  }
  iVar5 = (((int)param_5 < 1) - 1 & param_5) + iVar6;
  if (local_38 < iVar5) {
    local_38 = iVar5;
  }
  if (((int)local_28 < 0) && (local_28 = (local_38 - iVar6) / 2, (int)local_28 < 0)) {
    local_28 = 0;
  }
  if (((local_18 == 0xfffffffb) || (local_18 == 0xfffffffa)) || (local_18 == 0xfffffff9)) {
    local_18 = local_18 + 3;
  }
  if ((int)local_18 < -7) {
    local_18 = 0xffffffff;
  }
  if (local_18 == 0xffffffff) {
    local_18 = (local_20 - local_40) / 2;
  }
  iVar5 = FUN_007114c0(local_48,param_1);
  iVar6 = iVar5 + 3;
  local_10 = FUN_006aac10(iVar6 * 4 + 0x31);
  *(short *)((int)local_10 + 0x23) = (short)iVar6;
  *(undefined2 *)((int)local_10 + 0x29) = (undefined2)local_20;
  *(undefined2 *)((int)local_10 + 0x2b) = (undefined2)local_38;
  puVar7 = FUN_00710ba0(0,0,0,0,(int)*(short *)((int)local_10 + 0x29),
                        (int)*(short *)((int)local_10 + 0x2b),1);
  local_4c = iVar5 + 0xd + iVar6;
  local_44 = puVar7;
  local_c = FUN_006aac10(local_4c);
  local_30 = param_1;
  local_14 = 0;
  local_2c = 0;
  if (0 < *(short *)((int)local_10 + 0x23)) {
    local_1c = param_1;
    do {
      uVar12 = puVar7[5];
      if (uVar12 == 0) {
        uVar12 = ((uint)*(ushort *)((int)puVar7 + 0xe) * puVar7[1] + 0x1f >> 3 & 0x1ffffffc) *
                 puVar7[2];
      }
      puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar7);
      uVar4 = local_18;
      puVar9 = local_1c;
      uVar11 = local_28;
      sVar3 = local_3c;
      for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      iVar5 = *(short *)((int)local_10 + 0x23) + -3;
      if (local_2c < iVar5) {
        if (-1 < (int)local_3c) {
          local_3c = 0xffffffff;
          local_30 = (uint *)(sVar3 + 1 + (int)param_1);
        }
        puVar13 = local_30;
        local_24 = 0;
        local_34 = 0;
        iVar5 = FUN_0070cd90((char *)((int)local_48 + 0x9e),local_1c);
        if (iVar5 == 0) {
          local_14 = local_14 + 1;
          puVar14 = (uint *)((int)puVar9 + 1);
          local_1c = puVar14;
          iVar5 = FUN_0070cdc0((byte *)puVar14);
          if (iVar5 < 0) {
            iVar5 = FUN_0070cd90((char *)((int)local_48 + 0x9e),puVar14);
            if (iVar5 == 0) {
              local_24 = 1;
            }
            else {
              local_34 = 1;
            }
          }
          else {
            local_14 = local_14 + 1;
            local_1c = (uint *)((int)puVar9 + 2);
          }
        }
        puVar9 = local_c;
        for (uVar12 = local_4c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar12 = local_4c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(char *)puVar9 = '\0';
          puVar9 = (uint *)((int)puVar9 + 1);
        }
        _strncpy((char *)local_c,(char *)param_1,local_14);
        uVar12 = 0xffffffff;
        pcVar8 = &DAT_007c8ff4;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar5 = _strncmp((char *)local_1c,&DAT_007c8ff4,~uVar12 - 1);
        if (iVar5 == 0) {
          local_3c = local_14;
        }
        else {
          if ((local_24 == 0) && (local_34 == 0)) {
            uVar12 = 0xffffffff;
            pcVar8 = (char *)((int)local_48 + 0x9e);
            do {
              pcVar15 = pcVar8;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar15 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar15;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            iVar5 = -1;
            puVar9 = local_c;
            do {
              puVar13 = puVar9;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              puVar13 = (uint *)((int)puVar9 + 1);
              uVar11 = *puVar9;
              puVar9 = puVar13;
            } while ((char)uVar11 != '\0');
            pcVar8 = pcVar15 + -uVar12;
            pcVar15 = (char *)((int)puVar13 + -1);
            for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar15 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar15 = pcVar15 + 1;
            }
          }
          pcVar8 = __itoa(param_7,local_58,0x10);
          uVar12 = 0xffffffff;
          do {
            pcVar15 = pcVar8;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar15 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar15;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          iVar5 = -1;
          puVar9 = local_c;
          do {
            puVar13 = puVar9;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            puVar13 = (uint *)((int)puVar9 + 1);
            uVar11 = *puVar9;
            puVar9 = puVar13;
          } while ((char)uVar11 != '\0');
          pcVar8 = pcVar15 + -uVar12;
          pcVar15 = (char *)((int)puVar13 + -1);
          for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar15 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar15 = pcVar15 + 1;
          }
          _strncat((char *)local_c,(char *)local_1c,1);
          puVar13 = local_30;
          if (local_24 != 0) {
            _strncat((char *)local_c,(char *)local_1c,1);
            puVar13 = local_30;
          }
        }
        iVar5 = -1;
        local_24 = -1;
        switch(param_4) {
        case 0xfffffff9:
          local_24 = local_40;
          break;
        case 0xfffffffc:
          puVar9 = FUN_00730590(puVar13,&DAT_007c8ff4);
          if (puVar9 != (uint *)0x0) {
            local_5 = (undefined1)*puVar9;
            *(undefined1 *)puVar9 = 0;
          }
          local_34 = FUN_00711110(local_48,puVar13);
          iVar5 = (local_40 + local_20) / 2 - local_34;
          if (puVar9 != (uint *)0x0) {
            *(undefined1 *)puVar9 = local_5;
          }
          local_24 = local_40;
          break;
        case 0xfffffffd:
          puVar9 = FUN_00730590(puVar13,&DAT_007c8ff4);
          if (puVar9 != (uint *)0x0) {
            local_5 = (undefined1)*puVar9;
            *(undefined1 *)puVar9 = 0;
          }
          iVar5 = FUN_00711110(local_48,puVar13);
          iVar5 = local_20 - iVar5;
          if (puVar9 != (uint *)0x0) {
            *(undefined1 *)puVar9 = local_5;
          }
          break;
        case 0xfffffffe:
          puVar9 = FUN_00730590(puVar13,&DAT_007c8ff4);
          if (puVar9 != (uint *)0x0) {
            local_5 = (undefined1)*puVar9;
            *(undefined1 *)puVar9 = 0;
          }
          iVar5 = FUN_00711110(local_48,puVar13);
          iVar5 = (local_20 - iVar5) / 2;
          if (puVar9 != (uint *)0x0) {
            *(undefined1 *)puVar9 = local_5;
          }
        }
        FUN_00711b70(local_c,local_18,local_28,param_6,iVar5,local_24);
      }
      else {
        if (local_2c == iVar5) {
          FUN_00711b70(param_1,local_18,local_28,param_6,-1,-1);
        }
        if (local_2c == *(short *)((int)local_10 + 0x23) + -2) {
          *(int *)((int)local_48 + 0x82) = param_7;
          FUN_00711b70(param_1,uVar4,uVar11,param_7,-1,-1);
        }
        if (local_2c == *(short *)((int)local_10 + 0x23) + -1) {
          *(int *)((int)local_48 + 0x82) = param_8;
          FUN_00711b70(param_1,uVar4,uVar11,param_8,-1,-1);
        }
        *(undefined4 *)((int)local_48 + 0x82) = 0xffffffff;
      }
      FUN_006b4b20((int *)((int)local_10 + local_2c * 4 + 0x2d),(uint)local_44,0,0);
      local_14 = local_14 + 1;
      local_1c = (uint *)((int)local_1c + 1);
      local_2c = local_2c + 1;
      puVar7 = local_44;
    } while (local_2c < *(short *)((int)local_10 + 0x23));
  }
  FUN_00710f00();
  if (local_c != (uint *)0x0) {
    FUN_006ab060(&local_c);
  }
  FUN_007109f0(local_48,local_e4);
  DAT_00858df8 = (undefined4 *)local_9c;
  return local_10;
}

