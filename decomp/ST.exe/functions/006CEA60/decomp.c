#include "../../pseudocode_runtime.h"


/* [STUtilityFunctionApplier] copy_rows: copies rowCount rows of rowBytes bytes between
   independently pitched byte buffers
   Evidence: body pattern verified */

void CopyRows(byte *destination,int destinationPitch,byte *source,int sourcePitch,uint rowBytes,
             int rowCount)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  if ((0 < (int)rowBytes) && (0 < rowCount)) {
    uVar9 = sourcePitch - rowBytes;
    uVar6 = destinationPitch - rowBytes;
    uVar8 = rowBytes;
    if (0xe < (int)rowBytes) {
      if (((byte)DAT_00858de0 & 1) == 0) {
        do {
          for (; ((uint)destination & 3) != 0; destination = destination + 1) {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            uVar8 = uVar8 - 1;
          }
          for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)destination = *(undefined4 *)source;
            source = source + 4;
            destination = destination + 4;
          }
          uVar4 = uVar8 & 3;
          if ((uVar8 & 3) != 0) {
            do {
              bVar2 = *source;
              source = source + 1;
              *destination = bVar2;
              destination = destination + 1;
              uVar8 = uVar4 - 1;
              bVar3 = 0 < (int)uVar4;
              uVar4 = uVar8;
            } while (uVar8 != 0 && bVar3);
          }
          source = source + uVar9;
          destination = destination + uVar6;
          iVar7 = rowCount + -1;
          bVar3 = 0 < rowCount;
          uVar8 = rowBytes;
          rowCount = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      if ((((699 < (int)rowBytes) && (5 < DAT_00858e24)) &&
          ((((uint)destination ^ (uint)source) & 7) == 0)) && (((uVar6 ^ uVar9) & 7) == 0)) {
        do {
          for (; ((uint)destination & 7) != 0; destination = destination + 1) {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            uVar8 = uVar8 - 1;
          }
          for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)destination = *(undefined4 *)source;
            source = source + 4;
            destination = destination + 4;
          }
          uVar4 = uVar8 & 3;
          if ((uVar8 & 3) != 0) {
            do {
              bVar2 = *source;
              source = source + 1;
              *destination = bVar2;
              destination = destination + 1;
              uVar8 = uVar4 - 1;
              bVar3 = 0 < (int)uVar4;
              uVar4 = uVar8;
            } while (uVar8 != 0 && bVar3);
          }
          source = source + uVar9;
          destination = destination + uVar6;
          iVar7 = rowCount + -1;
          bVar3 = 0 < rowCount;
          uVar8 = rowBytes;
          rowCount = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      do {
        for (; ((uint)destination & 7) != 0; destination = destination + 1) {
          bVar2 = *source;
          source = source + 1;
          *destination = bVar2;
          uVar8 = uVar8 - 1;
        }
        uVar4 = uVar8 >> 3;
        do {
          uVar1 = *(undefined8 *)source;
          source = source + 8;
          *(undefined8 *)destination = uVar1;
          destination = destination + 8;
          uVar5 = uVar4 - 1;
          bVar3 = 0 < (int)uVar4;
          uVar4 = uVar5;
        } while (uVar5 != 0 && bVar3);
        uVar4 = uVar8 & 7;
        if ((uVar8 & 7) != 0) {
          do {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            destination = destination + 1;
            uVar8 = uVar4 - 1;
            bVar3 = 0 < (int)uVar4;
            uVar4 = uVar8;
          } while (uVar8 != 0 && bVar3);
        }
        source = source + uVar9;
        destination = destination + uVar6;
        iVar7 = rowCount + -1;
        bVar3 = 0 < rowCount;
        uVar8 = rowBytes;
        rowCount = iVar7;
      } while (iVar7 != 0 && bVar3);
      return;
    }
    do {
      do {
        bVar2 = *source;
        source = source + 1;
        *destination = bVar2;
        destination = destination + 1;
        uVar4 = uVar8 - 1;
        bVar3 = 0 < (int)uVar8;
        uVar8 = uVar4;
      } while (uVar4 != 0 && bVar3);
      source = source + uVar9;
      destination = destination + uVar6;
      iVar7 = rowCount + -1;
      bVar3 = 0 < rowCount;
      uVar8 = rowBytes;
      rowCount = iVar7;
    } while (iVar7 != 0 && bVar3);
  }
  return;
}

