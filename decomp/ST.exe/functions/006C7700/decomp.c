
DWORD FUN_006c7700(AnonShape_006C7700_7DDC3CA1 *param_1,uint param_2)

{
  bool bVar1;
  DWORD DVar2;
  LONG LVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  char local_94;
  char local_93;
  char local_92;
  byte local_91;
  short sStack_90;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  short local_8c;
  short local_8a;
  undefined4 local_84 [12];
  byte local_53;
  short sStack_52;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  char local_5;
  
  local_c = (undefined4 *)0x0;
  DVar2 = (*(code *)param_1->field_0036)(param_1,&local_94,0x80);
  if (DVar2 != 0x80) {
    if (-1 < (int)DVar2) {
      return 0xfffffffb;
    }
    return DVar2;
  }
  if (local_94 != '\n') {
    return 0xfffffffb;
  }
  if (local_92 != '\x01') {
    return 0xfffffffb;
  }
  if ((local_93 != '\x05') || (bVar1 = true, (uint3)((uint3)local_53 * (uint3)local_91) < 5)) {
    bVar1 = false;
  }
  iVar7 = local_10;
  if (param_1->field_0026 != 0) {
    LVar3 = _llseek(param_1->field_0026,0,1);
    if (LVar3 == -1) {
      DVar2 = GetLastError();
      return DVar2;
    }
    iVar7 = LVar3 + -0x80;
    local_10 = iVar7;
    if ((param_2 == 0) && (bVar1)) {
      LVar3 = _llseek(param_1->field_0026,0,2);
      if (LVar3 == -1) {
        DVar2 = GetLastError();
        return DVar2;
      }
      param_2 = LVar3 - iVar7;
    }
  }
  local_14 = param_1->field_002A;
  uVar5 = (-(uint)(local_93 != '\x03') & 0xe) + 2;
  if (bVar1) {
    local_c = (undefined4 *)FUN_006bfb70(0x300);
    param_1->field_001E = local_c;
    if (local_c == (undefined4 *)0x0) {
      return 0xfffffffe;
    }
    if (0x380 < param_2) {
      if (param_1->field_0026 == 0) {
        param_1->field_002A = param_1->field_002A + (param_2 - 0x381);
      }
      else {
        _llseek(param_1->field_0026,iVar7 + -0x301 + param_2,0);
      }
      DVar2 = (*(code *)param_1->field_0036)(param_1,&local_5,1);
      if (DVar2 != 1) {
        if (-1 < (int)DVar2) {
          return 0xfffffff4;
        }
        return DVar2;
      }
      if (local_5 == '\f') {
        param_2 = 0x100;
        DVar2 = (*(code *)param_1->field_0036)(param_1,local_c,0x300);
        if (DVar2 != 0x300) {
          if (-1 < (int)DVar2) {
            return 0xfffffff4;
          }
          return DVar2;
        }
        goto LAB_006c78ff;
      }
    }
  }
  else if (local_93 != '\x03') {
    local_c = (undefined4 *)FUN_006bfb70(0x30);
    param_1->field_001E = local_c;
    if (local_c == (undefined4 *)0x0) {
      return 0xfffffffe;
    }
  }
  param_2 = uVar5;
  if (uVar5 == 0x10) {
    puVar6 = local_84;
    puVar8 = local_c;
    for (iVar4 = 0xc; iVar7 = local_10, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
LAB_006c78ff:
  param_1->field_001A = param_2;
  param_1->field_002A = local_14;
  if (param_1->field_0026 != 0) {
    _llseek(param_1->field_0026,iVar7 + 0x80,0);
  }
  *(int *)param_1 = (int)sStack_90;
  *(int *)&param_1->field_0004 = (int)CONCAT11(uStack_8d,uStack_8e);
  param_1->field_0x10 = local_91;
  *(int *)&param_1->field_0xc = ((int)local_8a - (int)CONCAT11(uStack_8d,uStack_8e)) + 1;
  *(int *)&param_1->field_0x8 = ((int)local_8c - (int)sStack_90) + 1;
  param_1->field_0011 = local_53;
  param_1->field_0012 = (int)sStack_52;
  param_1->field_0016 = (int)CONCAT11(uStack_4f,uStack_50);
  return 0;
}

