
int __thiscall FUN_0062fa80(void *this,AnonShape_0062FA80_0B91B2B9 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  AnonShape_0062FA80_0B91B2B9 *pAVar6;
  bool bVar7;
  undefined3 extraout_var;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  bVar7 = thunk_FUN_004961b0(*(short *)((int)this + 0x1d5),(short)uVar4,(short)uVar5);
  if (CONCAT31(extraout_var,bVar7) != 0) {
    sVar1 = *(short *)((int)this + 0x1d5);
    sVar2 = *(short *)((int)this + 0x1dd);
    sVar3 = *(short *)((int)this + 0x1d9);
    if ((((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
         ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))) ||
        ((SHORT_007fb244 <= sVar2 ||
         (g_worldCells
          [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1].objects
          [1] == (STWorldObject *)0x0)))) &&
       (iVar8 = DumpClassC::WritePtr
                          ((short)*(undefined4 *)((int)this + 0x1d5),
                           (short)*(undefined4 *)((int)this + 0x1d9),
                           (short)*(undefined4 *)((int)this + 0x1dd),1,this), iVar8 == 0)) {
      piVar9 = (int *)&param_1->field_0x24;
      *(undefined4 *)((int)this + 0x1e1) = param_1->field_0020;
      *(undefined1 *)((int)this + 0x1f9) = param_1->field_0038;
      param_1 = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        if ((*piVar9 != 0) && (iVar8 = STRubbishC::RubbishCreatePart(this), -1 < iVar8)) {
          local_c = local_c + 1;
        }
        piVar9 = piVar9 + 1;
        param_1 = (AnonShape_0062FA80_0B91B2B9 *)&param_1[-1].field_0x3b;
      } while (param_1 != (AnonShape_0062FA80_0B91B2B9 *)0x0);
      *(undefined4 *)((int)this + 0x1fa) = *(undefined4 *)&pAVar6->field_0x39;
      if (local_c == 0) {
        return 0;
      }
      local_8 = 0x3d;
      puVar10 = (undefined4 *)&pAVar6[1].field_0x1;
      piVar9 = (int *)((int)this + 0x1e5);
      param_1 = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        puVar12 = (undefined4 *)*piVar9;
        if (puVar12 != (undefined4 *)0x0) {
          local_8 = local_8 + 0x3e;
          uVar4 = puVar12[4];
          puVar11 = puVar10;
          for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar11;
          puVar10 = (undefined4 *)((int)puVar10 + 0x3e);
          *(undefined4 *)(*piVar9 + 0x10) = uVar4;
        }
        piVar9 = piVar9 + 1;
        param_1 = (AnonShape_0062FA80_0B91B2B9 *)&param_1[-1].field_0x3b;
      } while (param_1 != (AnonShape_0062FA80_0B91B2B9 *)0x0);
      return local_8;
    }
  }
  thunk_FUN_0062f900(this);
  return 0;
}

