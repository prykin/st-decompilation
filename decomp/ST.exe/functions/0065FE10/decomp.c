
undefined4 __fastcall
FUN_0065fe10(AiFltClassTy *param_1,undefined4 param_2,int param_3,short *param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  uint uVar3;
  uint *groupContent;
  STGroupBoatC *this;
  int iVar4;
  uint **ppuVar5;
  uint *local_38 [5];
  uint local_24;
  undefined4 local_20;
  DArrayTy *local_1c;
  DArrayTy *local_c;
  undefined4 local_8;
  
  ppuVar5 = local_38;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar5 = (uint *)0x0;
    ppuVar5 = ppuVar5 + 1;
  }
  local_c = (DArrayTy *)0x0;
  local_8 = 0;
  param_1->field_00A7 = 0;
  uVar2 = AiFltClassTy::sub_0065D9C0(param_1);
  if (CONCAT22(extraout_var,uVar2) == 0) {
    return 0xffffffff;
  }
  sVar1 = param_1->field_0039;
  if (param_3 == 0xdd) {
    uVar3 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
  }
  else if (param_3 == 0xde) {
    uVar3 = -(uint)(sVar1 != 3) & 0x4f;
  }
  else if (param_3 == 0xe0) {
    uVar3 = (sVar1 != 3) - 1 & 0x61;
  }
  else {
    uVar3 = 0;
  }
  groupContent = thunk_FUN_0065fa60(param_1,uVar3,(short *)0x1);
  if (groupContent != (uint *)0x0) {
    sVar1 = param_1->field_0039;
    if (sVar1 < 1) {
LAB_0065fec9:
      iVar4 = 0;
    }
    else if (sVar1 < 3) {
      iVar4 = 0x3b;
    }
    else {
      if (sVar1 != 3) goto LAB_0065fec9;
      iVar4 = 0x60;
    }
    local_c = (DArrayTy *)thunk_FUN_0065fa60(param_1,iVar4,(short *)0x1);
    if (local_c != (DArrayTy *)0x0) {
      sVar1 = param_1->field_0039;
      local_38[0] = (uint *)0x0;
      if (param_3 == 0xdd) {
        local_24 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (param_3 == 0xde) {
        local_24 = -(uint)(sVar1 != 3) & 0x4f;
      }
      else if (param_3 == 0xe0) {
        local_24 = (sVar1 != 3) - 1 & 0x61;
      }
      else {
        local_24 = 0;
      }
      local_20 = 0;
      local_38[1] = groupContent;
      local_1c = local_c;
      if (((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
         (this = thunk_FUN_0042b760((uint)(byte)param_1->field_0x24,
                                    CONCAT22((short)((uint)local_c >> 0x10),param_1->field_007D)),
         this != (STGroupBoatC *)0x0)) {
        (*this->vtable->vfunc_08)(this,CASE_8,local_38);
        goto LAB_0065ff72;
      }
    }
  }
  local_8 = 0xffffffff;
LAB_0065ff72:
  if (groupContent != (uint *)0x0) {
    FUN_006ae110((byte *)groupContent);
  }
  if (local_c != (DArrayTy *)0x0) {
    FUN_006ae110((byte *)local_c);
  }
  return local_8;
}

