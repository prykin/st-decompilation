
void __thiscall FUN_00486e20(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  AiPlrClassTy *pAVar3;
  STGroupBoatC *pSVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_8;
  
  puVar2 = param_1;
  puVar6 = param_1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *param_1 = *(undefined4 *)((int)this + 0x6f7);
  local_8 = this;
  iVar5 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
  *(char *)(puVar2 + 1) = (char)iVar5;
  *(undefined1 *)((int)puVar2 + 6) = 1;
  iVar5 = thunk_FUN_00493cd0(this);
  if (iVar5 == 0) {
    *(undefined1 *)((int)puVar2 + 7) = 1;
  }
  else {
    *(undefined1 *)((int)puVar2 + 7) = 0;
  }
  iVar5 = (**(code **)(*(int *)this + 8))();
  if (iVar5 == 1) {
    *(undefined1 *)(puVar2 + 2) = 1;
  }
  else {
    *(undefined1 *)(puVar2 + 2) = 0;
  }
  if (*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
  goto cf_common_exit_00486ED3;
  bVar1 = *(byte *)(puVar2 + 1);
  if (bVar1 != 0) {
    if (bVar1 < 3) {
      iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
      if ((char)iVar5 == '\x03') goto cf_common_exit_00486ED3;
    }
    else if ((bVar1 == 3) &&
            ((iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24)), (char)iVar5 == '\x01' ||
             (iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24)), (char)iVar5 == '\x02')))) {
cf_common_exit_00486ED3:
      *(undefined1 *)((int)puVar2 + 5) = 3;
      return;
    }
  }
  *(undefined1 *)((int)puVar2 + 5) = 1;
  *(undefined1 *)((int)puVar2 + 0x39) = 1;
  *(undefined1 *)(puVar2 + 0xe) = 1;
  *(undefined1 *)((int)puVar2 + 0x37) = 1;
  *(undefined1 *)((int)puVar2 + 0x36) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x7ee) + 0x36 + (int)puVar2) = 3;
  switch(*(undefined4 *)((int)this + 0x6f7)) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x26:
  case 0x27:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 6;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 6) && (*(int *)((int)this + 0x459) != 0x6a)) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 4:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 9;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 10) && (*(int *)((int)this + 0x459) != 0x6e)) {
      if (0 < *(int *)((int)this + 0x7be)) {
        *(undefined1 *)(puVar2 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 5:
  case 0xb:
  case 0x11:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 8;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) == 7) || (*(int *)((int)this + 0x459) == 0x6b)) break;
    iVar5 = *(int *)((int)this + 0x7be);
    goto LAB_0048797b;
  case 6:
  case 0x12:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 7;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68))
    goto LAB_00487aa9;
    if (g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b != 0) {
      bVar7 = *(int *)((int)this + 0x716) == *(int *)((int)this + 0x712);
LAB_00487a9b:
      if (!bVar7) {
        *(undefined1 *)((int)puVar2 + 0x12) = 1;
        goto LAB_00487aad;
      }
    }
LAB_00487aa3:
    *(undefined1 *)((int)puVar2 + 0x12) = 0;
    goto LAB_00487aad;
  case 7:
  case 0x13:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0xd;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    if (*(int *)((int)this + 0x7ca) == 0) {
      *(undefined1 *)((int)puVar2 + 0xe) = 0x13;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xe) = 0x14;
    }
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0xe) || (*(int *)((int)this + 0x459) == 0x72)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if (*(int *)((int)this + 0x7ca) == 0) {
      if ((*(int *)((int)this + 0x45d) == 0xf) || (*(int *)((int)this + 0x459) == 0x73)) {
LAB_00487782:
        *(undefined1 *)(puVar2 + 5) = 3;
      }
      else {
        *(undefined1 *)(puVar2 + 5) = 1;
      }
    }
    else {
      iVar5 = thunk_FUN_00492550(this,*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                                 *(short *)((int)this + 0x5f),(undefined2 *)&local_8,
                                 (undefined2 *)((int)&local_8 + 2),(short *)((int)&param_1 + 2));
      if (iVar5 == 0) {
        *(undefined1 *)(puVar2 + 5) = 0;
      }
      else {
        if ((*(int *)((int)this + 0x45d) == 0x10) || (*(int *)((int)this + 0x459) == 0x74))
        goto LAB_00487782;
        *(undefined1 *)(puVar2 + 5) = 1;
      }
    }
    if (*(int *)((int)this + 0x7ca) != 0) {
      *(undefined1 *)(puVar2 + 4) = 0;
    }
    goto switchD_00486f27_default;
  case 8:
  case 0x14:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0x11;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x12;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0xc) || (*(int *)((int)this + 0x459) == 0x70)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68))
    goto LAB_00487bab;
    if (g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b != 0) {
      bVar7 = *(int *)((int)this + 0x716) == *(int *)((int)this + 0x712);
LAB_00487b9d:
      if (!bVar7) {
        *(undefined1 *)((int)puVar2 + 0x12) = 1;
        goto LAB_00487baf;
      }
    }
