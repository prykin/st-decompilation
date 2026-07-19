
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::CreateTypeSSpr
   
   [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/ccFntTy_CreateTypeSSpr_param_4Enum. Cases:
   CASE_FFFFFFF9=4294967289;CASE_FFFFFFFC=4294967292;CASE_FFFFFFFD=4294967293;CASE_FFFFFFFE=4294967294
    */

undefined4 * __thiscall
ccFntTy::CreateTypeSSpr
          (ccFntTy *this,uint *param_1,int param_2,int param_3,
          ccFntTy_CreateTypeSSpr_param_4Enum param_4,uint param_5,int param_6,int param_7,
          int param_8)

{
  char cVar1;
  code *pcVar2;
  ccFntTy *pcVar3;
  size_t sVar4;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  uint uVar13;
  uint *puVar14;
  void *unaff_EDI;
  uint *puVar15;
  char *pcVar16;
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
  ccFntTy_CreateTypeSSpr_param_4Enum local_18;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x9d0,0,iVar6,&DAT_007a4ccc,
                               s_ccFntTy__CreateTypeSSpr_007f03a4);
    pcVar3 = local_48;
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      puVar8 = (undefined4 *)(*pcVar2)();
      return puVar8;
    }
    EraseSufr(local_48);
    if (local_c != (uint *)0x0) {
      FUN_006ab060(&local_c);
    }
    FUN_00725e30((int *)&local_10);
    FUN_007109f0(pcVar3,local_e4);
    RaiseInternalException(iVar6,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x9d5);
    return (undefined4 *)0x0;
  }
  if ((param_1 == (uint *)0x0) || ((char)*param_1 == '\0')) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x95f);
  }
  pcVar3 = local_48;
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
  pcVar3->field_007E = 1;
  *(undefined2 *)&pcVar3->field_0x9e = 0;
  pcVar3->field_0x9e = DAT_007cc854;
  local_40 = FUN_00711370(pcVar3,param_1);
  iVar7 = FUN_007113e0(pcVar3,param_1);
  iVar6 = (((int)param_4 < 1) - ~CASE_FFFFFFFE & param_4) + local_40;
  if (local_20 < iVar6) {
    local_20 = iVar6;
  }
  iVar6 = (((int)param_5 < 1) - 1 & param_5) + iVar7;
  if (local_38 < iVar6) {
    local_38 = iVar6;
  }
  if (((int)local_28 < 0) && (local_28 = (local_38 - iVar7) / 2, (int)local_28 < 0)) {
    local_28 = 0;
  }
  if (((local_18 == 0xfffffffb) || (local_18 == 0xfffffffa)) || (local_18 == CASE_FFFFFFF9)) {
    local_18 = local_18 + ~CASE_FFFFFFFC;
  }
  if ((int)local_18 < -7) {
    local_18 = 0xffffffff;
  }
  if (local_18 == 0xffffffff) {
    local_18 = (local_20 - local_40) / 2;
  }
  iVar6 = FUN_007114c0(pcVar3,param_1);
  iVar7 = iVar6 + 3;
  local_10 = Library::DKW::LIB::FUN_006aac10(iVar7 * 4 + 0x31);
  *(short *)((int)local_10 + 0x23) = (short)iVar7;
  *(undefined2 *)((int)local_10 + 0x29) = (undefined2)local_20;
  *(undefined2 *)((int)local_10 + 0x2b) = (undefined2)local_38;
  puVar8 = CreateSurf(pcVar3,0,0,0,0,(int)*(short *)((int)local_10 + 0x29),
                      (int)*(short *)((int)local_10 + 0x2b),1);
  local_4c = iVar6 + 0xd + iVar7;
  local_44 = puVar8;
  local_c = Library::DKW::LIB::FUN_006aac10(local_4c);
  local_30 = param_1;
  local_14 = 0;
  local_2c = 0;
  if (0 < *(short *)((int)local_10 + 0x23)) {
    local_1c = param_1;
    do {
      uVar13 = puVar8[5];
      if (uVar13 == 0) {
        uVar13 = ((uint)*(ushort *)((int)puVar8 + 0xe) * puVar8[1] + 0x1f >> 3 & 0x1ffffffc) *
                 puVar8[2];
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)puVar8);
      cVar5 = local_18;
      puVar10 = local_1c;
      uVar12 = local_28;
      sVar4 = local_3c;
      for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      iVar6 = *(short *)((int)local_10 + 0x23) + -3;
      if (local_2c < iVar6) {
        if (-1 < (int)local_3c) {
          local_3c = 0xffffffff;
          local_30 = (uint *)(sVar4 + 1 + (int)param_1);
        }
        puVar14 = local_30;
        local_24 = 0;
        local_34 = 0;
        iVar6 = FUN_0070cd90(&pcVar3->field_0x9e,local_1c);
        if (iVar6 == 0) {
          local_14 = local_14 + 1;
          puVar15 = (uint *)((int)puVar10 + 1);
          local_1c = puVar15;
          iVar6 = FUN_0070cdc0((byte *)puVar15);
          if (iVar6 < 0) {
            iVar6 = FUN_0070cd90(&pcVar3->field_0x9e,puVar15);
            if (iVar6 == 0) {
              local_24 = 1;
            }
            else {
              local_34 = 1;
            }
          }
          else {
            local_14 = local_14 + 1;
            local_1c = (uint *)((int)puVar10 + 2);
          }
        }
        puVar10 = local_c;
        for (uVar13 = local_4c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        for (uVar13 = local_4c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(char *)puVar10 = '\0';
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        Library::MSVCRT::_strncpy((char *)local_c,(char *)param_1,local_14);
        uVar13 = 0xffffffff;
        pcVar9 = &DAT_007c8ff4;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        iVar6 = Library::MSVCRT::_strncmp((char *)local_1c,&DAT_007c8ff4,~uVar13 - 1);
        if (iVar6 == 0) {
          local_3c = local_14;
        }
        else {
          if ((local_24 == 0) && (local_34 == 0)) {
            uVar13 = 0xffffffff;
            pcVar9 = &pcVar3->field_0x9e;
            do {
              pcVar16 = pcVar9;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pcVar16 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar16;
            } while (cVar1 != '\0');
            uVar13 = ~uVar13;
            iVar6 = -1;
            puVar10 = local_c;
            do {
              puVar14 = puVar10;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              puVar14 = (uint *)((int)puVar10 + 1);
              uVar12 = *puVar10;
              puVar10 = puVar14;
            } while ((char)uVar12 != '\0');
            pcVar9 = pcVar16 + -uVar13;
            pcVar16 = (char *)((int)puVar14 + -1);
            for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pcVar16 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
          pcVar9 = Library::MSVCRT::__itoa(param_7,local_58,0x10);
          uVar13 = 0xffffffff;
          do {
            pcVar16 = pcVar9;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar16 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar16;
          } while (cVar1 != '\0');
          uVar13 = ~uVar13;
          iVar6 = -1;
          puVar10 = local_c;
          do {
            puVar14 = puVar10;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            puVar14 = (uint *)((int)puVar10 + 1);
            uVar12 = *puVar10;
            puVar10 = puVar14;
          } while ((char)uVar12 != '\0');
          pcVar9 = pcVar16 + -uVar13;
          pcVar16 = (char *)((int)puVar14 + -1);
          for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar16 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          }
          Library::MSVCRT::_strncat((char *)local_c,(char *)local_1c,1);
          puVar14 = local_30;
          if (local_24 != 0) {
            Library::MSVCRT::_strncat((char *)local_c,(char *)local_1c,1);
            puVar14 = local_30;
          }
        }
        iVar6 = -1;
        local_24 = -1;
        switch(param_4) {
        case CASE_FFFFFFF9:
          local_24 = local_40;
          break;
        case CASE_FFFFFFFC:
          puVar10 = Library::MSVCRT::FUN_00730590(puVar14,&DAT_007c8ff4);
          if (puVar10 != (uint *)0x0) {
            local_5 = (undefined1)*puVar10;
            *(undefined1 *)puVar10 = 0;
          }
          local_34 = FUN_00711110(pcVar3,puVar14);
          iVar6 = (local_40 + local_20) / 2 - local_34;
          if (puVar10 != (uint *)0x0) {
            *(undefined1 *)puVar10 = local_5;
          }
          local_24 = local_40;
          break;
        case CASE_FFFFFFFD:
          puVar10 = Library::MSVCRT::FUN_00730590(puVar14,&DAT_007c8ff4);
          if (puVar10 != (uint *)0x0) {
            local_5 = (undefined1)*puVar10;
            *(undefined1 *)puVar10 = 0;
          }
          iVar6 = FUN_00711110(pcVar3,puVar14);
          iVar6 = local_20 - iVar6;
          if (puVar10 != (uint *)0x0) {
            *(undefined1 *)puVar10 = local_5;
          }
          break;
        case CASE_FFFFFFFE:
          puVar10 = Library::MSVCRT::FUN_00730590(puVar14,&DAT_007c8ff4);
          if (puVar10 != (uint *)0x0) {
            local_5 = (undefined1)*puVar10;
            *(undefined1 *)puVar10 = 0;
          }
          iVar6 = FUN_00711110(pcVar3,puVar14);
          iVar6 = (local_20 - iVar6) / 2;
          if (puVar10 != (uint *)0x0) {
            *(undefined1 *)puVar10 = local_5;
          }
        }
        WrTxt(pcVar3,local_c,local_18,local_28,param_6,iVar6,local_24);
      }
      else {
        if (local_2c == iVar6) {
          WrTxt(pcVar3,param_1,local_18,local_28,param_6,-1,-1);
        }
        if (local_2c == *(short *)((int)local_10 + 0x23) + -2) {
          pcVar3->field_0082 = param_7;
          WrTxt(pcVar3,param_1,cVar5,uVar12,param_7,-1,-1);
        }
        if (local_2c == *(short *)((int)local_10 + 0x23) + -1) {
          pcVar3->field_0082 = param_8;
          WrTxt(pcVar3,param_1,cVar5,uVar12,param_8,-1,-1);
        }
        pcVar3->field_0082 = 0xffffffff;
      }
      FUN_006b4b20((int *)((int)local_10 + local_2c * 4 + 0x2d),(uint)local_44,0,0);
      local_14 = local_14 + 1;
      local_1c = (uint *)((int)local_1c + 1);
      local_2c = local_2c + 1;
      puVar8 = local_44;
    } while (local_2c < *(short *)((int)local_10 + 0x23));
  }
  EraseSufr(pcVar3);
  if (local_c != (uint *)0x0) {
    FUN_006ab060(&local_c);
  }
  FUN_007109f0(pcVar3,local_e4);
  g_currentExceptionFrame = local_9c.previous;
  return local_10;
}

