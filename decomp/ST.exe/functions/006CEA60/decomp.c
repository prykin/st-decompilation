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
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar9;
  uint uVar10;
  uint uVar8;
  uint uVar4;
  uint temp_3f510afb7e;
  uint temp_79f46df8256;

  if ((0 < (int)rowBytes) && (0 < rowCount)) {
    uVar10 = sourcePitch - rowBytes;
    uVar6 = destinationPitch - rowBytes;
    uVar8 = rowBytes;
    if (0xe < (int)rowBytes) {
      temp_3f510afb7e = rowBytes;
      if (((byte)DAT_00858de0 & 1) == 0) {
        do {
          for (; ((uint)destination & 3) != 0; destination = destination + 1) {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            temp_3f510afb7e = temp_3f510afb7e - 1;
          }
          for (uVar5 = temp_3f510afb7e >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)destination = *(undefined4 *)source;
            source = source + 4;
            destination = destination + 4;
          }
          uVar5 = temp_3f510afb7e & 3;
          if ((temp_3f510afb7e & 3) != 0) {
            do {
              bVar2 = *source;
              source = source + 1;
              *destination = bVar2;
              destination = destination + 1;
              uVar9 = uVar5 - 1;
              bVar3 = 0 < (int)uVar5;
              uVar5 = uVar9;
            } while (uVar9 != 0 && bVar3);
          }
          source = source + uVar10;
          destination = destination + uVar6;
          iVar7 = rowCount + -1;
          bVar3 = 0 < rowCount;
          temp_3f510afb7e = rowBytes;
          rowCount = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      uVar4 = rowBytes;
      if ((((699 < (int)rowBytes) && (5 < DAT_00858e24)) &&
          ((((uint)destination ^ (uint)source) & 7) == 0)) &&
         (temp_79f46df8256 = rowBytes, ((uVar6 ^ uVar10) & 7) == 0)) {
        do {
          for (; ((uint)destination & 7) != 0; destination = destination + 1) {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            temp_79f46df8256 = temp_79f46df8256 - 1;
          }
          for (uVar5 = temp_79f46df8256 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)destination = *(undefined4 *)source;
            source = source + 4;
            destination = destination + 4;
          }
          uVar5 = temp_79f46df8256 & 3;
          if ((temp_79f46df8256 & 3) != 0) {
            do {
              bVar2 = *source;
              source = source + 1;
              *destination = bVar2;
              destination = destination + 1;
              uVar9 = uVar5 - 1;
              bVar3 = 0 < (int)uVar5;
              uVar5 = uVar9;
            } while (uVar9 != 0 && bVar3);
          }
          source = source + uVar10;
          destination = destination + uVar6;
          iVar7 = rowCount + -1;
          bVar3 = 0 < rowCount;
          temp_79f46df8256 = rowBytes;
          rowCount = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      do {
        for (; ((uint)destination & 7) != 0; destination = destination + 1) {
          bVar2 = *source;
          source = source + 1;
          *destination = bVar2;
          uVar4 = uVar4 - 1;
        }
        uVar5 = uVar4 >> 3;
        do {
          uVar1 = *(undefined8 *)source;
          source = source + 8;
          *(undefined8 *)destination = uVar1;
          destination = destination + 8;
          uVar9 = uVar5 - 1;
          bVar3 = 0 < (int)uVar5;
          uVar5 = uVar9;
        } while (uVar9 != 0 && bVar3);
        uVar5 = uVar4 & 7;
        if ((uVar4 & 7) != 0) {
          do {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            destination = destination + 1;
            uVar9 = uVar5 - 1;
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar9;
          } while (uVar9 != 0 && bVar3);
        }
        source = source + uVar10;
        destination = destination + uVar6;
        iVar7 = rowCount + -1;
        bVar3 = 0 < rowCount;
        uVar4 = rowBytes;
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
        uVar5 = uVar8 - 1;
        bVar3 = 0 < (int)uVar8;
        uVar8 = uVar5;
      } while (uVar5 != 0 && bVar3);
      source = source + uVar10;
      destination = destination + uVar6;
      iVar7 = rowCount + -1;
      bVar3 = 0 < rowCount;
      uVar8 = rowBytes;
      rowCount = iVar7;
    } while (iVar7 != 0 && bVar3);
  }
  return;
}

