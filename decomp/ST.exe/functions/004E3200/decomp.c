#include "../../pseudocode_runtime.h"


void __thiscall FUN_004e3200(void *this,int *param_1)

{
  uint index;
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  DArrayTy *pDVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  undefined1 *puVar7;
  uint *puVar8;
  int *piVar9;
  uint index_00;
  uint *puVar10;
  undefined4 *puVar11;
  undefined1 local_78 [8];
  char local_70;
  uint local_48 [2];
  char local_40;
  byte local_3f;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_36 [7];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar7 = nullptr;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (*param_1 == 0) {
    pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    *param_1 = (int)pDVar4;
  }
  if (param_1[1] == 0) {
    pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    param_1[1] = (int)pDVar4;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  iVar5 = STField<int>(this,0x5ac);
  if (iVar5 == 0x35) {
    do {
      if (puVar7[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
        iVar5 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar7);
        iVar5 = thunk_FUN_004e7f20(STField<int>(this,0x24),(int)puVar7,iVar5 + 1);
      }
      else {
        iVar5 = thunk_FUN_004e5910(STField<int>(this,0x24),(uint)puVar7);
      }
      if (iVar5 != 0) {
        uVar1 = thunk_FUN_004e6140(STField<int>(this,0x24),(int)puVar7);
        iVar5 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar7);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((iVar5 < CONCAT31(extraout_var_01,uVar1)) &&
           (((STField<int>(this,0x361) != 2 || (STField<undefined1 *>(this,0x369) != puVar7))
            && (iVar5 = thunk_FUN_004e5f90(STField<int>(this,0x24),(uint)puVar7), iVar5 == 0))))
        {
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar5 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar7);
          local_48[0] = (iVar5 + 1) * 0x10000 | (uint)puVar7 & 0xffff;
          if (puVar7[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
LAB_004e3526:
            local_40 = '\x01';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(STField<byte *>(this,0x24),(uint)puVar7);
            local_40 = '\0';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_02,bVar2) != 0) goto LAB_004e3526;
          }
          thunk_FUN_004c7260(this,CASE_2,(int)puVar7,&local_8,&local_c,&local_10,&local_14);
          local_3a = (undefined2)local_8;
          local_3e = (undefined2)local_c;
          bVar3 = LookupRecordByte(STField<char>(this,0x24));
          if (bVar3 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          local_3f = LookupRecordByte(STField<char>(this,0x24));
          puVar11 = local_36;
          iVar5 = thunk_FUN_004e60d0(STField<int>(this,0x24),(int)puVar7);
          thunk_FUN_004e68a0(STField<byte *>(this,0x24),puVar7,iVar5 + 1,puVar11);
          if (puVar7[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
            pDVar4 = (DArrayTy *)param_1[1];
          }
          else {
            pDVar4 = (DArrayTy *)*param_1;
          }
          Library::DKW::TBL::DArrayAppend(pDVar4,local_48);
        }
      }
      puVar7 = puVar7 + 1;
    } while ((int)puVar7 < 0x9b);
  }
  else if (((0x53 < iVar5) && (iVar5 < 0x5b)) &&
          (local_18 = 0, (&DAT_0079a3fc)[(iVar5 * 3 + -0xfc) * 5] != 0)) {
    puVar8 = &DAT_0079a3fc + (iVar5 * 3 + -0xfc) * 5;
    do {
      if (0xe < local_18) break;
      iVar5 = thunk_FUN_004e5910(STField<int>(this,0x24),*puVar8);
      if (iVar5 != 0) {
        uVar1 = thunk_FUN_004e6140(STField<int>(this,0x24),*puVar8);
        iVar5 = thunk_FUN_004e60d0(STField<int>(this,0x24),*puVar8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (((iVar5 < CONCAT31(extraout_var,uVar1)) &&
            ((STField<int>(this,0x361) != 2 || (STField<uint>(this,0x369) != *puVar8)))) &&
           (iVar5 = thunk_FUN_004e5f90(STField<int>(this,0x24),*puVar8), iVar5 == 0)) {
          iVar5 = STField<int>(this,0x24);
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar5 = thunk_FUN_004e60d0(iVar5,*puVar8);
          local_48[0] = (iVar5 + 1) * 0x10000 | (uint)(ushort)*puVar8;
          if (STField<int>(this,0x4d4) == 0) {
LAB_004e336e:
            local_40 = '\0';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(STField<byte *>(this,0x24),*puVar8);
            local_40 = '\x01';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_004e336e;
          }
          thunk_FUN_004c7260(this,CASE_2,*puVar8,&local_8,&local_c,&local_10,&local_14);
          local_3e = (undefined2)local_c;
          local_3a = (undefined2)local_8;
          bVar3 = LookupRecordByte(STField<char>(this,0x24));
          if (bVar3 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          local_3f = LookupRecordByte(STField<char>(this,0x24));
          puVar11 = local_36;
          iVar5 = thunk_FUN_004e60d0(STField<int>(this,0x24),*puVar8);
          thunk_FUN_004e68a0(STField<byte *>(this,0x24),(undefined1 *)*puVar8,iVar5 + 1,puVar11);
          Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_1,local_48);
        }
      }
      puVar10 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      local_18 = local_18 + 1;
    } while (*puVar10 != 0);
  }
  local_18 = 2;
  piVar9 = param_1;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = *(int **)(*piVar9 + 0xc);
    while (param_1 != nullptr) {
      pDVar4 = (DArrayTy *)*piVar9;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
      index_00 = 0;
      if ((int)(pDVar4->count - 2) < 0) break;
      do {
        DArrayGetElement(pDVar4,index_00,local_48);
        index = index_00 + 1;
        DArrayGetElement((DArrayTy *)*piVar9,index,local_78);
        if ((local_40 == '\0') && (local_70 != '\0')) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)*piVar9,index_00,index);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)0x1;
        }
        pDVar4 = (DArrayTy *)*piVar9;
        index_00 = index;
      } while ((int)index <= (int)(pDVar4->count - 2));
    }
    piVar9 = piVar9 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      return;
    }
  } while( true );
}

