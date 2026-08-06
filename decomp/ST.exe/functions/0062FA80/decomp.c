#include "../../pseudocode_runtime.h"


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
  byte *puVar10;
  byte *puVar11;
  int local_c;
  int local_8;

  pAVar6 = param_1;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    return 0;
  }
  STField<undefined4>(this,0x1d5) = param_1->field_0014;
  uVar4 = param_1->field_0018;
  STField<undefined4>(this,0x1d9) = uVar4;
  uVar5 = param_1->field_001C;
  STField<undefined4>(this,0x1dd) = uVar5;
  iVar7 = thunk_FUN_004961b0(STField<short>(this,0x1d5),(short)uVar4,(short)uVar5);
  if (iVar7 != 0) {
    sVar1 = STField<short>(this,0x1d5);
    sVar2 = STField<short>(this,0x1dd);
    sVar3 = STField<short>(this,0x1d9);
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar2 ||
         (STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[1] == nullptr)))) &&
       (iVar7 = DumpClassC::WritePtr
                          ((short)STField<undefined4>(this,0x1d5),
                           (short)STField<undefined4>(this,0x1d9),
                           (short)STField<undefined4>(this,0x1dd),1,this), iVar7 == 0)) {
      piVar8 = (int *)&param_1->field_0x24;
      STField<undefined4>(this,0x1e1) = param_1->field_0020;
      STField<undefined1>(this,0x1f9) = param_1->field_0038;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        if ((*piVar8 != 0) && (iVar7 = STRubbishC::RubbishCreatePart(this), -1 < iVar7)) {
          local_c = local_c + 1;
        }
        piVar8 = piVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_0062FA80_0B91B2B9 *)&param_1[-1].field_0x3b;
      } while (param_1 != nullptr);
      STField<undefined4>(this,0x1fa) = *(undefined4 *)&pAVar6->field_0x39;
      if (local_c == 0) {
        return 0;
      }
      local_8 = 0x3d;
      puVar9 = (undefined4 *)&pAVar6[1].field_0x1;
      piVar8 = (int *)((int)this + 0x1e5);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        puVar11 = (byte *)*piVar8;
        if (puVar11 != nullptr) {
          local_8 = local_8 + 0x3e;
          uVar4 = puVar11[4];
          puVar10 = (byte *)(puVar9);
          memmove(puVar11, puVar10, 0x3e); /* compiler REP MOVS byte copy */
          puVar9 = (undefined4 *)((int)puVar9 + 0x3e);
          *(undefined4 *)(*piVar8 + 0x10) = uVar4;
        }
        piVar8 = piVar8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_0062FA80_0B91B2B9 *)&param_1[-1].field_0x3b;
      } while (param_1 != nullptr);
      return local_8;
    }
  }
  STRubbishC::sub_0062F900(this);
  return 0;
}

