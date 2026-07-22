
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005FFF60 @ 0060000F
   -> TEST TEST EAX,EAX */

int __thiscall FUN_005fe5d0(void *this,int param_1,undefined2 *param_2,int param_3)

{
  short *psVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_c = 1;
  local_8 = 0;
  if (*(int *)((int)this + 0x233) == 0) {
    return 0;
  }
  psVar1 = (short *)(param_1 * 0x52 + *(int *)((int)this + 0x233));
  if (*(int *)(psVar1 + 0x27) != 0) {
    FreeAndNull((void **)(psVar1 + 0x27));
  }
  pvVar2 = (void *)Library::DKW::LIB::FUN_006aac70(600);
  *(void **)(psVar1 + 0x27) = pvVar2;
  psVar1[0x23] = 0;
  psVar1[0x24] = 0;
  psVar1[0x25] = 0;
  psVar1[0x26] = 0;
  local_20 = -1;
  local_24 = -1;
  local_28 = -1;
  do {
    if (local_8 == 0) {
      local_8 = 1;
      **(undefined2 **)(psVar1 + 0x27) = *param_2;
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 2) = param_2[1];
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 4) = param_2[2];
    }
    else {
      iVar3 = thunk_FUN_005fe280(psVar1,local_8,&local_10,&local_14,&local_18);
      if (iVar3 != 0) {
        if (local_18 <= *(short *)(param_3 + 4)) {
          local_c = 0;
        }
        sVar9 = (short)(local_10 >> 0x1f);
        if (local_10 < 0) {
          iVar3 = (short)(((short)(local_10 / 0xc9) + sVar9) -
                         (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)(((short)(local_10 / 0xc9) + sVar9) -
                              (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
        }
        sVar9 = (short)(local_14 >> 0x1f);
        if (local_14 < 0) {
          iVar8 = (short)(((short)(local_14 / 0xc9) + sVar9) -
                         (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(local_14 / 0xc9) + sVar9) -
                              (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
        }
        sVar9 = (short)(local_18 >> 0x1f);
        if (local_18 < 0) {
          iVar7 = (short)(((short)(local_18 / 200) + sVar9) -
                         (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(local_18 / 200) + sVar9) -
                              (short)((longlong)local_18 * 0x51eb851f >> 0x3f));
        }
        if ((((iVar3 < 0) || (g_worldGrid.sizeX <= iVar3)) || (iVar8 < 0)) ||
           (((g_worldGrid.sizeY <= iVar8 || (iVar7 < 0)) || (g_worldGrid.sizeZ <= iVar7)))) {
          local_8 = local_8 + -1;
          if (local_8 < 1) {
            thunk_FUN_005fd6a0(this);
            return 0;
          }
          goto cf_common_exit_005FE866;
        }
        if (((iVar3 != local_20) || (iVar8 != local_24)) || (iVar7 != local_28)) {
          sVar9 = (short)iVar3;
          sVar10 = (short)iVar8;
          sVar11 = (short)iVar7;
          iVar4 = thunk_FUN_004961b0(sVar9,sVar10,sVar11);
          local_28 = iVar7;
          local_24 = iVar8;
          local_20 = iVar3;
          if ((iVar4 == 0) &&
             ((((((-1 < sVar9 && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar10)) &&
                ((sVar10 < g_worldGrid.sizeY && (-1 < sVar11)))) &&
               ((sVar11 < g_worldGrid.sizeZ &&
                (g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar11 + (int)g_worldGrid.sizeX * (int)sVar10
                  + (int)sVar9].objects[0] != (STWorldObject *)0x0)))) ||
              (uVar5 = thunk_FUN_00496250(local_10,local_14,local_18), -1 < (int)uVar5)))) {
            local_c = 0;
          }
        }
        piVar6 = (int *)(psVar1 + 0x27);
        iVar3 = local_8 * 6;
        local_8 = local_8 + 1;
        *(undefined2 *)(*piVar6 + iVar3) = (undefined2)local_10;
        *(undefined2 *)(*piVar6 + 2 + iVar3) = (undefined2)local_14;
        *(undefined2 *)(*piVar6 + 4 + iVar3) = (undefined2)local_18;
        if (99 < local_8) {
          local_c = 0;
          goto cf_common_exit_005FE866;
        }
      }
    }
    if (local_c == 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
cf_common_exit_005FE866:
      *(uint *)(param_1 * 0x52 + 0x35 + *(int *)((int)this + 0x233)) =
           g_playSystem_00802A38->field_00E4;
      if (local_8 != 0) {
        *(int *)(psVar1 + 0x23) = local_8;
      }
      local_2c = (uint)(local_c == 0);
      return local_2c;
    }
  } while( true );
}

