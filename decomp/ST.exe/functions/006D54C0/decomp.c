
undefined4 __fastcall FUN_006d54c0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_1c;
  LPCRITICAL_SECTION local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_14 = 0;
  local_18 = (LPCRITICAL_SECTION)((int)param_1 + 0x7c);
  EnterCriticalSection(local_18);
  FUN_0074a193(param_1);
  piVar1 = *(int **)((int)param_1 + 0x284);
  iVar5 = piVar1[3] - piVar1[1];
  iVar3 = piVar1[2] - *piVar1;
  if ((iVar3 == 0) || (iVar5 == 0)) {
    iVar3 = piVar1[0xd];
    uVar4 = piVar1[0xe] >> 0x1f;
    iVar5 = (piVar1[0xe] ^ uVar4) - uVar4;
  }
  *(undefined4 *)(*(int *)((int)param_1 + 0x288) + 0x18) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x288) + 0x1c) = 0;
  *(int *)(*(int *)((int)param_1 + 0x288) + 0x20) = iVar3;
  *(int *)(*(int *)((int)param_1 + 0x288) + 0x24) = iVar5;
  *(undefined4 *)(*(int *)((int)param_1 + 0x288) + 8) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x288) + 0xc) = 0;
  *(int *)(*(int *)((int)param_1 + 0x288) + 0x10) = iVar3;
  *(int *)(*(int *)((int)param_1 + 0x288) + 0x14) = iVar5;
  *(uint *)(*(int *)((int)param_1 + 0x288) + 0x98) =
       (uint)*(ushort *)(piVar1 + 0xf) * (uint)*(ushort *)((int)piVar1 + 0x3e);
  iVar2 = *(int *)((int)param_1 + 0x288);
  *(int *)(iVar2 + 0xb0) = piVar1[10];
  *(int *)(iVar2 + 0xb4) = piVar1[0xb];
  *(int *)(*(int *)((int)param_1 + 0x288) + 0xb8) = piVar1[8];
  *(int *)(*(int *)((int)param_1 + 0x288) + 0xbc) = piVar1[9];
  uVar4 = piVar1[0xe] >> 0x1f;
  local_10 = Library::DKW::DDX::FUN_006c4350
                       (*(int *)(*(int *)((int)param_1 + 0x288) + 0x28),&local_8,piVar1[0xd],
                        (piVar1[0xe] ^ uVar4) - uVar4,0,0);
  if (local_10 == 0) {
    local_10 = 0;
    local_c = 0;
    do {
      local_10 = FUN_006bbe40(local_8,&local_1c,&local_14,0);
      if (local_10 == 0) {
LAB_006d5620:
        (**(code **)(*local_8 + 0x80))(local_8,0);
        break;
      }
      if (local_10 != -0x7789fe3e) {
        if (local_10 == 0) goto LAB_006d5620;
        break;
      }
      (**(code **)(*local_8 + 0x6c))(local_8);
      local_c = local_c + 1;
    } while (local_c < 2);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if ((((((local_10 != 0) ||
         (iVar2 = *(int *)((int)param_1 + 0x288), *(int *)(iVar2 + 0x90) != iVar3)) ||
        (*(int *)(iVar2 + 0x94) != iVar5)) ||
       (((piVar1[0xd] * (uint)*(ushort *)((int)piVar1 + 0x3e) + 0x1f >> 3 & 0x1ffffffc) != local_14
        || (-1 < piVar1[0xe])))) ||
      (iVar2 = *(int *)(iVar2 + 0x28),
      (uint)*(ushort *)((int)piVar1 + 0x3e) != *(uint *)(iVar2 + 0x20))) ||
     ((piVar1[0x10] == 3 &&
      (((piVar1[0x16] != *(int *)(iVar2 + 0x4c4) || (piVar1[0x17] != *(int *)(iVar2 + 0x4c8))) ||
       (piVar1[0x18] != *(int *)(iVar2 + 0x4cc))))))) {
    FUN_006c3500(*(int *)((int)param_1 + 0x288));
    *(undefined4 *)((int)param_1 + 0x30c) = 0;
    *(int *)(*(int *)((int)param_1 + 0x288) + 0x90) = iVar3;
    *(int *)(*(int *)((int)param_1 + 0x288) + 0x94) = iVar5;
  }
  *(int *)((int)param_1 + 0x28c) = iVar3;
  *(int *)((int)param_1 + 0x290) = iVar5;
  LeaveCriticalSection(local_18);
  return 0;
}

