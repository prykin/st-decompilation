
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::CreateTypeSSpr */

undefined4 * __thiscall
ccFntTy::CreateTypeSSpr
          (ccFntTy *this,uint *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6
          ,int param_7,int param_8)

{
  char cVar1;
  ccFntTy cVar2;
  code *pcVar3;
  ccFntTy *pcVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  uint uVar14;
  ccFntTy *pcVar15;
  uint *puVar16;
  void *unaff_EDI;
  uint *puVar17;
  ccFntTy *pcVar18;
  char *pcVar19;
  undefined4 local_e4 [18];
  InternalExceptionFrame local_9c;
  char local_58 [12];
  uint local_4c;
  ccFntTy *local_48;
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
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  local_48 = this;
  iVar7 = __setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar8 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x9d0,0,iVar7,&DAT_007a4ccc,
                               s_ccFntTy__CreateTypeSSpr_007f03a4);
    pcVar4 = local_48;
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      puVar9 = (undefined4 *)(*pcVar3)();
      return puVar9;
    }
    EraseSufr(local_48);
    if (local_c != (uint *)0x0) {
      FUN_006ab060(&local_c);
    }
    FUN_00725e30((int *)&local_10);
    FUN_007109f0(pcVar4,local_e4);
    RaiseInternalException(iVar7,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x9d5);
    return (undefined4 *)0x0;
  }
  if ((param_1 == (uint *)0x0) || ((char)*param_1 == '\0')) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x95f);
  }
  pcVar4 = local_48;
  Save(local_48,local_e4);
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
  *(undefined4 *)(pcVar4 + 0x7e) = 1;
  *(undefined2 *)(pcVar4 + 0x9e) = 0;
  pcVar4[0x9e] = DAT_007cc854;
  local_40 = FUN_00711370(pcVar4,param_1);
  iVar8 = FUN_007113e0(pcVar4,param_1);
  iVar7 = (((int)param_4 < 1) - 1 & param_4) + local_40;
  if (local_20 < iVar7) {
    local_20 = iVar7;
  }
  iVar7 = (((int)param_5 < 1) - 1 & param_5) + iVar8;
  if (local_38 < iVar7) {
    local_38 = iVar7;
  }
  if (((int)local_28 < 0) && (local_28 = (local_38 - iVar8) / 2, (int)local_28 < 0)) {
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
  iVar7 = FUN_007114c0(pcVar4,param_1);
  iVar8 = iVar7 + 3;
  local_10 = FUN_006aac10(iVar8 * 4 + 0x31);
  *(short *)((int)local_10 + 0x23) = (short)iVar8;
  *(undefined2 *)((int)local_10 + 0x29) = (undefined2)local_20;
  *(undefined2 *)((int)local_10 + 0x2b) = (undefined2)local_38;
  puVar9 = CreateSurf(pcVar4,0,0,0,0,(int)*(short *)((int)local_10 + 0x29),
                      (int)*(short *)((int)local_10 + 0x2b),1);
  local_4c = iVar7 + 0xd + iVar8;
  local_44 = puVar9;
  local_c = FUN_006aac10(local_4c);
  local_30 = param_1;
  local_14 = 0;
  local_2c = 0;
  if (0 < *(short *)((int)local_10 + 0x23)) {
    local_1c = param_1;
    do {
      uVar14 = puVar9[5];
      if (uVar14 == 0) {
        uVar14 = ((uint)*(ushort *)((int)puVar9 + 0xe) * puVar9[1] + 0x1f >> 3 & 0x1ffffffc) *
                 puVar9[2];
      }
      puVar9 = (undefined4 *)FUN_006b4fa0((int)puVar9);
      uVar6 = local_18;
      puVar11 = local_1c;
      uVar13 = local_28;
      sVar5 = local_3c;
      for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      iVar7 = *(short *)((int)local_10 + 0x23) + -3;
      if (local_2c < iVar7) {
        if (-1 < (int)local_3c) {
          local_3c = 0xffffffff;
          local_30 = (uint *)(sVar5 + 1 + (int)param_1);
        }
        puVar16 = local_30;
        local_24 = 0;
        local_34 = 0;
        iVar7 = FUN_0070cd90((char *)(pcVar4 + 0x9e),local_1c);
        if (iVar7 == 0) {
          local_14 = local_14 + 1;
          puVar17 = (uint *)((int)puVar11 + 1);
          local_1c = puVar17;
          iVar7 = FUN_0070cdc0((byte *)puVar17);
          if (iVar7 < 0) {
            iVar7 = FUN_0070cd90((char *)(pcVar4 + 0x9e),puVar17);
            if (iVar7 == 0) {
              local_24 = 1;
            }
            else {
              local_34 = 1;
            }
          }
          else {
            local_14 = local_14 + 1;
            local_1c = (uint *)((int)puVar11 + 2);
          }
        }
        puVar11 = local_c;
        for (uVar14 = local_4c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        for (uVar14 = local_4c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(char *)puVar11 = '\0';
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        _strncpy((char *)local_c,(char *)param_1,local_14);
        uVar14 = 0xffffffff;
        pcVar10 = &DAT_007c8ff4;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        iVar7 = _strncmp((char *)local_1c,&DAT_007c8ff4,~uVar14 - 1);
        if (iVar7 == 0) {
          local_3c = local_14;
        }
        else {
          if ((local_24 == 0) && (local_34 == 0)) {
            uVar14 = 0xffffffff;
            pcVar15 = pcVar4 + 0x9e;
            do {
              pcVar18 = pcVar15;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar15 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar18;
            } while (cVar2 != (ccFntTy)0x0);
            uVar14 = ~uVar14;
            iVar7 = -1;
            puVar11 = local_c;
            do {
              puVar16 = puVar11;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              puVar16 = (uint *)((int)puVar11 + 1);
              uVar13 = *puVar11;
              puVar11 = puVar16;
            } while ((char)uVar13 != '\0');
            pcVar15 = pcVar18 + -uVar14;
            pcVar18 = (ccFntTy *)((int)puVar16 + -1);
            for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar18 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
          pcVar10 = __itoa(param_7,local_58,0x10);
          uVar14 = 0xffffffff;
          do {
            pcVar19 = pcVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar19 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar19;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          iVar7 = -1;
          puVar11 = local_c;
          do {
            puVar16 = puVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            puVar16 = (uint *)((int)puVar11 + 1);
            uVar13 = *puVar11;
            puVar11 = puVar16;
          } while ((char)uVar13 != '\0');
          pcVar10 = pcVar19 + -uVar14;
          pcVar19 = (char *)((int)puVar16 + -1);
          for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar19 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar19 = pcVar19 + 1;
          }
          _strncat((char *)local_c,(char *)local_1c,1);
          puVar16 = local_30;
          if (local_24 != 0) {
            _strncat((char *)local_c,(char *)local_1c,1);
            puVar16 = local_30;
          }
        }
        iVar7 = -1;
        local_24 = -1;
        switch(param_4) {
        case 0xfffffff9:
          local_24 = local_40;
          break;
        case 0xfffffffc:
          puVar11 = FUN_00730590(puVar16,&DAT_007c8ff4);
          if (puVar11 != (uint *)0x0) {
            local_5 = (undefined1)*puVar11;
            *(undefined1 *)puVar11 = 0;
          }
          local_34 = FUN_00711110(pcVar4,puVar16);
          iVar7 = (local_40 + local_20) / 2 - local_34;
          if (puVar11 != (uint *)0x0) {
            *(undefined1 *)puVar11 = local_5;
          }
          local_24 = local_40;
          break;
        case 0xfffffffd:
          puVar11 = FUN_00730590(puVar16,&DAT_007c8ff4);
          if (puVar11 != (uint *)0x0) {
            local_5 = (undefined1)*puVar11;
            *(undefined1 *)puVar11 = 0;
          }
          iVar7 = FUN_00711110(pcVar4,puVar16);
          iVar7 = local_20 - iVar7;
          if (puVar11 != (uint *)0x0) {
            *(undefined1 *)puVar11 = local_5;
          }
          break;
        case 0xfffffffe:
          puVar11 = FUN_00730590(puVar16,&DAT_007c8ff4);
          if (puVar11 != (uint *)0x0) {
            local_5 = (undefined1)*puVar11;
            *(undefined1 *)puVar11 = 0;
          }
          iVar7 = FUN_00711110(pcVar4,puVar16);
          iVar7 = (local_20 - iVar7) / 2;
          if (puVar11 != (uint *)0x0) {
            *(undefined1 *)puVar11 = local_5;
          }
        }
        WrTxt(pcVar4,local_c,local_18,local_28,param_6,iVar7,local_24);
      }
      else {
        if (local_2c == iVar7) {
          WrTxt(pcVar4,param_1,local_18,local_28,param_6,-1,-1);
        }
        if (local_2c == *(short *)((int)local_10 + 0x23) + -2) {
          *(int *)(pcVar4 + 0x82) = param_7;
          WrTxt(pcVar4,param_1,uVar6,uVar13,param_7,-1,-1);
        }
        if (local_2c == *(short *)((int)local_10 + 0x23) + -1) {
          *(int *)(pcVar4 + 0x82) = param_8;
          WrTxt(pcVar4,param_1,uVar6,uVar13,param_8,-1,-1);
        }
        *(undefined4 *)(pcVar4 + 0x82) = 0xffffffff;
      }
      FUN_006b4b20((int *)((int)local_10 + local_2c * 4 + 0x2d),(uint)local_44,0,0);
      local_14 = local_14 + 1;
      local_1c = (uint *)((int)local_1c + 1);
      local_2c = local_2c + 1;
      puVar9 = local_44;
    } while (local_2c < *(short *)((int)local_10 + 0x23));
  }
  EraseSufr(pcVar4);
  if (local_c != (uint *)0x0) {
    FUN_006ab060(&local_c);
  }
  FUN_007109f0(pcVar4,local_e4);
  g_currentExceptionFrame = local_9c.previous;
  return local_10;
}

