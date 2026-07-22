
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C7610 -> 006B4170 @ 006C769F

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00520B50 -> 006B4170 @ 00520C11 | 005A39A0 -> 006B4170 @ 005A3A33 | 006B4170 ->
   EXTERNAL:0000009A @ 006B420C | 006C7610 -> 006B4170 @ 006C769F */

void FUN_006b4170(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int lprcSrc2,int param_4,
                 int param_5,int param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  tagRECT local_54;
  uint local_44;
  RECT local_3c;
  RECT local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d8b0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa0;
  if ((0 < param_5) && (0 < param_6)) {
    ExceptionList = &local_14;
    puVar1 = &stack0xffffffa0;
    if (param_2 == 0) {
      ExceptionList = &local_14;
      param_2 = FUN_006b4fa0((int)param_1);
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    local_2c.top = param_4;
    local_2c.left = lprcSrc2;
    local_2c.bottom = param_4 + param_6;
    local_2c.right = lprcSrc2 + param_5;
    local_3c.left = 0;
    local_3c.top = 0;
    local_3c.right = param_1->field_0004;
    uVar6 = local_3c.right + 3U & 0xfffffffc;
    local_3c.bottom = param_1->field_0008;
    if (local_3c.bottom < 0) {
      local_3c.bottom = -local_3c.bottom;
      uVar6 = -uVar6;
    }
    local_44 = uVar6;
    BVar2 = IntersectRect(&local_54,&local_3c,&local_2c);
    if (BVar2 != 0) {
      iVar3 = local_54.bottom - local_54.top;
      if ((int)uVar6 < 0) {
        iVar5 = -((local_54.top + -1 + iVar3) * uVar6);
      }
      else {
        iVar5 = ((local_3c.bottom - local_54.top) - iVar3) * uVar6;
      }
      puVar4 = (undefined4 *)(local_54.left + iVar5 + param_2);
      while (iVar3 != 0) {
        puVar7 = puVar4;
        for (uVar6 = (uint)(local_54.right - local_54.left) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = local_54.right - local_54.left & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = param_7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        puVar4 = (undefined4 *)((int)puVar4 + local_44);
        iVar3 = iVar3 + -1;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

