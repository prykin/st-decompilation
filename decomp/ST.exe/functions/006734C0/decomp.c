#include "../../pseudocode_runtime.h"


int FUN_006734c0(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  int *local_8;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (*(code *)PTR_0081194c->field_0008)(DAT_00857560,PTR_0085755c,0x400);
  if ((-1 < iVar2) || (iVar2 == -1)) {
    DAT_00857558 = iVar2;
  }
  if ((((-1 < iVar2) && (iVar2 = 0, DAT_00811908 != nullptr)) && ((DAT_007d2d24 & 0x400) != 0))
     && (0 < DAT_00857558)) {
    local_8 = DAT_00811908;
    do {
      puVar3 = Library::MSVCRT::FUN_00730590((uint *)PTR_0085755c,(char *)local_8[1]);
      if (puVar3 != nullptr) {
        uVar5 = 0xffffffff;
        pcVar8 = (char *)local_8[1];
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = ~uVar5 - 1;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)local_8[2];
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        do {
          uVar4 = (DAT_00857558 - iVar2) + uVar5;
          if (0x400 < (int)uVar4) {
            iVar6 = (int)puVar3 - (int)PTR_0085755c;
            PTR_0085755c = Library::DKW::LIB::MemRealloc(PTR_0085755c,uVar4);
            puVar3 = (uint *)(PTR_0085755c + iVar6);
          }
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(uVar5 + (int)puVar3),
                     (AnonPointee_TLOBaseTy_0607 *)(iVar2 + (int)puVar3),
                     (uint)(PTR_0085755c + ((DAT_00857558 - iVar2) - (int)puVar3) + 1));
          puVar7 = (uint *)local_8[2];
          puVar9 = puVar3;
          memmove(puVar9, puVar7, uVar5); /* compiler REP MOVS byte copy */
          DAT_00857558 = DAT_00857558 + (uVar5 - iVar2);
          puVar3 = Library::MSVCRT::FUN_00730590((uint *)((int)puVar3 + 1),(char *)local_8[1]);
        } while (puVar3 != nullptr);
      }
      local_8 = (int *)*local_8;
    } while (local_8 != nullptr);
    iVar2 = 0;
  }
  return iVar2;
}

