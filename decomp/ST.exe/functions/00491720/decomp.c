
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20511 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_00491720(STBoatC *param_1,undefined4 param_2)

{
  ushort **ppuVar1;
  uint uVar2;
  int iVar3;
  STGroupBoatC *pSVar4;
  uint uVar5;
  byte arg_1;
  uint uVar6;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  ushort local_14;
  ushort local_12;
  uint local_c;
  uint local_8;

  arg_1 = 0;
  local_8 = 0;
  if (DAT_008117bc != nullptr) {
    local_18 = *(undefined2 *)&param_1->field_0024;
    local_16 = param_1->field_0032;
    ppuVar1 = &param_1->field_05A6;
    local_1c = 0x5dd3;
    if ((*ppuVar1 == nullptr) &&
       (iVar3 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_05A2,
                           (int *)ppuVar1), iVar3 == -4)) {
      RaiseInternalException
                (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x501f);
    }
    local_14 = (*ppuVar1)[0x12];
    local_12 = (*ppuVar1)[0x19];
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_2c);
  }
  param_1->field_05C0 = 0;
  param_1->field_07C2 = 0;
  param_1->field_05A6 = nullptr;
  DumpClassC::WritePtr
            (param_1->field_005B,param_1->field_005D,param_1->field_005F,param_1->field_008E,
             (RecoveredRecord_DumpClassC_00495EC0 *)param_1);
  pSVar4 = thunk_FUN_0042b760(*(char *)&param_1->field_0024,param_1->field_0030);
  uVar5 = thunk_FUN_00424790(pSVar4);
  uVar2 = param_1->field_01D1;
  uVar6 = local_8;
  if ((uVar2 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      arg_1 = 1;
    }
  }
  else if ((uVar5 & 1) == 0) {
    uVar6 = 1;
  }
  if ((uVar2 & 2) == 0) {
    if ((uVar5 & 2) != 0) {
      arg_1 = arg_1 | 2;
    }
  }
  else if ((uVar5 & 2) == 0) {
    uVar6 = uVar6 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar5 & 4) != 0) {
      arg_1 = arg_1 | 4;
    }
  }
  else if ((uVar5 & 4) == 0) {
    uVar6 = uVar6 | 4;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar5 & 8) != 0) {
      arg_1 = arg_1 | 8;
    }
  }
  else if ((uVar5 & 8) == 0) {
    uVar6 = uVar6 | 8;
  }
  if ((uVar2 & 0x10) == 0) {
    if ((uVar5 & 0x10) != 0) {
      arg_1 = arg_1 | 0x10;
    }
  }
  else if ((uVar5 & 0x10) == 0) {
    uVar6 = uVar6 | 0x10;
  }
  if (arg_1 != 0) {
    param_1->vfunc_100(arg_1);
  }
  if (uVar6 != 0) {
    param_1->vfunc_104((char)uVar6);
  }
  local_c = g_playSystem_00802A38->field_00E4;
  STBoatC::CmdToObj(param_1,CASE_3,&local_c);
  return;
}

