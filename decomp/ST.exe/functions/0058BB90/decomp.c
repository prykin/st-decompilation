#include "../../pseudocode_runtime.h"


void __fastcall FUN_0058bb90(AnonShape_0058BB90_CF74AF20 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar5;
  undefined4 local_60 [6];
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  int local_8;

  uVar1 = param_1->field_0279;
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  local_2f = param_1->field_0299;
  local_34 = 0;
  local_33 = param_1->field_0295;
  local_44 = param_1->field_0043;
  local_46 = (short)((uint)(param_1->field_0259 * 5) >> 8) + param_1->field_0041;
  local_42 = param_1->field_0045 + -0x96;
  local_3c = param_1->field_0045 + -200;
  local_38 = 0xa5;
  local_60[0] = 0x28;
  local_60[3] = 1;
  local_3a = 0;
  if (local_46 < 0) {
    local_8 = (short)((local_46 / 0xc9 + (local_46 >> 0xf)) -
                     (short)((longlong)(int)local_46 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)((local_46 / 0xc9 + (local_46 >> 0xf)) -
                          (short)((longlong)(int)local_46 * 0x28c1979 >> 0x3f));
  }
  if (local_44 < 0) {
    iVar3 = (short)((local_44 / 0xc9 + (local_44 >> 0xf)) -
                   (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)((local_44 / 0xc9 + (local_44 >> 0xf)) -
                        (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
  }
  puVar5 = (undefined *)0x4;
  local_60[1] = uVar1;
  local_40 = local_46;
  local_3e = local_44;
  iVar2 = thunk_FUN_004961b0((short)local_8,(short)iVar3,4);
  if (iVar2 != 0) {
    do {
      if ((int)puVar5 < 1) break;
      puVar5 = puVar5 + -1;
      iVar2 = thunk_FUN_004961b0((short)local_8,(short)iVar3,(short)puVar5);
    } while (iVar2 != 0);
    if ((int)puVar5 < 0) {
      local_3c = (short)((int)puVar5 / 200) + -1;
      goto LAB_0058bcd7;
    }
  }
  local_3c = (short)((int)puVar5 / 200);
LAB_0058bcd7:
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    VisibleClassTy::VisHoleCreate
              (g_visibleClass_00802A88,local_8,iVar3,puVar5,param_1->field_0024,(undefined *)0x2,
               0x19);
  }
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x28,0,0,local_60,0);
  return;
}

