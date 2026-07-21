
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9b60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = param_1 - DAT_00807400;
  iVar2 = iVar1 - DAT_00807408;
  DAT_00807418 = param_3;
  iVar3 = param_2 - DAT_00807404;
  iVar4 = iVar3 - DAT_0080740c;
  DAT_00807410 = param_1;
  DAT_00807414 = param_2;
  DAT_0080741c = param_4;
  Library::Ourlib::STREND::FUN_006dd660(PTR_00807598,iVar1,iVar3,param_3,param_4);
  unique0x10000069 = ((float)iVar1 * DAT_00807420) / (float)DAT_00807408;
  _DAT_00807441 = ((float)(iVar2 + param_3) * DAT_00807420) / (float)DAT_00807408;
  _DAT_00807445 = ((float)(iVar4 + param_4) * DAT_00807424) / (float)DAT_0080740c;
  _DAT_00807449 = ((float)iVar3 * DAT_00807424) / (float)DAT_0080740c;
  thunk_FUN_004a9990();
  return;
}

