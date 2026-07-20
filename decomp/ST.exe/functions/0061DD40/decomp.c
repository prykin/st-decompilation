
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0061dd40(AnonShape_0061DD40_21C2820F *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = 0xffffffff;
  fVar3 = (float)(int)param_1->field_0030 * _DAT_007904f8 * _DAT_007904f0;
  fVar4 = (float)(int)param_1->field_0032 * _DAT_007904f8 * _DAT_007904f0;
  fVar5 = (float)(int)param_1->field_0034 * _DAT_007904f8 * _DAT_007904f0;
  param_1->field_0063 = fVar3;
  param_1->field_0067 = fVar4;
  param_1->field_006B = fVar5;
  fVar5 = fVar5 - (float)(int)param_1->field_003A * _DAT_007904f8 * _DAT_007904f0;
  fVar4 = fVar4 - (float)(int)param_1->field_0038 * _DAT_007904f8 * _DAT_007904f0;
  fVar3 = fVar3 - (float)(int)param_1->field_0036 * _DAT_007904f8 * _DAT_007904f0;
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if ((fVar3 != _DAT_0079034c) && (param_1->field_0097 != 0)) {
    local_c = 0;
    param_1->field_0047 = fVar3 / (float)param_1->field_0097;
    if (0 < param_1->field_0093) {
      do {
        iVar6 = 0;
        if (0 < *(int *)param_1->field_009B) {
          local_8 = 0;
          do {
            iVar2 = *(int *)(param_1->field_009F + local_c * 4);
            lVar7 = Library::MSVCRT::__ftol();
            *(int *)(iVar2 + 0xc + local_8) = (int)(short)lVar7;
            iVar6 = iVar6 + 1;
            local_8 = local_8 + 0x14;
          } while (iVar6 < *(int *)(param_1->field_009B + iVar6 * 4));
        }
        local_c = local_c + 1;
      } while (local_c < param_1->field_0093);
    }
    uVar1 = param_1->field_00AC * 0x41c64e6d + 0x3039;
    param_1->field_00AC = uVar1;
    fVar3 = (float)((uVar1 >> 0x10) % 0xb5) * _DAT_0079c70c;
    param_1->field_004B = fVar3;
    iVar6 = thunk_FUN_0062bff0((int)param_1->field_0030,(int)param_1->field_0032,
                               (int)param_1->field_0034,(int)param_1->field_0036,
                               (int)param_1->field_0038,(int)param_1->field_003A,
                               (float *)&param_1->field_0x6f,fVar3);
    if (iVar6 != 0) {
      param_1->field_005B = 0x8fc;
      param_1->field_005F = 6;
      param_1->field_004F = 0;
      param_1->field_0053 = 1;
      param_1->field_0046 = 0;
      local_10 = 1;
    }
    return local_10;
  }
  return 0xffffffff;
}

