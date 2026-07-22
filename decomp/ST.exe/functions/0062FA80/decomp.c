
int __thiscall FUN_0062fa80(void *this,AnonShape_0062FA80_0B91B2B9 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  AnonShape_0062FA80_0B91B2B9 *pAVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_c;
  int local_8;

  pAVar6 = param_1;
  local_c = 0;
  if (param_1 == (AnonShape_0062FA80_0B91B2B9 *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x1d5) = param_1->field_0014;
  uVar4 = param_1->field_0018;
  *(undefined4 *)((int)this + 0x1d9) = uVar4;
  uVar5 = param_1->field_001C;
  *(undefined4 *)((int)this + 0x1dd) = uVar5;
  iVar7 = thunk_FUN_004961b0(*(short *)((int)this + 0x1d5),(short)uVar4,(short)uVar5);
  if (iVar7 != 0) {
    sVar1 = *(short *)((int)this + 0x1d5);
    sVar2 = *(short *)((int)this + 0x1dd);
    sVar3 = *(short *)((int)this + 0x1d9);
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar2 ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
           (int)sVar1].objects[1] == (STWorldObject *)0x0)))) &&
       (iVar7 = DumpClassC::WritePtr
                          ((short)*(undefined4 *)((int)this + 0x1d5),
                           (short)*(undefined4 *)((int)this + 0x1d9),
                           (short)*(undefined4 *)((int)this + 0x1dd),1,this), iVar7 == 0)) {
      piVar8 = (int *)&param_1->field_0x24;
      *(undefined4 *)((int)this + 0x1e1) = param_1->field_0020;
      *(undefined1 *)((int)this + 0x1f9) = param_1->field_0038;
      param_1 = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        if ((*piVar8 != 0) && (iVar7 = STRubbishC::RubbishCreatePart(this), -1 < iVar7)) {
          local_c = local_c + 1;
        }
        piVar8 = piVar8 + 1;
        param_1 = (AnonShape_0062FA80_0B91B2B9 *)&param_1[-1].field_0x3b;
      } while (param_1 != (AnonShape_0062FA80_0B91B2B9 *)0x0);
      *(undefined4 *)((int)this + 0x1fa) = *(undefined4 *)&pAVar6->field_0x39;
      if (local_c == 0) {
        return 0;
      }
      local_8 = 0x3d;
      puVar9 = (undefined4 *)&pAVar6[1].field_0x1;
      piVar8 = (int *)((int)this + 0x1e5);
      param_1 = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        puVar11 = (undefined4 *)*piVar8;
        if (puVar11 != (undefined4 *)0x0) {
          local_8 = local_8 + 0x3e;
          uVar4 = puVar11[4];
          puVar10 = puVar9;
          for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
          puVar9 = (undefined4 *)((int)puVar9 + 0x3e);
          *(undefined4 *)(*piVar8 + 0x10) = uVar4;
        }
        piVar8 = piVar8 + 1;
        param_1 = (AnonShape_0062FA80_0B91B2B9 *)&param_1[-1].field_0x3b;
      } while (param_1 != (AnonShape_0062FA80_0B91B2B9 *)0x0);
      return local_8;
    }
  }
  STRubbishC::sub_0062F900(this);
  return 0;
}