LAB_00487ba5:
    *(undefined1 *)((int)puVar2 + 0x12) = 0;
    goto LAB_00487baf;
  case 9:
  case 0x15:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    if (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d) {
      if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
        *(undefined1 *)((int)puVar2 + 0xf) = 3;
      }
      else {
        *(undefined1 *)((int)puVar2 + 0xf) = 1;
      }
      if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
        *(undefined1 *)(puVar2 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar2 + 4) = 1;
      }
      if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
        *(undefined1 *)((int)puVar2 + 0x11) = 3;
        *(undefined1 *)((int)puVar2 + 0x13) = 1;
      }
      else {
        *(undefined1 *)((int)puVar2 + 0x11) = 1;
        *(undefined1 *)((int)puVar2 + 0x13) = 1;
      }
    }
    goto switchD_00486f27_default;
  case 0xc:
  case 0x18:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0xe;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x10;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x11) || (*(int *)((int)this + 0x459) == 0x75)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 0x12) && (*(int *)((int)this + 0x459) != 0x76)) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x16:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    if (*(int *)((int)this + 0x732) == 1) {
      *(undefined1 *)((int)puVar2 + 0xe) = 0xc;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xe) = 0xb;
    }
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if (*(int *)((int)this + 0x732) == 1) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
    goto LAB_00487975;
  case 0x17:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 10;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if (((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) &&
       (*(int *)((int)this + 0x7de) == 0)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if (((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) &&
       (*(int *)((int)this + 0x7de) == 1)) {
      *(undefined1 *)(puVar2 + 5) = 3;
      goto switchD_00486f27_default;
    }
    goto LAB_00487bcf;
  case 0x19:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0xe;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x11) || (*(int *)((int)this + 0x459) == 0x75))
    goto LAB_0048802a;
    *(undefined1 *)(puVar2 + 4) = 1;
    goto LAB_0048802e;
  case 0x1a:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0x11;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x12;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0xc) || (*(int *)((int)this + 0x459) == 0x70)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) != 0x16) && (*(int *)((int)this + 0x459) != 0x7a)) {
      if ((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f != 0) &&
         (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 != 0)) {
        iVar5 = thunk_FUN_004d6df0(this);
        bVar7 = iVar5 == 0;
        goto LAB_00487b9d;
      }
      goto LAB_00487ba5;
    }
LAB_00487bab:
    *(undefined1 *)((int)puVar2 + 0x12) = 3;
