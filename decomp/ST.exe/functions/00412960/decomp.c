
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 3194 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_00412960(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                AnonShape_00412960_B35D15BC *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  AnonShape_00412960_B35D15BC *pAVar5;
  int iVar6;

  if ((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
     (((-1 < param_2 && (param_2 < DAT_007f4d30)) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))))
  {
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    DAT_007f4d28 = Library::DKW::STR::FUN_006db640(param_5 - param_7->field_0004);
    DAT_007f4d38 = FUN_006db6d0(param_5 - param_7->field_0004);
    if (param_6 != param_7->field_0008) {
      iVar2 = 30000;
      iVar3 = -30000;
      pAVar5 = param_7 + 1;
      iVar6 = 30000;
      param_4 = -30000;
      iVar4 = DAT_007f4d20;
      if (0 < DAT_007f4d20) {
        do {
          iVar1 = *(int *)pAVar5;
          if (iVar1 < iVar2) {
            iVar2 = iVar1;
          }
          if (iVar3 < iVar1) {
            iVar3 = iVar1;
          }
          iVar1 = pAVar5->field_0004;
          if (iVar1 < iVar6) {
            iVar6 = iVar1;
          }
          if (param_4 < iVar1) {
            param_4 = iVar1;
          }
          pAVar5 = (AnonShape_00412960_B35D15BC *)&pAVar5[1].field_0004;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = iVar3 - iVar2;
      if (iVar3 - iVar2 < param_4 - iVar6) {
        iVar4 = param_4 - iVar6;
      }
      iVar2 = iVar4 + (*(int *)(&DAT_007a4b60 + param_6 * 4) -
                      *(int *)(&DAT_007a4b60 + param_7->field_0008 * 4)) * 4;
      DAT_007f4d38 = (DAT_007f4d38 * iVar2) / iVar4;
      DAT_007f4d28 = (DAT_007f4d28 * iVar2) / iVar4;
    }
    if (param_8 == 0) {
      iVar2 = FUN_00412de0(param_1,param_2,param_3);
      if (iVar2 == 0) {
        FUN_0040eb90();
        return 0;
      }
    }
    else {
      iVar2 = FUN_00412b80(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar2 != -4) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xc7a);
      return iVar2;
    }
  }
  return -4;
}

