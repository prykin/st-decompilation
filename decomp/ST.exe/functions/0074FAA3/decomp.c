
int * __thiscall FUN_0074faa3(void *this,int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_8;

  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    uVar4 = Library::MSVCRT::FUN_0072e530(param_1 << 4);
    *(undefined4 *)this = uVar4;
    local_8 = 0;
    if (*(int *)((int)this + 8) != 0) {
      piVar8 = (int *)(param_2 + 8);
      do {
        iVar3 = piVar8[-2];
        puVar7 = (undefined2 *)(*(int *)this + (-8 - param_2) + (int)piVar8);
        *puVar7 = (short)iVar3;
        switch((short)iVar3) {
        case 2:
        case 0xb:
          puVar7[4] = (short)*piVar8;
          break;
        case 5:
        case 7:
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)piVar8;
          break;
        case 6:
          *(int *)(puVar7 + 4) = *piVar8;
          *(int *)(puVar7 + 6) = piVar8[1];
          break;
        case 8:
          if (*piVar8 == 0) {
            *(undefined4 *)(puVar7 + 4) = 0;
          }
          else {
            uVar1 = *(ushort *)(*piVar8 + -2);
            puVar5 = (ushort *)Library::MSVCRT::FUN_0072e530((uint)uVar1 * 2 + 2);
            *puVar5 = uVar1;
            *(ushort **)(puVar7 + 4) = puVar5 + 1;
            puVar9 = (undefined4 *)*piVar8;
            puVar5 = puVar5 + 1;
            for (uVar6 = (uint)(uVar1 >> 1); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)puVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar5 = puVar5 + 2;
            }
            for (uVar6 = (uint)uVar1 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar5 = (ushort *)((int)puVar5 + 1);
            }
          }
        case 3:
        case 4:
        case 10:
          *(int *)(puVar7 + 4) = *piVar8;
          break;
        case 9:
        case 0xd:
          piVar2 = (int *)*piVar8;
          *(int **)(puVar7 + 4) = piVar2;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar2 + 4))(piVar2);
          break;
        case 0x11:
          *(char *)(puVar7 + 4) = (char)*piVar8;
        }
        local_8 = local_8 + 1;
        piVar8 = piVar8 + 4;
      } while (local_8 < *(uint *)((int)this + 8));
    }
  }
  return this;
}