LAB_00487baf:
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 0xd) && (*(int *)((int)this + 0x459) != 0x71)) {
LAB_00487bcf:
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x1b:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    if (*(int *)((int)this + 0x7ca) == 0) {
      *(undefined1 *)((int)puVar2 + 10) = 0x13;
    }
    else {
      *(undefined1 *)((int)puVar2 + 10) = 0x14;
    }
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x18;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if (*(int *)((int)this + 0x7ca) == 0) {
      if ((*(int *)((int)this + 0x45d) == 0xf) || (*(int *)((int)this + 0x459) == 0x73)) {
LAB_00487e0b:
        *(undefined1 *)(puVar2 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar2 + 4) = 1;
      }
    }
    else {
      iVar5 = thunk_FUN_00492550(this,*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                                 *(short *)((int)this + 0x5f),(undefined2 *)((int)&local_8 + 2),
                                 (undefined2 *)&local_8,(short *)((int)&param_1 + 2));
      if (iVar5 == 0) {
        *(undefined1 *)(puVar2 + 4) = 0;
      }
      else {
        if ((*(int *)((int)this + 0x45d) == 0x10) || (*(int *)((int)this + 0x459) == 0x74))
        goto LAB_00487e0b;
        *(undefined1 *)(puVar2 + 4) = 1;
      }
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x16) || (*(int *)((int)this + 0x459) == 0x7a)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if (((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f == 0) ||
             (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 == 0)) ||
            (iVar5 = thunk_FUN_004d6df0(this), iVar5 == 0)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x5f);
    if (0 < iVar5) {
      if ((*(int *)((int)this + 0x45d) != 0x15) || (*(int *)((int)this + 0x635) != 2))
      goto LAB_00487ecd;
      goto LAB_00487eb7;
    }
    goto cf_common_join_004881B5;
  case 0x1c:
  case 0x23:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0;
    goto LAB_004879a0;
  case 0x1d:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0x10;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x18;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x12) || (*(int *)((int)this + 0x459) == 0x76)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x16) || (*(int *)((int)this + 0x459) == 0x7a)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if (((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f == 0) ||
             (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 == 0)) ||
            (iVar5 = thunk_FUN_004d6df0(this), iVar5 == 0)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x5f);
    if (iVar5 < 1) goto cf_common_join_004881B5;
    if ((*(int *)((int)this + 0x45d) == 0x15) && (*(int *)((int)this + 0x635) == 2))
    goto LAB_00487eb7;
LAB_00487ecd:
    if (9 < *(int *)((int)this + 0x71e)) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
    goto cf_common_join_004881B5;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x28:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
LAB_004879a0:
    if (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d) {
      if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
        *(undefined1 *)((int)puVar2 + 0xf) = 3;
      }
      else {
        *(undefined1 *)((int)puVar2 + 0xf) = 1;
      }
      if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
LAB_0048802a:
        *(undefined1 *)(puVar2 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar2 + 4) = 1;
      }
LAB_0048802e:
      if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
        *(undefined1 *)((int)puVar2 + 0x11) = 3;
      }
      else {
        *(undefined1 *)((int)puVar2 + 0x11) = 1;
      }
      if ((*(int *)((int)this + 0x45d) == 0x16) || (*(int *)((int)this + 0x459) == 0x7a)) {
        *(undefined1 *)((int)puVar2 + 0x12) = 3;
        *(undefined1 *)((int)puVar2 + 0x13) = 1;
      }
      else if (((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f == 0) ||
               (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 == 0)) ||
              (iVar5 = thunk_FUN_004d6df0(this), iVar5 == 0)) {
        *(undefined1 *)((int)puVar2 + 0x12) = 0;
        *(undefined1 *)((int)puVar2 + 0x13) = 1;
      }
      else {
        *(undefined1 *)((int)puVar2 + 0x12) = 1;
        *(undefined1 *)((int)puVar2 + 0x13) = 1;
      }
    }
    goto switchD_00486f27_default;
  case 0x21:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 8;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x16) || (*(int *)((int)this + 0x459) == 0x7a)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if (((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f == 0) ||
             (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 == 0)) ||
            (iVar5 = thunk_FUN_004d6df0(this), iVar5 == 0)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 7) && (*(int *)((int)this + 0x459) != 0x6b)) {
      if (0 < *(int *)((int)this + 0x7be)) {
        *(undefined1 *)(puVar2 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 0x22:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 7;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 2) || (*(int *)((int)this + 0x459) == 0x66)) {
      *(undefined1 *)(puVar2 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) != 0x16) && (*(int *)((int)this + 0x459) != 0x7a)) {
      if ((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f != 0) &&
         (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 != 0)) {
        iVar5 = thunk_FUN_004d6df0(this);
        bVar7 = iVar5 == 0;
        goto LAB_00487a9b;
      }
      goto LAB_00487aa3;
    }
LAB_00487aa9:
    *(undefined1 *)((int)puVar2 + 0x12) = 3;
