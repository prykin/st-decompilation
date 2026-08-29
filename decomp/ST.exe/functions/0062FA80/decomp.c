#include "../../pseudocode_runtime.h"


int __thiscall FUN_0062fa80(void *this,RecoveredRecordView_0062FA80_9D6D3E8C *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  RecoveredRecordView_0062FA80_9D6D3E8C *pRVar6;
  int local_EAX_76;
  int iVar8;
  int iVar7;
  int *piVar9;
  uint *puVar10;
  byte *puVar11;
  byte *puVar12;
  int local_c;
  int local_8;

  pRVar6 = param_1;
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

  local_EAX_76 = thunk_FUN_004961b0(STField<short>(this,0x1d5),(short)uVar4,(short)uVar5);
  if (local_EAX_76 != 0) {
    sVar1 = STField<short>(this,0x1d5);
    sVar2 = STField<short>(this,0x1dd);
    sVar3 = STField<short>(this,0x1d9);
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar2 ||
         (STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[1] == nullptr)))) &&
       /* ST_CALLSITE[0062FB6D]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
       (iVar8 = DumpClassC::WritePtr
                          ((short)STField<undefined4>(this,0x1d5),
                           (short)STField<undefined4>(this,0x1d9),
                           (short)STField<undefined4>(this,0x1dd),1,this), iVar8 == 0)) {
      piVar9 = (int *)&param_1->field_0x24;
      STField<undefined4>(this,0x1e1) = param_1->field_0020;
      STField<undefined1>(this,0x1f9) = param_1->field_0038;
      uint param_1_after_write = 0x5; /* compiler stack-slot lifetime split */
      do {
        /* ST_CALLSITE[0062FB9D]: CALL 0x004017f3; direct=004017F3 STRubbishC::RubbishCreatePart */
        if ((*piVar9 != 0) && (iVar7 = STRubbishC::RubbishCreatePart(this), -1 < iVar7)) {
          local_c = local_c + 1;
        }
        piVar9 = piVar9 + 1;
        param_1_after_write = param_1_after_write - 1;
      } while (param_1_after_write != 0);
      STField<undefined4>(this,0x1fa) = *(undefined4 *)&pRVar6->field_0x39;
      if (local_c == 0) {
        return 0;
      }
      local_8 = 0x3d;
      puVar10 = (undefined4 *)&pRVar6[1].field_0x1;
      piVar9 = (int *)((int)this + 0x1e5);
      param_1_after_write = 0x5;
      do {
        puVar12 = (byte *)*piVar9;
        if (puVar12 != nullptr) {
          local_8 = local_8 + 0x3e;
          uVar4 = puVar12[4];
          puVar11 = (byte *)(puVar10);
          memmove(puVar12, puVar11, 0x3e); /* compiler REP MOVS byte copy */
          puVar10 = (undefined4 *)((int)puVar10 + 0x3e);
          *(undefined4 *)(*piVar9 + 0x10) = uVar4;
        }
        piVar9 = piVar9 + 1;
        param_1_after_write = param_1_after_write - 1;
      } while (param_1_after_write != 0);
      return local_8;
    }
  }
  /* ST_CALLSITE[0062FC1B]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
  STRubbishC::sub_0062F900(this);
  return 0;
}

