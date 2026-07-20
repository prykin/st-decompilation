
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20511 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_00491720(STBoatC *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  STGroupBoatC *pSVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar7;
  uint uVar8;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_c;
  uint local_8;
  
  uVar7 = 0;
  local_8 = 0;
  if (DAT_008117bc != (undefined4 *)0x0) {
    local_18 = *(undefined2 *)&param_1->field_0x24;
    local_16 = param_1->field_0032;
    puVar1 = &param_1->field_05A6;
    local_1c = 0x5dd3;
    if ((*puVar1 == 0) &&
       (iVar3 = FUN_006e62d0(PTR_00802a38,param_1->field_05A2,puVar1), iVar3 == -4)) {
      RaiseInternalException
                (-4,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x501f);
    }
    local_14 = *(undefined2 *)(*puVar1 + 0x24);
    local_12 = *(undefined2 *)(*puVar1 + 0x32);
    (**(code **)*DAT_008117bc)(local_2c);
    param_2 = extraout_EDX;
  }
  param_1->field_05C0 = 0;
  param_1->field_07C2 = 0;
  param_1->field_05A6 = 0;
  uVar4 = DumpClassC::WritePtr
                    (param_1->field_005B,param_1->field_005D,param_1->field_005F,
                     CONCAT31((int3)((uint)param_2 >> 8),param_1->field_008E),
                     (AnonShape_00495EC0_95A268C6 *)param_1);
  pSVar5 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),param_1->field_0x24),
                              CONCAT22((short)((uint)uVar4 >> 0x10),param_1->field_0030));
  uVar6 = thunk_FUN_00424790((int)pSVar5);
  uVar2 = param_1->field_01D1;
  uVar8 = local_8;
  if ((uVar2 & 1) == 0) {
    if ((uVar6 & 1) != 0) {
      uVar7 = 1;
    }
  }
  else if ((uVar6 & 1) == 0) {
    uVar8 = 1;
  }
  if ((uVar2 & 2) == 0) {
    if ((uVar6 & 2) != 0) {
      uVar7 = uVar7 | 2;
    }
  }
  else if ((uVar6 & 2) == 0) {
    uVar8 = uVar8 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar6 & 4) != 0) {
      uVar7 = uVar7 | 4;
    }
  }
  else if ((uVar6 & 4) == 0) {
    uVar8 = uVar8 | 4;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar6 & 8) != 0) {
      uVar7 = uVar7 | 8;
    }
  }
  else if ((uVar6 & 8) == 0) {
    uVar8 = uVar8 | 8;
  }
  if ((uVar2 & 0x10) == 0) {
    if ((uVar6 & 0x10) != 0) {
      uVar7 = uVar7 | 0x10;
    }
  }
  else if ((uVar6 & 0x10) == 0) {
    uVar8 = uVar8 | 0x10;
  }
  if (uVar7 != 0) {
    (*param_1->vtable->vfunc_100)(uVar7);
  }
  if (uVar8 != 0) {
    (*param_1->vtable->vfunc_104)(uVar8);
  }
  local_c = PTR_00802a38->field_00E4;
  STBoatC::CmdToObj(param_1,CASE_3,&local_c);
  return;
}