LAB_00487aad:
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 9) && (*(int *)((int)this + 0x459) != 0x6d)) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x24:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 0x48;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x18;
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    *(undefined1 *)(puVar2 + 4) = 0;
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x16) || (*(int *)((int)this + 0x459) == 0x7a)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if (((g_playerRuntime[*(char *)((int)this + 0x24)].field320_0x15f == 0) ||
             (iVar5 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24)), iVar5 == 0)) ||
            (iVar5 = thunk_FUN_004d6df0(this), iVar5 == 0)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if ((*(int *)((int)this + 0x45d) != 0x15) || (*(int *)((int)this + 0x635) != 2)) {
      if (9 < *(int *)((int)this + 0x71e)) {
        *(undefined1 *)(puVar2 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
LAB_00487eb7:
    if (*(int *)((int)this + 0x71e) < 10) goto cf_common_join_004881B5;
    break;
  case 0x25:
    *(undefined1 *)((int)puVar2 + 9) = 2;
    *(undefined1 *)((int)puVar2 + 10) = 3;
    *(undefined1 *)((int)puVar2 + 0xb) = 1;
    *(undefined1 *)(puVar2 + 3) = 4;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x2f;
    if (*(int *)((int)this + 0x732) == 1) {
      *(undefined1 *)((int)puVar2 + 0xe) = 0xc;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xe) = 0xb;
    }
    if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((*(int *)((int)this + 0x45d) == 1) || (*(int *)((int)this + 0x459) == 0x65)) {
      *(undefined1 *)((int)puVar2 + 0xf) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xf) = 1;
    }
    *(undefined1 *)(puVar2 + 4) = 0;
    if ((*(int *)((int)this + 0x45d) == 3) || (*(int *)((int)this + 0x459) == 0x67)) {
      *(undefined1 *)((int)puVar2 + 0x11) = 3;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x11) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 4) || (*(int *)((int)this + 0x459) == 0x68)) {
      *(undefined1 *)((int)puVar2 + 0x12) = 3;
    }
    else if ((g_playerRuntime[*(char *)((int)this + 0x24)].field317_0x15b == 0) ||
            (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712))) {
      *(undefined1 *)((int)puVar2 + 0x12) = 0;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x12) = 1;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    if (*(int *)((int)this + 0x732) == 1) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
LAB_00487975:
    iVar5 = *(int *)((int)this + 0x726);
LAB_0048797b:
    if (0 < iVar5) {
      *(undefined1 *)(puVar2 + 5) = 1;
      goto switchD_00486f27_default;
    }
cf_common_join_004881B5:
    *(undefined1 *)(puVar2 + 5) = 0;
  default:
    goto switchD_00486f27_default;
  }
  *(undefined1 *)(puVar2 + 5) = 3;
switchD_00486f27_default:
  pAVar3 = thunk_FUN_004357f0(*(char *)((int)this + 0x24));
  if (pAVar3 == (AiPlrClassTy *)0x0) {
    *(undefined1 *)((int)puVar2 + 0x15) = 0;
  }
  else {
    pSVar4 = thunk_FUN_0042b760(CONCAT31((int3)((uint)pAVar3 >> 8),*(undefined1 *)((int)this + 0x24)
                                        ),CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x30)));
    if (pSVar4 == (STGroupBoatC *)0x0) {
      *(undefined1 *)((int)puVar2 + 0x15) = 0;
    }
    else if (pSVar4->field_001C == 0) {
      *(undefined1 *)((int)puVar2 + 0x15) = 1;
    }
    else {
      *(undefined1 *)((int)puVar2 + 0x15) = 3;
    }
  }
  switch(*(undefined4 *)((int)this + 0x6f7)) {
  case 0x16:
  case 0x25:
    *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)((int)this + 0x726);
    break;
  case 0x17:
    *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)((int)this + 0x72a);
    break;
  default:
    *(undefined1 *)(puVar2 + 0xd) = 0;
    break;
  case 0x1b:
  case 0x1d:
  case 0x24:
    *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)((int)this + 0x71e);
    break;
  case 0x23:
    *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)((int)this + 0x722);
  }
  *(undefined1 *)(puVar2 + 7) = *(undefined1 *)((int)this + 0x7d2);
  *(undefined1 *)((int)puVar2 + 0x1d) = *(undefined1 *)((int)this + 0x7d6);
  *(undefined1 *)((int)puVar2 + 0x1e) = *(undefined1 *)((int)this + 0x7da);
  return;
}

