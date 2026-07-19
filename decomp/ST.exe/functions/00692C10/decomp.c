
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00692C10_param_1Enum. Cases:
   CASE_A=10;CASE_14=20;CASE_32=50;CASE_5A=90;CASE_8C=140;CASE_10E=270;CASE_118=280;CASE_122=290;CASE_12C=300;CASE_172=370;CASE_BBE=3006;CASE_BBF=3007;CASE_BC0=3008;CASE_BC1=3009;CASE_BC3=3011
    */

uint * __cdecl
FUN_00692c10(Global_sub_00692C10_param_1Enum param_1,int param_2,undefined4 *param_3,
            undefined4 param_4,uint param_5)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  Global_sub_00692C10_param_1Enum *pGVar10;
  char *pcVar11;
  undefined4 *puVar12;
  CHAR local_108 [260];
  
  if (param_1 < 0x1a5) {
    if (param_1 == 0x1a4) {
      *param_3 = 0x155;
      _DAT_007d5e08 = param_2;
      _DAT_007d5e1c = (undefined2)param_4;
      return (uint *)&DAT_007d5df0;
    }
    if (param_1 < 0xe7) {
      if (param_1 == 0xe6) {
        _DAT_007d5b2c = param_4;
        *param_3 = 0x38;
        return (uint *)&DAT_007d5af8;
      }
      switch(param_1) {
      case CASE_A:
        *param_3 = 0xa6;
        pGVar10 = &DAT_00853cd8;
        for (iVar7 = 0x29; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pGVar10 = 0;
          pGVar10 = pGVar10 + 1;
        }
        *(undefined2 *)pGVar10 = 0;
        DAT_00853cd8 = param_1;
        _DAT_00853cdc = 0xff;
        _DAT_00853ce0 = 2;
        _DAT_00853ce4 = 0;
        _DAT_00853ce8 = 0;
        _DAT_00853cf0 = 0;
        uVar3 = thunk_FUN_006938c0(param_2);
        if (DAT_00853d84 <= uVar3) {
          iVar7 = ReportDebugMessage(s_E____titans_Maps_DefObj_cpp_007d6218,0x1ba,0,uVar3,
                                     &DAT_007a4ccc,s_Out_of_Range_Entourage_Group_Ind_007d623c);
          if (iVar7 != 0) {
            pcVar2 = (code *)swi(3);
            puVar4 = (uint *)(*pcVar2)();
            return puVar4;
          }
          uVar3 = 0;
        }
        iVar7 = uVar3 * 0x218;
        if (*(uint *)(iVar7 + 0x20c + DAT_00853d80) <= param_5) {
          iVar5 = ReportDebugMessage(s_E____titans_Maps_DefObj_cpp_007d6218,0x1c0,0,param_5,
                                     &DAT_007a4ccc,s_Out_of_Range_Entourage_Index_007d61f4);
          if (iVar5 != 0) {
            pcVar2 = (code *)swi(3);
            puVar4 = (uint *)(*pcVar2)();
            return puVar4;
          }
          param_5 = 0;
        }
        pcVar8 = (char *)(DAT_00853d80 + iVar7);
        _DAT_00853d7a = param_2;
        _DAT_00853d76 = *(undefined4 *)(pcVar8 + 0x214);
        if (*(int *)(pcVar8 + 0x210) != 0) {
          _DAT_00853d72 = 0xffffffff;
          wsprintfA(local_108,&DAT_007d5960,pcVar8,param_5);
          iVar5 = DAT_00853d80;
          uVar3 = 0xffffffff;
          pcVar8 = local_108;
          do {
            pcVar9 = pcVar8;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar8 = pcVar9 + -uVar3;
          pcVar9 = (char *)&DAT_00853cf2;
          for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          pcVar8 = (char *)(iVar7 + 0x104 + iVar5);
          iVar7 = -1;
          pcVar9 = pcVar8;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          if (iVar7 != -2) {
            wsprintfA(local_108,&DAT_007d5960,pcVar8,param_5);
            uVar3 = 0xffffffff;
            pcVar8 = local_108;
            do {
              pcVar9 = pcVar8;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar9 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar9;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            pcVar8 = pcVar9 + -uVar3;
            pcVar9 = (char *)&DAT_00853d32;
            for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar9 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            }
          }
          return &DAT_00853cd8;
        }
        uVar3 = 0xffffffff;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar9 = pcVar11 + -uVar3;
        pcVar11 = (char *)&DAT_00853cf2;
        for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar3 = 0xffffffff;
        pcVar8 = pcVar8 + 0x104;
        do {
          pcVar9 = pcVar8;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar8 = pcVar9 + -uVar3;
        pcVar9 = (char *)&DAT_00853d32;
        for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        _DAT_00853d72 = param_5;
        return &DAT_00853cd8;
      case CASE_14:
        _DAT_007d5c50 = param_2;
        _DAT_007d5c58 = (undefined2)param_4;
        *param_3 = 0x69;
        return (uint *)&DAT_007d5c38;
      case CASE_32:
        *param_3 = 0x28;
        _DAT_007d5a3c = param_4;
        _DAT_007d5a44 = param_2;
        return (uint *)&DAT_007d5a20;
      case CASE_5A:
        *param_3 = 0x28;
        _DAT_007d5a1c = param_2;
        _DAT_007d5a14 = param_4;
        _DAT_007d5a18 = *(undefined4 *)(&DAT_007d59e0 + (param_2 * 3 + -0x297) * 4);
        return (uint *)&DAT_007d59f8;
      case CASE_8C:
        *param_3 = 0x34;
        _DAT_007d5a64 = param_4;
        return (uint *)&DAT_007d5a48;
      }
    }
    else {
      switch(param_1) {
      case CASE_10E:
        *param_3 = 0x28;
        _DAT_007d5d20 = param_2;
        _DAT_007d5d1c = param_4;
        return (uint *)&DAT_007d5d00;
      case CASE_118:
        *param_3 = 0x28;
        _DAT_007d5d48 = param_2;
        _DAT_007d5d44 = param_4;
        return (uint *)&DAT_007d5d28;
      case CASE_122:
        *param_3 = 0x28;
        _DAT_007d5d70 = param_2;
        _DAT_007d5d6c = param_4;
        return (uint *)&DAT_007d5d50;
      case CASE_12C:
        *param_3 = 0x28;
        _DAT_007d5d98 = param_2;
        _DAT_007d5d94 = param_4;
        return (uint *)&DAT_007d5d78;
      case CASE_172:
        *param_3 = 0x151;
        _DAT_007d5f60 = param_2;
        _DAT_007d5f70 = (undefined2)param_4;
        return (uint *)&DAT_007d5f48;
      }
    }
  }
  else if (param_1 < CASE_BBE) {
    if (param_1 == 0xbbd) {
      *param_3 = 0x2c;
      return (uint *)&DAT_007d5b98;
    }
    if (param_1 < 0xbba) {
      if (param_1 == 0xbb9) goto switchD_00693197_caseD_bc0;
      if (param_1 == 0x1ae) {
        *param_3 = 0x4f;
        _DAT_007d5dc0 = param_4;
        _DAT_007d5db4 = param_2;
        return (uint *)&DAT_007d5da0;
      }
      if (param_1 == 1000) {
        _DAT_007d5cbc = param_2;
        _DAT_007d5cc8 = param_4;
        _DAT_007d5cb8 = 0;
        if (((((((param_2 == 0x3b) || (param_2 == 0x3c)) || (param_2 == 0x3d)) ||
              ((param_2 == 0x41 || (param_2 == 0x43)))) || (param_2 == 0x48)) ||
            (((((param_2 == 0x32 || (param_2 == 0x33)) ||
               ((param_2 == 0x34 || (((param_2 == 0x35 || (param_2 == 0x37)) || (param_2 == 0x4d))))
               )) || ((param_2 == 0x52 || (param_2 == 0x50)))) || (param_2 == 0x5b)))) ||
           ((((param_2 == 0x6c || (param_2 == 99)) ||
             ((param_2 == 0x60 || (((param_2 == 0x5f || (param_2 == 0x6e)) || (param_2 == 0x5d))))))
            || (((param_2 == 0x53 || (param_2 == 0x5c)) ||
                ((param_2 == 0x6d ||
                 (((param_2 == 0x70 || (param_2 == 100)) || ((param_2 == 0x62 || (param_2 == 0x73)))
                  ))))))))) {
          _DAT_007d5cb8 = 1;
        }
        *param_3 = 0x57;
        return (uint *)&DAT_007d5ca8;
      }
    }
    else {
      if (param_1 == 0xbba) {
        _DAT_007d5b70 = param_4;
        *param_3 = 0x65;
        puVar12 = &DAT_007d5b7d;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
        return (uint *)&DAT_007d5b30;
      }
      if (param_1 == 0xbbc) goto switchD_00693197_caseD_bbf;
    }
  }
  else {
    switch(param_1) {
    case CASE_BBE:
      *param_3 = 0x24;
      _DAT_007d5af0 = param_5;
      return (uint *)&DAT_007d5ad0;
    case CASE_BBF:
switchD_00693197_caseD_bbf:
      _DAT_007d5aa8 = param_1;
      _DAT_007d5ac4 = param_4;
      _DAT_007d5ac8 = param_2;
      _DAT_007d5acc = param_5;
      *param_3 = 0x28;
      return (uint *)&DAT_007d5aa8;
    case CASE_BC0:
switchD_00693197_caseD_bc0:
      _DAT_007d5a80 = param_1;
      _DAT_007d5a9c = param_4;
      _DAT_007d5aa0 = param_2;
      _DAT_007d5aa4 = param_5;
      *param_3 = 0x28;
      return (uint *)&DAT_007d5a80;
    case CASE_BC1:
      *param_3 = 0x2c;
      return (uint *)&DAT_007d5c08;
    case CASE_BC3:
      *param_3 = 0x3f;
      return (uint *)&DAT_007d5bc8;
    }
  }
  return (uint *)0x0;
}

