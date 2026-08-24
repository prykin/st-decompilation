
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 3241 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_00413050(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar2_mg1;

  iVar1 = param_1;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    if ((DAT_007f4d20 < 10) || (param_5 < 1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    }
    param_1 = (int)PTR_007f4d54;
    if (((byte)DAT_007f4d08 & 1) == 0) {
      param_1 = (int)PTR_007f4d50;
    }
    iVar2_mg1 = FUN_00413170(iVar1,param_2,param_3,param_4,&param_1,iVar2);
    if (iVar2_mg1 == 0) {
      FUN_0040eb90();
      return 0;
    }
    if (iVar2_mg1 != -4) {
      RaiseInternalException
                (iVar2_mg1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",
                 0xca9);
      return iVar2_mg1;
    }
  }
  return -4;
}

