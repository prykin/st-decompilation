
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_SubMDObject */

undefined4 STAllPlayersC::_SubMDObject(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  AnonShape_006ACC70_C8641025 *pAVar2;
  code *pcVar3;
  STFishC *this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  STAllPlayersC *in_ECX;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  int local_2c [4];
  short local_1c;
  uint local_18;
  STFishC *local_14;
  int local_10;
  undefined4 local_c;
  short local_8;
  short local_6;
  
  local_2c[0] = 0x38;
  local_2c[1] = 0x39;
  local_2c[2] = 0x4f;
  local_2c[3] = 0x5e;
  this = (STFishC *)GetObjPtr(in_ECX,(uint)param_1,param_2,CASE_1);
  local_14 = this;
  uVar4 = (*this->vtable->vfunc_2C)();
  local_c = 0;
  local_18 = uVar4;
  if (this == (STFishC *)0x0) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x246d,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___SubMDObject_inva_007a80dc);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x246e);
  }
  if ((uVar4 != 0x3b) && (uVar4 != 0x60)) {
    local_10 = 0;
    do {
      if (uVar4 == *(int *)((int)local_2c + local_10)) {
        pAVar2 = *(AnonShape_006ACC70_C8641025 **)(local_10 + 0x7f4e2f + (char)param_1 * 0xa62);
        uVar1 = (ushort)pAVar2->field_000C;
        if (uVar1 != 0) {
          STFishC::sub_004162B0(this,(undefined2 *)((int)&param_2 + 2),&local_6,&local_8);
          uVar4 = 0;
          local_1c = *(short *)&this->field_0x32;
          this = local_14;
          if (uVar1 != 0) {
            do {
              FUN_006acc70(pAVar2,uVar4,(undefined4 *)&local_50);
              if ((((local_4a != -1) && (local_42 != -1)) && (local_50 == param_2._2_2_)) &&
                 (((local_4e == local_6 && (local_4c == local_8)) && (local_4a == local_1c)))) {
                local_42 = -1;
                local_4a = -1;
                Library::DKW::TBL::FUN_006ae140((uint *)pAVar2,uVar4,(undefined4 *)&local_50);
                local_c = 1;
              }
              uVar4 = uVar4 + 1;
              this = local_14;
            } while ((int)uVar4 < (int)(uint)uVar1);
          }
        }
      }
      local_10 = local_10 + 4;
      uVar4 = local_18;
    } while (local_10 < 0x10);
    return local_c;
  }
  STFishC::sub_004162B0(this,(undefined2 *)((int)&param_2 + 2),&local_6,&local_8);
  local_1c = *(short *)&this->field_0x32;
  local_14 = (STFishC *)0x4;
  param_1 = &g_playerRuntime[(char)param_1].field9_0xf;
  do {
    pAVar2 = (AnonShape_006ACC70_C8641025 *)*param_1;
    if ((pAVar2 != (AnonShape_006ACC70_C8641025 *)0x0) &&
       (uVar1 = (ushort)pAVar2->field_000C, uVar1 != 0)) {
      uVar4 = 0;
      local_18 = (uint)uVar1;
      if (uVar1 != 0) {
        do {
          FUN_006acc70(pAVar2,uVar4,(undefined4 *)&local_50);
          if (((((local_4a != -1) && (local_42 != -1)) && (local_48 == param_2._2_2_)) &&
              ((local_46 == local_6 && (local_44 == local_8)))) && (local_42 == local_1c)) {
            local_42 = -1;
            local_4a = -1;
            Library::DKW::TBL::FUN_006ae140((uint *)pAVar2,uVar4,(undefined4 *)&local_50);
            local_c = 1;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)local_18);
      }
    }
    param_1 = param_1 + 1;
    local_14 = (STFishC *)((int)local_14 + -1);
  } while (local_14 != (STFishC *)0x0);
  return local_c;
}

